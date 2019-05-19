import sys
if len(sys.argv)>1:
  file=sys.argv[1]
data=open(file,'r').read().split('\n')

tensors=[]
operations=[]
for i in range(len(data)):
  # get tensor names and domains
  if 'FTensorDecl TensorDecls' in data[i]:
    nbr=int(data[i].split('[')[1].split(']')[0])
    for j in range(i+1,i+nbr+1):
       name=data[j].split('"')[1].replace('AO','W').replace('AC','W').replace('AE','W')
       domain=data[j].split('"')[3]
       tensors.append(name+domain)

  # get contractions
  if 'FEqInfo EqsRes' in data[i]:
    nbr=int(data[i].split('[')[1].split(']')[0])
    for j in range(i+1,i+nbr+1):
      fac=float(data[j].split('"')[2].split(',')[1])
      indices=data[j].split('"')[1]
      tens=data[j].split('{')[2].split('}')[0].split(',')
      operations.append([fac,indices,[int(el) for el in tens]])

# print out python code
print 'energy=0'
for elt in operations:
  line='energy+={:5}*np.einsum({:30}'.format(elt[0],'"'+elt[1]+'"')
  for t in elt[2]:
    line+=', {:11}'.format(tensors[t])
  print line+')'
print 'print "energy: ",energy'


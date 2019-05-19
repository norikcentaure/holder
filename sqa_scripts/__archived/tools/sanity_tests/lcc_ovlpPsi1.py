import secondQuantizationAlgebra as sqa
from tools_for_sqa import *
from tools_for_pt import *
sqa.options.verbose = False

import sys
if len(sys.argv)>1:
  list_of_pt2_for_pt3=[int(i)-1 for i in sys.argv[1:]]
  class_en_plus=['other','h0']
else:
  list_of_pt2_for_pt3=[i for i in range(9)]
  class_en_plus=['other']
print list_of_pt2_for_pt3
print class_en_plus







# PS1 ---------------------------------------------------------------------------------------------
#  |Psi1> =         d_mu E  _mu |Psi_0>
#  <Psi1| = <Psi_0| d_mu E^T_mu
#  where:
#   - The indexes of the basis are dictated by the class itself!
#  -->See that they match with the rest of the sqa files!
#   - The indexes of the tensor for each class are to match the unique tensors outputed by icpt!
#     This is taken care of by the "unique_tensor" by construction
#  -->See that they match with the icpt routine!
#   - Those tensors are labelled by "names" that are the class names
#     and not the correspondinng string of index types!
ClassNames=['vvcc','vvca','ccav','vvaa',\
       'ccaa','vaca','avca','vaaa','caaa']
basis=[[gimme('vc'),gimme('vc')],\
       [gimme('vc'),gimme('va')],\
       [gimme('ac'),gimme('vc')],\
       [gimme('va'),gimme('va')],\
       [gimme('ac'),gimme('ac')],\
       [gimme('vc'),gimme('aa')],\
       [gimme('ac'),gimme('va')],\
       [gimme('va'),gimme('aa')],\
       [gimme('ac'),gimme('aa')]]
Psi1Right=[]
Psi1Left =[]
for i in range(9):
  basis1=sqa.sfExOp(basis[i][0])
  basis2=sqa.sfExOp(basis[i][1])
  tensor=sqa.tensor('D'+ClassNames[i], unique_tensor(from_basis(basis1,basis2)), [])
  Psi1Right.append(sqa.term(1.0,[''],[tensor,basis1,basis2]))

  basis1=sqa.sfExOp([basis[i][1][t] for t in [1,0]])
  basis2=sqa.sfExOp([basis[i][0][t] for t in [1,0]])
  tensor=sqa.tensor('D'+ClassNames[i], unique_tensor(from_basis(basis1,basis2)), [])
  Psi1Left.append( sqa.term(1.0,[''],[tensor,basis1,basis2]))

# PRINT OUT STUFF
print '//'
print '// With the unique tensors found, |Psi1> is:'
for el in Psi1Right:
  print '// d_{:5} E_{:2} E_{:2}        Class:{:6} OccPattern:{:9}'.format(\
                        code([i.indices for i in el.tensors if not isinstance(i,sqa.sfExOp)][0]),\
                        code([i.indices for i in el.tensors if     isinstance(i,sqa.sfExOp)][0]),\
                        code([i.indices for i in el.tensors if     isinstance(i,sqa.sfExOp)][1]),\
                        [i.name for i in el.tensors if not isinstance(i,sqa.sfExOp)][0][1:],\
                        '%3i%3i%3i'%(tuple(pattern([el]))))
print '//'
print '// With the unique tensors found, <Psi1| is:'
for el in Psi1Left:
  print '// d_{:5} E_{:2} E_{:2}        Class:{:6} OccPattern:{:9}'.format(\
                        code([i.indices for i in el.tensors if not isinstance(i,sqa.sfExOp)][0]),\
                        code([i.indices for i in el.tensors if     isinstance(i,sqa.sfExOp)][0]),\
                        code([i.indices for i in el.tensors if     isinstance(i,sqa.sfExOp)][1]),\
                        [i.name for i in el.tensors if not isinstance(i,sqa.sfExOp)][0][1:],\
                        '%3i%3i%3i'%(tuple(pattern([el]))))
print '//'




# H -----------------------------------------------------------------------------------------------
#   H = t E2 + w E4
#   where:
#    - The indexes of "E" run through all possible unique 4-tuples
#      but are checked for redundancies.
#      This is done by sorting the first two indexes.
#    - The indexes of "w" are permutated to refer to unique tensors.
#      This is done by using the "unique_tensor" function
print '// To make up E4(AB<-CD), there is 3*3*3*3=81 possible 4-tuples'
print '// some of them are redundant are skipped.'
H=[]
exop_to_be_class=['vvcc','vvac','vvca','avcc','vacc',\
                  'vvaa','aacc','avac','vaca','avca',\
                  'vaac','avaa','vaaa','aaac','aaca']
indlist=[gimme('cav'),gimme('cav'),gimme('cav'),gimme('cav')]
factor={}
for ind0 in range(3):
  for ind1 in range(3):
    for ind2 in range(3):
      for ind3 in range(3):
        factor[code([indlist[0][ind0],indlist[1][ind1],indlist[2][ind2],indlist[3][ind3]])]=0
    factor[code([indlist[0][ind0],indlist[1][ind1]])]=1
iter=0
for ind0 in range(3):
  for ind1 in range(3):
    for ind2 in range(3):
      for ind3 in range(3):
        list=[indlist[0][ind0],indlist[1][ind1],indlist[2][ind2],indlist[3][ind3]]

        iter=iter+1
        name=code(list)
        skip=False
        if ((name[0]==name[1] and name[-2:]!=''.join(sorted(name[-2:])))
         or (''.join(sorted(name[:2]))!=name[:2])):
            skip=True
        if not skip:
          factor[name]=factor[name]+1
          line='{:2} "{:4}" {:} {:4}'.format(iter,code(list),'included as ',name)
        else:
          factor[name[1]+name[0]+name[3]+name[2]]=factor[name[1]+name[0]+name[3]+name[2]]+1
          line='{:2} "{:4}" {:} {:4}'.format(iter,code(list),'skipped (see',name[1]+name[0]+name[3]+name[2]+')')
        print '//',line
        if skip:
          continue

        exop  =sqa.sfExOp(list)
        if pattern([sqa.term(10000,[''],[exop])])==pattern_of['h0']\
        or pattern([sqa.term(10000,[''],[exop])]) not in pattern_of.values():
          base='AO'
        elif code(list) in exop_to_be_class:
          base='AC'
        else:
          base='AE'
        tensor=sqa.tensor(base+code(unique_tensor(list)), unique_tensor(list), [])
        H.append(sqa.term(0.5,[''],[tensor,exop]))

    list=[indlist[0][ind0],indlist[1][ind1]]
    exop  =sqa.sfExOp(list)
    if pattern([sqa.term(10000,[''],[exop])])==pattern_of['h0']\
    or pattern([sqa.term(10000,[''],[exop])]) not in pattern_of.values():
      base='AO'
    else:
      base='AE'
    tensor=sqa.tensor(base+code(unique_tensor(list)), unique_tensor(list), [])
    H.append(sqa.term(1.0,[''],[tensor,exop]))
for i in range(len(H)):
  el=H[i]
  string=code([t.indices for t in el.tensors if isinstance(t,sqa.sfExOp)])
  H[i]=sqa.term(el.numConstant*factor[string],\
                el.constants,\
                el.tensors)
print '// Sum of factors:',sum(factor.values())
print '//\n//'

# PRINT OUT STUFF
print '//'
print '// With the unique tensors found, the Hamiltonian is:'
ClassNames=['vvcc','vvca','ccav','vvaa','ccaa','vaca','vaaa','caaa']
for cl in ClassNames+['h0']:
  for el in H:
    if pattern([el])==pattern_of[cl]:
      print '// w_{:5} E_{:7} ({:1})    Class:{:6} OccPattern:{:9}'.format(\
                        code([i.indices for i in el.tensors if not isinstance(i,sqa.sfExOp)][0]),\
                        code([i.indices for i in el.tensors if     isinstance(i,sqa.sfExOp)][0]),\
                        factor[code([i.indices for i in el.tensors if isinstance(i,sqa.sfExOp)][0])],\
                        cl,\
                        '%3i%3i%3i'%(tuple(pattern([el]))))
for el in H:
  if pattern([el]) not in pattern_of.values():
      print '// w_{:5} E_{:7} ({:1})    Class:{:6} OccPattern:{:9}'.format(\
                        code([i.indices for i in el.tensors if not isinstance(i,sqa.sfExOp)][0]),\
                        code([i.indices for i in el.tensors if     isinstance(i,sqa.sfExOp)][0]),\
                        factor[code([i.indices for i in el.tensors if isinstance(i,sqa.sfExOp)][0])],\
                        'other',\
                        '%3i%3i%3i'%(tuple(pattern([el]))))




# CALCULATIONS ------------------------------------------------------------------------------------
print '//'
print '// The actual calculation yields:'
global_result=[]
log_H={}

if (True):

    # Loop over Emu and Enu terms of 'd_nu w_tau d_mu <E^T_nu E_tau E_mu>'
    for leftTerm in Psi1Left:
      for rightTerm in Psi1Right:

        if is_non_zero([leftTerm,rightTerm]):

          # Define the normal-ordered:   A_tau = D^nu D^mu <E^T_nu E_tau E_mu>
          term=sqa.multiplyTerms(leftTerm, rightTerm)
          result=sqa.normalOrder(term)
          result=simplify_all(result,[deltaC, deltaA, deltaV])

          # Write out a message about this contribution
          #if (len(result)!=0):
          global_result+=result

          print '// <E_{:3}E_{:3} | E_{:3}E_{:3}> ={:5}'.format(\
                      code([i.indices for i in leftTerm.tensors  if isinstance(i,sqa.sfExOp)][0]),\
                      code([i.indices for i in leftTerm.tensors  if isinstance(i,sqa.sfExOp)][1]),\
                      code([i.indices for i in rightTerm.tensors if isinstance(i,sqa.sfExOp)][0]),\
                      code([i.indices for i in rightTerm.tensors if isinstance(i,sqa.sfExOp)][1]),\
                      len(result))




# OUTPUT ------------------------------------------------------------------------------------------
# Write out the tensors and the equations
#global_result=simplify_all(global_result,[deltaC, deltaA, deltaV])
ACEOtensor=[]
Wktensor=[]
for t in global_result:
  for i in t.tensors:
    if i.name[0]=='A':
      if i.name not in [this[0] for this in ACEOtensor]:
        ACEOtensor.append([i.name,         i.name[:2], i.name[2:].replace('v','e'), 'A'])
        if len(i.name)==6 and 'W'+i.name[2:] not in [this[0] for this in Wktensor]:
          Wktensor.append(['W'+i.name[2:], 'W',        i.name[2:].replace('v','e'), 'A'])
        elif len(i.name)==4 and 'k'+i.name[2:] not in [this[0] for this in Wktensor]:
          Wktensor.append(['k'+i.name[2:], 'k',        i.name[2:].replace('v','e'), 'A'])
sort_indACEO=sorted(xrange(len(ACEOtensor)), key=lambda ix: ACEOtensor[ix][0])
sort_indWk  =sorted(xrange(len(Wktensor)), key=lambda ix: Wktensor[ix][0])
tensors=[ACEOtensor[i] for i in sort_indACEO]+[Wktensor[i] for i in sort_indWk]+tensors

if len(global_result)!=0:
  AllTensors,nbrTensors,nbrEqs = write_tensors_and_equations('MRLCC3',global_result,tensors)
  # Write out GetMethodInfo
  print '  static void GetMethodInfo(FMethodInfo &Out) {'
  print '    Out = FMethodInfo();'
  print '    Out.pName = "MRLCC3";'
  print '    Out.pSpinClass = "restricted";'
  print '    Out.pTensorDecls = &TensorDecls[0];'
  print '    Out.nTensorDecls = %i;'%(nbrTensors)
  print '    Out.EqsRes = FEqSet(&EqsRes[0], %i, "MRLCC3/Res");'%(len(global_result))
  print '  };'
  print '};'

# LOG ---------------------------------------------------------------------------------------------
print ''
print '// Log:'
for tau in range(len(H)):
  if tau in log_H.keys():
    print '// {:4} {:5}    {:}'.format(\
            tau,\
            code([i.indices for i in H[tau].tensors if isinstance(i,sqa.sfExOp)]),\
            log_H[tau])
  else:
    print '// {:4} {:5}    {:}'.format(\
            tau,\
            code([i.indices for i in H[tau].tensors if isinstance(i,sqa.sfExOp)]),\
            'passed')





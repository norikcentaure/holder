import secondQuantizationAlgebra as sqa
from tools_for_sqa import *
from tools_for_pt import *
sqa.options.verbose = False
print_log=False


# Information about H0
exop_h0   =['cc','aa','vv',\
            'cccc','aaaa','vvvv',\
            'acac','acca','caca','caac',\
            'cvcv','cvvc','vcvc','vccv',\
            'avav','avva','vava','vaav']
# Information about Classes
exop_class=['vvcc','vvac','vvca','avcc','vacc','vvaa',\
            'aacc','avac','vaca','avca','vaac',\
            'avaa','vaaa','aaac','aaca']
class_list =['vvcc','vvca','ccav','vvaa',\
             'ccaa','vaca',       'vaaa','caaa']
class_names=['vvcc','vvca','ccav','vvaa',\
             'ccaa','vaca','avca','vaaa','caaa']
pattern_of={}
pattern_of['vvcc'] =[-2, 0, 2]
pattern_of['vvca'] =[-1,-1, 2]
pattern_of['ccav'] =[-2, 1, 1]
pattern_of['vvaa'] =[ 0,-2, 2]
pattern_of['ccaa'] =[-2, 2, 0]
pattern_of['vaca'] =[-1, 0, 1]
pattern_of['avca'] =[-1, 0, 1]
pattern_of['vaaa'] =[ 0,-1, 1]
pattern_of['caaa'] =[-1, 1, 0]


# /===============================\
# | CONSTRUCT |Psi_1> and <Psi_1| |
# \===============================/
#
#  |Psi1> =         d_mu E  _mu |Psi_0>
#  <Psi1| = <Psi_0| d_mu E^T_mu
#  where:
#   - The indices of the basis are dictated by the class itself!
#  -->See that they match with the rest of the sqa files!
#   - The indices of the tensor for each class are to match the unique tensors outputed by icpt!
#     This is taken care of by the "unique_tensor" by construction
#  -->See that they match with the icpt routine!
#   - Those tensors are labelled by "names" that are the class names
#     and not the correspondinng string of index types!
#

# Basis E_1 E_2
basis=[[gimme('vc'),gimme('vc')],  # vvcc
       [gimme('vc'),gimme('va')],  # vvca
       [gimme('ac'),gimme('vc')],  # ccav
       [gimme('va'),gimme('va')],  # vvaa
       [gimme('ac'),gimme('ac')],  # ccaa
       [gimme('vc'),gimme('aa')],  # vaca
       [gimme('ac'),gimme('va')],  # avca
       [gimme('va'),gimme('aa')],  # vaaa
       [gimme('ac'),gimme('aa')]]  # caaa

# Construct |Psi_1> and <Psi_1|
psi1_right=[]
psi1_left =[]
for i in range(9):
  basis1=sqa.sfExOp(basis[i][0])
  basis2=sqa.sfExOp(basis[i][1])
  unique=unique_tensor(reorga_two_to_one(basis1,basis2))
  tensor=sqa.tensor('D'+class_names[i], unique, [])#symm(unique)) #NO!
  psi1_right.append(sqa.term(1.0,[''],[tensor,basis1,basis2]))

  basis1=sqa.sfExOp([basis[i][1][t] for t in [1,0]])
  basis2=sqa.sfExOp([basis[i][0][t] for t in [1,0]])
  unique=unique_tensor(reorga_two_to_one(basis1,basis2))
  tensor=sqa.tensor('D'+class_names[i], unique, [])#symm(unique)) #NO!
  psi1_left.append( sqa.term(1.0,[''],[tensor,basis1,basis2]))

# (LOG if want to debug)
if print_log:
  print '//'
  print '// With the unique tensors found, |Psi1> is:'
  for right_term in psi1_right:
    print '// d_{:5} E_{:2} E_{:2}        Class:{:6} OccPattern:{:9}'.format(\
                          code(indices_of_Tensor(right_term)[0]),\
                          code(indices_of_ExOp(right_term)[0]),\
                          code(indices_of_ExOp(right_term)[1]),\
                          [i.name for i in right_term.tensors if not isinstance(i,sqa.sfExOp)][0][1:],\
                          '%3i%3i%3i'%(tuple(pattern(right_term))))
  print '//'
  print '// With the unique tensors found, <Psi1| is:'
  for left_term in psi1_left:
    print '// d_{:5} E_{:2} E_{:2}        Class:{:6} OccPattern:{:9}'.format(\
                          code(indices_of_Tensor(left_term)[0]),\
                          code(indices_of_ExOp(left_term)[0]),\
                          code(indices_of_ExOp(left_term)[1]),\
                          [i.name for i in left_term.tensors if not isinstance(i,sqa.sfExOp)][0][1:],\
                          '%3i%3i%3i'%(tuple(pattern(left_term))))
  print '//'


# /===============================\
# | CONSTRUCT H = t E2 + w E4     |
# \===============================/
#
#   where:
#    - The indices of "E" run through all possible unique 4-tuples
#      but are checked for redundancies.
#      This is done by sorting the first two indices, in the "update_factor" function
#    - The indices of "w" are permutated to refer to unique tensors.
#      This is done by using the "unique_tensor" function
#
if print_log:
  print '// To make up E4(AB<-CD), there is 3*3*3*3=81 possible 4-tuples'
  print '// some of them are redundant are skipped.'

indlist=[gimme('cav'),gimme('cav'),gimme('cav'),gimme('cav')]
factor={}
H=[]
# Construct two-electron h_term, with appropriate tensor name
for ind0 in range(3):
  for ind1 in range(3):
    for ind2 in range(3):
      for ind3 in range(3):
        list=[indlist[0][ind0],indlist[1][ind1],indlist[2][ind2],indlist[3][ind3]]
        skip=update_factor(factor,list,print_log=print_log)
        if skip: continue
        exop=sqa.sfExOp(list)
        if code(list) in exop_h0:
          base='A0'
        elif pattern(exop) not in pattern_of.values():
          base='AO'
        elif code(list) in exop_class:
          base='AC'
        else:
          base='AE'
        list=unique_tensor(list)
        L=gimme('L')
        list1=L+[list[0],list[2]]
        list2=L+[list[1],list[3]]
        tensor1=sqa.tensor(base+code(list1), list1, [])
        tensor2=sqa.tensor( 'W'+code(list2), list2, [])
        H.append(sqa.term(0.5,[''],[tensor1,tensor2,exop]))

## Construct one-electron h_term, with appropriate tensor name
#for ind0 in range(3):
#  for ind1 in range(3):
    list=[indlist[0][ind0],indlist[1][ind1]]
    skip=update_factor(factor,list,print_log=print_log)
    if skip: continue
    exop=sqa.sfExOp(list)
    if code(list) in exop_h0:
      base='A0'
    elif pattern(exop) not in pattern_of.values():
      base='AO'
    elif code(list) in exop_class:
      base='AC'
    else:
      base='AE'
    tensor=sqa.tensor(base+code(unique_tensor(list)), unique_tensor(list), symm(unique_tensor(list)))
    H.append(sqa.term(1.0,[''],[tensor,exop]))

# Update the factors of the h_term
# to reflect skipped equivalent excitation operators
for i in range(len(H)):
  h_term=H[i]
  string=code(indices_of_ExOp(h_term))
  H[i]=sqa.term(h_term.numConstant*factor[string],\
                h_term.constants,\
                h_term.tensors)
if print_log:
  print '// Sum of factors:',sum(factor.values())
  print '//\n//'

# (LOG if want to debug)
if print_log:
  print '//'
  print '// With the unique tensors found, the Hamiltonian is:'
  for cl in class_list:
    for h_term in H:
      if pattern(h_term)==pattern_of[cl]:
        print '// w_{:5} E_{:7} ({:1})    Class:{:6} OccPattern:{:9}'.format(\
                          code(indices_of_Tensor(h_term)[0]),\
                          code(indices_of_ExOp(h_term)[0]),\
                          factor[code(indices_of_ExOp(h_term)[0])],\
                          cl,\
                          '%3i%3i%3i'%(tuple(pattern(h_term))))
  for h_term in H:
    if code(indices_of_ExOp(h_term)) in exop_h0:
        print '// w_{:5} E_{:7} ({:1})    Class:{:6} OccPattern:{:9}'.format(\
                          code(indices_of_Tensor(h_term)[0]),\
                          code(indices_of_ExOp(h_term)[0]),\
                          factor[code(indices_of_ExOp(h_term)[0])],\
                          'h0',\
                          '%3i%3i%3i'%(tuple(pattern(h_term))))
  for h_term in H:
    if code(indices_of_ExOp(h_term)) not in exop_h0\
    and pattern(h_term) not in pattern_of.values():
        print '// w_{:5} E_{:7} ({:1})    Class:{:6} OccPattern:{:9}'.format(\
                          code(indices_of_Tensor(h_term)[0]),\
                          code(indices_of_ExOp(h_term)[0]),\
                          factor[code(indices_of_ExOp(h_term)[0])],\
                          'other',\
                          '%3i%3i%3i'%(tuple(pattern(h_term))))


# /===============================\
# | NORMAL-ORDER A_tau            |
# \===============================/
#
#   where A_tau = d_nu d_mu <E^T_nu E_tau E_mu>  (1)
#   is to be contracted with w_tau
#
if print_log:
  print '//'
  print '// The actual calculation yields:'
result=[]
log_H={}

# Loop over Classes (of H)
for this_class in class_list+['other']:
  if print_log: print '// for V of class '+this_class
  result_for_class=[]

  # Loop over H terms of Eq.(1)
  for h_term in H:
    # This is to include all terms like "heff" etc...
    # when doing a particular class,
    # so long as the pattern matches...
    if this_class!='other':
      if pattern(h_term)!=pattern_of[this_class]:
        continue
    # ... except if the class is 'other',
    # in this case the pattern is diverse,
    # and we exclude known patterns and H0
    elif pattern(h_term) in pattern_of.values()\
    or code(indices_of_ExOp(h_term)) in exop_h0:
      continue

    # Loop over Emu and Enu terms of Eq.(1)
    for left_term in psi1_left:
      for right_term in psi1_right:

        # Continue only is total pattern is neutral
        if is_non_zero([left_term,h_term,right_term]):
          log_H[H.index(h_term)]='evaluated'

          # Define the normal-ordered A_tau of Eq.(1)
          Atau=sqa.multiplyTerms(sqa.multiplyTerms(left_term, h_term),  right_term)
          result_for_class=sqa.normalOrder(Atau)
          result_for_class=simplify_all(result_for_class,[deltaC, deltaA, deltaV],cumulantE4=True)
          result+=result_for_class

          # Write out a message about this contribution
          #if (len(result_for_class)!=0):
          if print_log:
            print '// <E_{:3}E_{:3} | E_{:5} | E_{:3}E_{:3}> ={:5}    Class:{:6}'.format(\
                      code(indices_of_ExOp(left_term )[0]),\
                      code(indices_of_ExOp(left_term )[1]),\
                      code(indices_of_ExOp(h_term    )),\
                      code(indices_of_ExOp(right_term)[0]),\
                      code(indices_of_ExOp(right_term)[1]),\
                      len(result_for_class),\
                      this_class)


# /===============================\
# | OUTPUT IN "inl" FORMAT        |
# \===============================/
#
# Write out the tensors and the equations
#result=simplify_all(result,[deltaC, deltaA, deltaV],cumulantE4=True)
# Write out in INL format
Class = '3'
tensors    = pt3_tensors(result,'MRLCC')
nbrTensors = write_tensors('MRLCC'+Class+'_DF', tensors)
nbrEqs     = write_code   ('MRLCC'+Class, tensors, result)
print_GetMethodInfo('MRLCC',Class,nbrTensors,nbrEqs,0)

# (LOG if want to debug)
print ''
print '// Log:'
for tau in range(len(H)):
  if tau in log_H.keys():
    print '// {:4} {:5}    {:}'.format(\
            tau,\
            code(indices_of_ExOp(H[tau])),\
            log_H[tau])
  else:
    print '// {:4} {:5}    {:}'.format(\
            tau,\
            code(indices_of_ExOp(H[tau])),\
            'passed')


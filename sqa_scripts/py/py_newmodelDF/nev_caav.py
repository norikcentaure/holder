import secondQuantizationAlgebra as sqa
from tools_for_sqa import *
from tools_for_pt  import *
sqa.options.verbose = False

# Make H0
H=h0('NEVPT',df=True)

# Define Omu
list1=gimme('caav')
list2=[list1[i] for i in [3,0]]
list3=[list1[i] for i in [1,2]]
pvec1  = sqa.tensor('p1', list1, symm(list1))
OmuA   = sqa.term(1.0, [''],  [pvec1,  sqa.sfExOp(list2), sqa.sfExOp(list3)])
list2=[list1[i] for i in [1,0]]
list3=[list1[i] for i in [3,2]]
pvec2  = sqa.tensor('p2', list1, symm(list1))
OmuB   = sqa.term(1.0, [''],  [pvec2,  sqa.sfExOp(list2), sqa.sfExOp(list3)])

# Define Onu
list1=gimme('caav')
list2=[list1[i] for i in [2,1]]
list3=[list1[i] for i in [0,3]]
Apvec1 = sqa.tensor('Ap1', list1, symm(list1))
OnuA   = sqa.term(1.0, [''],  [Apvec1, sqa.sfExOp(list2), sqa.sfExOp(list3)])
list2=[list1[i] for i in [2,3]]
list3=[list1[i] for i in [0,1]]
Apvec2 = sqa.tensor('Ap2', list1, symm(list1))
OnuB   = sqa.term(1.0, [''],  [Apvec2, sqa.sfExOp(list2), sqa.sfExOp(list3)])

# Define the normal-ordered A matrix:
# Apvec_nu = < O^T_nu [H,O_mu] >.pvec_mu
commutator1 = []
for Hterm in H:
  commutator1 +=  sqa.commutator(Hterm,  OmuA)
commutator2 = []
for Hterm in H:
  commutator2 +=  sqa.commutator(Hterm,  OmuB)
result = []
for t in commutator1:
    result += sqa.normalOrder(sqa.multiplyTerms(OnuA, t))
    result += sqa.normalOrder(sqa.multiplyTerms(OnuB, t))
for t in commutator2:
    result += sqa.normalOrder(sqa.multiplyTerms(OnuA, t))
    result += sqa.normalOrder(sqa.multiplyTerms(OnuB, t))
result = simplify_all(result,[deltaC, deltaA, deltaV])

# Write out in INL format
Class = 'CAAV'
tensors    = common_tensors(result,'cAae',pttype='NEVPT',df=True)
tensors    = order_tensors(tensors)
nbrTensors = write_tensors        ('NEVPT_'+Class+'_DF', tensors)
nbrEqs     = write_code           ('NEVPT_'+Class, tensors, result)
nbr_bVec   = bVec(Class,tensors,df=True)
print_GetMethodInfo('NEVPT_',Class,nbrTensors,nbrEqs,nbr_bVec)


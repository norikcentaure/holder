import secondQuantizationAlgebra as sqa
from tools_for_sqa import *
from tools_for_pt  import *
sqa.options.verbose = False

# Make H0
H=h0('NEVPT',df=True)

# Define Omu
list1=gimme('vvca')
list2=[list1[i] for i in [0,2]]
list3=[list1[i] for i in [1,3]]
pvec  = sqa.tensor('p', list1, symm(list1))
Omu   = sqa.term(1.0, [''],  [pvec,  sqa.sfExOp(list2), sqa.sfExOp(list3)])

# Define Onu
list1=gimme('vvca')
list2=[list1[i] for i in [3,1]]
list3=[list1[i] for i in [2,0]]
Apvec = sqa.tensor('Ap', list1, symm(list1))
Onu   = sqa.term(1.0, [''],  [Apvec, sqa.sfExOp(list2), sqa.sfExOp(list3)])

# Define the normal-ordered A matrix:
# Apvec_nu = < O^T_nu [H,O_mu] >.pvec_mu
commutator = []
for Hterm in H:
  commutator +=  sqa.commutator(Hterm,  Omu)
result = []
for t in commutator:
  result += sqa.normalOrder(sqa.multiplyTerms(Onu, t))
result = simplify_all(result,[deltaC, deltaA, deltaV],cumulantE4=True)

# Write out in INL format
Class = 'ACVV'
tensors    = common_tensors(result,'eeca',pttype='NEVPT',df=True)
tensors    = order_tensors(tensors)
nbrTensors = write_tensors        ('NEVPT_'+Class+'_DF', tensors)
nbrEqs     = write_code           ('NEVPT_'+Class, tensors, result)
nbr_bVec   = bVec(Class,tensors,df=True)
print_GetMethodInfo('NEVPT_',Class,nbrTensors,nbrEqs,nbr_bVec)


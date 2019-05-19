import secondQuantizationAlgebra as sqa
from tools_for_sqa import *
from tools_for_pt import *
import geraldCode
import mussardCode

import argparse
parser = argparse.ArgumentParser()
parser.add_argument('-3','--commentE3' ,action='store_true',dest='commentE3' ,help='commentE3')
parser.add_argument('-4','--cumulantE4',action='store_true',dest='cumulantE4',help='cumulantE4')
args       = parser.parse_args()
cumulantE4 = args.cumulantE4
commentE3  = args.commentE3
if cumulantE4 and commentE3:
  print "Cannot have both 'cumulantE4' and 'commentE3'!"
  exit()

sqa.options.verbose = False

# Define needed indexes as being core,active,virtual
tag_core    = sqa.options.core_type
tag_active  = sqa.options.active_type
tag_virtual = sqa.options.virtual_type

i  = sqa.index('Ci',  [tag_core],    True)
j  = sqa.index('Cj',  [tag_core],    True)
k  = sqa.index('Ck',  [tag_core],    True)
l  = sqa.index('Cl',  [tag_core],    True)
a  = sqa.index('Va',  [tag_virtual], True)
b  = sqa.index('Vb',  [tag_virtual], True)
c  = sqa.index('Vc',  [tag_virtual], True)
d  = sqa.index('Vd',  [tag_virtual], True)

x1 = sqa.index('Au',  [tag_active],  True)
x2 = sqa.index('Av',  [tag_active],  True)
x3 = sqa.index('Aw',  [tag_active],  True)
x4 = sqa.index('Ax',  [tag_active],  True)
i1 = sqa.index('Cm',  [tag_core],    True)
i2 = sqa.index('Cn',  [tag_core],    True)
i3 = sqa.index('Co',  [tag_core],    True)
i4 = sqa.index('Cp',  [tag_core],    True)
a1 = sqa.index('Vg',  [tag_virtual], True)
a2 = sqa.index('Vh',  [tag_virtual], True)
a3 = sqa.index('Ve',  [tag_virtual], True)
a4 = sqa.index('Vf',  [tag_virtual], True)


# Define symmetry classes
hsym   = sqa.symmetry((1,0), 1)
Dsym_a = sqa.symmetry((2,1, 0,3), 1)
Dsym_b = sqa.symmetry((0,3, 2,1), 1)
Dsym_c = sqa.symmetry((1,0, 3,2), 1)

# Define tensors
K_C    = sqa.tensor('Wcc'  , [i1,i2], [hsym])
K_A    = sqa.tensor('Waa'  , [x1,x2], [hsym])
K_V    = sqa.tensor('Wvv'  , [a1,a2], [hsym])
V_A    = sqa.tensor('Waaaa', [x1,x2, x3,x4], [Dsym_a, Dsym_b, Dsym_c])
deltaC = sqa.tensor('deltac', [i1,i2], [hsym])
deltaA = sqa.tensor('deltaa', [x1,x2], [hsym])
deltaV = sqa.tensor('deltav', [a1,a2], [hsym])

# Define Hamilonian terms
T_C    = sqa.term( 1.0, [''], [K_C,   sqa.sfExOp([i1,i2])] )
T_A    = sqa.term( 1.0, [''], [K_A,   sqa.sfExOp([x1,x2])] )
T_V    = sqa.term( 1.0, [''], [K_V,   sqa.sfExOp([a1,a2])] )
HD_A   = sqa.term( 0.5, [''], [V_A,   sqa.sfExOp([x1,x2,x3,x4])] )

# Define the normal-ordered A matrix:
# Apvec_nu = < O^T_nu [H,O_mu] >.pvec_mu
pvec  = sqa.tensor('p',  [a,b,i,j], [Dsym_c])
Apvec = sqa.tensor('Ap', [c,d,k,l], [Dsym_c])
Omu   = sqa.term( 1.0, [''],  [pvec,  sqa.sfExOp([a, i]) , sqa.sfExOp([b, j])])
Onu   = sqa.term( 1.0, [''],  [Apvec, sqa.sfExOp([l, d]) , sqa.sfExOp([k, c])])
commutator = []
commutator +=  sqa.commutator(T_C,    Omu)
commutator +=  sqa.commutator(T_A,    Omu)
commutator +=  sqa.commutator(T_V,    Omu)
commutator +=  sqa.commutator(HD_A,   Omu)
result = []
for t in commutator:
  result += sqa.normalOrder(sqa.multiplyTerms(Onu, t))

result = simplify_all(result,[deltaC, deltaA, deltaV],cumulantE4=cumulantE4)

# Perturber-dependent stuff
Class = 'CCVV'
tensors    = common_tensors(result,'eecc',pttype='NEVPT')
tensors    = order_tensors(tensors)
nbrTensors = write_tensors        ('NEVPT_'+Class, tensors)
nbrEqs     = write_code           ('NEVPT_'+Class, tensors, result)
nbr_bVec   = bVec(Class,tensors)

# Write out GetMethodInfo
print '  static void GetMethodInfo(FMethodInfo &Out) {'
print '    Out = FMethodInfo();'
print '    Out.pName = "NEVPT_'+Class+'";'
print '    Out.perturberClass = "'+Class+'";'
print '    Out.pSpinClass = "restricted";'
print '    Out.pTensorDecls = &TensorDecls[0];'
print '    Out.nTensorDecls = %i;'%(nbrTensors)
print '    Out.EqsRes = FEqSet(&EqsRes[0], %i, "NEVPT_%s/Res");'%(nbrEqs,Class)
print '    Out.bVec = FEqSet(&bVec[0], '+str(nbr_bVec)+', "NEVPT_'+Class+'/bVec");'
print '  };'
print '};'



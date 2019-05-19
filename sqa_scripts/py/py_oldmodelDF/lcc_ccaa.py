import secondQuantizationAlgebra as sqa
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
tag_auxiliary = sqa.options.auxiliary_type

i  = sqa.index('Ci',  [tag_core],    True)
j  = sqa.index('Cj',  [tag_core],    True)
k  = sqa.index('Ck',  [tag_core],    True)
l  = sqa.index('Cl',  [tag_core],    True)
p  = sqa.index('Ap',  [tag_active],  True)
q  = sqa.index('Aq',  [tag_active],  True)
r  = sqa.index('Ar',  [tag_active],  True)
s  = sqa.index('As',  [tag_active],  True)

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

L = sqa.index('La',  [tag_auxiliary], True)

# Define symmetry classes
hsym   = sqa.symmetry((1,0), 1)
Dsym_a = sqa.symmetry((2,1, 0,3), 1)
Dsym_b = sqa.symmetry((0,3, 2,1), 1)
Dsym_c = sqa.symmetry((1,0, 3,2), 1)

# Define tensors
K_C    = sqa.tensor('int1c', [i1,i2], [hsym])
K_A    = sqa.tensor('int1a', [x1,x2], [hsym])
K_V    = sqa.tensor('int1v', [a1,a2], [hsym])
V_CA1l = sqa.tensor('int2Lcc', [L,i1,i2], [])
V_CA1r = sqa.tensor('int2Laa', [L,x1,x2], [])
V_CA2l = sqa.tensor('int2Lca', [L,i1,x2], [])
V_CA2r = sqa.tensor('int2Lac', [L,x1,i2], [])
V_CV1l = sqa.tensor('int2Lcc', [L,i1,i2], [])
V_CV1r = sqa.tensor('int2Lvv', [L,a1,a2], [])
V_CV2l = sqa.tensor('int2Lcv', [L,i1,a2], [])
V_CV2r = sqa.tensor('int2Lvc', [L,a1,i2], [])
V_AV1l = sqa.tensor('int2Laa', [L,x1,x2], [])
V_AV1r = sqa.tensor('int2Lvv', [L,a1,a2], [])
V_AV2l = sqa.tensor('int2Lav', [L,x1,a2], [])
V_AV2r = sqa.tensor('int2Lva', [L,a1,x2], [])
V_Cl   = sqa.tensor('int2Lcc', [L,i1,i3], [])
V_Cr   = sqa.tensor('int2Lcc', [L,i2,i4], [])
V_Al   = sqa.tensor('int2Laa', [L,x1,x3], [])
V_Ar   = sqa.tensor('int2Laa', [L,x2,x4], [])
V_Vl   = sqa.tensor('int2Lvv', [L,a1,a3], [])
V_Vr   = sqa.tensor('int2Lvv', [L,a2,a4], [])
deltaC = sqa.tensor('deltac', [i1,i2], [hsym])
deltaA = sqa.tensor('deltaa', [x1,x2], [hsym])
deltaV = sqa.tensor('deltav', [a1,a2], [hsym])

# Define Hamilonian terms
T_C    = sqa.term( 1.0, [''], [K_C,   sqa.sfExOp([i1,i2])] )
T_A    = sqa.term( 1.0, [''], [K_A,   sqa.sfExOp([x1,x2])] )
T_V    = sqa.term( 1.0, [''], [K_V,   sqa.sfExOp([a1,a2])] )
HD_C   = sqa.term( 0.5, [''], [V_Cl,V_Cr,   sqa.sfExOp([i1,i2,i3,i4])] )
HD_A   = sqa.term( 0.5, [''], [V_Al,V_Ar,   sqa.sfExOp([x1,x2,x3,x4])] )
HD_V   = sqa.term( 0.5, [''], [V_Vl,V_Vr,   sqa.sfExOp([a1,a2,a3,a4])] )
HD_CA1 = sqa.term( 1.0, [''], [V_CA1l,V_CA1r, sqa.sfExOp([i1,x1,i2,x2])] )
HD_CA2 = sqa.term( 1.0, [''], [V_CA2l,V_CA2r, sqa.sfExOp([i1,x1,x2,i2])] )
HD_CV1 = sqa.term( 1.0, [''], [V_CV1l,V_CV1r, sqa.sfExOp([i1,a1,i2,a2])] )
HD_CV2 = sqa.term( 1.0, [''], [V_CV2l,V_CV2r, sqa.sfExOp([i1,a1,a2,i2])] )
HD_AV1 = sqa.term( 1.0, [''], [V_AV1l,V_AV1r, sqa.sfExOp([x1,a1,x2,a2])] )
HD_AV2 = sqa.term( 1.0, [''], [V_AV2l,V_AV2r, sqa.sfExOp([x1,a1,a2,x2])] )

# Define the normal-ordered A matrix:
# Apvec_nu = < O^T_nu [H,O_mu] >.pvec_mu
pvec  = sqa.tensor('p',  [i,j,p,q], [])
Apvec = sqa.tensor('Ap', [k,l,r,s], [])
Omu   = sqa.term( 1.0, [''],  [pvec,  sqa.sfExOp([p, i]) , sqa.sfExOp([q, j])])
Onu   = sqa.term( 1.0, [''],  [Apvec, sqa.sfExOp([l, s]) , sqa.sfExOp([k, r])])
commutator = []
commutator +=  sqa.commutator(T_C,    Omu)
commutator +=  sqa.commutator(T_A,    Omu)
commutator +=  sqa.commutator(T_V,    Omu)
commutator +=  sqa.commutator(HD_C,   Omu)
commutator +=  sqa.commutator(HD_A,   Omu)
commutator +=  sqa.commutator(HD_V,   Omu)
commutator +=  sqa.commutator(HD_CA1, Omu)
commutator +=  sqa.commutator(HD_CA2, Omu)
commutator +=  sqa.commutator(HD_CV1, Omu)
commutator +=  sqa.commutator(HD_CV2, Omu)
commutator +=  sqa.commutator(HD_AV1, Omu)
commutator +=  sqa.commutator(HD_AV2, Omu)
result = []
for t in commutator:
    result += sqa.normalOrder(sqa.multiplyTerms(Onu, t))

result = simplify_all(result,[deltaC, deltaA, deltaV],cumulantE4=cumulantE4)

# Perturber-dependent stuff
Class = 'CCAA'
tensors  = mussardCode.make_tensors('ccaa',pttype='MRLCC',df=True)
tensors.append(['S1','S1','aaaa','D'])
tensors.append(['S2','S2','aaaa','D'])

AllTensors,nbrTensors,nbrEqs = mussardCode.write_tensors_and_equations('MRLCC_'+Class,result,tensors,commentE3=commentE3,df=True)
nbr_bVec = mussardCode.bVec(Class,AllTensors,df=True)

# Write out GetMethodInfo
print '  static void GetMethodInfo(FMethodInfo &Out) {'
print '    Out = FMethodInfo();'
print '    Out.pName = "MRLCC_'+Class+'";'
print '    Out.perturberClass = "'+Class+'";'
print '    Out.pSpinClass = "restricted";'
print '    Out.pTensorDecls = &TensorDecls[0];'
print '    Out.nTensorDecls = %i;'%(nbrTensors)
print '    Out.EqsRes = FEqSet(&EqsRes[0], %i, "MRLCC_%s/Res");'%(nbrEqs,Class)
print '    Out.bVec = FEqSet(&bVec[0], %s, "MRLCC_%s/bVec");'%(nbr_bVec,Class)
print '  };'
print '};'



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
p  = sqa.index('Ap',  [tag_active],  True)
q  = sqa.index('Aq',  [tag_active],  True)
r  = sqa.index('Ar',  [tag_active],  True)
s  = sqa.index('As',  [tag_active],  True)
a  = sqa.index('Va',  [tag_virtual], True)
b  = sqa.index('Vb',  [tag_virtual], True)

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
pvec1  = sqa.tensor('p1',  [i,p,q,a], [])
pvec2  = sqa.tensor('p2',  [i,p,q,a], [])
Apvec1 = sqa.tensor('Ap1', [j,r,s,b], [])
Apvec2 = sqa.tensor('Ap2', [j,r,s,b], [])
OmuA   = sqa.term( 1.0, [''],  [pvec1, sqa.sfExOp([a, i]) , sqa.sfExOp([p, q])])
OmuB   = sqa.term( 1.0, [''],  [pvec2, sqa.sfExOp([p, i]) , sqa.sfExOp([a, q])])
OnuA   = sqa.term( 1.0, [''],  [Apvec1,sqa.sfExOp([s, r]) , sqa.sfExOp([j, b])])
OnuB   = sqa.term( 1.0, [''],  [Apvec2,sqa.sfExOp([s, b]) , sqa.sfExOp([j, r])])
commutator1 = []
commutator1 +=  sqa.commutator(T_C,    OmuA)
commutator1 +=  sqa.commutator(T_A,    OmuA)
commutator1 +=  sqa.commutator(T_V,    OmuA)
commutator1 +=  sqa.commutator(HD_C,   OmuA)
commutator1 +=  sqa.commutator(HD_A,   OmuA)
commutator1 +=  sqa.commutator(HD_V,   OmuA)
commutator1 +=  sqa.commutator(HD_CA1, OmuA)
commutator1 +=  sqa.commutator(HD_CA2, OmuA)
commutator1 +=  sqa.commutator(HD_CV1, OmuA)
commutator1 +=  sqa.commutator(HD_CV2, OmuA)
commutator1 +=  sqa.commutator(HD_AV1, OmuA)
commutator1 +=  sqa.commutator(HD_AV2, OmuA)
commutator2 = []
commutator2 +=  sqa.commutator(T_C,    OmuB)
commutator2 +=  sqa.commutator(T_A,    OmuB)
commutator2 +=  sqa.commutator(T_V,    OmuB)
commutator2 +=  sqa.commutator(HD_C,   OmuB)
commutator2 +=  sqa.commutator(HD_A,   OmuB)
commutator2 +=  sqa.commutator(HD_V,   OmuB)
commutator2 +=  sqa.commutator(HD_CA1, OmuB)
commutator2 +=  sqa.commutator(HD_CA2, OmuB)
commutator2 +=  sqa.commutator(HD_CV1, OmuB)
commutator2 +=  sqa.commutator(HD_CV2, OmuB)
commutator2 +=  sqa.commutator(HD_AV1, OmuB)
commutator2 +=  sqa.commutator(HD_AV2, OmuB)
result = []
for t in commutator1:
    result += sqa.normalOrder(sqa.multiplyTerms(OnuA, t))
    result += sqa.normalOrder(sqa.multiplyTerms(OnuB, t))
for t in commutator2:
    result += sqa.normalOrder(sqa.multiplyTerms(OnuA, t))
    result += sqa.normalOrder(sqa.multiplyTerms(OnuB, t))

result = simplify_all(result,[deltaC, deltaA, deltaV],cumulantE4=cumulantE4)

# Perturber-dependent stuff
Class = 'CAAV'
tensors  = mussardCode.make_tensors('cAae',pttype='MRLCC',df=True)
tensors.append(['S1',        'S1',      'AaAa',       'D'])
tensors.append(['p1',        'p1',      'caae',       'A'])
tensors.append(['p2',        'p2',      'caae',       'A'])
tensors.append(['Ap1',       'Ap1',     'caae',       'A'])
tensors.append(['Ap2',       'Ap2',     'caae',       'A'])
tensors.append(['b1',        'b1',      'caae',       'A'])
tensors.append(['b2',        'b2',      'caae',       'A'])
tensors.append(['B1',        'B1',      'caae',       'A'])
tensors.append(['B2',        'B2',      'caae',       'A'])

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
print '    Out.pDomainDecls = &DomainDecls[0];'
print '    Out.nDomainDecls = 1;'
print '    Out.EqsRes = FEqSet(&EqsRes[0], %i, "MRLCC_%s/Res");'%(nbrEqs,Class)
print '    Out.bVec = FEqSet(&bVec[0], '+str(nbr_bVec)+', "MRLCC_'+Class+'/bVec");'
print '  };'
print '};'



import secondQuantizationAlgebra as sqa
import writeCode
import geraldCode
import sys
if (len(sys.argv)==1):
  withC=True
elif sys.argv[1]=='withC':
  withC=True
elif sys.argv[1]=='withoutC':
  withC=False
else:
  print 'NOPE'
  exit()

sqa.options.verbose = False

# Perturber-dependent stuff
Class = 'AAAV'
ex_domain = 'eaaa'
selection=[0,1,2,3,4,5,6,7,8,  9,10,11,19,21,  22,23,24,25,26,  29,30,31,32]

# Library of tensors
tensors  =        [[ 0, 't',         't',       ex_domain,    'A'],
                [ 1, 'T',         'T',       ex_domain,    'A'],
                [ 2, 'b',         'b',       ex_domain,    'A'],
                [ 3, 'B',         'B',       ex_domain,    'A'],
                [ 4, 'p',         'p',       ex_domain,    'A'],
                [ 5, 'Ap',        'Ap',      ex_domain,    'A'],
                [ 6, 'P',         'P',       ex_domain,    'A'],
                [ 7, 'AP',        'AP',      ex_domain,    'A'],
                [ 8, 'R',         'R',       ex_domain,    'R'],
                [ 9, 'int1c',     'f',       'cc',         'H'],
                [10, 'int1a',     'f',       'aa',         'H'],
                [11, 'int1v',     'f',       'ee',         'H'],
                [12, 'int2ca1',   'W',       'caca',       'H'],
                [13, 'int2ca2',   'W',       'caac',       'H'],
                [14, 'int2cv1',   'W',       'cece',       'H'],
                [15, 'int2cv2',   'W',       'ceec',       'H'],
                [16, 'int2av1',   'W',       'aeae',       'H'],
                [17, 'int2av2',   'W',       'aeea',       'H'],
                [18, 'int2c',     'W',       'cccc',       'H'],
                [19, 'int2a',     'W',       'aaaa',       'H'],
                [20, 'int2v',     'W',       'eeee',       'H'],
                [21, 'V',         'W',       ex_domain,    'H'],
                [22, 'E1',        'E1',      'aa',         'D'],
                [23, 'E2',        'E2',      'aaaa',       'D'],
                [24, 'E3',        'E3',      'aaaaaa',     'D'],
                [25, 'E4',        'E4',      'aaaaaaaa',   'D'],
                [26, 'S1',        'S1',      'aaaaaa',     'D'],
                [27, 'S2',        'S2',      'aa',         'D'],
                [28, 'S3',        'S3',      'a',          'D'],
                [29, 'deltac',    'delta',   'cc',         'D'],
                [30, 'deltaa',    'delta',   'aa',         'D'],
                [31, 'deltav',    'delta',   'ee',         'D'],
                [32, 'feff',      'f',       'ea',         'H'],
                ]
AllTensors=    [tensors[index][1] for index in selection]
CommentTensors=[tensors[index][2] for index in selection]
Domains=       [tensors[index][3] for index in selection]
Usage=         [tensors[index][4] for index in selection]
CommentKey = {}
for tc in list(zip(AllTensors, CommentTensors)):
    CommentKey[tc[0]] = tc[1]

# Write out the tensors
print 'namespace NEVPT_'+Class+' {\n'
geraldCode.writeTensors(AllTensors, CommentKey, Domains, Usage)

# Define needed indexes as being core,active,virtual
tag_core    = sqa.options.core_type
tag_active  = sqa.options.active_type
tag_virtual = sqa.options.virtual_type

p  = sqa.index('Ap',  [tag_active],  withC)
q  = sqa.index('Aq',  [tag_active],  withC)
r  = sqa.index('Ar',  [tag_active],  withC)
u  = sqa.index('Au',  [tag_active],  withC)
v  = sqa.index('Av',  [tag_active],  withC)
w  = sqa.index('Aw',  [tag_active],  withC)
a  = sqa.index('Va',  [tag_virtual], withC)
b  = sqa.index('Vb',  [tag_virtual], withC)

x1 = sqa.index('Au',  [tag_active],  True)
x2 = sqa.index('Av',  [tag_active],  True)
i1 = sqa.index('Cm',  [tag_core],    True)
i2 = sqa.index('Cn',  [tag_core],    True)
a1 = sqa.index('Vg',  [tag_virtual], True)
a2 = sqa.index('Vh',  [tag_virtual], True)

# Define symmetry classes
hsym   = sqa.symmetry((1,0), 1)
Dsym_a = sqa.symmetry((2,1, 0,3), 1)
Dsym_b = sqa.symmetry((0,3, 2,1), 1)
Dsym_c = sqa.symmetry((1,0, 3,2), 1)

# Define tensors
deltaC = sqa.tensor('deltac', [i1,i2], [hsym])
deltaA = sqa.tensor('deltaa', [x1,x2], [hsym])
deltaV = sqa.tensor('deltav', [a1,a2], [hsym])

# Define the normal-ordered overlap
Cin  = sqa.tensor('V', [a,p,q,r], [])
Cout = sqa.tensor('b', [b,u,v,w], [])
if (withC):
  Op1 = sqa.term( 1.0, [''],  [Cin,  sqa.sfExOp([a, q]) , sqa.sfExOp([p, r])])
  Op2 = sqa.term( 1.0, [''],  [Cout, sqa.sfExOp([w, u]) , sqa.sfExOp([v, b])])
else:
  Op1 = sqa.term( 1.0, [''],  [sqa.sfExOp([a, q]) , sqa.sfExOp([p, r])])
  Op2 = sqa.term( 1.0, [''],  [sqa.sfExOp([w, u]) , sqa.sfExOp([v, b])])
result = sqa.normalOrder(sqa.multiplyTerms(Op2, Op1))

# Simplify the result
for t in result:
    t.contractDeltaFuncs_new()
sqa.removeVirtOps_sf(result)
sqa.termChop(result)
sqa.combineTerms(result)
extendedR=[]
for t in result:
    extendedR += sqa.contractCoreOps_sf(t)
for t in extendedR:
    t.contractDeltaFuncs_new()
sqa.termChop(extendedR)
sqa.combineTerms(extendedR)
result = []
rdmDelta = [deltaC, deltaA, deltaV]
for r in extendedR:
    item1=geraldCode.replaceRepeatIndicesWithDeltas(r, rdmDelta)
    item2=geraldCode.replaceSingleKdeltaWithDeltas(item1, rdmDelta)
    result.append(geraldCode.replaceAllKdeltaWithDeltas(item2, rdmDelta))

# Write out the equation for A.p
print '//Number of terms : ', nbrEqs
print '  FEqInfo EqsRes[%i] = {\n'%(nbrEqs)
geraldCode.WriteCodeSimple(result, AllTensors, CommentKey)
print '\n  };'




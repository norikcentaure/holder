import secondQuantizationAlgebra as sqa
import writeCode
import geraldCode

sqa.options.verbose = False

# Perturber-dependent stuff
Class = 'CAAV'
ex_domain = 'caae'
ex_domain_map = 'cAae'
selection=[0,8,  9,10,11,10,10,10,10,10,10,10,  19,22,23,24,26,  1,36,37,38,39,32,33,2,6,7,34,35,3,  40,41,   29,30,31,  4,5,  42]

# Library of tensors
tensors  =        [[ 0, 't',         't',       ex_domain_map,'A'],
                [ 1, 'T',         'T',       ex_domain_map,'A'],
                [ 2, 'b',         'b',       '',           'A'],
                [ 3, 'B',         'B',       '',           'A'],
                [ 4, 'p',         'p',       '',           'A'],
                [ 5, 'Ap',        'Ap',      '',           'A'],
                [ 6, 'P',         'P',       ex_domain_map,'A'],
                [ 7, 'AP',        'AP',      ex_domain_map,'A'],
                [ 8, 'R',         'R',       ex_domain_map,'R'],
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
                [26, 'S1',        'S1',      'AaAa',       'D'],
                [27, 'S2',        'S2',      'aa',         'D'],
                [28, 'S3',        'S3',      'a',          'D'],
                [29, 'deltac',    'delta',   'cc',         'D'],
                [30, 'deltaa',    'delta',   'aa',         'D'],
                [31, 'deltav',    'delta',   'ee',         'D'],
                [32, 'b1',        'b1',      ex_domain,    'A'],
                [33, 'b2',        'b2',      ex_domain,    'A'],
                [34, 'B1',        'B1',      ex_domain,    'A'],
                [35, 'B2',        'B2',      ex_domain,    'A'],
                [36, 'p1',        'p1',      ex_domain,    'A'],
                [37, 'p2',        'p2',      ex_domain,    'A'],
                [38, 'Ap1',       'Ap1',     ex_domain,    'A'],
                [39, 'Ap2',       'Ap2',     ex_domain,    'A'],
                [40, 'V1',        'W',       'eaca',       'H'],
                [41, 'V2',        'W',       'aeca',       'H'],
                [42, 'int',       'f',       'ec',         'H'],
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

i  = sqa.index('Ci',  [tag_core],    withC)
j  = sqa.index('Cj',  [tag_core],    withC)
p  = sqa.index('Ap',  [tag_active],  withC)
q  = sqa.index('Aq',  [tag_active],  withC)
r  = sqa.index('Ar',  [tag_active],  withC)
s  = sqa.index('As',  [tag_active],  withC)
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
Cin1a  = sqa.tensor('V1', [i,q,a,p], [])
Cin1b  = sqa.tensor('V2', [i,q,p,a], [])
Cout2a = sqa.tensor('b1', [j,s,b,r], [])
Cout2b = sqa.tensor('b2', [j,s,r,b], [])
if (withC):
  Op1a  = sqa.term( 1.0, [''],  [Cin1a,  sqa.sfExOp([a, i]) , sqa.sfExOp([p, q])])
  Op1b  = sqa.term( 1.0, [''],  [Cin1b,  sqa.sfExOp([p, i]) , sqa.sfExOp([a, q])])
  Op2a  = sqa.term( 1.0, [''],  [Cout2a, sqa.sfExOp([s, r]) , sqa.sfExOp([j, b])])
  Op2b  = sqa.term( 1.0, [''],  [Cout2b, sqa.sfExOp([s, b]) , sqa.sfExOp([j, r])])
else:
  Op1a  = sqa.term( 1.0, [''],  [sqa.sfExOp([a, i]) , sqa.sfExOp([p, q])])
  Op1b  = sqa.term( 1.0, [''],  [sqa.sfExOp([p, i]) , sqa.sfExOp([a, q])])
  Op2a  = sqa.term( 1.0, [''],  [sqa.sfExOp([s, r]) , sqa.sfExOp([j, b])])
  Op2b  = sqa.term( 1.0, [''],  [sqa.sfExOp([s, b]) , sqa.sfExOp([j, r])])
result = sqa.normalOrder(sqa.multiplyTerms(Op2a, Op1a))
result+= sqa.normalOrder(sqa.multiplyTerms(Op2b, Op1a))
result+= sqa.normalOrder(sqa.multiplyTerms(Op2a, Op1b))
result+= sqa.normalOrder(sqa.multiplyTerms(Op2b, Op1b))

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




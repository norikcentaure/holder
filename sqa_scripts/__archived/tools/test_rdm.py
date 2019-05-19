import secondQuantizationAlgebra as sqa
import geraldCode
import mussardCode

sqa.options.verbose = False

# Define needed indexes as being core,active,virtual
tag_core    = sqa.options.core_type
tag_active  = sqa.options.active_type
tag_virtual = sqa.options.virtual_type

x1 = sqa.index('Ax1',  [tag_active],  True)
x2 = sqa.index('Ax2',  [tag_active],  True)
x3 = sqa.index('Ax3',  [tag_active],  True)
x4 = sqa.index('Ax4',  [tag_active],  True)
x5 = sqa.index('Ax5',  [tag_active],  True)
x6 = sqa.index('Ax6',  [tag_active],  True)
x7 = sqa.index('Ax7',  [tag_active],  True)
x8 = sqa.index('Ax8',  [tag_active],  True)

result = sqa.normalOrder(sqa.term(1.0, [''], [sqa.sfExOp([x1,x2,x3,x4, x5,x6,x7,x8])]))
result+= sqa.normalOrder(sqa.term(1.0, [''], [sqa.sfExOp([x1,x2,x3,       x6,x7,x8])]))
result+= sqa.normalOrder(sqa.term(1.0, [''], [sqa.sfExOp([x1,x2,             x7,x8])]))
result+= sqa.normalOrder(sqa.term(1.0, [''], [sqa.sfExOp([x1,                   x8])]))
for t in result:
    print t


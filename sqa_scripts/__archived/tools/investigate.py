import secondQuantizationAlgebra as sqa
import writeCode
import geraldCode
import mussardCode
import time

def cleanup_normalordered(result,deltas):
  t0=time.clock()
  length=len(result)
  for t in result:
      t.contractDeltaFuncs_new()
  sqa.removeVirtOps_sf(result)
  sqa.termChop(result)
  sqa.combineTerms(result)
  result2=[]
  for t in result:
      result2 += sqa.contractCoreOps_sf(t)
  for t in result2:
      t.contractDeltaFuncs_new()
  sqa.termChop(result2)
  sqa.combineTerms(result2)
  result = []
  for r in result2:
    item1=geraldCode.replaceRepeatIndicesWithDeltas(r, deltas)
    item2=geraldCode.replaceSingleKdeltaWithDeltas(item1, deltas)
    result.append(geraldCode.replaceAllKdeltaWithDeltas(item2, deltas))
  print 'cleanup time: (',length,'->',len(result),')',time.clock()-t0
  del result2

def cleanup_non_normalordered(result,deltas):
  t0=time.clock()
  length=len(result)
  for t in result:
      t.contractDeltaFuncs_new()
  sqa.removeVirtOps_sf(result)
  sqa.termChop(result)
  #sqa.combineTerms(result)
  #result2=[]
  #for t in result:
  #    result2 += sqa.contractCoreOps_sf(t)
  result2=result
  for t in result2:
      t.contractDeltaFuncs_new()
  sqa.termChop(result2)
  #sqa.combineTerms(result2)
  result = []
  for r in result2:
    item1=geraldCode.replaceRepeatIndicesWithDeltas(r, deltas)
    item2=geraldCode.replaceSingleKdeltaWithDeltas(item1, deltas)
    result.append(geraldCode.replaceAllKdeltaWithDeltas(item2, deltas))
  print 'cleanup time: (',length,'->',len(result),')',time.clock()-t0
  del result2

def outputs(liste,filename):
  f=open(filename,'w')
  for t in liste:
    f.write('%s \n'%t)
  f.close()
  print 'wrote: ',filename

sqa.options.verbose = False

# Define needed indexes as being core,active,virtual
tag_core    = sqa.options.core_type
tag_active  = sqa.options.active_type
tag_virtual = sqa.options.virtual_type

ia1 = sqa.index('Ca1', [tag_core,['alpha']],    True)
ia2 = sqa.index('Ca2', [tag_core,['alpha']],    True)
ib1 = sqa.index('Cb1', [tag_core,['beta'] ],    True)
ib2 = sqa.index('Cb2', [tag_core,['beta'] ],    True)

#symmetry
sym = sqa.symmetry((1,0), 1)

# tensor (name,indexes,symmetry)
tensor = sqa.tensor('t1',[ia1,ia2,ib1,ib2], [])
# delta (indexes)
delta = sqa.kroneckerDelta([ia1,ia2])
# sfExOp (indexes)
sf= sqa.sfExOp([ia1,ia2])
# creOp/desOp (index)
cre1=sqa.creOp(ia1)
des1=sqa.desOp(ia2)
des2=sqa.desOp(ib1)
# creDesTensor (list of op)
credes=sqa.creDesTensor([cre1,des2,des1])

# term (cts, const, tensor_list)
term=sqa.term(1.0,[''],[tensor,des1,cre1,des2,credes])

print ''
print [t.name for t in term.tensors]
print 'sqa.term.nCreOps(term)         ',sqa.term.nCreOps(term)
print 'sqa.term.nDesOps(term)         ',sqa.term.nDesOps(term)
print 'sqa.term.isNormalOrdered(term) ',sqa.term.isNormalOrdered(term)

# term (cts, const, tensor_list)
term=sqa.term(1.0,[''],[tensor,credes])

print ''
print [t.name for t in term.tensors]
print 'sqa.term.nCreOps(term)         ',sqa.term.nCreOps(term)
print 'sqa.term.nDesOps(term)         ',sqa.term.nDesOps(term)
print 'sqa.term.isNormalOrdered(term) ',sqa.term.isNormalOrdered(term)



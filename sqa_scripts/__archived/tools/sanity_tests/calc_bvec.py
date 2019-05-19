import numpy as np
ncor=1
nact=4
nvir=14

##Ds
#Deecc =np.load('int/D:eecc.npy')
#Deeca =np.load('int/D:eeca.npy')
#Dccae =np.load('int/D:ccae.npy')
#Deeaa =np.load('int/D:eeaa.npy')
#Dccaa =np.load('int/D:ccaa.npy')
#Deaca =np.load('int/D:eaca.npy')
#Daeca =np.load('int/D:aeca.npy')
#Deaaa =np.load('int/D:eaaa.npy')
#Dcaaa =np.load('int/D:caaa.npy')

#RDMs
E1aa=np.load('int/E1.npy')
E2aaaa=np.load('int/E2.npy')
E3aaaaaa=np.load('int/E3.npy')
E4aaaaaaaa=np.load('int/E4.npy')
#print 'E1:',E1aa.shape
#print 'E2:',E2aaaa.shape
#print 'E3:',E3aaaaaa.shape
#print 'E4:',E4aaaaaaaa.shape

#deltas
deltacc=np.zeros(( ncor, ncor))
deltaaa=np.zeros(( nact, nact))
deltaee=np.zeros(( nvir, nvir))
for i in range(ncor):
  deltacc[i,i]=1.0
for i in range(nact):
  deltaaa[i,i]=1.0
for i in range(nvir):
  deltaee[i,i]=1.0
#print 'dc:',deltacc.shape
#print 'da:',deltaaa.shape
#print 'de:',deltaee.shape

##one-ints
#int1=np.load('int/int1.npy'  )
#Wcc  =int1[  : 2,  : 2]
#Waa  =int1[ 2:10, 2:10]
#Wee  =int1[10:28,10:28]
##Wec  =int1[10:28,  : 2]
##Wea  =int1[10:28, 2:10]
##Wac  =int1[ 2:10,  : 2]
##Wca  =int1[  : 2, 2:10]

#two-ints
Wccaa=np.load('int/W:ccaa.npy')
#Wcaca=np.load('int/W:caca.npy')
##Wcecc=np.load('int/W:cecc.npy')
#Wcece=np.load('int/W:cece.npy')
#Waaaa=np.load('int/W:aaaa.npy')
##Waacc=np.load('int/W:aacc.npy')
##Waccc=np.load('int/W:accc.npy')
##Wacca=np.load('int/W:acca.npy')
##Wacac=np.load('int/W:acac.npy')
#Waeae=np.load('int/W:aeae.npy')
##Waeaa=np.load('int/W:aeaa.npy')
##Waecc=np.load('int/W:aecc.npy')
##Waeca=np.load('int/W:aeca.npy')
##Waeac=np.load('int/W:aeac.npy')
##Waaac=np.load('int/W:aaac.npy')
#Weeee=np.load('int/W:eeee.npy')
#Weeaa=np.load('int/W:eeaa.npy')
#Weecc=np.load('int/W:eecc.npy')
##Weeac=np.load('int/W:eeac.npy')
#Wcccc=np.load('int/W:cccc.npy')
##Wceac=np.load('int/W:ceac.npy')
##Wcaac=np.load('int/W:caac.npy')
##Wceca=np.load('int/W:ceca.npy')
##Weeca=np.load('int/W:eeca.npy')
##Wccce=np.load('int/W:ccce.npy')
##Wccae=np.load('int/W:ccae.npy')
##Weaca=np.load('int/W:eaca.npy')
##Wcace=np.load('int/W:cace.npy')
##Wcaaa=np.load('int/W:caaa.npy')
##Weaaa=np.load('int/W:eaaa.npy')
##Wccca=np.load('int/W:ccca.npy')


bccaa =np.zeros((ncor,ncor,nact,nact))
bccaa+=  2.0*np.einsum("PR,KLPS",             deltaaa    , Wccaa)
print bccaa
bccaa+= -1.0*np.einsum("PR,KLPS",             E1aa       , Wccaa)
print bccaa
bccaa+= -1.0*np.einsum("PR,LKPS",             deltaaa    , Wccaa)
print bccaa
bccaa+=  0.5*np.einsum("PR,LKPS",             E1aa       , Wccaa)
print bccaa
print 'HERE'
bccaa+= -1.0*np.einsum("PS,KLPR",             deltaaa    , Wccaa)
print bccaa
bccaa+=  0.5*np.einsum("PS,KLPR",             E1aa       , Wccaa)
print bccaa
bccaa+=  2.0*np.einsum("PS,LKPR",             deltaaa    , Wccaa)
print bccaa
bccaa+= -1.0*np.einsum("PS,LKPR",             E1aa       , Wccaa)
print bccaa
print 'HERE'
bccaa+= -1.0*np.einsum("QS,KLRQ",             E1aa       , Wccaa)
print bccaa
bccaa+=  0.5*np.einsum("QS,LKRQ",             E1aa       , Wccaa)
print bccaa
print 'HERE'
bccaa+=  0.5*np.einsum("QR,KLSQ",             E1aa       , Wccaa)
print bccaa
bccaa+= -1.0*np.einsum("QR,LKSQ",             E1aa       , Wccaa)
print bccaa
print 'HERE'
bccaa+=  0.5*np.einsum("PQSR,LKPQ",           E2aaaa     , Wccaa)
print bccaa
bccaa+=  0.5*np.einsum("PQRS,KLPQ",           E2aaaa     , Wccaa)
print bccaa
print 'HERE'

print np.linalg.norm(bccaa)


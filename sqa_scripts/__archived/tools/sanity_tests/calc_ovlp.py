import numpy as np

#Ds
Deecc =np.load('int/D:eecc.npy')
Deeca =np.load('int/D:eeca.npy')
Dccae =np.load('int/D:ccae.npy')
Deeaa =np.load('int/D:eeaa.npy')
Dccaa =np.load('int/D:ccaa.npy')
Deaca =np.load('int/D:eaca.npy')
Daeca =np.load('int/D:aeca.npy')
Deaaa =np.load('int/D:eaaa.npy')
Dcaaa =np.load('int/D:caaa.npy')

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
deltacc=np.zeros(( 2, 2))
deltaaa=np.zeros(( 8, 8))
deltaee=np.zeros((18,18))
for i in range(2):
  deltacc[i,i]=1.0
for i in range(8):
  deltaaa[i,i]=1.0
for i in range(18):
  deltaee[i,i]=1.0
#print 'dc:',deltacc.shape
#print 'da:',deltaaa.shape
#print 'de:',deltaee.shape

#one-ints
int1=np.load('int/int1.npy'  )
#Wcc  =int1[  : 2,  : 2]
#Waa  =int1[ 2:10, 2:10]
#Wee  =int1[10:28,10:28]
#Wec  =int1[10:28,  : 2]
#Wea  =int1[10:28, 2:10]
#Wac  =int1[ 2:10,  : 2]
#Wca  =int1[  : 2, 2:10]

#two-ints
#Wccaa=np.load('int/W:ccaa.npy')
#Wcaca=np.load('int/W:caca.npy')
#Wcecc=np.load('int/W:cecc.npy')
#Wcece=np.load('int/W:cece.npy')
#Waaaa=np.load('int/W:aaaa.npy')
#Waacc=np.load('int/W:aacc.npy')
#Waccc=np.load('int/W:accc.npy')
#Wacca=np.load('int/W:acca.npy')
#Wacac=np.load('int/W:acac.npy')
#Waeae=np.load('int/W:aeae.npy')
#Waeaa=np.load('int/W:aeaa.npy')
#Waecc=np.load('int/W:aecc.npy')
#Waeca=np.load('int/W:aeca.npy')
#Waeac=np.load('int/W:aeac.npy')
#Waaac=np.load('int/W:aaac.npy')
#Weeee=np.load('int/W:eeee.npy')
#Weeaa=np.load('int/W:eeaa.npy')
#Weecc=np.load('int/W:eecc.npy')
#Weeac=np.load('int/W:eeac.npy')
#Wcccc=np.load('int/W:cccc.npy')
#Wceac=np.load('int/W:ceac.npy')
#Wcaac=np.load('int/W:caac.npy')
#Wceca=np.load('int/W:ceca.npy')
#Weeca=np.load('int/W:eeca.npy')
#Wccce=np.load('int/W:ccce.npy')
#Wccae=np.load('int/W:ccae.npy')
#Weaca=np.load('int/W:eaca.npy')
#Wcace=np.load('int/W:cace.npy')
#Wcaaa=np.load('int/W:caaa.npy')
#Weaaa=np.load('int/W:eaaa.npy')
#Wccca=np.load('int/W:ccca.npy')


energy=0
energy+=  4.0*np.einsum("acbd,aebf,ca,db,ea,fb"       , Deecc      , Deecc      , deltaee    , deltacc    , deltaee    , deltacc    )
energy+= -2.0*np.einsum("adbc,aecb,da,ea"             , Deecc      , Deecc      , deltaee    , deltaee    )
energy+= -2.0*np.einsum("abcd,bace,dc,ec"             , Deecc      , Deecc      , deltacc    , deltacc    )
energy+=  4.0*np.einsum("abcd,badc"                   , Deecc      , Deecc      )
print "energy: {:25.9f}".format(energy)

energy=0
energy+= -1.0*np.einsum("adbc,aebc,cf,da,ea,fc"       , Deeca      , Deeca      , E1aa       , deltaee    , deltaee    , deltaaa    )
energy+=  2.0*np.einsum("abcd,abcd,de,ed"             , Deeca      , Deeca      , E1aa       , deltaaa    )
print "energy: {:25.9f}".format(energy)

energy=0
energy+= -2.0*np.einsum("adbc,aebc,da,ea"             , Dccae      , Dccae      , deltacc    , deltacc    )
energy+=  4.0*np.einsum("abcd,abcd"                   , Dccae      , Dccae      )
energy+=  1.0*np.einsum("adbc,aebc,bf,da,ea,fb"       , Dccae      , Dccae      , E1aa       , deltacc    , deltacc    , deltaaa    )
energy+= -2.0*np.einsum("abcd,abcd,ce,ec"             , Dccae      , Dccae      , E1aa       , deltaaa    )
print "energy: {:25.9f}".format(energy)

energy=0
energy+=  1.0*np.einsum("adbc,aecb,bcgf,da,ea,fb,gc"  , Deeaa      , Deeaa      , E2aaaa     , deltaee    , deltaee    , deltaaa    , deltaaa    )
energy+=  1.0*np.einsum("abcd,badc,cdef,ec,fd"        , Deeaa      , Deeaa      , E2aaaa     , deltaaa    , deltaaa    )
print "energy: {:25.9f}".format(energy)

energy=0
energy+=  4.0*np.einsum("acbd,aebf,ca,db,ea,fb"       , Dccaa      , Dccaa      , deltacc    , deltaaa    , deltacc    , deltaaa    )
energy+= -2.0*np.einsum("adbc,aecb,da,ea"             , Dccaa      , Dccaa      , deltacc    , deltacc    )
energy+= -2.0*np.einsum("abcd,bace,dc,ec"             , Dccaa      , Dccaa      , deltaaa    , deltaaa    )
energy+=  4.0*np.einsum("abcd,badc"                   , Dccaa      , Dccaa      )
energy+= -4.0*np.einsum("acbd,aebf,bg,ca,db,ea,fb,gb" , Dccaa      , Dccaa      , E1aa       , deltacc    , deltaaa    , deltacc    , deltaaa    , deltaaa    )
energy+=  2.0*np.einsum("adbc,aecb,cf,da,ea,fc"       , Dccaa      , Dccaa      , E1aa       , deltacc    , deltacc    , deltaaa    )
energy+=  2.0*np.einsum("abcd,bace,cf,dc,ec,fc"       , Dccaa      , Dccaa      , E1aa       , deltaaa    , deltaaa    , deltaaa    )
energy+= -4.0*np.einsum("abcd,badc,de,ed"             , Dccaa      , Dccaa      , E1aa       , deltaaa    )
energy+=  1.0*np.einsum("adbc,aecb,bcgf,da,ea,fb,gc"  , Dccaa      , Dccaa      , E2aaaa     , deltacc    , deltacc    , deltaaa    , deltaaa    )
energy+=  1.0*np.einsum("abcd,badc,cdef,ec,fd"        , Dccaa      , Dccaa      , E2aaaa     , deltaaa    , deltaaa    )
print "energy: {:25.9f}".format(energy)

energy=0
energy+=  2.0*np.einsum("abcd,adcb,de,ed"             , Deaca      , Deaca      , E1aa       , deltaaa    )
energy+=  2.0*np.einsum("abcd,adcb,bdfe,eb,fd"        , Deaca      , Deaca      , E2aaaa     , deltaaa    , deltaaa    )
energy+= -1.0*np.einsum("abcd,beca,ed"                , Daeca      , Deaca      , E1aa       )
energy+= -1.0*np.einsum("abcd,becf,aedf"              , Daeca      , Deaca      , E2aaaa     )
energy+= -1.0*np.einsum("abcd,bace,de"                , Daeca      , Deaca      , E1aa       )
energy+= -1.0*np.einsum("abcd,becf,deaf"              , Daeca      , Deaca      , E2aaaa     )
energy+=  2.0*np.einsum("abcd,abcd,de,ed"             , Daeca      , Daeca      , E1aa       , deltaaa    )
energy+= -1.0*np.einsum("abcd,abcd,adef,ea,fd"        , Daeca      , Daeca      , E2aaaa     , deltaaa    , deltaaa    )
print "energy: {:25.9f}".format(energy)

energy=0
energy+=  1.0*np.einsum("abdc,acbe,cf,db,eb,fc"       , Deaaa      , Deaaa      , E1aa       , deltaaa    , deltaaa    , deltaaa    )
energy+=  2.0*np.einsum("abcd,aceb,bcgf,dc,ec,fb,gc"  , Deaaa      , Deaaa      , E2aaaa     , deltaaa    , deltaaa    , deltaaa    , deltaaa    )
energy+=  1.0*np.einsum("abcd,adcb,cdef,ec,fd"        , Deaaa      , Deaaa      , E2aaaa     , deltaaa    , deltaaa    )
energy+=  1.0*np.einsum("abcd,adcb,bcdgfe,eb,fc,gd"   , Deaaa      , Deaaa      , E3aaaaaa   , deltaaa    , deltaaa    , deltaaa    )
print "energy: {:25.9f}".format(energy)

energy=0
energy+= -1.0*np.einsum("abdc,acbe,cf,db,eb,fc"       , Dcaaa      , Dcaaa      , E1aa       , deltaaa    , deltaaa    , deltaaa    )
energy+=  2.0*np.einsum("abcd,adcb,de,ed"             , Dcaaa      , Dcaaa      , E1aa       , deltaaa    )
energy+= -2.0*np.einsum("abcd,aceb,bcgf,dc,ec,fb,gc"  , Dcaaa      , Dcaaa      , E2aaaa     , deltaaa    , deltaaa    , deltaaa    , deltaaa    )
energy+=  2.0*np.einsum("abcd,adcb,bdfe,eb,fd"        , Dcaaa      , Dcaaa      , E2aaaa     , deltaaa    , deltaaa    )
energy+= -1.0*np.einsum("abcd,adcb,cdef,ec,fd"        , Dcaaa      , Dcaaa      , E2aaaa     , deltaaa    , deltaaa    )
energy+= -1.0*np.einsum("abcd,adcb,bcdgfe,eb,fc,gd"   , Dcaaa      , Dcaaa      , E3aaaaaa   , deltaaa    , deltaaa    , deltaaa    )
print "energy: {:25.9f}".format(energy)


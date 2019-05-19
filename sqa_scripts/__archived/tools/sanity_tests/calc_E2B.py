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
Wec  =int1[10:28,  : 2]
Wea  =int1[10:28, 2:10]
#Wac  =int1[ 2:10,  : 2]
Wca  =int1[  : 2, 2:10]

#two-ints
Wccaa=np.load('int/W:ccaa.npy')
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
Waeca=np.load('int/W:aeca.npy')
#Waeac=np.load('int/W:aeac.npy')
#Waaac=np.load('int/W:aaac.npy')
#Weeee=np.load('int/W:eeee.npy')
Weeaa=np.load('int/W:eeaa.npy')
Weecc=np.load('int/W:eecc.npy')
#Weeac=np.load('int/W:eeac.npy')
#Wcccc=np.load('int/W:cccc.npy')
#Wceac=np.load('int/W:ceac.npy')
#Wcaac=np.load('int/W:caac.npy')
#Wceca=np.load('int/W:ceca.npy')
Weeca=np.load('int/W:eeca.npy')
Wccce=np.load('int/W:ccce.npy')
Wccae=np.load('int/W:ccae.npy')
Weaca=np.load('int/W:eaca.npy')
Wcace=np.load('int/W:cace.npy')
Wcaaa=np.load('int/W:caaa.npy')
Weaaa=np.load('int/W:eaaa.npy')
Wccca=np.load('int/W:ccca.npy')


obj=np.einsum_path("abfc,cdeg,db,fa,ge"          , Wcace      , Deaaa      , E1aa       , deltacc    , deltaaa, optimize='optimal')
print obj[0]
print obj[1]
obj=np.einsum_path("abfc,cdeg,db,fa,ge"          , Wcace      , Deaaa      , E1aa       , deltacc    , deltaaa, optimize='greedy')
print obj[0]
print obj[1]
exit()


energy=0
energy+=  2.0*np.einsum("abcd,abcd"                   , Weecc      , Deecc      )
energy+= -1.0*np.einsum("abcd,abdc"                   , Weecc      , Deecc      )
energy+= -1.0*np.einsum("abcd,bacd"                   , Weecc      , Deecc      )
energy+=  2.0*np.einsum("abcd,badc"                   , Weecc      , Deecc      )
print "energy: {:25.9f}".format(energy)

energy=0
energy+=  2.0*np.einsum("abcd,abce,ed"                , Weeca      , Deeca      , E1aa       )
energy+= -1.0*np.einsum("abcd,bace,ed"                , Weeca      , Deeca      , E1aa       )
print "energy: {:25.9f}".format(energy)

energy=0
energy+=  4.0*np.einsum("abcd,abcd"                   , Wccae      , Dccae      )
energy+= -2.0*np.einsum("abcd,bacd"                   , Wccae      , Dccae      )
energy+= -2.0*np.einsum("abcd,abed,ce"                , Wccae      , Dccae      , E1aa       )
energy+=  1.0*np.einsum("abcd,baed,ce"                , Wccae      , Dccae      , E1aa       )
print "energy: {:25.9f}".format(energy)

energy=0
energy+=  0.5*np.einsum("abcd,abef,efcd"              , Weeaa      , Deeaa      , E2aaaa     )
energy+=  0.5*np.einsum("abcd,baef,efdc"              , Weeaa      , Deeaa      , E2aaaa     )
print "energy: {:25.9f}".format(energy)

energy=0
energy+=  2.0*np.einsum("abcd,abcd"                   , Wccaa      , Dccaa      )
energy+= -1.0*np.einsum("abcd,abdc"                   , Wccaa      , Dccaa      )
energy+= -1.0*np.einsum("abcd,bacd"                   , Wccaa      , Dccaa      )
energy+=  2.0*np.einsum("abcd,badc"                   , Wccaa      , Dccaa      )
energy+= -1.0*np.einsum("abcd,abce,de"                , Wccaa      , Dccaa      , E1aa       )
energy+=  0.5*np.einsum("abcd,abde,ce"                , Wccaa      , Dccaa      , E1aa       )
energy+=  0.5*np.einsum("abcd,abec,de"                , Wccaa      , Dccaa      , E1aa       )
energy+= -1.0*np.einsum("abcd,abed,ce"                , Wccaa      , Dccaa      , E1aa       )
energy+=  0.5*np.einsum("abcd,bace,de"                , Wccaa      , Dccaa      , E1aa       )
energy+= -1.0*np.einsum("abcd,bade,ce"                , Wccaa      , Dccaa      , E1aa       )
energy+= -1.0*np.einsum("abcd,baec,de"                , Wccaa      , Dccaa      , E1aa       )
energy+=  0.5*np.einsum("abcd,baed,ce"                , Wccaa      , Dccaa      , E1aa       )
energy+=  0.5*np.einsum("abcd,abef,cdef"              , Wccaa      , Dccaa      , E2aaaa     )
energy+=  0.5*np.einsum("abcd,baef,cdfe"              , Wccaa      , Dccaa      , E2aaaa     )
print "energy: {:25.9f}".format(energy)

energy=0
energy+= -2.0*np.einsum("afbc,cdbe,de,fa"             , Wccce      , Deaca      , E1aa       , deltacc    )
energy+=  4.0*np.einsum("abfc,cdbe,de,fa"             , Wccce      , Deaca      , E1aa       , deltacc    )
energy+=  1.0*np.einsum("afbc,dcbe,ed,fa"             , Wccce      , Daeca      , E1aa       , deltacc    )
energy+= -2.0*np.einsum("abfc,dcbe,ed,fa"             , Wccce      , Daeca      , E1aa       , deltacc    )
energy+= -1.0*np.einsum("abcd,beca,ed"                , Waeca      , Deaca      , E1aa       )
energy+= -1.0*np.einsum("abcd,becf,aedf"              , Waeca      , Deaca      , E2aaaa     )
energy+=  2.0*np.einsum("abcd,abce,ed"                , Waeca      , Daeca      , E1aa       )
energy+= -1.0*np.einsum("abcd,ebcf,afed"              , Waeca      , Daeca      , E2aaaa     )
energy+=  2.0*np.einsum("abcd,aecb,ed"                , Weaca      , Deaca      , E1aa       )
energy+=  2.0*np.einsum("abcd,aecf,bedf"              , Weaca      , Deaca      , E2aaaa     )
energy+= -1.0*np.einsum("abcd,bace,ed"                , Weaca      , Daeca      , E1aa       )
energy+= -1.0*np.einsum("abcd,eacf,bfde"              , Weaca      , Daeca      , E2aaaa     )
energy+=  2.0*np.einsum("ab,acbd,cd"                  , Wec        , Deaca      , E1aa       )
energy+= -1.0*np.einsum("ab,cabd,dc"                  , Wec        , Daeca      , E1aa       )
print "energy: {:25.9f}".format(energy)

energy=0
energy+=  2.0*np.einsum("abfc,cdeg,db,fa,ge"          , Wcace      , Deaaa      , E1aa       , deltacc    , deltaaa    )
energy+=  2.0*np.einsum("abgc,cdef,defb,ga"           , Wcace      , Deaaa      , E2aaaa     , deltacc    )
energy+= -1.0*np.einsum("afbc,cdeg,db,fa,ge"          , Wccae      , Deaaa      , E1aa       , deltacc    , deltaaa    )
energy+= -1.0*np.einsum("agbc,cdef,defb,ga"           , Wccae      , Deaaa      , E2aaaa     , deltacc    )
energy+=  1.0*np.einsum("abcd,aefb,efdc"              , Weaaa      , Deaaa      , E2aaaa     )
energy+=  1.0*np.einsum("abcd,aefg,bedc,gf"           , Weaaa      , Deaaa      , E2aaaa     , deltaaa    )
energy+=  1.0*np.einsum("abcd,aefg,befdgc"            , Weaaa      , Deaaa      , E3aaaaaa   )
energy+=  1.0*np.einsum("ab,acde,cb,ed"               , Wea        , Deaaa      , E1aa       , deltaaa    )
energy+=  1.0*np.einsum("ab,acde,cdeb"                , Wea        , Deaaa      , E2aaaa     )
print "energy: {:25.9f}".format(energy)

energy=0
energy+= -2.0*np.einsum("afbc,bdce,de,fa"             , Wccca      , Dcaaa      , E1aa       , deltacc    )
energy+=  1.0*np.einsum("afbc,bdec,de,fa"             , Wccca      , Dcaaa      , E1aa       , deltacc    )
energy+=  4.0*np.einsum("abfc,bdce,de,fa"             , Wccca      , Dcaaa      , E1aa       , deltacc    )
energy+= -2.0*np.einsum("abfc,bdec,de,fa"             , Wccca      , Dcaaa      , E1aa       , deltacc    )
energy+=  1.0*np.einsum("agbc,bdef,cdef,ga"           , Wccca      , Dcaaa      , E2aaaa     , deltacc    )
energy+= -2.0*np.einsum("abgc,bdef,cdef,ga"           , Wccca      , Dcaaa      , E2aaaa     , deltacc    )
energy+=  2.0*np.einsum("ab,acbd,cd"                  , Wca        , Dcaaa      , E1aa       )
energy+= -1.0*np.einsum("ab,acdb,cd"                  , Wca        , Dcaaa      , E1aa       )
energy+= -1.0*np.einsum("ab,acde,bcde"                , Wca        , Dcaaa      , E2aaaa     )
energy+= -1.0*np.einsum("abcd,aebc,ed"                , Wcaaa      , Dcaaa      , E1aa       )
energy+=  2.0*np.einsum("abcd,aecb,ed"                , Wcaaa      , Dcaaa      , E1aa       )
energy+= -1.0*np.einsum("abcd,aebf,cedf"              , Wcaaa      , Dcaaa      , E2aaaa     )
energy+=  2.0*np.einsum("abcd,aecf,bedf"              , Wcaaa      , Dcaaa      , E2aaaa     )
energy+= -1.0*np.einsum("abcd,aefb,cefd"              , Wcaaa      , Dcaaa      , E2aaaa     )
energy+= -1.0*np.einsum("abcd,aefc,bedf"              , Wcaaa      , Dcaaa      , E2aaaa     )
energy+= -1.0*np.einsum("abcd,aefg,bcedfg"            , Wcaaa      , Dcaaa      , E3aaaaaa   )
print "energy: {:25.9f}".format(energy)

#for A in range(Deecc.shape[0]):
# for B in range(Deecc.shape[1]):
#  for C in range(Deecc.shape[2]):
#   for D in range(Deecc.shape[3]):
#      print 'Dcoef  {:5} {:5} {:5} {:5} {:13.6f}'.format(A,B,C,D,Deecc[A,B,C,D])
#for A in range(Deeca.shape[0]):
# for B in range(Deeca.shape[1]):
#  for C in range(Deeca.shape[2]):
#   for D in range(Deeca.shape[3]):
#      print 'Dcoef  {:5} {:5} {:5} {:5} {:13.6f}'.format(A,B,C,D,Deeca[A,B,C,D])
#for A in range(Dccae.shape[0]):
# for B in range(Dccae.shape[1]):
#  for C in range(Dccae.shape[2]):
#   for D in range(Dccae.shape[3]):
#      print 'Dcoef  {:5} {:5} {:5} {:5} {:13.6f}'.format(A,B,C,D,Dccae[A,B,C,D])
#for A in range(Deeaa.shape[0]):
# for B in range(Deeaa.shape[1]):
#  for C in range(Deeaa.shape[2]):
#   for D in range(Deeaa.shape[3]):
#      print 'Dcoef  {:5} {:5} {:5} {:5} {:13.6f}'.format(A,B,C,D,Deeaa[A,B,C,D])
#for A in range(Dccaa.shape[0]):
# for B in range(Dccaa.shape[1]):
#  for C in range(Dccaa.shape[2]):
#   for D in range(Dccaa.shape[3]):
#      print 'Dcoef  {:5} {:5} {:5} {:5} {:13.6f}'.format(A,B,C,D,Dccaa[A,B,C,D])
#for A in range(Deaca.shape[0]):
# for B in range(Deaca.shape[1]):
#  for C in range(Deaca.shape[2]):
#   for D in range(Deaca.shape[3]):
#      print 'Dcoef1 {:5} {:5} {:5} {:5} {:13.6f}'.format(A,B,C,D,Deaca[A,B,C,D])
#for A in range(Daeca.shape[0]):
# for B in range(Daeca.shape[1]):
#  for C in range(Daeca.shape[2]):
#   for D in range(Daeca.shape[3]):
#      print 'Dcoef2 {:5} {:5} {:5} {:5} {:13.6f}'.format(A,B,C,D,Daeca[A,B,C,D])
#for A in range(Deaaa.shape[0]):
# for B in range(Deaaa.shape[1]):
#  for C in range(Deaaa.shape[2]):
#   for D in range(Deaaa.shape[3]):
#      print 'Dcoef  {:5} {:5} {:5} {:5} {:13.6f}'.format(A,B,C,D,Deaaa[A,B,C,D])
#for A in range(Dcaaa.shape[0]):
# for B in range(Dcaaa.shape[1]):
#  for C in range(Dcaaa.shape[2]):
#   for D in range(Dcaaa.shape[3]):
#      print 'Dcoef  {:5} {:5} {:5} {:5} {:13.6f}'.format(A,B,C,D,Dcaaa[A,B,C,D])

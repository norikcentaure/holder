[1]
['other', 'h0']
//
// With the unique tensors found, |Psi1> is:
// d_vvcc  E_vc E_vc        Class:vvcc   OccPattern: -2  0  2
// d_vvca  E_vc E_va        Class:vvca   OccPattern: -1 -1  2
// d_ccav  E_ac E_vc        Class:ccav   OccPattern: -2  1  1
// d_vvaa  E_va E_va        Class:vvaa   OccPattern:  0 -2  2
// d_ccaa  E_ac E_ac        Class:ccaa   OccPattern: -2  2  0
// d_vaca  E_vc E_aa        Class:vaca   OccPattern: -1  0  1
// d_avca  E_ac E_va        Class:avca   OccPattern: -1  0  1
// d_vaaa  E_va E_aa        Class:vaaa   OccPattern:  0 -1  1
// d_caaa  E_ac E_aa        Class:caaa   OccPattern: -1  1  0
//
// With the unique tensors found, <Psi1| is:
// d_vvcc  E_cv E_cv        Class:vvcc   OccPattern:  2  0 -2
// d_vvca  E_av E_cv        Class:vvca   OccPattern:  1  1 -2
// d_ccav  E_cv E_ca        Class:ccav   OccPattern:  2 -1 -1
// d_vvaa  E_av E_av        Class:vvaa   OccPattern:  0  2 -2
// d_ccaa  E_ca E_ca        Class:ccaa   OccPattern:  2 -2  0
// d_vaca  E_aa E_cv        Class:vaca   OccPattern:  1  0 -1
// d_avca  E_av E_ca        Class:avca   OccPattern:  1  0 -1
// d_vaaa  E_aa E_av        Class:vaaa   OccPattern:  0  1 -1
// d_caaa  E_aa E_ca        Class:caaa   OccPattern:  1 -1  0
//
// To make up E4(AB<-CD), there is 3*3*3*3=81 possible 4-tuples
// some of them are redundant are skipped.
//  1 "cccc" included as  cccc
//  2 "ccca" skipped (see ccac)
//  3 "cccv" included as  cccv
//  4 "ccac" included as  ccac
//  5 "ccaa" included as  ccaa
//  6 "ccav" included as  ccav
//  7 "ccvc" skipped (see cccv)
//  8 "ccva" skipped (see ccav)
//  9 "ccvv" included as  ccvv
// 10 "cacc" skipped (see accc)
// 11 "caca" skipped (see acac)
// 12 "cacv" skipped (see acvc)
// 13 "caac" skipped (see acca)
// 14 "caaa" skipped (see acaa)
// 15 "caav" skipped (see acva)
// 16 "cavc" skipped (see accv)
// 17 "cava" skipped (see acav)
// 18 "cavv" skipped (see acvv)
// 19 "cvcc" included as  cvcc
// 20 "cvca" included as  cvca
// 21 "cvcv" included as  cvcv
// 22 "cvac" included as  cvac
// 23 "cvaa" included as  cvaa
// 24 "cvav" included as  cvav
// 25 "cvvc" included as  cvvc
// 26 "cvva" included as  cvva
// 27 "cvvv" included as  cvvv
// 28 "accc" included as  accc
// 29 "acca" included as  acca
// 30 "accv" included as  accv
// 31 "acac" included as  acac
// 32 "acaa" included as  acaa
// 33 "acav" included as  acav
// 34 "acvc" included as  acvc
// 35 "acva" included as  acva
// 36 "acvv" included as  acvv
// 37 "aacc" included as  aacc
// 38 "aaca" skipped (see aaac)
// 39 "aacv" included as  aacv
// 40 "aaac" included as  aaac
// 41 "aaaa" included as  aaaa
// 42 "aaav" included as  aaav
// 43 "aavc" skipped (see aacv)
// 44 "aava" skipped (see aaav)
// 45 "aavv" included as  aavv
// 46 "avcc" included as  avcc
// 47 "avca" included as  avca
// 48 "avcv" included as  avcv
// 49 "avac" included as  avac
// 50 "avaa" included as  avaa
// 51 "avav" included as  avav
// 52 "avvc" included as  avvc
// 53 "avva" included as  avva
// 54 "avvv" included as  avvv
// 55 "vccc" skipped (see cvcc)
// 56 "vcca" skipped (see cvac)
// 57 "vccv" skipped (see cvvc)
// 58 "vcac" skipped (see cvca)
// 59 "vcaa" skipped (see cvaa)
// 60 "vcav" skipped (see cvva)
// 61 "vcvc" skipped (see cvcv)
// 62 "vcva" skipped (see cvav)
// 63 "vcvv" skipped (see cvvv)
// 64 "vacc" skipped (see avcc)
// 65 "vaca" skipped (see avac)
// 66 "vacv" skipped (see avvc)
// 67 "vaac" skipped (see avca)
// 68 "vaaa" skipped (see avaa)
// 69 "vaav" skipped (see avva)
// 70 "vavc" skipped (see avcv)
// 71 "vava" skipped (see avav)
// 72 "vavv" skipped (see avvv)
// 73 "vvcc" included as  vvcc
// 74 "vvca" skipped (see vvac)
// 75 "vvcv" included as  vvcv
// 76 "vvac" included as  vvac
// 77 "vvaa" included as  vvaa
// 78 "vvav" included as  vvav
// 79 "vvvc" skipped (see vvcv)
// 80 "vvva" skipped (see vvav)
// 81 "vvvv" included as  vvvv
// Sum of factors: 90
//
//
//
// With the unique tensors found, the Hamiltonian is:
// w_vvcc  E_vvcc    (1)    Class:vvcc   OccPattern: -2  0  2
// w_vvca  E_vvac    (2)    Class:vvca   OccPattern: -1 -1  2
// w_ccav  E_avcc    (2)    Class:ccav   OccPattern: -2  1  1
// w_vvaa  E_vvaa    (1)    Class:vvaa   OccPattern:  0 -2  2
// w_ccaa  E_aacc    (1)    Class:ccaa   OccPattern: -2  2  0
// w_cccv  E_cvcc    (2)    Class:vaca   OccPattern: -1  0  1
// w_avca  E_avca    (2)    Class:vaca   OccPattern: -1  0  1
// w_vaca  E_avac    (2)    Class:vaca   OccPattern: -1  0  1
// w_vc    E_vc      (1)    Class:vaca   OccPattern: -1  0  1
// w_vvvc  E_vvcv    (2)    Class:vaca   OccPattern: -1  0  1
// w_cacv  E_cvca    (2)    Class:vaaa   OccPattern:  0 -1  1
// w_ccav  E_cvac    (2)    Class:vaaa   OccPattern:  0 -1  1
// w_vaaa  E_avaa    (2)    Class:vaaa   OccPattern:  0 -1  1
// w_va    E_va      (1)    Class:vaaa   OccPattern:  0 -1  1
// w_vvva  E_vvav    (2)    Class:vaaa   OccPattern:  0 -1  1
// w_ccca  E_accc    (2)    Class:caaa   OccPattern: -1  1  0
// w_ca    E_ac      (1)    Class:caaa   OccPattern: -1  1  0
// w_caaa  E_aaac    (2)    Class:caaa   OccPattern: -1  1  0
// w_avcv  E_avcv    (2)    Class:caaa   OccPattern: -1  1  0
// w_vvca  E_avvc    (2)    Class:caaa   OccPattern: -1  1  0
// w_cccc  E_cccc    (1)    Class:h0     OccPattern:  0  0  0
// w_cc    E_cc      (1)    Class:h0     OccPattern:  0  0  0
// w_cvcv  E_cvcv    (2)    Class:h0     OccPattern:  0  0  0
// w_vvcc  E_cvvc    (2)    Class:h0     OccPattern:  0  0  0
// w_ccaa  E_acca    (2)    Class:h0     OccPattern:  0  0  0
// w_caca  E_acac    (2)    Class:h0     OccPattern:  0  0  0
// w_aaaa  E_aaaa    (1)    Class:h0     OccPattern:  0  0  0
// w_aa    E_aa      (1)    Class:h0     OccPattern:  0  0  0
// w_avav  E_avav    (2)    Class:h0     OccPattern:  0  0  0
// w_vvaa  E_avva    (2)    Class:h0     OccPattern:  0  0  0
// w_vvvv  E_vvvv    (1)    Class:h0     OccPattern:  0  0  0
// w_vv    E_vv      (1)    Class:h0     OccPattern:  0  0  0
// w_cccv  E_cccv    (2)    Class:other  OccPattern:  1  0 -1
// w_ccca  E_ccac    (2)    Class:other  OccPattern:  1 -1  0
// w_ccaa  E_ccaa    (1)    Class:other  OccPattern:  2 -2  0
// w_ccav  E_ccav    (2)    Class:other  OccPattern:  2 -1 -1
// w_vvcc  E_ccvv    (1)    Class:other  OccPattern:  2  0 -2
// w_ca    E_ca      (1)    Class:other  OccPattern:  1 -1  0
// w_avca  E_cvaa    (2)    Class:other  OccPattern:  1 -2  1
// w_avcv  E_cvav    (2)    Class:other  OccPattern:  1 -1  0
// w_vvca  E_cvva    (2)    Class:other  OccPattern:  1 -1  0
// w_vvvc  E_cvvv    (2)    Class:other  OccPattern:  1  0 -1
// w_vc    E_cv      (1)    Class:other  OccPattern:  1  0 -1
// w_ccav  E_accv    (2)    Class:other  OccPattern:  0  1 -1
// w_caaa  E_acaa    (2)    Class:other  OccPattern:  1 -1  0
// w_vaca  E_acav    (2)    Class:other  OccPattern:  1  0 -1
// w_cacv  E_acvc    (2)    Class:other  OccPattern:  0  1 -1
// w_avca  E_acva    (2)    Class:other  OccPattern:  1  0 -1
// w_vvca  E_acvv    (2)    Class:other  OccPattern:  1  1 -2
// w_avca  E_aacv    (2)    Class:other  OccPattern: -1  2 -1
// w_vaaa  E_aaav    (2)    Class:other  OccPattern:  0  1 -1
// w_vvaa  E_aavv    (1)    Class:other  OccPattern:  0  2 -2
// w_vvva  E_avvv    (2)    Class:other  OccPattern:  0  1 -1
// w_va    E_av      (1)    Class:other  OccPattern:  0  1 -1
//
// The actual calculation yields:
// for V of class vvcc
// for V of class vvca
// for V of class ccav
// for V of class vvaa
// for V of class ccaa
// for V of class vaca
// for V of class vaaa
// for V of class caaa
// for V of class other
// for V of class h0
// <E_av E_cv  | E_cccc  | E_vc E_va > =   12    Class:h0    
// <E_av E_cv  | E_cc    | E_vc E_va > =    4    Class:h0    
// <E_av E_cv  | E_cvcv  | E_vc E_va > =    6    Class:h0    
// <E_av E_cv  | E_cvvc  | E_vc E_va > =    6    Class:h0    
// <E_av E_cv  | E_acca  | E_vc E_va > =    4    Class:h0    
// <E_av E_cv  | E_acac  | E_vc E_va > =    4    Class:h0    
// <E_av E_cv  | E_aaaa  | E_vc E_va > =    2    Class:h0    
// <E_av E_cv  | E_aa    | E_vc E_va > =    2    Class:h0    
// <E_av E_cv  | E_avav  | E_vc E_va > =    3    Class:h0    
// <E_av E_cv  | E_avva  | E_vc E_va > =    3    Class:h0    
// <E_av E_cv  | E_vvvv  | E_vc E_va > =    4    Class:h0    
// <E_av E_cv  | E_vv    | E_vc E_va > =    3    Class:h0    
namespace MRLCC3 {

  FTensorDecl TensorDecls[39] = {
    /*  0*/{"AO"     , "aa"       , "", USAGE_Amplitude   },
    /*  1*/{"AO"     , "aaaa"     , "", USAGE_Amplitude   },
    /*  2*/{"AO"     , "aeae"     , "", USAGE_Amplitude   },
    /*  3*/{"AO"     , "caca"     , "", USAGE_Amplitude   },
    /*  4*/{"AO"     , "cc"       , "", USAGE_Amplitude   },
    /*  5*/{"AO"     , "ccaa"     , "", USAGE_Amplitude   },
    /*  6*/{"AO"     , "cccc"     , "", USAGE_Amplitude   },
    /*  7*/{"AO"     , "cece"     , "", USAGE_Amplitude   },
    /*  8*/{"AO"     , "ee"       , "", USAGE_Amplitude   },
    /*  9*/{"AO"     , "eeaa"     , "", USAGE_Amplitude   },
    /* 10*/{"AO"     , "eecc"     , "", USAGE_Amplitude   },
    /* 11*/{"AO"     , "eeee"     , "", USAGE_Amplitude   },
    /* 12*/{"W"      , "aaaa"     , "", USAGE_Amplitude   },
    /* 13*/{"W"      , "aeae"     , "", USAGE_Amplitude   },
    /* 14*/{"W"      , "caca"     , "", USAGE_Amplitude   },
    /* 15*/{"W"      , "ccaa"     , "", USAGE_Amplitude   },
    /* 16*/{"W"      , "cccc"     , "", USAGE_Amplitude   },
    /* 17*/{"W"      , "cece"     , "", USAGE_Amplitude   },
    /* 18*/{"W"      , "eeaa"     , "", USAGE_Amplitude   },
    /* 19*/{"W"      , "eecc"     , "", USAGE_Amplitude   },
    /* 20*/{"W"      , "eeee"     , "", USAGE_Amplitude   },
    /* 21*/{"k"      , "aa"       , "", USAGE_Amplitude   },
    /* 22*/{"k"      , "cc"       , "", USAGE_Amplitude   },
    /* 23*/{"k"      , "ee"       , "", USAGE_Amplitude   },
    /* 24*/{"D"      , "aeca"     , "", USAGE_Hamiltonian },
    /* 25*/{"D"      , "caaa"     , "", USAGE_Hamiltonian },
    /* 26*/{"D"      , "ccaa"     , "", USAGE_Hamiltonian },
    /* 27*/{"D"      , "ccae"     , "", USAGE_Hamiltonian },
    /* 28*/{"D"      , "eaaa"     , "", USAGE_Hamiltonian },
    /* 29*/{"D"      , "eaca"     , "", USAGE_Hamiltonian },
    /* 30*/{"D"      , "eeaa"     , "", USAGE_Hamiltonian },
    /* 31*/{"D"      , "eeca"     , "", USAGE_Hamiltonian },
    /* 32*/{"D"      , "eecc"     , "", USAGE_Hamiltonian },
    /* 33*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 34*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 35*/{"delta"  , "ee"       , "", USAGE_Density     },
    /* 36*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 37*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 38*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

	FEqInfo EqsRes[53] = {
    {"abef,cgad,chad,di,ea,fb,gc,hc,id",   1.0,   9, { 6,31,31,36,34,34,35,35,33}},  //   1.0 AO[abef] D[cgad] D[chad] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"abef,cgbd,chbd,di,ea,fb,gc,hc,id",   1.0,   9, { 6,31,31,36,34,34,35,35,33}},  //   1.0 AO[abef] D[cgbd] D[chbd] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"abfg,chde,cide,ej,fa,gb,hc,ic,je",  -2.0,   9, { 6,31,31,36,34,34,35,35,33}},  //  -2.0 AO[abfg] D[chde] D[cide] E1[ej] delta[fa] delta[gb] delta[hc] delta[ic] delta[je] 
    {"abfg,cdae,cdae,eh,fa,gb,he",        -2.0,   7, { 6,31,31,36,34,34,33}},        //  -2.0 AO[abfg] D[cdae] D[cdae] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abfg,cdbe,cdbe,eh,fa,gb,he",        -2.0,   7, { 6,31,31,36,34,34,33}},        //  -2.0 AO[abfg] D[cdbe] D[cdbe] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abgh,cdef,cdef,fi,ga,hb,if",         4.0,   7, { 6,31,31,36,34,34,33}},        //   4.0 AO[abgh] D[cdef] D[cdef] E1[fi] delta[ga] delta[hb] delta[if] 
    {"abfe,cgad,chad,di,ea,fb,gc,hc,id",  -0.5,   9, { 6,31,31,36,34,34,35,35,33}},  //  -0.5 AO[abfe] D[cgad] D[chad] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"abfe,cgbd,chbd,di,ea,fb,gc,hc,id",  -0.5,   9, { 6,31,31,36,34,34,35,35,33}},  //  -0.5 AO[abfe] D[cgbd] D[chbd] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"abgf,chde,cide,ej,fa,gb,hc,ic,je",   1.0,   9, { 6,31,31,36,34,34,35,35,33}},  //   1.0 AO[abgf] D[chde] D[cide] E1[ej] delta[fa] delta[gb] delta[hc] delta[ic] delta[je] 
    {"abgf,cdae,cdae,eh,fa,gb,he",         1.0,   7, { 6,31,31,36,34,34,33}},        //   1.0 AO[abgf] D[cdae] D[cdae] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abgf,cdbe,cdbe,eh,fa,gb,he",         1.0,   7, { 6,31,31,36,34,34,33}},        //   1.0 AO[abgf] D[cdbe] D[cdbe] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abhg,cdef,cdef,fi,ga,hb,if",        -2.0,   7, { 6,31,31,36,34,34,33}},        //  -2.0 AO[abhg] D[cdef] D[cdef] E1[fi] delta[ga] delta[hb] delta[if] 
    {"ad,beac,bfac,cg,da,eb,fb,gc",        1.0,   8, { 4,31,31,36,34,35,35,33}},     //   1.0 AO[ad] D[beac] D[bfac] E1[cg] delta[da] delta[eb] delta[fb] delta[gc] 
    {"ae,bfcd,bgcd,dh,ea,fb,gb,hd",       -2.0,   8, { 4,31,31,36,34,35,35,33}},     //  -2.0 AO[ae] D[bfcd] D[bgcd] E1[dh] delta[ea] delta[fb] delta[gb] delta[hd] 
    {"ae,bcad,bcad,df,ea,fd",             -2.0,   6, { 4,31,31,36,34,33}},           //  -2.0 AO[ae] D[bcad] D[bcad] E1[df] delta[ea] delta[fd] 
    {"af,bcde,bcde,eg,fa,ge",              4.0,   6, { 4,31,31,36,34,33}},           //   4.0 AO[af] D[bcde] D[bcde] E1[eg] delta[fa] delta[ge] 
    {"abde,bfac,bgac,ch,da,eb,fb,gb,hc",   2.0,   9, { 7,31,31,36,34,35,35,35,33}},  //   2.0 AO[abde] D[bfac] D[bgac] E1[ch] delta[da] delta[eb] delta[fb] delta[gb] delta[hc] 
    {"abef,bgcd,bhcd,di,ea,fb,gb,hb,id",  -4.0,   9, { 7,31,31,36,34,35,35,35,33}},  //  -4.0 AO[abef] D[bgcd] D[bhcd] E1[di] delta[ea] delta[fb] delta[gb] delta[hb] delta[id] 
    {"abef,bcad,bcad,dg,ea,fb,gd",        -2.0,   7, { 7,31,31,36,34,35,33}},        //  -2.0 AO[abef] D[bcad] D[bcad] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abfg,bcde,bcde,eh,fa,gb,he",         4.0,   7, { 7,31,31,36,34,35,33}},        //   4.0 AO[abfg] D[bcde] D[bcde] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abef,cbad,cbad,dg,ea,fb,gd",        -2.0,   7, { 7,31,31,36,34,35,33}},        //  -2.0 AO[abef] D[cbad] D[cbad] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abfg,cbde,cbde,eh,fa,gb,he",         4.0,   7, { 7,31,31,36,34,35,33}},        //   4.0 AO[abfg] D[cbde] D[cbde] E1[eh] delta[fa] delta[gb] delta[he] 
    {"adbe,afbc,agbc,ch,da,eb,fa,ga,hc",  -4.0,   9, {10,31,31,36,35,34,35,35,33}},  //  -4.0 AO[adbe] D[afbc] D[agbc] E1[ch] delta[da] delta[eb] delta[fa] delta[ga] delta[hc] 
    {"aebf,agcd,ahcd,di,ea,fb,ga,ha,id",   2.0,   9, {10,31,31,36,35,34,35,35,33}},  //   2.0 AO[aebf] D[agcd] D[ahcd] E1[di] delta[ea] delta[fb] delta[ga] delta[ha] delta[id] 
    {"aebf,acbd,acbd,dg,ea,fb,gd",         4.0,   7, {10,31,31,36,35,34,33}},        //   4.0 AO[aebf] D[acbd] D[acbd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"afbg,acde,acde,eh,fa,gb,he",        -2.0,   7, {10,31,31,36,35,34,33}},        //  -2.0 AO[afbg] D[acde] D[acde] E1[eh] delta[fa] delta[gb] delta[he] 
    {"aebf,cabd,cabd,dg,ea,fb,gd",         1.0,   7, {10,31,31,36,35,34,33}},        //   1.0 AO[aebf] D[cabd] D[cabd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"afbg,cade,cade,eh,fa,gb,he",        -2.0,   7, {10,31,31,36,35,34,33}},        //  -2.0 AO[afbg] D[cade] D[cade] E1[eh] delta[fa] delta[gb] delta[he] 
    {"afbc,dgae,dhae,beic,fa,gd,hd,ie",    1.0,   8, { 5,31,31,37,34,35,35,33}},     //   1.0 AO[afbc] D[dgae] D[dhae] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"agbc,dhef,dief,bfcj,ga,hd,id,jf",    1.0,   8, { 5,31,31,37,34,35,35,33}},     //   1.0 AO[agbc] D[dhef] D[dief] E2[bfcj] delta[ga] delta[hd] delta[id] delta[jf] 
    {"agbc,deaf,deaf,bfch,ga,hf",          1.0,   6, { 5,31,31,37,34,33}},           //   1.0 AO[agbc] D[deaf] D[deaf] E2[bfch] delta[ga] delta[hf] 
    {"ahbc,defg,defg,bgci,ha,ig",         -2.0,   6, { 5,31,31,37,34,33}},           //  -2.0 AO[ahbc] D[defg] D[defg] E2[bgci] delta[ha] delta[ig] 
    {"abfc,dgae,dhae,beci,fa,gd,hd,ie",    1.0,   8, { 3,31,31,37,34,35,35,33}},     //   1.0 AO[abfc] D[dgae] D[dhae] E2[beci] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"abgc,dhef,dief,bfcj,ga,hd,id,jf",   -2.0,   8, { 3,31,31,37,34,35,35,33}},     //  -2.0 AO[abgc] D[dhef] D[dief] E2[bfcj] delta[ga] delta[hd] delta[id] delta[jf] 
    {"abgc,deaf,deaf,bfch,ga,hf",         -2.0,   6, { 3,31,31,37,34,33}},           //  -2.0 AO[abgc] D[deaf] D[deaf] E2[bfch] delta[ga] delta[hf] 
    {"abhc,defg,defg,bgci,ha,ig",          4.0,   6, { 3,31,31,37,34,33}},           //   4.0 AO[abhc] D[defg] D[defg] E2[bgci] delta[ha] delta[ig] 
    {"abcd,ehfg,eifg,abgcdj,he,ie,jg",    -0.5,   7, { 1,31,31,38,35,35,33}},        //  -0.5 AO[abcd] D[ehfg] D[eifg] E3[abgcdj] delta[he] delta[ie] delta[jg] 
    {"abcd,efgh,efgh,abhcdi,ih",           1.0,   5, { 1,31,31,38,33}},              //   1.0 AO[abcd] D[efgh] D[efgh] E3[abhcdi] delta[ih] 
    {"ab,cfde,cgde,beah,fc,gc,he",        -1.0,   7, { 0,31,31,37,35,35,33}},        //  -1.0 AO[ab] D[cfde] D[cgde] E2[beah] delta[fc] delta[gc] delta[he] 
    {"ab,cdef,cdef,bfag,gf",               2.0,   5, { 0,31,31,37,33}},              //   2.0 AO[ab] D[cdef] D[cdef] E2[bfag] delta[gf] 
    {"abcf,bgde,bhde,aeci,fb,gb,hb,ie",   -2.0,   8, { 2,31,31,37,35,35,35,33}},     //  -2.0 AO[abcf] D[bgde] D[bhde] E2[aeci] delta[fb] delta[gb] delta[hb] delta[ie] 
    {"abcg,bdef,bdef,afch,gb,hf",          2.0,   6, { 2,31,31,37,35,33}},           //   2.0 AO[abcg] D[bdef] D[bdef] E2[afch] delta[gb] delta[hf] 
    {"abcg,dbef,dbef,afch,gb,hf",          2.0,   6, { 2,31,31,37,35,33}},           //   2.0 AO[abcg] D[dbef] D[dbef] E2[afch] delta[gb] delta[hf] 
    {"afbc,agde,ahde,beic,fa,ga,ha,ie",   -2.0,   8, { 9,31,31,37,35,35,35,33}},     //  -2.0 AO[afbc] D[agde] D[ahde] E2[beic] delta[fa] delta[ga] delta[ha] delta[ie] 
    {"agbc,adef,adef,bfch,ga,hf",         -1.0,   6, { 9,31,31,37,35,33}},           //  -1.0 AO[agbc] D[adef] D[adef] E2[bfch] delta[ga] delta[hf] 
    {"agbc,daef,daef,bfhc,ga,hf",          2.0,   6, { 9,31,31,37,35,33}},           //   2.0 AO[agbc] D[daef] D[daef] E2[bfhc] delta[ga] delta[hf] 
    {"abef,abcd,abcd,dg,ea,fb,gd",         1.0,   7, {11,31,31,36,35,35,33}},        //   1.0 AO[abef] D[abcd] D[abcd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abef,bacd,bacd,dg,ea,fb,gd",         1.0,   7, {11,31,31,36,35,35,33}},        //   1.0 AO[abef] D[bacd] D[bacd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abfe,abcd,abcd,dg,ea,fb,gd",        -0.5,   7, {11,31,31,36,35,35,33}},        //  -0.5 AO[abfe] D[abcd] D[abcd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abfe,bacd,bacd,dg,ea,fb,gd",        -0.5,   7, {11,31,31,36,35,35,33}},        //  -0.5 AO[abfe] D[bacd] D[bacd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"ad,aebc,afbc,cg,da,ea,fa,gc",       -2.0,   8, { 8,31,31,36,35,35,35,33}},     //  -2.0 AO[ad] D[aebc] D[afbc] E1[cg] delta[da] delta[ea] delta[fa] delta[gc] 
    {"ae,abcd,abcd,df,ea,fd",              2.0,   6, { 8,31,31,36,35,33}},           //   2.0 AO[ae] D[abcd] D[abcd] E1[df] delta[ea] delta[fd] 
    {"ae,bacd,bacd,df,ea,fd",              2.0,   6, { 8,31,31,36,35,33}},           //   2.0 AO[ae] D[bacd] D[bacd] E1[df] delta[ea] delta[fd] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 39;
    Out.EqsRes = FEqSet(&EqsRes[0], 53, "MRLCC3/Res");
  };
};

// Log:
//    0 cccc     evaluated
//    1 cccv     passed
//    2 ccac     passed
//    3 ccaa     passed
//    4 ccav     passed
//    5 ccvv     passed
//    6 cc       evaluated
//    7 ca       passed
//    8 cvcc     passed
//    9 cvca     passed
//   10 cvcv     evaluated
//   11 cvac     passed
//   12 cvaa     passed
//   13 cvav     passed
//   14 cvvc     evaluated
//   15 cvva     passed
//   16 cvvv     passed
//   17 cv       passed
//   18 accc     passed
//   19 acca     evaluated
//   20 accv     passed
//   21 acac     evaluated
//   22 acaa     passed
//   23 acav     passed
//   24 acvc     passed
//   25 acva     passed
//   26 acvv     passed
//   27 ac       passed
//   28 aacc     passed
//   29 aacv     passed
//   30 aaac     passed
//   31 aaaa     evaluated
//   32 aaav     passed
//   33 aavv     passed
//   34 aa       evaluated
//   35 avcc     passed
//   36 avca     passed
//   37 avcv     passed
//   38 avac     passed
//   39 avaa     passed
//   40 avav     evaluated
//   41 avvc     passed
//   42 avva     evaluated
//   43 avvv     passed
//   44 av       passed
//   45 vc       passed
//   46 va       passed
//   47 vvcc     passed
//   48 vvcv     passed
//   49 vvac     passed
//   50 vvaa     passed
//   51 vvav     passed
//   52 vvvv     evaluated
//   53 vv       evaluated

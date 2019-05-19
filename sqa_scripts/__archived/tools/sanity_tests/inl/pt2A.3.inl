[2]
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
// <E_cv E_ca  | E_cccc  | E_ac E_vc > =   40    Class:h0    
// <E_cv E_ca  | E_cc    | E_ac E_vc > =   10    Class:h0    
// <E_cv E_ca  | E_cvcv  | E_ac E_vc > =   10    Class:h0    
// <E_cv E_ca  | E_cvvc  | E_ac E_vc > =   10    Class:h0    
// <E_cv E_ca  | E_acca  | E_ac E_vc > =   25    Class:h0    
// <E_cv E_ca  | E_acac  | E_ac E_vc > =   25    Class:h0    
// <E_cv E_ca  | E_aaaa  | E_ac E_vc > =   20    Class:h0    
// <E_cv E_ca  | E_aa    | E_ac E_vc > =   10    Class:h0    
// <E_cv E_ca  | E_avav  | E_ac E_vc > =   10    Class:h0    
// <E_cv E_ca  | E_avva  | E_ac E_vc > =   10    Class:h0    
// <E_cv E_ca  | E_vvvv  | E_ac E_vc > =    0    Class:h0    
// <E_cv E_ca  | E_vv    | E_ac E_vc > =    4    Class:h0    
namespace MRLCC3 {

  FTensorDecl TensorDecls[37] = {
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
    /* 11*/{"W"      , "aaaa"     , "", USAGE_Amplitude   },
    /* 12*/{"W"      , "aeae"     , "", USAGE_Amplitude   },
    /* 13*/{"W"      , "caca"     , "", USAGE_Amplitude   },
    /* 14*/{"W"      , "ccaa"     , "", USAGE_Amplitude   },
    /* 15*/{"W"      , "cccc"     , "", USAGE_Amplitude   },
    /* 16*/{"W"      , "cece"     , "", USAGE_Amplitude   },
    /* 17*/{"W"      , "eeaa"     , "", USAGE_Amplitude   },
    /* 18*/{"W"      , "eecc"     , "", USAGE_Amplitude   },
    /* 19*/{"k"      , "aa"       , "", USAGE_Amplitude   },
    /* 20*/{"k"      , "cc"       , "", USAGE_Amplitude   },
    /* 21*/{"k"      , "ee"       , "", USAGE_Amplitude   },
    /* 22*/{"D"      , "aeca"     , "", USAGE_Hamiltonian },
    /* 23*/{"D"      , "caaa"     , "", USAGE_Hamiltonian },
    /* 24*/{"D"      , "ccaa"     , "", USAGE_Hamiltonian },
    /* 25*/{"D"      , "ccae"     , "", USAGE_Hamiltonian },
    /* 26*/{"D"      , "eaaa"     , "", USAGE_Hamiltonian },
    /* 27*/{"D"      , "eaca"     , "", USAGE_Hamiltonian },
    /* 28*/{"D"      , "eeaa"     , "", USAGE_Hamiltonian },
    /* 29*/{"D"      , "eeca"     , "", USAGE_Hamiltonian },
    /* 30*/{"D"      , "eecc"     , "", USAGE_Hamiltonian },
    /* 31*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 32*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 33*/{"delta"  , "ee"       , "", USAGE_Density     },
    /* 34*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 35*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 36*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

	FEqInfo EqsRes[174] = {
    {"abef,agcd,ahcd,ea,fb,ga,ha",         4.0,   7, { 6,25,25,32,32,32,32}},        //   4.0 AO[abef] D[agcd] D[ahcd] delta[ea] delta[fb] delta[ga] delta[ha] 
    {"abef,abcd,abcd,ea,fb",               2.0,   5, { 6,25,25,32,32}},              //   2.0 AO[abef] D[abcd] D[abcd] delta[ea] delta[fb] 
    {"abfg,acde,acde,fa,gb",              -4.0,   5, { 6,25,25,32,32}},              //  -4.0 AO[abfg] D[acde] D[acde] delta[fa] delta[gb] 
    {"abef,bacd,bacd,ea,fb",               2.0,   5, { 6,25,25,32,32}},              //   2.0 AO[abef] D[bacd] D[bacd] delta[ea] delta[fb] 
    {"abef,bgcd,bhcd,ea,fb,gb,hb",         4.0,   7, { 6,25,25,32,32,32,32}},        //   4.0 AO[abef] D[bgcd] D[bhcd] delta[ea] delta[fb] delta[gb] delta[hb] 
    {"abfg,bcde,bcde,fa,gb",              -4.0,   5, { 6,25,25,32,32}},              //  -4.0 AO[abfg] D[bcde] D[bcde] delta[fa] delta[gb] 
    {"abfg,cade,cade,fa,gb",              -4.0,   5, { 6,25,25,32,32}},              //  -4.0 AO[abfg] D[cade] D[cade] delta[fa] delta[gb] 
    {"abfg,cbde,cbde,fa,gb",              -4.0,   5, { 6,25,25,32,32}},              //  -4.0 AO[abfg] D[cbde] D[cbde] delta[fa] delta[gb] 
    {"abfg,chde,cide,fa,gb,hc,ic",        -4.0,   7, { 6,25,25,32,32,32,32}},        //  -4.0 AO[abfg] D[chde] D[cide] delta[fa] delta[gb] delta[hc] delta[ic] 
    {"abgh,cdef,cdef,ga,hb",               8.0,   5, { 6,25,25,32,32}},              //   8.0 AO[abgh] D[cdef] D[cdef] delta[ga] delta[hb] 
    {"abfe,agcd,ahcd,ea,fb,ga,ha",        -2.0,   7, { 6,25,25,32,32,32,32}},        //  -2.0 AO[abfe] D[agcd] D[ahcd] delta[ea] delta[fb] delta[ga] delta[ha] 
    {"abfe,abcd,abcd,ea,fb",              -1.0,   5, { 6,25,25,32,32}},              //  -1.0 AO[abfe] D[abcd] D[abcd] delta[ea] delta[fb] 
    {"abgf,acde,acde,fa,gb",               2.0,   5, { 6,25,25,32,32}},              //   2.0 AO[abgf] D[acde] D[acde] delta[fa] delta[gb] 
    {"abfe,bacd,bacd,ea,fb",              -1.0,   5, { 6,25,25,32,32}},              //  -1.0 AO[abfe] D[bacd] D[bacd] delta[ea] delta[fb] 
    {"abfe,bgcd,bhcd,ea,fb,gb,hb",        -2.0,   7, { 6,25,25,32,32,32,32}},        //  -2.0 AO[abfe] D[bgcd] D[bhcd] delta[ea] delta[fb] delta[gb] delta[hb] 
    {"abgf,bcde,bcde,fa,gb",               2.0,   5, { 6,25,25,32,32}},              //   2.0 AO[abgf] D[bcde] D[bcde] delta[fa] delta[gb] 
    {"abgf,cade,cade,fa,gb",               2.0,   5, { 6,25,25,32,32}},              //   2.0 AO[abgf] D[cade] D[cade] delta[fa] delta[gb] 
    {"abgf,cbde,cbde,fa,gb",               2.0,   5, { 6,25,25,32,32}},              //   2.0 AO[abgf] D[cbde] D[cbde] delta[fa] delta[gb] 
    {"abgf,chde,cide,fa,gb,hc,ic",         2.0,   7, { 6,25,25,32,32,32,32}},        //   2.0 AO[abgf] D[chde] D[cide] delta[fa] delta[gb] delta[hc] delta[ic] 
    {"abhg,cdef,cdef,ga,hb",              -4.0,   5, { 6,25,25,32,32}},              //  -4.0 AO[abhg] D[cdef] D[cdef] delta[ga] delta[hb] 
    {"abef,agcd,ahcd,ci,ea,fb,ga,ha,ic",  -2.0,   9, { 6,25,25,34,32,32,32,32,31}},  //  -2.0 AO[abef] D[agcd] D[ahcd] E1[ci] delta[ea] delta[fb] delta[ga] delta[ha] delta[ic] 
    {"abef,abcd,abcd,cg,ea,fb,gc",        -1.0,   7, { 6,25,25,34,32,32,31}},        //  -1.0 AO[abef] D[abcd] D[abcd] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"abfg,acde,acde,dh,fa,gb,hd",         2.0,   7, { 6,25,25,34,32,32,31}},        //   2.0 AO[abfg] D[acde] D[acde] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"abef,bacd,bacd,cg,ea,fb,gc",        -1.0,   7, { 6,25,25,34,32,32,31}},        //  -1.0 AO[abef] D[bacd] D[bacd] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"abef,bgcd,bhcd,ci,ea,fb,gb,hb,ic",  -2.0,   9, { 6,25,25,34,32,32,32,32,31}},  //  -2.0 AO[abef] D[bgcd] D[bhcd] E1[ci] delta[ea] delta[fb] delta[gb] delta[hb] delta[ic] 
    {"abfg,bcde,bcde,dh,fa,gb,hd",         2.0,   7, { 6,25,25,34,32,32,31}},        //   2.0 AO[abfg] D[bcde] D[bcde] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"abfg,cade,cade,dh,fa,gb,hd",         2.0,   7, { 6,25,25,34,32,32,31}},        //   2.0 AO[abfg] D[cade] D[cade] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"abfg,cbde,cbde,dh,fa,gb,hd",         2.0,   7, { 6,25,25,34,32,32,31}},        //   2.0 AO[abfg] D[cbde] D[cbde] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"abfg,chde,cide,dj,fa,gb,hc,ic,jd",   2.0,   9, { 6,25,25,34,32,32,32,32,31}},  //   2.0 AO[abfg] D[chde] D[cide] E1[dj] delta[fa] delta[gb] delta[hc] delta[ic] delta[jd] 
    {"abgh,cdef,cdef,ei,ga,hb,ie",        -4.0,   7, { 6,25,25,34,32,32,31}},        //  -4.0 AO[abgh] D[cdef] D[cdef] E1[ei] delta[ga] delta[hb] delta[ie] 
    {"abfe,agcd,ahcd,ci,ea,fb,ga,ha,ic",   1.0,   9, { 6,25,25,34,32,32,32,32,31}},  //   1.0 AO[abfe] D[agcd] D[ahcd] E1[ci] delta[ea] delta[fb] delta[ga] delta[ha] delta[ic] 
    {"abfe,abcd,abcd,cg,ea,fb,gc",         0.5,   7, { 6,25,25,34,32,32,31}},        //   0.5 AO[abfe] D[abcd] D[abcd] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"abgf,acde,acde,dh,fa,gb,hd",        -1.0,   7, { 6,25,25,34,32,32,31}},        //  -1.0 AO[abgf] D[acde] D[acde] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"abfe,bacd,bacd,cg,ea,fb,gc",         0.5,   7, { 6,25,25,34,32,32,31}},        //   0.5 AO[abfe] D[bacd] D[bacd] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"abfe,bgcd,bhcd,ci,ea,fb,gb,hb,ic",   1.0,   9, { 6,25,25,34,32,32,32,32,31}},  //   1.0 AO[abfe] D[bgcd] D[bhcd] E1[ci] delta[ea] delta[fb] delta[gb] delta[hb] delta[ic] 
    {"abgf,bcde,bcde,dh,fa,gb,hd",        -1.0,   7, { 6,25,25,34,32,32,31}},        //  -1.0 AO[abgf] D[bcde] D[bcde] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"abgf,cade,cade,dh,fa,gb,hd",        -1.0,   7, { 6,25,25,34,32,32,31}},        //  -1.0 AO[abgf] D[cade] D[cade] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"abgf,cbde,cbde,dh,fa,gb,hd",        -1.0,   7, { 6,25,25,34,32,32,31}},        //  -1.0 AO[abgf] D[cbde] D[cbde] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"abgf,chde,cide,dj,fa,gb,hc,ic,jd",  -1.0,   9, { 6,25,25,34,32,32,32,32,31}},  //  -1.0 AO[abgf] D[chde] D[cide] E1[dj] delta[fa] delta[gb] delta[hc] delta[ic] delta[jd] 
    {"abhg,cdef,cdef,ei,ga,hb,ie",         2.0,   7, { 6,25,25,34,32,32,31}},        //   2.0 AO[abhg] D[cdef] D[cdef] E1[ei] delta[ga] delta[hb] delta[ie] 
    {"ad,aebc,afbc,da,ea,fa",              4.0,   6, { 4,25,25,32,32,32}},           //   4.0 AO[ad] D[aebc] D[afbc] delta[da] delta[ea] delta[fa] 
    {"ae,abcd,abcd,ea",                   -4.0,   4, { 4,25,25,32}},                 //  -4.0 AO[ae] D[abcd] D[abcd] delta[ea] 
    {"ae,bacd,bacd,ea",                   -4.0,   4, { 4,25,25,32}},                 //  -4.0 AO[ae] D[bacd] D[bacd] delta[ea] 
    {"ae,bfcd,bgcd,ea,fb,gb",             -4.0,   6, { 4,25,25,32,32,32}},           //  -4.0 AO[ae] D[bfcd] D[bgcd] delta[ea] delta[fb] delta[gb] 
    {"af,bcde,bcde,fa",                    8.0,   4, { 4,25,25,32}},                 //   8.0 AO[af] D[bcde] D[bcde] delta[fa] 
    {"ad,aebc,afbc,bg,da,ea,fa,gb",       -2.0,   8, { 4,25,25,34,32,32,32,31}},     //  -2.0 AO[ad] D[aebc] D[afbc] E1[bg] delta[da] delta[ea] delta[fa] delta[gb] 
    {"ae,abcd,abcd,cf,ea,fc",              2.0,   6, { 4,25,25,34,32,31}},           //   2.0 AO[ae] D[abcd] D[abcd] E1[cf] delta[ea] delta[fc] 
    {"ae,bacd,bacd,cf,ea,fc",              2.0,   6, { 4,25,25,34,32,31}},           //   2.0 AO[ae] D[bacd] D[bacd] E1[cf] delta[ea] delta[fc] 
    {"ae,bfcd,bgcd,ch,ea,fb,gb,hc",        2.0,   8, { 4,25,25,34,32,32,32,31}},     //   2.0 AO[ae] D[bfcd] D[bgcd] E1[ch] delta[ea] delta[fb] delta[gb] delta[hc] 
    {"af,bcde,bcde,dg,fa,gd",             -4.0,   6, { 4,25,25,34,32,31}},           //  -4.0 AO[af] D[bcde] D[bcde] E1[dg] delta[fa] delta[gd] 
    {"abde,afcb,agcb,da,eb,fa,ga",         4.0,   7, { 7,25,25,32,33,32,32}},        //   4.0 AO[abde] D[afcb] D[agcb] delta[da] delta[eb] delta[fa] delta[ga] 
    {"abef,acdb,acdb,ea,fb",              -4.0,   5, { 7,25,25,32,33}},              //  -4.0 AO[abef] D[acdb] D[acdb] delta[ea] delta[fb] 
    {"abef,cadb,cadb,ea,fb",              -4.0,   5, { 7,25,25,32,33}},              //  -4.0 AO[abef] D[cadb] D[cadb] delta[ea] delta[fb] 
    {"abef,cgdb,chdb,ea,fb,gc,hc",        -4.0,   7, { 7,25,25,32,33,32,32}},        //  -4.0 AO[abef] D[cgdb] D[chdb] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abfg,cdeb,cdeb,fa,gb",               8.0,   5, { 7,25,25,32,33}},              //   8.0 AO[abfg] D[cdeb] D[cdeb] delta[fa] delta[gb] 
    {"abde,afcb,agcb,ch,da,eb,fa,ga,hc",  -2.0,   9, { 7,25,25,34,32,33,32,32,31}},  //  -2.0 AO[abde] D[afcb] D[agcb] E1[ch] delta[da] delta[eb] delta[fa] delta[ga] delta[hc] 
    {"abef,acdb,acdb,dg,ea,fb,gd",         2.0,   7, { 7,25,25,34,32,33,31}},        //   2.0 AO[abef] D[acdb] D[acdb] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abef,cadb,cadb,dg,ea,fb,gd",         2.0,   7, { 7,25,25,34,32,33,31}},        //   2.0 AO[abef] D[cadb] D[cadb] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abef,cgdb,chdb,di,ea,fb,gc,hc,id",   2.0,   9, { 7,25,25,34,32,33,32,32,31}},  //   2.0 AO[abef] D[cgdb] D[chdb] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"abfg,cdeb,cdeb,eh,fa,gb,he",        -4.0,   7, { 7,25,25,34,32,33,31}},        //  -4.0 AO[abfg] D[cdeb] D[cdeb] E1[eh] delta[fa] delta[gb] delta[he] 
    {"adbe,bfca,bgca,da,eb,fb,gb",        -8.0,   7, {10,25,25,33,32,32,32}},        //  -8.0 AO[adbe] D[bfca] D[bgca] delta[da] delta[eb] delta[fb] delta[gb] 
    {"aebf,bcda,bcda,ea,fb",               2.0,   5, {10,25,25,33,32}},              //   2.0 AO[aebf] D[bcda] D[bcda] delta[ea] delta[fb] 
    {"aebf,cbda,cbda,ea,fb",               8.0,   5, {10,25,25,33,32}},              //   8.0 AO[aebf] D[cbda] D[cbda] delta[ea] delta[fb] 
    {"aebf,cgda,chda,ea,fb,gc,hc",         2.0,   7, {10,25,25,33,32,32,32}},        //   2.0 AO[aebf] D[cgda] D[chda] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"afbg,cdea,cdea,fa,gb",              -4.0,   5, {10,25,25,33,32}},              //  -4.0 AO[afbg] D[cdea] D[cdea] delta[fa] delta[gb] 
    {"adbe,bfca,bgca,ch,da,eb,fb,gb,hc",   4.0,   9, {10,25,25,34,33,32,32,32,31}},  //   4.0 AO[adbe] D[bfca] D[bgca] E1[ch] delta[da] delta[eb] delta[fb] delta[gb] delta[hc] 
    {"aebf,bcda,bcda,dg,ea,fb,gd",        -1.0,   7, {10,25,25,34,33,32,31}},        //  -1.0 AO[aebf] D[bcda] D[bcda] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"aebf,cbda,cbda,dg,ea,fb,gd",        -4.0,   7, {10,25,25,34,33,32,31}},        //  -4.0 AO[aebf] D[cbda] D[cbda] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"aebf,cgda,chda,di,ea,fb,gc,hc,id",  -1.0,   9, {10,25,25,34,33,32,32,32,31}},  //  -1.0 AO[aebf] D[cgda] D[chda] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"afbg,cdea,cdea,eh,fa,gb,he",         2.0,   7, {10,25,25,34,33,32,31}},        //   2.0 AO[afbg] D[cdea] D[cdea] E1[eh] delta[fa] delta[gb] delta[he] 
    {"adbe,afbc,agbc,da,eb,fa,ga",        -8.0,   7, { 5,25,25,32,31,32,32}},        //  -8.0 AO[adbe] D[afbc] D[agbc] delta[da] delta[eb] delta[fa] delta[ga] 
    {"aebf,acbd,acbd,ea,fb",               8.0,   5, { 5,25,25,32,31}},              //   8.0 AO[aebf] D[acbd] D[acbd] delta[ea] delta[fb] 
    {"aebf,cabd,cabd,ea,fb",               2.0,   5, { 5,25,25,32,31}},              //   2.0 AO[aebf] D[cabd] D[cabd] delta[ea] delta[fb] 
    {"aebf,cgbd,chbd,ea,fb,gc,hc",         2.0,   7, { 5,25,25,32,31,32,32}},        //   2.0 AO[aebf] D[cgbd] D[chbd] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"afbg,cdbe,cdbe,fa,gb",              -4.0,   5, { 5,25,25,32,31}},              //  -4.0 AO[afbg] D[cdbe] D[cdbe] delta[fa] delta[gb] 
    {"aebc,afbd,agbd,bc,ea,fa,ga",         4.0,   7, { 5,25,25,34,32,32,32}},        //   4.0 AO[aebc] D[afbd] D[agbd] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"aebc,afcd,agcd,bc,ea,fa,ga",         4.0,   7, { 5,25,25,34,32,32,32}},        //   4.0 AO[aebc] D[afcd] D[agcd] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"afbc,agde,ahde,bc,fa,ga,ha",        -2.0,   7, { 5,25,25,34,32,32,32}},        //  -2.0 AO[afbc] D[agde] D[ahde] E1[bc] delta[fa] delta[ga] delta[ha] 
    {"afbc,adbe,adbe,bc,fa",              -4.0,   5, { 5,25,25,34,32}},              //  -4.0 AO[afbc] D[adbe] D[adbe] E1[bc] delta[fa] 
    {"afbc,adce,adce,bc,fa",              -4.0,   5, { 5,25,25,34,32}},              //  -4.0 AO[afbc] D[adce] D[adce] E1[bc] delta[fa] 
    {"agbc,adef,adef,bc,ga",               2.0,   5, { 5,25,25,34,32}},              //   2.0 AO[agbc] D[adef] D[adef] E1[bc] delta[ga] 
    {"afbc,dabe,dabe,bc,fa",              -1.0,   5, { 5,25,25,34,32}},              //  -1.0 AO[afbc] D[dabe] D[dabe] E1[bc] delta[fa] 
    {"afbc,dace,dace,bc,fa",              -1.0,   5, { 5,25,25,34,32}},              //  -1.0 AO[afbc] D[dace] D[dace] E1[bc] delta[fa] 
    {"agbc,daef,daef,bc,ga",               2.0,   5, { 5,25,25,34,32}},              //   2.0 AO[agbc] D[daef] D[daef] E1[bc] delta[ga] 
    {"afbc,dgbe,dhbe,bc,fa,gd,hd",        -1.0,   7, { 5,25,25,34,32,32,32}},        //  -1.0 AO[afbc] D[dgbe] D[dhbe] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"afbc,dgce,dhce,bc,fa,gd,hd",        -1.0,   7, { 5,25,25,34,32,32,32}},        //  -1.0 AO[afbc] D[dgce] D[dhce] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"agbc,dhef,dief,bc,ga,hd,id",         2.0,   7, { 5,25,25,34,32,32,32}},        //   2.0 AO[agbc] D[dhef] D[dief] E1[bc] delta[ga] delta[hd] delta[id] 
    {"agbc,debf,debf,bc,ga",               2.0,   5, { 5,25,25,34,32}},              //   2.0 AO[agbc] D[debf] D[debf] E1[bc] delta[ga] 
    {"agbc,decf,decf,bc,ga",               2.0,   5, { 5,25,25,34,32}},              //   2.0 AO[agbc] D[decf] D[decf] E1[bc] delta[ga] 
    {"ahbc,defg,defg,bc,ha",              -4.0,   5, { 5,25,25,34,32}},              //  -4.0 AO[ahbc] D[defg] D[defg] E1[bc] delta[ha] 
    {"afbc,agde,ahde,bdic,fa,ga,ha,id",   -2.0,   8, { 5,25,25,35,32,32,32,31}},     //  -2.0 AO[afbc] D[agde] D[ahde] E2[bdic] delta[fa] delta[ga] delta[ha] delta[id] 
    {"agbc,adef,adef,behc,ga,he",          2.0,   6, { 5,25,25,35,32,31}},           //   2.0 AO[agbc] D[adef] D[adef] E2[behc] delta[ga] delta[he] 
    {"agbc,daef,daef,bech,ga,he",         -1.0,   6, { 5,25,25,35,32,31}},           //  -1.0 AO[agbc] D[daef] D[daef] E2[bech] delta[ga] delta[he] 
    {"agbc,dhef,dief,becj,ga,hd,id,je",   -1.0,   8, { 5,25,25,35,32,32,32,31}},     //  -1.0 AO[agbc] D[dhef] D[dief] E2[becj] delta[ga] delta[hd] delta[id] delta[je] 
    {"ahbc,defg,defg,bfci,ha,if",          2.0,   6, { 5,25,25,35,32,31}},           //   2.0 AO[ahbc] D[defg] D[defg] E2[bfci] delta[ha] delta[if] 
    {"abde,afbc,agbc,da,eb,fa,ga",         4.0,   7, { 3,25,25,32,31,32,32}},        //   4.0 AO[abde] D[afbc] D[agbc] delta[da] delta[eb] delta[fa] delta[ga] 
    {"abef,acbd,acbd,ea,fb",              -4.0,   5, { 3,25,25,32,31}},              //  -4.0 AO[abef] D[acbd] D[acbd] delta[ea] delta[fb] 
    {"abef,cabd,cabd,ea,fb",              -4.0,   5, { 3,25,25,32,31}},              //  -4.0 AO[abef] D[cabd] D[cabd] delta[ea] delta[fb] 
    {"abef,cgbd,chbd,ea,fb,gc,hc",        -4.0,   7, { 3,25,25,32,31,32,32}},        //  -4.0 AO[abef] D[cgbd] D[chbd] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abfg,cdbe,cdbe,fa,gb",               8.0,   5, { 3,25,25,32,31}},              //   8.0 AO[abfg] D[cdbe] D[cdbe] delta[fa] delta[gb] 
    {"abec,afbd,agbd,bc,ea,fa,ga",        -2.0,   7, { 3,25,25,34,32,32,32}},        //  -2.0 AO[abec] D[afbd] D[agbd] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"abec,afcd,agcd,bc,ea,fa,ga",        -2.0,   7, { 3,25,25,34,32,32,32}},        //  -2.0 AO[abec] D[afcd] D[agcd] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"abfc,agde,ahde,bc,fa,ga,ha",         4.0,   7, { 3,25,25,34,32,32,32}},        //   4.0 AO[abfc] D[agde] D[ahde] E1[bc] delta[fa] delta[ga] delta[ha] 
    {"abfc,adbe,adbe,bc,fa",               2.0,   5, { 3,25,25,34,32}},              //   2.0 AO[abfc] D[adbe] D[adbe] E1[bc] delta[fa] 
    {"abfc,adce,adce,bc,fa",               2.0,   5, { 3,25,25,34,32}},              //   2.0 AO[abfc] D[adce] D[adce] E1[bc] delta[fa] 
    {"abgc,adef,adef,bc,ga",              -4.0,   5, { 3,25,25,34,32}},              //  -4.0 AO[abgc] D[adef] D[adef] E1[bc] delta[ga] 
    {"abfc,dabe,dabe,bc,fa",               2.0,   5, { 3,25,25,34,32}},              //   2.0 AO[abfc] D[dabe] D[dabe] E1[bc] delta[fa] 
    {"abfc,dace,dace,bc,fa",               2.0,   5, { 3,25,25,34,32}},              //   2.0 AO[abfc] D[dace] D[dace] E1[bc] delta[fa] 
    {"abgc,daef,daef,bc,ga",              -4.0,   5, { 3,25,25,34,32}},              //  -4.0 AO[abgc] D[daef] D[daef] E1[bc] delta[ga] 
    {"abfc,dgbe,dhbe,bc,fa,gd,hd",         2.0,   7, { 3,25,25,34,32,32,32}},        //   2.0 AO[abfc] D[dgbe] D[dhbe] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abfc,dgce,dhce,bc,fa,gd,hd",         2.0,   7, { 3,25,25,34,32,32,32}},        //   2.0 AO[abfc] D[dgce] D[dhce] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abgc,dhef,dief,bc,ga,hd,id",        -4.0,   7, { 3,25,25,34,32,32,32}},        //  -4.0 AO[abgc] D[dhef] D[dief] E1[bc] delta[ga] delta[hd] delta[id] 
    {"abgc,debf,debf,bc,ga",              -4.0,   5, { 3,25,25,34,32}},              //  -4.0 AO[abgc] D[debf] D[debf] E1[bc] delta[ga] 
    {"abgc,decf,decf,bc,ga",              -4.0,   5, { 3,25,25,34,32}},              //  -4.0 AO[abgc] D[decf] D[decf] E1[bc] delta[ga] 
    {"abhc,defg,defg,bc,ha",               8.0,   5, { 3,25,25,34,32}},              //   8.0 AO[abhc] D[defg] D[defg] E1[bc] delta[ha] 
    {"abfc,agde,ahde,bdci,fa,ga,ha,id",   -2.0,   8, { 3,25,25,35,32,32,32,31}},     //  -2.0 AO[abfc] D[agde] D[ahde] E2[bdci] delta[fa] delta[ga] delta[ha] delta[id] 
    {"abgc,adef,adef,bech,ga,he",          2.0,   6, { 3,25,25,35,32,31}},           //   2.0 AO[abgc] D[adef] D[adef] E2[bech] delta[ga] delta[he] 
    {"abgc,daef,daef,bech,ga,he",          2.0,   6, { 3,25,25,35,32,31}},           //   2.0 AO[abgc] D[daef] D[daef] E2[bech] delta[ga] delta[he] 
    {"abgc,dhef,dief,becj,ga,hd,id,je",    2.0,   8, { 3,25,25,35,32,32,32,31}},     //   2.0 AO[abgc] D[dhef] D[dief] E2[becj] delta[ga] delta[hd] delta[id] delta[je] 
    {"abhc,defg,defg,bfci,ha,if",         -4.0,   6, { 3,25,25,35,32,31}},           //  -4.0 AO[abhc] D[defg] D[defg] E2[bfci] delta[ha] delta[if] 
    {"abfc,dgae,dhae,bc,fa,gd,hd",        -1.0,   7, { 1,25,25,34,31,32,32}},        //  -1.0 AO[abfc] D[dgae] D[dhae] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abgc,deaf,deaf,bc,ga",               2.0,   5, { 1,25,25,34,31}},              //   2.0 AO[abgc] D[deaf] D[deaf] E1[bc] delta[ga] 
    {"abfc,dgbe,dhbe,ac,fb,gd,hd",         0.5,   7, { 1,25,25,34,31,32,32}},        //   0.5 AO[abfc] D[dgbe] D[dhbe] E1[ac] delta[fb] delta[gd] delta[hd] 
    {"abgc,debf,debf,ac,gb",              -1.0,   5, { 1,25,25,34,31}},              //  -1.0 AO[abgc] D[debf] D[debf] E1[ac] delta[gb] 
    {"abcf,dgae,dhae,bc,fa,gd,hd",         0.5,   7, { 1,25,25,34,31,32,32}},        //   0.5 AO[abcf] D[dgae] D[dhae] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abcg,deaf,deaf,bc,ga",              -1.0,   5, { 1,25,25,34,31}},              //  -1.0 AO[abcg] D[deaf] D[deaf] E1[bc] delta[ga] 
    {"abcf,dgbe,dhbe,ac,fb,gd,hd",        -1.0,   7, { 1,25,25,34,31,32,32}},        //  -1.0 AO[abcf] D[dgbe] D[dhbe] E1[ac] delta[fb] delta[gd] delta[hd] 
    {"abcg,debf,debf,ac,gb",               2.0,   5, { 1,25,25,34,31}},              //   2.0 AO[abcg] D[debf] D[debf] E1[ac] delta[gb] 
    {"abcd,egaf,ehaf,abcd,ge,he",          0.5,   6, { 1,25,25,35,32,32}},           //   0.5 AO[abcd] D[egaf] D[ehaf] E2[abcd] delta[ge] delta[he] 
    {"abcd,egbf,ehbf,abcd,ge,he",          0.5,   6, { 1,25,25,35,32,32}},           //   0.5 AO[abcd] D[egbf] D[ehbf] E2[abcd] delta[ge] delta[he] 
    {"abcd,egcf,ehcf,abcd,ge,he",          0.5,   6, { 1,25,25,35,32,32}},           //   0.5 AO[abcd] D[egcf] D[ehcf] E2[abcd] delta[ge] delta[he] 
    {"abcd,egdf,ehdf,abcd,ge,he",          0.5,   6, { 1,25,25,35,32,32}},           //   0.5 AO[abcd] D[egdf] D[ehdf] E2[abcd] delta[ge] delta[he] 
    {"abcd,ehfg,eifg,abcd,he,ie",         -1.0,   6, { 1,25,25,35,32,32}},           //  -1.0 AO[abcd] D[ehfg] D[eifg] E2[abcd] delta[he] delta[ie] 
    {"abcd,efag,efag,abcd",               -1.0,   4, { 1,25,25,35}},                 //  -1.0 AO[abcd] D[efag] D[efag] E2[abcd] 
    {"abcd,efbg,efbg,abcd",               -1.0,   4, { 1,25,25,35}},                 //  -1.0 AO[abcd] D[efbg] D[efbg] E2[abcd] 
    {"abcd,efcg,efcg,abcd",               -1.0,   4, { 1,25,25,35}},                 //  -1.0 AO[abcd] D[efcg] D[efcg] E2[abcd] 
    {"abcd,efdg,efdg,abcd",               -1.0,   4, { 1,25,25,35}},                 //  -1.0 AO[abcd] D[efdg] D[efdg] E2[abcd] 
    {"abcd,efgh,efgh,abcd",                2.0,   4, { 1,25,25,35}},                 //   2.0 AO[abcd] D[efgh] D[efgh] E2[abcd] 
    {"abcd,ehfg,eifg,abfcdj,he,ie,jf",     0.5,   7, { 1,25,25,36,32,32,31}},        //   0.5 AO[abcd] D[ehfg] D[eifg] E3[abfcdj] delta[he] delta[ie] delta[jf] 
    {"abcd,efgh,efgh,abgcdi,ig",          -1.0,   5, { 1,25,25,36,31}},              //  -1.0 AO[abcd] D[efgh] D[efgh] E3[abgcdi] delta[ig] 
    {"ad,beac,bfac,da,eb,fb",             -2.0,   6, { 0,25,25,31,32,32}},           //  -2.0 AO[ad] D[beac] D[bfac] delta[da] delta[eb] delta[fb] 
    {"ae,bcad,bcad,ea",                    4.0,   4, { 0,25,25,31}},                 //   4.0 AO[ae] D[bcad] D[bcad] delta[ea] 
    {"ab,cead,cfad,ba,ec,fc",              1.0,   6, { 0,25,25,34,32,32}},           //   1.0 AO[ab] D[cead] D[cfad] E1[ba] delta[ec] delta[fc] 
    {"ab,cebd,cfbd,ba,ec,fc",              1.0,   6, { 0,25,25,34,32,32}},           //   1.0 AO[ab] D[cebd] D[cfbd] E1[ba] delta[ec] delta[fc] 
    {"ab,cfde,cgde,ba,fc,gc",             -2.0,   6, { 0,25,25,34,32,32}},           //  -2.0 AO[ab] D[cfde] D[cgde] E1[ba] delta[fc] delta[gc] 
    {"ab,cdae,cdae,ba",                   -2.0,   4, { 0,25,25,34}},                 //  -2.0 AO[ab] D[cdae] D[cdae] E1[ba] 
    {"ab,cdbe,cdbe,ba",                   -2.0,   4, { 0,25,25,34}},                 //  -2.0 AO[ab] D[cdbe] D[cdbe] E1[ba] 
    {"ab,cdef,cdef,ba",                    4.0,   4, { 0,25,25,34}},                 //   4.0 AO[ab] D[cdef] D[cdef] E1[ba] 
    {"ab,cfde,cgde,bdah,fc,gc,hd",         1.0,   7, { 0,25,25,35,32,32,31}},        //   1.0 AO[ab] D[cfde] D[cgde] E2[bdah] delta[fc] delta[gc] delta[hd] 
    {"ab,cdef,cdef,beag,ge",              -2.0,   5, { 0,25,25,35,31}},              //  -2.0 AO[ab] D[cdef] D[cdef] E2[beag] delta[ge] 
    {"abde,cfab,cgab,da,eb,fc,gc",        -2.0,   7, { 2,25,25,31,33,32,32}},        //  -2.0 AO[abde] D[cfab] D[cgab] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abef,cdab,cdab,ea,fb",               4.0,   5, { 2,25,25,31,33}},              //   4.0 AO[abef] D[cdab] D[cdab] delta[ea] delta[fb] 
    {"abce,dfab,dgab,ac,eb,fd,gd",         1.0,   7, { 2,25,25,34,33,32,32}},        //   1.0 AO[abce] D[dfab] D[dgab] E1[ac] delta[eb] delta[fd] delta[gd] 
    {"abce,dfcb,dgcb,ac,eb,fd,gd",         1.0,   7, { 2,25,25,34,33,32,32}},        //   1.0 AO[abce] D[dfcb] D[dgcb] E1[ac] delta[eb] delta[fd] delta[gd] 
    {"abcf,dgeb,dheb,ac,fb,gd,hd",        -2.0,   7, { 2,25,25,34,33,32,32}},        //  -2.0 AO[abcf] D[dgeb] D[dheb] E1[ac] delta[fb] delta[gd] delta[hd] 
    {"abcf,deab,deab,ac,fb",              -2.0,   5, { 2,25,25,34,33}},              //  -2.0 AO[abcf] D[deab] D[deab] E1[ac] delta[fb] 
    {"abcf,decb,decb,ac,fb",              -2.0,   5, { 2,25,25,34,33}},              //  -2.0 AO[abcf] D[decb] D[decb] E1[ac] delta[fb] 
    {"abcg,defb,defb,ac,gb",               4.0,   5, { 2,25,25,34,33}},              //   4.0 AO[abcg] D[defb] D[defb] E1[ac] delta[gb] 
    {"abcf,dgeb,dheb,aeci,fb,gd,hd,ie",    1.0,   8, { 2,25,25,35,33,32,32,31}},     //   1.0 AO[abcf] D[dgeb] D[dheb] E2[aeci] delta[fb] delta[gd] delta[hd] delta[ie] 
    {"abcg,defb,defb,afch,gb,hf",         -2.0,   6, { 2,25,25,35,33,31}},           //  -2.0 AO[abcg] D[defb] D[defb] E2[afch] delta[gb] delta[hf] 
    {"adbe,cfba,cgba,da,eb,fc,gc",         4.0,   7, { 9,25,25,33,31,32,32}},        //   4.0 AO[adbe] D[cfba] D[cgba] delta[da] delta[eb] delta[fc] delta[gc] 
    {"aebf,cdba,cdba,ea,fb",              -2.0,   5, { 9,25,25,33,31}},              //  -2.0 AO[aebf] D[cdba] D[cdba] delta[ea] delta[fb] 
    {"aebc,dfba,dgba,bc,ea,fd,gd",        -2.0,   7, { 9,25,25,34,33,32,32}},        //  -2.0 AO[aebc] D[dfba] D[dgba] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"aebc,dfca,dgca,bc,ea,fd,gd",        -2.0,   7, { 9,25,25,34,33,32,32}},        //  -2.0 AO[aebc] D[dfca] D[dgca] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"afbc,dgea,dhea,bc,fa,gd,hd",         1.0,   7, { 9,25,25,34,33,32,32}},        //   1.0 AO[afbc] D[dgea] D[dhea] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"afbc,deba,deba,bc,fa",               1.0,   5, { 9,25,25,34,33}},              //   1.0 AO[afbc] D[deba] D[deba] E1[bc] delta[fa] 
    {"afbc,deca,deca,bc,fa",               1.0,   5, { 9,25,25,34,33}},              //   1.0 AO[afbc] D[deca] D[deca] E1[bc] delta[fa] 
    {"agbc,defa,defa,bc,ga",              -2.0,   5, { 9,25,25,34,33}},              //  -2.0 AO[agbc] D[defa] D[defa] E1[bc] delta[ga] 
    {"afbc,dgea,dhea,beic,fa,gd,hd,ie",    1.0,   8, { 9,25,25,35,33,32,32,31}},     //   1.0 AO[afbc] D[dgea] D[dhea] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"agbc,defa,defa,bfch,ga,hf",          1.0,   6, { 9,25,25,35,33,31}},           //   1.0 AO[agbc] D[defa] D[defa] E2[bfch] delta[ga] delta[hf] 
    {"ad,beca,bfca,da,eb,fb",             -2.0,   6, { 8,25,25,33,32,32}},           //  -2.0 AO[ad] D[beca] D[bfca] delta[da] delta[eb] delta[fb] 
    {"ae,bcda,bcda,ea",                    4.0,   4, { 8,25,25,33}},                 //   4.0 AO[ae] D[bcda] D[bcda] delta[ea] 
    {"ad,beca,bfca,cg,da,eb,fb,gc",        1.0,   8, { 8,25,25,34,33,32,32,31}},     //   1.0 AO[ad] D[beca] D[bfca] E1[cg] delta[da] delta[eb] delta[fb] delta[gc] 
    {"ae,bcda,bcda,df,ea,fd",             -2.0,   6, { 8,25,25,34,33,31}},           //  -2.0 AO[ae] D[bcda] D[bcda] E1[df] delta[ea] delta[fd] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 37;
    Out.EqsRes = FEqSet(&EqsRes[0], 174, "MRLCC3/Res");
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

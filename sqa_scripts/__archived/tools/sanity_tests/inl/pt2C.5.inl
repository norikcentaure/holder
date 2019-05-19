[4]
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
// <E_ca E_ca  | E_ac E_ac > =  140
// <E_ca E_ca  | E_ac E_ac > =   28
// <E_ca E_ca  | E_ac E_ac > =    0
// <E_ca E_ca  | E_ac E_ac > =    0
// <E_ca E_ca  | E_ac E_ac > =  136
// <E_ca E_ca  | E_ac E_ac > =  136
// <E_ca E_ca  | E_ac E_ac > =  132
// <E_ca E_ca  | E_ac E_ac > =   28
// <E_ca E_ca  | E_ac E_ac > =    0
// <E_ca E_ca  | E_ac E_ac > =    0
// <E_ca E_ca  | E_ac E_ac > =    0
// <E_ca E_ca  | E_ac E_ac > =    0
namespace MRLCC3 {

  FTensorDecl TensorDecls[25] = {
    /*  0*/{"AO"     , "aa"       , "", USAGE_Amplitude   },
    /*  1*/{"AO"     , "aaaa"     , "", USAGE_Amplitude   },
    /*  2*/{"AO"     , "caca"     , "", USAGE_Amplitude   },
    /*  3*/{"AO"     , "cc"       , "", USAGE_Amplitude   },
    /*  4*/{"AO"     , "ccaa"     , "", USAGE_Amplitude   },
    /*  5*/{"AO"     , "cccc"     , "", USAGE_Amplitude   },
    /*  6*/{"W"      , "aaaa"     , "", USAGE_Amplitude   },
    /*  7*/{"W"      , "caca"     , "", USAGE_Amplitude   },
    /*  8*/{"W"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  9*/{"W"      , "cccc"     , "", USAGE_Amplitude   },
    /* 10*/{"k"      , "aa"       , "", USAGE_Amplitude   },
    /* 11*/{"k"      , "cc"       , "", USAGE_Amplitude   },
    /* 12*/{"D"      , "aeca"     , "", USAGE_Hamiltonian },
    /* 13*/{"D"      , "caaa"     , "", USAGE_Hamiltonian },
    /* 14*/{"D"      , "ccaa"     , "", USAGE_Hamiltonian },
    /* 15*/{"D"      , "ccae"     , "", USAGE_Hamiltonian },
    /* 16*/{"D"      , "eaaa"     , "", USAGE_Hamiltonian },
    /* 17*/{"D"      , "eaca"     , "", USAGE_Hamiltonian },
    /* 18*/{"D"      , "eeaa"     , "", USAGE_Hamiltonian },
    /* 19*/{"D"      , "eeca"     , "", USAGE_Hamiltonian },
    /* 20*/{"D"      , "eecc"     , "", USAGE_Hamiltonian },
    /* 21*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 22*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 23*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 24*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

	FEqInfo EqsRes[600] = {
    {"abgc,bdef,cdef,ga",       -4.0,   4, { 5,14,14,21}},     //  -4.0 AO[abgc] D[bdef] D[cdef] delta[ga] 
    {"abgc,bdef,cdfe,ga",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abgc] D[bdef] D[cdfe] delta[ga] 
    {"abgc,bdef,dcef,ga",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abgc] D[bdef] D[dcef] delta[ga] 
    {"abgc,bdef,dcfe,ga",       -4.0,   4, { 5,14,14,21}},     //  -4.0 AO[abgc] D[bdef] D[dcfe] delta[ga] 
    {"abgc,dbef,cdef,ga",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abgc] D[dbef] D[cdef] delta[ga] 
    {"abgc,dbef,cdfe,ga",       -4.0,   4, { 5,14,14,21}},     //  -4.0 AO[abgc] D[dbef] D[cdfe] delta[ga] 
    {"abgc,dbef,dcef,ga",       -4.0,   4, { 5,14,14,21}},     //  -4.0 AO[abgc] D[dbef] D[dcef] delta[ga] 
    {"abgc,dbef,dcfe,ga",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abgc] D[dbef] D[dcfe] delta[ga] 
    {"abgc,adef,cdef,gb",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abgc] D[adef] D[cdef] delta[gb] 
    {"abgc,adef,cdfe,gb",       -1.0,   4, { 5,14,14,21}},     //  -1.0 AO[abgc] D[adef] D[cdfe] delta[gb] 
    {"abgc,adef,dcef,gb",       -1.0,   4, { 5,14,14,21}},     //  -1.0 AO[abgc] D[adef] D[dcef] delta[gb] 
    {"abgc,adef,dcfe,gb",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abgc] D[adef] D[dcfe] delta[gb] 
    {"abgc,daef,cdef,gb",       -1.0,   4, { 5,14,14,21}},     //  -1.0 AO[abgc] D[daef] D[cdef] delta[gb] 
    {"abgc,daef,cdfe,gb",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abgc] D[daef] D[cdfe] delta[gb] 
    {"abgc,daef,dcef,gb",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abgc] D[daef] D[dcef] delta[gb] 
    {"abgc,daef,dcfe,gb",       -1.0,   4, { 5,14,14,21}},     //  -1.0 AO[abgc] D[daef] D[dcfe] delta[gb] 
    {"abcg,bdef,cdef,ga",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abcg] D[bdef] D[cdef] delta[ga] 
    {"abcg,bdef,cdfe,ga",       -1.0,   4, { 5,14,14,21}},     //  -1.0 AO[abcg] D[bdef] D[cdfe] delta[ga] 
    {"abcg,bdef,dcef,ga",       -1.0,   4, { 5,14,14,21}},     //  -1.0 AO[abcg] D[bdef] D[dcef] delta[ga] 
    {"abcg,bdef,dcfe,ga",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abcg] D[bdef] D[dcfe] delta[ga] 
    {"abcg,dbef,cdef,ga",       -1.0,   4, { 5,14,14,21}},     //  -1.0 AO[abcg] D[dbef] D[cdef] delta[ga] 
    {"abcg,dbef,cdfe,ga",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abcg] D[dbef] D[cdfe] delta[ga] 
    {"abcg,dbef,dcef,ga",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abcg] D[dbef] D[dcef] delta[ga] 
    {"abcg,dbef,dcfe,ga",       -1.0,   4, { 5,14,14,21}},     //  -1.0 AO[abcg] D[dbef] D[dcfe] delta[ga] 
    {"abcg,adef,cdef,gb",       -4.0,   4, { 5,14,14,21}},     //  -4.0 AO[abcg] D[adef] D[cdef] delta[gb] 
    {"abcg,adef,cdfe,gb",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abcg] D[adef] D[cdfe] delta[gb] 
    {"abcg,adef,dcef,gb",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abcg] D[adef] D[dcef] delta[gb] 
    {"abcg,adef,dcfe,gb",       -4.0,   4, { 5,14,14,21}},     //  -4.0 AO[abcg] D[adef] D[dcfe] delta[gb] 
    {"abcg,daef,cdef,gb",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abcg] D[daef] D[cdef] delta[gb] 
    {"abcg,daef,cdfe,gb",       -4.0,   4, { 5,14,14,21}},     //  -4.0 AO[abcg] D[daef] D[cdfe] delta[gb] 
    {"abcg,daef,dcef,gb",       -4.0,   4, { 5,14,14,21}},     //  -4.0 AO[abcg] D[daef] D[dcef] delta[gb] 
    {"abcg,daef,dcfe,gb",        2.0,   4, { 5,14,14,21}},     //   2.0 AO[abcg] D[daef] D[dcfe] delta[gb] 
    {"abcd,abef,cdef",           2.0,   3, { 5,14,14}},        //   2.0 AO[abcd] D[abef] D[cdef] 
    {"abcd,abef,cdfe",          -1.0,   3, { 5,14,14}},        //  -1.0 AO[abcd] D[abef] D[cdfe] 
    {"abcd,abef,dcef",          -1.0,   3, { 5,14,14}},        //  -1.0 AO[abcd] D[abef] D[dcef] 
    {"abcd,abef,dcfe",           2.0,   3, { 5,14,14}},        //   2.0 AO[abcd] D[abef] D[dcfe] 
    {"abcd,baef,cdef",          -1.0,   3, { 5,14,14}},        //  -1.0 AO[abcd] D[baef] D[cdef] 
    {"abcd,baef,cdfe",           2.0,   3, { 5,14,14}},        //   2.0 AO[abcd] D[baef] D[cdfe] 
    {"abcd,baef,dcef",           2.0,   3, { 5,14,14}},        //   2.0 AO[abcd] D[baef] D[dcef] 
    {"abcd,baef,dcfe",          -1.0,   3, { 5,14,14}},        //  -1.0 AO[abcd] D[baef] D[dcfe] 
    {"abhc,bdef,cdeg,fg,ha",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abhc] D[bdef] D[cdeg] E1[fg] delta[ha] 
    {"abhc,bdef,cdfg,eg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[bdef] D[cdfg] E1[eg] delta[ha] 
    {"abhc,bdef,cdge,fg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[bdef] D[cdge] E1[fg] delta[ha] 
    {"abhc,bdef,cdgf,eg,ha",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abhc] D[bdef] D[cdgf] E1[eg] delta[ha] 
    {"abhc,bdef,dceg,fg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[bdef] D[dceg] E1[fg] delta[ha] 
    {"abhc,bdef,dcfg,eg,ha",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abhc] D[bdef] D[dcfg] E1[eg] delta[ha] 
    {"abhc,bdef,dcge,fg,ha",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abhc] D[bdef] D[dcge] E1[fg] delta[ha] 
    {"abhc,bdef,dcgf,eg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[bdef] D[dcgf] E1[eg] delta[ha] 
    {"abhc,dbef,cdeg,fg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[dbef] D[cdeg] E1[fg] delta[ha] 
    {"abhc,dbef,cdfg,eg,ha",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abhc] D[dbef] D[cdfg] E1[eg] delta[ha] 
    {"abhc,dbef,cdge,fg,ha",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abhc] D[dbef] D[cdge] E1[fg] delta[ha] 
    {"abhc,dbef,cdgf,eg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[dbef] D[cdgf] E1[eg] delta[ha] 
    {"abhc,dbef,dceg,fg,ha",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abhc] D[dbef] D[dceg] E1[fg] delta[ha] 
    {"abhc,dbef,dcfg,eg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[dbef] D[dcfg] E1[eg] delta[ha] 
    {"abhc,dbef,dcge,fg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[dbef] D[dcge] E1[fg] delta[ha] 
    {"abhc,dbef,dcgf,eg,ha",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abhc] D[dbef] D[dcgf] E1[eg] delta[ha] 
    {"abhc,adef,cdeg,fg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[adef] D[cdeg] E1[fg] delta[hb] 
    {"abhc,adef,cdfg,eg,hb",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abhc] D[adef] D[cdfg] E1[eg] delta[hb] 
    {"abhc,adef,cdge,fg,hb",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abhc] D[adef] D[cdge] E1[fg] delta[hb] 
    {"abhc,adef,cdgf,eg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[adef] D[cdgf] E1[eg] delta[hb] 
    {"abhc,adef,dceg,fg,hb",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abhc] D[adef] D[dceg] E1[fg] delta[hb] 
    {"abhc,adef,dcfg,eg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[adef] D[dcfg] E1[eg] delta[hb] 
    {"abhc,adef,dcge,fg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[adef] D[dcge] E1[fg] delta[hb] 
    {"abhc,adef,dcgf,eg,hb",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abhc] D[adef] D[dcgf] E1[eg] delta[hb] 
    {"abhc,daef,cdeg,fg,hb",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abhc] D[daef] D[cdeg] E1[fg] delta[hb] 
    {"abhc,daef,cdfg,eg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[daef] D[cdfg] E1[eg] delta[hb] 
    {"abhc,daef,cdge,fg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[daef] D[cdge] E1[fg] delta[hb] 
    {"abhc,daef,cdgf,eg,hb",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abhc] D[daef] D[cdgf] E1[eg] delta[hb] 
    {"abhc,daef,dceg,fg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[daef] D[dceg] E1[fg] delta[hb] 
    {"abhc,daef,dcfg,eg,hb",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abhc] D[daef] D[dcfg] E1[eg] delta[hb] 
    {"abhc,daef,dcge,fg,hb",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abhc] D[daef] D[dcge] E1[fg] delta[hb] 
    {"abhc,daef,dcgf,eg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abhc] D[daef] D[dcgf] E1[eg] delta[hb] 
    {"abch,bdef,cdeg,fg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[bdef] D[cdeg] E1[fg] delta[ha] 
    {"abch,bdef,cdfg,eg,ha",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abch] D[bdef] D[cdfg] E1[eg] delta[ha] 
    {"abch,bdef,cdge,fg,ha",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abch] D[bdef] D[cdge] E1[fg] delta[ha] 
    {"abch,bdef,cdgf,eg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[bdef] D[cdgf] E1[eg] delta[ha] 
    {"abch,bdef,dceg,fg,ha",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abch] D[bdef] D[dceg] E1[fg] delta[ha] 
    {"abch,bdef,dcfg,eg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[bdef] D[dcfg] E1[eg] delta[ha] 
    {"abch,bdef,dcge,fg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[bdef] D[dcge] E1[fg] delta[ha] 
    {"abch,bdef,dcgf,eg,ha",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abch] D[bdef] D[dcgf] E1[eg] delta[ha] 
    {"abch,dbef,cdeg,fg,ha",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abch] D[dbef] D[cdeg] E1[fg] delta[ha] 
    {"abch,dbef,cdfg,eg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[dbef] D[cdfg] E1[eg] delta[ha] 
    {"abch,dbef,cdge,fg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[dbef] D[cdge] E1[fg] delta[ha] 
    {"abch,dbef,cdgf,eg,ha",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abch] D[dbef] D[cdgf] E1[eg] delta[ha] 
    {"abch,dbef,dceg,fg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[dbef] D[dceg] E1[fg] delta[ha] 
    {"abch,dbef,dcfg,eg,ha",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abch] D[dbef] D[dcfg] E1[eg] delta[ha] 
    {"abch,dbef,dcge,fg,ha",     0.5,   5, { 5,14,14,22,21}},  //   0.5 AO[abch] D[dbef] D[dcge] E1[fg] delta[ha] 
    {"abch,dbef,dcgf,eg,ha",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[dbef] D[dcgf] E1[eg] delta[ha] 
    {"abch,adef,cdeg,fg,hb",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abch] D[adef] D[cdeg] E1[fg] delta[hb] 
    {"abch,adef,cdfg,eg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[adef] D[cdfg] E1[eg] delta[hb] 
    {"abch,adef,cdge,fg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[adef] D[cdge] E1[fg] delta[hb] 
    {"abch,adef,cdgf,eg,hb",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abch] D[adef] D[cdgf] E1[eg] delta[hb] 
    {"abch,adef,dceg,fg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[adef] D[dceg] E1[fg] delta[hb] 
    {"abch,adef,dcfg,eg,hb",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abch] D[adef] D[dcfg] E1[eg] delta[hb] 
    {"abch,adef,dcge,fg,hb",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abch] D[adef] D[dcge] E1[fg] delta[hb] 
    {"abch,adef,dcgf,eg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[adef] D[dcgf] E1[eg] delta[hb] 
    {"abch,daef,cdeg,fg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[daef] D[cdeg] E1[fg] delta[hb] 
    {"abch,daef,cdfg,eg,hb",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abch] D[daef] D[cdfg] E1[eg] delta[hb] 
    {"abch,daef,cdge,fg,hb",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abch] D[daef] D[cdge] E1[fg] delta[hb] 
    {"abch,daef,cdgf,eg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[daef] D[cdgf] E1[eg] delta[hb] 
    {"abch,daef,dceg,fg,hb",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abch] D[daef] D[dceg] E1[fg] delta[hb] 
    {"abch,daef,dcfg,eg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[daef] D[dcfg] E1[eg] delta[hb] 
    {"abch,daef,dcge,fg,hb",    -1.0,   5, { 5,14,14,22,21}},  //  -1.0 AO[abch] D[daef] D[dcge] E1[fg] delta[hb] 
    {"abch,daef,dcgf,eg,hb",     2.0,   5, { 5,14,14,22,21}},  //   2.0 AO[abch] D[daef] D[dcgf] E1[eg] delta[hb] 
    {"abcd,abef,cdeg,fg",       -1.0,   4, { 5,14,14,22}},     //  -1.0 AO[abcd] D[abef] D[cdeg] E1[fg] 
    {"abcd,abef,cdfg,eg",        0.5,   4, { 5,14,14,22}},     //   0.5 AO[abcd] D[abef] D[cdfg] E1[eg] 
    {"abcd,abef,cdge,fg",        0.5,   4, { 5,14,14,22}},     //   0.5 AO[abcd] D[abef] D[cdge] E1[fg] 
    {"abcd,abef,cdgf,eg",       -1.0,   4, { 5,14,14,22}},     //  -1.0 AO[abcd] D[abef] D[cdgf] E1[eg] 
    {"abcd,abef,dceg,fg",        0.5,   4, { 5,14,14,22}},     //   0.5 AO[abcd] D[abef] D[dceg] E1[fg] 
    {"abcd,abef,dcfg,eg",       -1.0,   4, { 5,14,14,22}},     //  -1.0 AO[abcd] D[abef] D[dcfg] E1[eg] 
    {"abcd,abef,dcge,fg",       -1.0,   4, { 5,14,14,22}},     //  -1.0 AO[abcd] D[abef] D[dcge] E1[fg] 
    {"abcd,abef,dcgf,eg",        0.5,   4, { 5,14,14,22}},     //   0.5 AO[abcd] D[abef] D[dcgf] E1[eg] 
    {"abcd,baef,cdeg,fg",        0.5,   4, { 5,14,14,22}},     //   0.5 AO[abcd] D[baef] D[cdeg] E1[fg] 
    {"abcd,baef,cdfg,eg",       -1.0,   4, { 5,14,14,22}},     //  -1.0 AO[abcd] D[baef] D[cdfg] E1[eg] 
    {"abcd,baef,cdge,fg",       -1.0,   4, { 5,14,14,22}},     //  -1.0 AO[abcd] D[baef] D[cdge] E1[fg] 
    {"abcd,baef,cdgf,eg",        0.5,   4, { 5,14,14,22}},     //   0.5 AO[abcd] D[baef] D[cdgf] E1[eg] 
    {"abcd,baef,dceg,fg",       -1.0,   4, { 5,14,14,22}},     //  -1.0 AO[abcd] D[baef] D[dceg] E1[fg] 
    {"abcd,baef,dcfg,eg",        0.5,   4, { 5,14,14,22}},     //   0.5 AO[abcd] D[baef] D[dcfg] E1[eg] 
    {"abcd,baef,dcge,fg",        0.5,   4, { 5,14,14,22}},     //   0.5 AO[abcd] D[baef] D[dcge] E1[fg] 
    {"abcd,baef,dcgf,eg",       -1.0,   4, { 5,14,14,22}},     //  -1.0 AO[abcd] D[baef] D[dcgf] E1[eg] 
    {"abic,bdef,cdgh,efgh,ia",  -1.0,   5, { 5,14,14,23,21}},  //  -1.0 AO[abic] D[bdef] D[cdgh] E2[efgh] delta[ia] 
    {"abic,bdef,dcgh,efhg,ia",  -1.0,   5, { 5,14,14,23,21}},  //  -1.0 AO[abic] D[bdef] D[dcgh] E2[efhg] delta[ia] 
    {"abic,dbef,cdgh,efhg,ia",  -1.0,   5, { 5,14,14,23,21}},  //  -1.0 AO[abic] D[dbef] D[cdgh] E2[efhg] delta[ia] 
    {"abic,dbef,dcgh,efgh,ia",  -1.0,   5, { 5,14,14,23,21}},  //  -1.0 AO[abic] D[dbef] D[dcgh] E2[efgh] delta[ia] 
    {"abic,adef,cdgh,efgh,ib",   0.5,   5, { 5,14,14,23,21}},  //   0.5 AO[abic] D[adef] D[cdgh] E2[efgh] delta[ib] 
    {"abic,adef,dcgh,efhg,ib",   0.5,   5, { 5,14,14,23,21}},  //   0.5 AO[abic] D[adef] D[dcgh] E2[efhg] delta[ib] 
    {"abic,daef,cdgh,efhg,ib",   0.5,   5, { 5,14,14,23,21}},  //   0.5 AO[abic] D[daef] D[cdgh] E2[efhg] delta[ib] 
    {"abic,daef,dcgh,efgh,ib",   0.5,   5, { 5,14,14,23,21}},  //   0.5 AO[abic] D[daef] D[dcgh] E2[efgh] delta[ib] 
    {"abci,bdef,cdgh,efgh,ia",   0.5,   5, { 5,14,14,23,21}},  //   0.5 AO[abci] D[bdef] D[cdgh] E2[efgh] delta[ia] 
    {"abci,bdef,dcgh,efhg,ia",   0.5,   5, { 5,14,14,23,21}},  //   0.5 AO[abci] D[bdef] D[dcgh] E2[efhg] delta[ia] 
    {"abci,dbef,cdgh,efhg,ia",   0.5,   5, { 5,14,14,23,21}},  //   0.5 AO[abci] D[dbef] D[cdgh] E2[efhg] delta[ia] 
    {"abci,dbef,dcgh,efgh,ia",   0.5,   5, { 5,14,14,23,21}},  //   0.5 AO[abci] D[dbef] D[dcgh] E2[efgh] delta[ia] 
    {"abci,adef,cdgh,efgh,ib",  -1.0,   5, { 5,14,14,23,21}},  //  -1.0 AO[abci] D[adef] D[cdgh] E2[efgh] delta[ib] 
    {"abci,adef,dcgh,efhg,ib",  -1.0,   5, { 5,14,14,23,21}},  //  -1.0 AO[abci] D[adef] D[dcgh] E2[efhg] delta[ib] 
    {"abci,daef,cdgh,efhg,ib",  -1.0,   5, { 5,14,14,23,21}},  //  -1.0 AO[abci] D[daef] D[cdgh] E2[efhg] delta[ib] 
    {"abci,daef,dcgh,efgh,ib",  -1.0,   5, { 5,14,14,23,21}},  //  -1.0 AO[abci] D[daef] D[dcgh] E2[efgh] delta[ib] 
    {"abcd,abef,cdgh,efgh",      0.5,   4, { 5,14,14,23}},     //   0.5 AO[abcd] D[abef] D[cdgh] E2[efgh] 
    {"abcd,abef,dcgh,efhg",      0.5,   4, { 5,14,14,23}},     //   0.5 AO[abcd] D[abef] D[dcgh] E2[efhg] 
    {"abcd,baef,cdgh,efhg",      0.5,   4, { 5,14,14,23}},     //   0.5 AO[abcd] D[baef] D[cdgh] E2[efhg] 
    {"abcd,baef,dcgh,efgh",      0.5,   4, { 5,14,14,23}},     //   0.5 AO[abcd] D[baef] D[dcgh] E2[efgh] 
    {"ab,acde,bcde",            -4.0,   3, { 3,14,14}},        //  -4.0 AO[ab] D[acde] D[bcde] 
    {"ab,acde,bced",             2.0,   3, { 3,14,14}},        //   2.0 AO[ab] D[acde] D[bced] 
    {"ab,acde,cbde",             2.0,   3, { 3,14,14}},        //   2.0 AO[ab] D[acde] D[cbde] 
    {"ab,acde,cbed",            -4.0,   3, { 3,14,14}},        //  -4.0 AO[ab] D[acde] D[cbed] 
    {"ab,cade,bcde",             2.0,   3, { 3,14,14}},        //   2.0 AO[ab] D[cade] D[bcde] 
    {"ab,cade,bced",            -4.0,   3, { 3,14,14}},        //  -4.0 AO[ab] D[cade] D[bced] 
    {"ab,cade,cbde",            -4.0,   3, { 3,14,14}},        //  -4.0 AO[ab] D[cade] D[cbde] 
    {"ab,cade,cbed",             2.0,   3, { 3,14,14}},        //   2.0 AO[ab] D[cade] D[cbed] 
    {"ab,acde,bcdf,fe",          2.0,   4, { 3,14,14,22}},     //   2.0 AO[ab] D[acde] D[bcdf] E1[fe] 
    {"ab,acde,bcef,fd",         -1.0,   4, { 3,14,14,22}},     //  -1.0 AO[ab] D[acde] D[bcef] E1[fd] 
    {"ab,acde,bcfd,fe",         -1.0,   4, { 3,14,14,22}},     //  -1.0 AO[ab] D[acde] D[bcfd] E1[fe] 
    {"ab,acde,bcfe,fd",          2.0,   4, { 3,14,14,22}},     //   2.0 AO[ab] D[acde] D[bcfe] E1[fd] 
    {"ab,acde,cbdf,fe",         -1.0,   4, { 3,14,14,22}},     //  -1.0 AO[ab] D[acde] D[cbdf] E1[fe] 
    {"ab,acde,cbef,fd",          2.0,   4, { 3,14,14,22}},     //   2.0 AO[ab] D[acde] D[cbef] E1[fd] 
    {"ab,acde,cbfd,fe",          2.0,   4, { 3,14,14,22}},     //   2.0 AO[ab] D[acde] D[cbfd] E1[fe] 
    {"ab,acde,cbfe,fd",         -1.0,   4, { 3,14,14,22}},     //  -1.0 AO[ab] D[acde] D[cbfe] E1[fd] 
    {"ab,cade,bcdf,fe",         -1.0,   4, { 3,14,14,22}},     //  -1.0 AO[ab] D[cade] D[bcdf] E1[fe] 
    {"ab,cade,bcef,fd",          2.0,   4, { 3,14,14,22}},     //   2.0 AO[ab] D[cade] D[bcef] E1[fd] 
    {"ab,cade,bcfd,fe",          2.0,   4, { 3,14,14,22}},     //   2.0 AO[ab] D[cade] D[bcfd] E1[fe] 
    {"ab,cade,bcfe,fd",         -1.0,   4, { 3,14,14,22}},     //  -1.0 AO[ab] D[cade] D[bcfe] E1[fd] 
    {"ab,cade,cbdf,fe",          2.0,   4, { 3,14,14,22}},     //   2.0 AO[ab] D[cade] D[cbdf] E1[fe] 
    {"ab,cade,cbef,fd",         -1.0,   4, { 3,14,14,22}},     //  -1.0 AO[ab] D[cade] D[cbef] E1[fd] 
    {"ab,cade,cbfd,fe",         -1.0,   4, { 3,14,14,22}},     //  -1.0 AO[ab] D[cade] D[cbfd] E1[fe] 
    {"ab,cade,cbfe,fd",          2.0,   4, { 3,14,14,22}},     //   2.0 AO[ab] D[cade] D[cbfe] E1[fd] 
    {"ab,acde,bcfg,fgde",       -1.0,   4, { 3,14,14,23}},     //  -1.0 AO[ab] D[acde] D[bcfg] E2[fgde] 
    {"ab,acde,cbfg,fged",       -1.0,   4, { 3,14,14,23}},     //  -1.0 AO[ab] D[acde] D[cbfg] E2[fged] 
    {"ab,cade,bcfg,fged",       -1.0,   4, { 3,14,14,23}},     //  -1.0 AO[ab] D[cade] D[bcfg] E2[fged] 
    {"ab,cade,cbfg,fgde",       -1.0,   4, { 3,14,14,23}},     //  -1.0 AO[ab] D[cade] D[cbfg] E2[fgde] 
    {"agbc,debf,decf,ga",       -4.0,   4, { 4,14,14,21}},     //  -4.0 AO[agbc] D[debf] D[decf] delta[ga] 
    {"agbc,debf,defc,ga",        2.0,   4, { 4,14,14,21}},     //   2.0 AO[agbc] D[debf] D[defc] delta[ga] 
    {"agbc,debf,edcf,ga",        2.0,   4, { 4,14,14,21}},     //   2.0 AO[agbc] D[debf] D[edcf] delta[ga] 
    {"agbc,debf,edfc,ga",       -4.0,   4, { 4,14,14,21}},     //  -4.0 AO[agbc] D[debf] D[edfc] delta[ga] 
    {"agbc,defb,decf,ga",        2.0,   4, { 4,14,14,21}},     //   2.0 AO[agbc] D[defb] D[decf] delta[ga] 
    {"agbc,defb,defc,ga",       -4.0,   4, { 4,14,14,21}},     //  -4.0 AO[agbc] D[defb] D[defc] delta[ga] 
    {"agbc,defb,edcf,ga",       -4.0,   4, { 4,14,14,21}},     //  -4.0 AO[agbc] D[defb] D[edcf] delta[ga] 
    {"agbc,defb,edfc,ga",        2.0,   4, { 4,14,14,21}},     //   2.0 AO[agbc] D[defb] D[edfc] delta[ga] 
    {"abcd,aecf,bedf",           8.0,   3, { 4,14,14}},        //   8.0 AO[abcd] D[aecf] D[bedf] 
    {"abcd,aecf,befd",          -4.0,   3, { 4,14,14}},        //  -4.0 AO[abcd] D[aecf] D[befd] 
    {"abcd,aecf,ebdf",          -4.0,   3, { 4,14,14}},        //  -4.0 AO[abcd] D[aecf] D[ebdf] 
    {"abcd,aecf,ebfd",           8.0,   3, { 4,14,14}},        //   8.0 AO[abcd] D[aecf] D[ebfd] 
    {"abcd,aefc,bedf",          -4.0,   3, { 4,14,14}},        //  -4.0 AO[abcd] D[aefc] D[bedf] 
    {"abcd,aefc,befd",           2.0,   3, { 4,14,14}},        //   2.0 AO[abcd] D[aefc] D[befd] 
    {"abcd,aefc,ebdf",           2.0,   3, { 4,14,14}},        //   2.0 AO[abcd] D[aefc] D[ebdf] 
    {"abcd,aefc,ebfd",          -4.0,   3, { 4,14,14}},        //  -4.0 AO[abcd] D[aefc] D[ebfd] 
    {"abcd,eacf,bedf",          -4.0,   3, { 4,14,14}},        //  -4.0 AO[abcd] D[eacf] D[bedf] 
    {"abcd,eacf,befd",           2.0,   3, { 4,14,14}},        //   2.0 AO[abcd] D[eacf] D[befd] 
    {"abcd,eacf,ebdf",           2.0,   3, { 4,14,14}},        //   2.0 AO[abcd] D[eacf] D[ebdf] 
    {"abcd,eacf,ebfd",          -4.0,   3, { 4,14,14}},        //  -4.0 AO[abcd] D[eacf] D[ebfd] 
    {"abcd,eafc,bedf",           8.0,   3, { 4,14,14}},        //   8.0 AO[abcd] D[eafc] D[bedf] 
    {"abcd,eafc,befd",          -4.0,   3, { 4,14,14}},        //  -4.0 AO[abcd] D[eafc] D[befd] 
    {"abcd,eafc,ebdf",          -4.0,   3, { 4,14,14}},        //  -4.0 AO[abcd] D[eafc] D[ebdf] 
    {"abcd,eafc,ebfd",           8.0,   3, { 4,14,14}},        //   8.0 AO[abcd] D[eafc] D[ebfd] 
    {"ahbc,debf,decg,gf,ha",     2.0,   5, { 4,14,14,22,21}},  //   2.0 AO[ahbc] D[debf] D[decg] E1[gf] delta[ha] 
    {"ahbc,debf,degc,gf,ha",    -1.0,   5, { 4,14,14,22,21}},  //  -1.0 AO[ahbc] D[debf] D[degc] E1[gf] delta[ha] 
    {"ahbc,debf,edcg,gf,ha",    -1.0,   5, { 4,14,14,22,21}},  //  -1.0 AO[ahbc] D[debf] D[edcg] E1[gf] delta[ha] 
    {"ahbc,debf,edgc,gf,ha",     2.0,   5, { 4,14,14,22,21}},  //   2.0 AO[ahbc] D[debf] D[edgc] E1[gf] delta[ha] 
    {"ahbc,decf,defg,bg,ha",    -1.0,   5, { 4,14,14,22,21}},  //  -1.0 AO[ahbc] D[decf] D[defg] E1[bg] delta[ha] 
    {"ahbc,decf,degf,bg,ha",     2.0,   5, { 4,14,14,22,21}},  //   2.0 AO[ahbc] D[decf] D[degf] E1[bg] delta[ha] 
    {"ahbc,decf,edfg,bg,ha",     2.0,   5, { 4,14,14,22,21}},  //   2.0 AO[ahbc] D[decf] D[edfg] E1[bg] delta[ha] 
    {"ahbc,decf,edgf,bg,ha",    -1.0,   5, { 4,14,14,22,21}},  //  -1.0 AO[ahbc] D[decf] D[edgf] E1[bg] delta[ha] 
    {"ahbc,defb,decg,gf,ha",    -1.0,   5, { 4,14,14,22,21}},  //  -1.0 AO[ahbc] D[defb] D[decg] E1[gf] delta[ha] 
    {"ahbc,defb,degc,gf,ha",     2.0,   5, { 4,14,14,22,21}},  //   2.0 AO[ahbc] D[defb] D[degc] E1[gf] delta[ha] 
    {"ahbc,defb,edcg,gf,ha",     2.0,   5, { 4,14,14,22,21}},  //   2.0 AO[ahbc] D[defb] D[edcg] E1[gf] delta[ha] 
    {"ahbc,defb,edgc,gf,ha",    -1.0,   5, { 4,14,14,22,21}},  //  -1.0 AO[ahbc] D[defb] D[edgc] E1[gf] delta[ha] 
    {"ahbc,defc,defg,bg,ha",     2.0,   5, { 4,14,14,22,21}},  //   2.0 AO[ahbc] D[defc] D[defg] E1[bg] delta[ha] 
    {"ahbc,defc,degf,bg,ha",    -1.0,   5, { 4,14,14,22,21}},  //  -1.0 AO[ahbc] D[defc] D[degf] E1[bg] delta[ha] 
    {"ahbc,defc,edfg,bg,ha",    -1.0,   5, { 4,14,14,22,21}},  //  -1.0 AO[ahbc] D[defc] D[edfg] E1[bg] delta[ha] 
    {"ahbc,defc,edgf,bg,ha",     2.0,   5, { 4,14,14,22,21}},  //   2.0 AO[ahbc] D[defc] D[edgf] E1[bg] delta[ha] 
    {"abcd,aecf,bedg,gf",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[aecf] D[bedg] E1[gf] 
    {"abcd,aecf,befg,gd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aecf] D[befg] E1[gd] 
    {"abcd,aecf,begd,gf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aecf] D[begd] E1[gf] 
    {"abcd,aecf,begf,gd",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[aecf] D[begf] E1[gd] 
    {"abcd,aecf,ebdg,gf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aecf] D[ebdg] E1[gf] 
    {"abcd,aecf,ebfg,gd",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[aecf] D[ebfg] E1[gd] 
    {"abcd,aecf,ebgd,gf",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[aecf] D[ebgd] E1[gf] 
    {"abcd,aecf,ebgf,gd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aecf] D[ebgf] E1[gd] 
    {"abcd,aefc,bedg,gf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aefc] D[bedg] E1[gf] 
    {"abcd,aefc,befg,gd",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[aefc] D[befg] E1[gd] 
    {"abcd,aefc,begd,gf",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[aefc] D[begd] E1[gf] 
    {"abcd,aefc,begf,gd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aefc] D[begf] E1[gd] 
    {"abcd,aefc,ebdg,gf",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[aefc] D[ebdg] E1[gf] 
    {"abcd,aefc,ebfg,gd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aefc] D[ebfg] E1[gd] 
    {"abcd,aefc,ebgd,gf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aefc] D[ebgd] E1[gf] 
    {"abcd,aefc,ebgf,gd",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[aefc] D[ebgf] E1[gd] 
    {"abcd,aefg,bedf,cg",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[bedf] E1[cg] 
    {"abcd,aefg,bedg,cf",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[aefg] D[bedg] E1[cf] 
    {"abcd,aefg,befd,cg",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[aefg] D[befd] E1[cg] 
    {"abcd,aefg,befg,cd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[befg] E1[cd] 
    {"abcd,aefg,begd,cf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[begd] E1[cf] 
    {"abcd,aefg,begf,cd",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[aefg] D[begf] E1[cd] 
    {"abcd,aefg,ebdf,cg",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[aefg] D[ebdf] E1[cg] 
    {"abcd,aefg,ebdg,cf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[ebdg] E1[cf] 
    {"abcd,aefg,ebfd,cg",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[ebfd] E1[cg] 
    {"abcd,aefg,ebfg,cd",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[aefg] D[ebfg] E1[cd] 
    {"abcd,aefg,ebgd,cf",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[aefg] D[ebgd] E1[cf] 
    {"abcd,aefg,ebgf,cd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[ebgf] E1[cd] 
    {"abcd,eacf,bedg,gf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eacf] D[bedg] E1[gf] 
    {"abcd,eacf,befg,gd",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[eacf] D[befg] E1[gd] 
    {"abcd,eacf,begd,gf",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[eacf] D[begd] E1[gf] 
    {"abcd,eacf,begf,gd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eacf] D[begf] E1[gd] 
    {"abcd,eacf,ebdg,gf",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[eacf] D[ebdg] E1[gf] 
    {"abcd,eacf,ebfg,gd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eacf] D[ebfg] E1[gd] 
    {"abcd,eacf,ebgd,gf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eacf] D[ebgd] E1[gf] 
    {"abcd,eacf,ebgf,gd",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[eacf] D[ebgf] E1[gd] 
    {"abcd,eafc,bedg,gf",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[eafc] D[bedg] E1[gf] 
    {"abcd,eafc,befg,gd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eafc] D[befg] E1[gd] 
    {"abcd,eafc,begd,gf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eafc] D[begd] E1[gf] 
    {"abcd,eafc,begf,gd",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[eafc] D[begf] E1[gd] 
    {"abcd,eafc,ebdg,gf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eafc] D[ebdg] E1[gf] 
    {"abcd,eafc,ebfg,gd",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[eafc] D[ebfg] E1[gd] 
    {"abcd,eafc,ebgd,gf",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[eafc] D[ebgd] E1[gf] 
    {"abcd,eafc,ebgf,gd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eafc] D[ebgf] E1[gd] 
    {"abcd,eafg,bedf,cg",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[eafg] D[bedf] E1[cg] 
    {"abcd,eafg,bedg,cf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[bedg] E1[cf] 
    {"abcd,eafg,befd,cg",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[befd] E1[cg] 
    {"abcd,eafg,befg,cd",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[eafg] D[befg] E1[cd] 
    {"abcd,eafg,begd,cf",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[eafg] D[begd] E1[cf] 
    {"abcd,eafg,begf,cd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[begf] E1[cd] 
    {"abcd,eafg,ebdf,cg",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[ebdf] E1[cg] 
    {"abcd,eafg,ebdg,cf",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[eafg] D[ebdg] E1[cf] 
    {"abcd,eafg,ebfd,cg",       -4.0,   4, { 4,14,14,22}},     //  -4.0 AO[abcd] D[eafg] D[ebfd] E1[cg] 
    {"abcd,eafg,ebfg,cd",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[ebfg] E1[cd] 
    {"abcd,eafg,ebgd,cf",        2.0,   4, { 4,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[ebgd] E1[cf] 
    {"abcd,eafg,ebgf,cd",       -1.0,   4, { 4,14,14,22}},     //  -1.0 AO[abcd] D[eafg] D[ebgf] E1[cd] 
    {"aibc,decf,degh,bfgh,ia",  -1.0,   5, { 4,14,14,23,21}},  //  -1.0 AO[aibc] D[decf] D[degh] E2[bfgh] delta[ia] 
    {"aibc,decf,edgh,bfhg,ia",  -1.0,   5, { 4,14,14,23,21}},  //  -1.0 AO[aibc] D[decf] D[edgh] E2[bfhg] delta[ia] 
    {"aibc,defc,degh,bfhg,ia",  -1.0,   5, { 4,14,14,23,21}},  //  -1.0 AO[aibc] D[defc] D[degh] E2[bfhg] delta[ia] 
    {"aibc,defc,edgh,bfgh,ia",  -1.0,   5, { 4,14,14,23,21}},  //  -1.0 AO[aibc] D[defc] D[edgh] E2[bfgh] delta[ia] 
    {"abcd,aecf,begh,ghdf",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[aecf] D[begh] E2[ghdf] 
    {"abcd,aecf,ebgh,ghfd",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[aecf] D[ebgh] E2[ghfd] 
    {"abcd,aefc,begh,ghdf",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[aefc] D[begh] E2[ghdf] 
    {"abcd,aefc,ebgh,ghfd",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[aefc] D[ebgh] E2[ghfd] 
    {"abcd,aefg,bedh,chfg",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[aefg] D[bedh] E2[chfg] 
    {"abcd,aefg,befh,chdg",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[befh] E2[chdg] 
    {"abcd,aefg,begh,chfd",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[begh] E2[chfd] 
    {"abcd,aefg,behd,chfg",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[behd] E2[chfg] 
    {"abcd,aefg,behf,chgd",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[behf] E2[chgd] 
    {"abcd,aefg,behg,chfd",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[aefg] D[behg] E2[chfd] 
    {"abcd,aefg,ebdh,chfg",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[ebdh] E2[chfg] 
    {"abcd,aefg,ebfh,chgd",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[ebfh] E2[chgd] 
    {"abcd,aefg,ebgh,chfd",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[aefg] D[ebgh] E2[chfd] 
    {"abcd,aefg,ebhd,chfg",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[aefg] D[ebhd] E2[chfg] 
    {"abcd,aefg,ebhf,chdg",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[ebhf] E2[chdg] 
    {"abcd,aefg,ebhg,chfd",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[ebhg] E2[chfd] 
    {"abcd,eacf,begh,ghdf",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[eacf] D[begh] E2[ghdf] 
    {"abcd,eacf,ebgh,ghfd",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[eacf] D[ebgh] E2[ghfd] 
    {"abcd,eafc,begh,ghdf",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[eafc] D[begh] E2[ghdf] 
    {"abcd,eafc,ebgh,ghfd",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[eafc] D[ebgh] E2[ghfd] 
    {"abcd,eafg,bedh,chgf",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[eafg] D[bedh] E2[chgf] 
    {"abcd,eafg,befh,chgd",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[befh] E2[chgd] 
    {"abcd,eafg,begh,chdf",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[begh] E2[chdf] 
    {"abcd,eafg,behd,chgf",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[behd] E2[chgf] 
    {"abcd,eafg,behf,chgd",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[eafg] D[behf] E2[chgd] 
    {"abcd,eafg,behg,chfd",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[behg] E2[chfd] 
    {"abcd,eafg,ebdh,chgf",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[ebdh] E2[chgf] 
    {"abcd,eafg,ebfh,chgd",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[eafg] D[ebfh] E2[chgd] 
    {"abcd,eafg,ebgh,chfd",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[ebgh] E2[chfd] 
    {"abcd,eafg,ebhd,chgf",      2.0,   4, { 4,14,14,23}},     //   2.0 AO[abcd] D[eafg] D[ebhd] E2[chgf] 
    {"abcd,eafg,ebhf,chgd",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[ebhf] E2[chgd] 
    {"abcd,eafg,ebhg,chdf",     -1.0,   4, { 4,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[ebhg] E2[chdf] 
    {"abcd,aefg,behi,chifdg",   -1.0,   4, { 4,14,14,24}},     //  -1.0 AO[abcd] D[aefg] D[behi] E3[chifdg] 
    {"abcd,aefg,ebhi,chifgd",   -1.0,   4, { 4,14,14,24}},     //  -1.0 AO[abcd] D[aefg] D[ebhi] E3[chifgd] 
    {"abcd,eafg,behi,chigdf",   -1.0,   4, { 4,14,14,24}},     //  -1.0 AO[abcd] D[eafg] D[behi] E3[chigdf] 
    {"abcd,eafg,ebhi,chigfd",   -1.0,   4, { 4,14,14,24}},     //  -1.0 AO[abcd] D[eafg] D[ebhi] E3[chigfd] 
    {"abgc,debf,decf,ga",        8.0,   4, { 2,14,14,21}},     //   8.0 AO[abgc] D[debf] D[decf] delta[ga] 
    {"abgc,debf,defc,ga",       -4.0,   4, { 2,14,14,21}},     //  -4.0 AO[abgc] D[debf] D[defc] delta[ga] 
    {"abgc,debf,edcf,ga",       -4.0,   4, { 2,14,14,21}},     //  -4.0 AO[abgc] D[debf] D[edcf] delta[ga] 
    {"abgc,debf,edfc,ga",        8.0,   4, { 2,14,14,21}},     //   8.0 AO[abgc] D[debf] D[edfc] delta[ga] 
    {"abgc,defb,decf,ga",       -4.0,   4, { 2,14,14,21}},     //  -4.0 AO[abgc] D[defb] D[decf] delta[ga] 
    {"abgc,defb,defc,ga",        8.0,   4, { 2,14,14,21}},     //   8.0 AO[abgc] D[defb] D[defc] delta[ga] 
    {"abgc,defb,edcf,ga",        8.0,   4, { 2,14,14,21}},     //   8.0 AO[abgc] D[defb] D[edcf] delta[ga] 
    {"abgc,defb,edfc,ga",       -4.0,   4, { 2,14,14,21}},     //  -4.0 AO[abgc] D[defb] D[edfc] delta[ga] 
    {"abcd,aedf,cebf",          -4.0,   3, { 2,14,14}},        //  -4.0 AO[abcd] D[aedf] D[cebf] 
    {"abcd,aedf,cefb",           2.0,   3, { 2,14,14}},        //   2.0 AO[abcd] D[aedf] D[cefb] 
    {"abcd,aedf,ecbf",           2.0,   3, { 2,14,14}},        //   2.0 AO[abcd] D[aedf] D[ecbf] 
    {"abcd,aedf,ecfb",          -4.0,   3, { 2,14,14}},        //  -4.0 AO[abcd] D[aedf] D[ecfb] 
    {"abcd,aefd,cebf",           2.0,   3, { 2,14,14}},        //   2.0 AO[abcd] D[aefd] D[cebf] 
    {"abcd,aefd,cefb",          -4.0,   3, { 2,14,14}},        //  -4.0 AO[abcd] D[aefd] D[cefb] 
    {"abcd,aefd,ecbf",          -4.0,   3, { 2,14,14}},        //  -4.0 AO[abcd] D[aefd] D[ecbf] 
    {"abcd,aefd,ecfb",           2.0,   3, { 2,14,14}},        //   2.0 AO[abcd] D[aefd] D[ecfb] 
    {"abcd,eadf,cebf",           2.0,   3, { 2,14,14}},        //   2.0 AO[abcd] D[eadf] D[cebf] 
    {"abcd,eadf,cefb",          -4.0,   3, { 2,14,14}},        //  -4.0 AO[abcd] D[eadf] D[cefb] 
    {"abcd,eadf,ecbf",          -4.0,   3, { 2,14,14}},        //  -4.0 AO[abcd] D[eadf] D[ecbf] 
    {"abcd,eadf,ecfb",           2.0,   3, { 2,14,14}},        //   2.0 AO[abcd] D[eadf] D[ecfb] 
    {"abcd,eafd,cebf",          -4.0,   3, { 2,14,14}},        //  -4.0 AO[abcd] D[eafd] D[cebf] 
    {"abcd,eafd,cefb",           2.0,   3, { 2,14,14}},        //   2.0 AO[abcd] D[eafd] D[cefb] 
    {"abcd,eafd,ecbf",           2.0,   3, { 2,14,14}},        //   2.0 AO[abcd] D[eafd] D[ecbf] 
    {"abcd,eafd,ecfb",          -4.0,   3, { 2,14,14}},        //  -4.0 AO[abcd] D[eafd] D[ecfb] 
    {"abhc,debf,decg,gf,ha",    -4.0,   5, { 2,14,14,22,21}},  //  -4.0 AO[abhc] D[debf] D[decg] E1[gf] delta[ha] 
    {"abhc,debf,degc,gf,ha",     2.0,   5, { 2,14,14,22,21}},  //   2.0 AO[abhc] D[debf] D[degc] E1[gf] delta[ha] 
    {"abhc,debf,edcg,gf,ha",     2.0,   5, { 2,14,14,22,21}},  //   2.0 AO[abhc] D[debf] D[edcg] E1[gf] delta[ha] 
    {"abhc,debf,edgc,gf,ha",    -4.0,   5, { 2,14,14,22,21}},  //  -4.0 AO[abhc] D[debf] D[edgc] E1[gf] delta[ha] 
    {"abhc,decf,defg,bg,ha",     2.0,   5, { 2,14,14,22,21}},  //   2.0 AO[abhc] D[decf] D[defg] E1[bg] delta[ha] 
    {"abhc,decf,degf,bg,ha",    -4.0,   5, { 2,14,14,22,21}},  //  -4.0 AO[abhc] D[decf] D[degf] E1[bg] delta[ha] 
    {"abhc,decf,edfg,bg,ha",    -4.0,   5, { 2,14,14,22,21}},  //  -4.0 AO[abhc] D[decf] D[edfg] E1[bg] delta[ha] 
    {"abhc,decf,edgf,bg,ha",     2.0,   5, { 2,14,14,22,21}},  //   2.0 AO[abhc] D[decf] D[edgf] E1[bg] delta[ha] 
    {"abhc,defb,decg,gf,ha",     2.0,   5, { 2,14,14,22,21}},  //   2.0 AO[abhc] D[defb] D[decg] E1[gf] delta[ha] 
    {"abhc,defb,degc,gf,ha",    -4.0,   5, { 2,14,14,22,21}},  //  -4.0 AO[abhc] D[defb] D[degc] E1[gf] delta[ha] 
    {"abhc,defb,edcg,gf,ha",    -4.0,   5, { 2,14,14,22,21}},  //  -4.0 AO[abhc] D[defb] D[edcg] E1[gf] delta[ha] 
    {"abhc,defb,edgc,gf,ha",     2.0,   5, { 2,14,14,22,21}},  //   2.0 AO[abhc] D[defb] D[edgc] E1[gf] delta[ha] 
    {"abhc,defc,defg,bg,ha",    -4.0,   5, { 2,14,14,22,21}},  //  -4.0 AO[abhc] D[defc] D[defg] E1[bg] delta[ha] 
    {"abhc,defc,degf,bg,ha",     2.0,   5, { 2,14,14,22,21}},  //   2.0 AO[abhc] D[defc] D[degf] E1[bg] delta[ha] 
    {"abhc,defc,edfg,bg,ha",     2.0,   5, { 2,14,14,22,21}},  //   2.0 AO[abhc] D[defc] D[edfg] E1[bg] delta[ha] 
    {"abhc,defc,edgf,bg,ha",    -4.0,   5, { 2,14,14,22,21}},  //  -4.0 AO[abhc] D[defc] D[edgf] E1[bg] delta[ha] 
    {"abcd,aedf,cebg,fg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aedf] D[cebg] E1[fg] 
    {"abcd,aedf,cefg,bg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aedf] D[cefg] E1[bg] 
    {"abcd,aedf,cegb,fg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aedf] D[cegb] E1[fg] 
    {"abcd,aedf,cegf,bg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aedf] D[cegf] E1[bg] 
    {"abcd,aedf,ecbg,fg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aedf] D[ecbg] E1[fg] 
    {"abcd,aedf,ecfg,bg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aedf] D[ecfg] E1[bg] 
    {"abcd,aedf,ecgb,fg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aedf] D[ecgb] E1[fg] 
    {"abcd,aedf,ecgf,bg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aedf] D[ecgf] E1[bg] 
    {"abcd,aefd,cebg,fg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aefd] D[cebg] E1[fg] 
    {"abcd,aefd,cefg,bg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aefd] D[cefg] E1[bg] 
    {"abcd,aefd,cegb,fg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aefd] D[cegb] E1[fg] 
    {"abcd,aefd,cegf,bg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aefd] D[cegf] E1[bg] 
    {"abcd,aefd,ecbg,fg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aefd] D[ecbg] E1[fg] 
    {"abcd,aefd,ecfg,bg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aefd] D[ecfg] E1[bg] 
    {"abcd,aefd,ecgb,fg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aefd] D[ecgb] E1[fg] 
    {"abcd,aefd,ecgf,bg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aefd] D[ecgf] E1[bg] 
    {"abcd,aefg,cebf,gd",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aefg] D[cebf] E1[gd] 
    {"abcd,aefg,cebg,fd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[cebg] E1[fd] 
    {"abcd,aefg,cefb,gd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[cefb] E1[gd] 
    {"abcd,aefg,cefg,bd",       -4.0,   4, { 2,14,14,22}},     //  -4.0 AO[abcd] D[aefg] D[cefg] E1[bd] 
    {"abcd,aefg,cegb,fd",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aefg] D[cegb] E1[fd] 
    {"abcd,aefg,cegf,bd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[cegf] E1[bd] 
    {"abcd,aefg,ecbf,gd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[ecbf] E1[gd] 
    {"abcd,aefg,ecbg,fd",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aefg] D[ecbg] E1[fd] 
    {"abcd,aefg,ecfb,gd",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[aefg] D[ecfb] E1[gd] 
    {"abcd,aefg,ecfg,bd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[ecfg] E1[bd] 
    {"abcd,aefg,ecgb,fd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[aefg] D[ecgb] E1[fd] 
    {"abcd,aefg,ecgf,bd",       -4.0,   4, { 2,14,14,22}},     //  -4.0 AO[abcd] D[aefg] D[ecgf] E1[bd] 
    {"abcd,eadf,cebg,fg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eadf] D[cebg] E1[fg] 
    {"abcd,eadf,cefg,bg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eadf] D[cefg] E1[bg] 
    {"abcd,eadf,cegb,fg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eadf] D[cegb] E1[fg] 
    {"abcd,eadf,cegf,bg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eadf] D[cegf] E1[bg] 
    {"abcd,eadf,ecbg,fg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eadf] D[ecbg] E1[fg] 
    {"abcd,eadf,ecfg,bg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eadf] D[ecfg] E1[bg] 
    {"abcd,eadf,ecgb,fg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eadf] D[ecgb] E1[fg] 
    {"abcd,eadf,ecgf,bg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eadf] D[ecgf] E1[bg] 
    {"abcd,eafd,cebg,fg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eafd] D[cebg] E1[fg] 
    {"abcd,eafd,cefg,bg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eafd] D[cefg] E1[bg] 
    {"abcd,eafd,cegb,fg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eafd] D[cegb] E1[fg] 
    {"abcd,eafd,cegf,bg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eafd] D[cegf] E1[bg] 
    {"abcd,eafd,ecbg,fg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eafd] D[ecbg] E1[fg] 
    {"abcd,eafd,ecfg,bg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eafd] D[ecfg] E1[bg] 
    {"abcd,eafd,ecgb,fg",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eafd] D[ecgb] E1[fg] 
    {"abcd,eafd,ecgf,bg",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eafd] D[ecgf] E1[bg] 
    {"abcd,eafg,cebf,gd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[cebf] E1[gd] 
    {"abcd,eafg,cebg,fd",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eafg] D[cebg] E1[fd] 
    {"abcd,eafg,cefb,gd",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eafg] D[cefb] E1[gd] 
    {"abcd,eafg,cefg,bd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[cefg] E1[bd] 
    {"abcd,eafg,cegb,fd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[cegb] E1[fd] 
    {"abcd,eafg,cegf,bd",       -4.0,   4, { 2,14,14,22}},     //  -4.0 AO[abcd] D[eafg] D[cegf] E1[bd] 
    {"abcd,eafg,ecbf,gd",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eafg] D[ecbf] E1[gd] 
    {"abcd,eafg,ecbg,fd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[ecbg] E1[fd] 
    {"abcd,eafg,ecfb,gd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[ecfb] E1[gd] 
    {"abcd,eafg,ecfg,bd",       -4.0,   4, { 2,14,14,22}},     //  -4.0 AO[abcd] D[eafg] D[ecfg] E1[bd] 
    {"abcd,eafg,ecgb,fd",       -1.0,   4, { 2,14,14,22}},     //  -1.0 AO[abcd] D[eafg] D[ecgb] E1[fd] 
    {"abcd,eafg,ecgf,bd",        2.0,   4, { 2,14,14,22}},     //   2.0 AO[abcd] D[eafg] D[ecgf] E1[bd] 
    {"abic,decf,degh,bfgh,ia",   2.0,   5, { 2,14,14,23,21}},  //   2.0 AO[abic] D[decf] D[degh] E2[bfgh] delta[ia] 
    {"abic,decf,edgh,bfhg,ia",   2.0,   5, { 2,14,14,23,21}},  //   2.0 AO[abic] D[decf] D[edgh] E2[bfhg] delta[ia] 
    {"abic,defc,degh,bfhg,ia",   2.0,   5, { 2,14,14,23,21}},  //   2.0 AO[abic] D[defc] D[degh] E2[bfhg] delta[ia] 
    {"abic,defc,edgh,bfgh,ia",   2.0,   5, { 2,14,14,23,21}},  //   2.0 AO[abic] D[defc] D[edgh] E2[bfgh] delta[ia] 
    {"abcd,aedf,cegh,bfgh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aedf] D[cegh] E2[bfgh] 
    {"abcd,aedf,ecgh,bfhg",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aedf] D[ecgh] E2[bfhg] 
    {"abcd,aefd,cegh,bfhg",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aefd] D[cegh] E2[bfhg] 
    {"abcd,aefd,ecgh,bfgh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aefd] D[ecgh] E2[bfgh] 
    {"abcd,aefg,cebh,fgdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[cebh] E2[fgdh] 
    {"abcd,aefg,cefh,bgdh",      2.0,   4, { 2,14,14,23}},     //   2.0 AO[abcd] D[aefg] D[cefh] E2[bgdh] 
    {"abcd,aefg,cegh,bfdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[cegh] E2[bfdh] 
    {"abcd,aefg,cehb,fghd",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[cehb] E2[fghd] 
    {"abcd,aefg,cehf,bgdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[cehf] E2[bgdh] 
    {"abcd,aefg,cehg,bfdh",      2.0,   4, { 2,14,14,23}},     //   2.0 AO[abcd] D[aefg] D[cehg] E2[bfdh] 
    {"abcd,aefg,ecbh,fghd",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[ecbh] E2[fghd] 
    {"abcd,aefg,ecfh,bgdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[ecfh] E2[bgdh] 
    {"abcd,aefg,ecgh,bfdh",      2.0,   4, { 2,14,14,23}},     //   2.0 AO[abcd] D[aefg] D[ecgh] E2[bfdh] 
    {"abcd,aefg,echb,fgdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[echb] E2[fgdh] 
    {"abcd,aefg,echf,bgdh",      2.0,   4, { 2,14,14,23}},     //   2.0 AO[abcd] D[aefg] D[echf] E2[bgdh] 
    {"abcd,aefg,echg,bfdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[aefg] D[echg] E2[bfdh] 
    {"abcd,eadf,cegh,bfhg",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eadf] D[cegh] E2[bfhg] 
    {"abcd,eadf,ecgh,bfgh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eadf] D[ecgh] E2[bfgh] 
    {"abcd,eafd,cegh,bfgh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eafd] D[cegh] E2[bfgh] 
    {"abcd,eafd,ecgh,bfhg",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eafd] D[ecgh] E2[bfhg] 
    {"abcd,eafg,cebh,fghd",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[cebh] E2[fghd] 
    {"abcd,eafg,cefh,bgdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[cefh] E2[bgdh] 
    {"abcd,eafg,cegh,bfdh",      2.0,   4, { 2,14,14,23}},     //   2.0 AO[abcd] D[eafg] D[cegh] E2[bfdh] 
    {"abcd,eafg,cehb,fgdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[cehb] E2[fgdh] 
    {"abcd,eafg,cehf,bgdh",      2.0,   4, { 2,14,14,23}},     //   2.0 AO[abcd] D[eafg] D[cehf] E2[bgdh] 
    {"abcd,eafg,cehg,bfdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[cehg] E2[bfdh] 
    {"abcd,eafg,ecbh,fgdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[ecbh] E2[fgdh] 
    {"abcd,eafg,ecfh,bgdh",      2.0,   4, { 2,14,14,23}},     //   2.0 AO[abcd] D[eafg] D[ecfh] E2[bgdh] 
    {"abcd,eafg,ecgh,bfdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[ecgh] E2[bfdh] 
    {"abcd,eafg,echb,fghd",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[echb] E2[fghd] 
    {"abcd,eafg,echf,bgdh",     -1.0,   4, { 2,14,14,23}},     //  -1.0 AO[abcd] D[eafg] D[echf] E2[bgdh] 
    {"abcd,eafg,echg,bfdh",      2.0,   4, { 2,14,14,23}},     //   2.0 AO[abcd] D[eafg] D[echg] E2[bfdh] 
    {"abcd,aefg,cehi,bfgdhi",   -1.0,   4, { 2,14,14,24}},     //  -1.0 AO[abcd] D[aefg] D[cehi] E3[bfgdhi] 
    {"abcd,aefg,echi,bfgdih",   -1.0,   4, { 2,14,14,24}},     //  -1.0 AO[abcd] D[aefg] D[echi] E3[bfgdih] 
    {"abcd,eafg,cehi,bfgdih",   -1.0,   4, { 2,14,14,24}},     //  -1.0 AO[abcd] D[eafg] D[cehi] E3[bfgdih] 
    {"abcd,eafg,echi,bfgdhi",   -1.0,   4, { 2,14,14,24}},     //  -1.0 AO[abcd] D[eafg] D[echi] E3[bfgdhi] 
    {"abcd,efab,efcd",           2.0,   3, { 1,14,14}},        //   2.0 AO[abcd] D[efab] D[efcd] 
    {"abcd,efab,efdc",          -1.0,   3, { 1,14,14}},        //  -1.0 AO[abcd] D[efab] D[efdc] 
    {"abcd,efab,fecd",          -1.0,   3, { 1,14,14}},        //  -1.0 AO[abcd] D[efab] D[fecd] 
    {"abcd,efab,fedc",           2.0,   3, { 1,14,14}},        //   2.0 AO[abcd] D[efab] D[fedc] 
    {"abcd,efba,efcd",          -1.0,   3, { 1,14,14}},        //  -1.0 AO[abcd] D[efba] D[efcd] 
    {"abcd,efba,efdc",           2.0,   3, { 1,14,14}},        //   2.0 AO[abcd] D[efba] D[efdc] 
    {"abcd,efba,fecd",           2.0,   3, { 1,14,14}},        //   2.0 AO[abcd] D[efba] D[fecd] 
    {"abcd,efba,fedc",          -1.0,   3, { 1,14,14}},        //  -1.0 AO[abcd] D[efba] D[fedc] 
    {"abcd,efab,efcg,gd",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efab] D[efcg] E1[gd] 
    {"abcd,efab,efdg,gc",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efab] D[efdg] E1[gc] 
    {"abcd,efab,efgc,gd",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efab] D[efgc] E1[gd] 
    {"abcd,efab,efgd,gc",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efab] D[efgd] E1[gc] 
    {"abcd,efab,fecg,gd",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efab] D[fecg] E1[gd] 
    {"abcd,efab,fedg,gc",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efab] D[fedg] E1[gc] 
    {"abcd,efab,fegc,gd",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efab] D[fegc] E1[gd] 
    {"abcd,efab,fegd,gc",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efab] D[fegd] E1[gc] 
    {"abcd,efag,efcd,bg",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efag] D[efcd] E1[bg] 
    {"abcd,efag,efcg,bd",        2.0,   4, { 1,14,14,22}},     //   2.0 AO[abcd] D[efag] D[efcg] E1[bd] 
    {"abcd,efag,efdc,bg",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efag] D[efdc] E1[bg] 
    {"abcd,efag,efdg,bc",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efag] D[efdg] E1[bc] 
    {"abcd,efag,efgc,bd",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efag] D[efgc] E1[bd] 
    {"abcd,efag,efgd,bc",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efag] D[efgd] E1[bc] 
    {"abcd,efag,fecd,bg",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efag] D[fecd] E1[bg] 
    {"abcd,efag,fecg,bd",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efag] D[fecg] E1[bd] 
    {"abcd,efag,fedc,bg",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efag] D[fedc] E1[bg] 
    {"abcd,efag,fedg,bc",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efag] D[fedg] E1[bc] 
    {"abcd,efag,fegc,bd",        2.0,   4, { 1,14,14,22}},     //   2.0 AO[abcd] D[efag] D[fegc] E1[bd] 
    {"abcd,efag,fegd,bc",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efag] D[fegd] E1[bc] 
    {"abcd,efba,efcg,gd",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efba] D[efcg] E1[gd] 
    {"abcd,efba,efdg,gc",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efba] D[efdg] E1[gc] 
    {"abcd,efba,efgc,gd",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efba] D[efgc] E1[gd] 
    {"abcd,efba,efgd,gc",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efba] D[efgd] E1[gc] 
    {"abcd,efba,fecg,gd",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efba] D[fecg] E1[gd] 
    {"abcd,efba,fedg,gc",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efba] D[fedg] E1[gc] 
    {"abcd,efba,fegc,gd",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efba] D[fegc] E1[gd] 
    {"abcd,efba,fegd,gc",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efba] D[fegd] E1[gc] 
    {"abcd,efbg,efcd,ag",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efbg] D[efcd] E1[ag] 
    {"abcd,efbg,efcg,ad",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efbg] D[efcg] E1[ad] 
    {"abcd,efbg,efdc,ag",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efbg] D[efdc] E1[ag] 
    {"abcd,efbg,efdg,ac",        2.0,   4, { 1,14,14,22}},     //   2.0 AO[abcd] D[efbg] D[efdg] E1[ac] 
    {"abcd,efbg,efgc,ad",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efbg] D[efgc] E1[ad] 
    {"abcd,efbg,efgd,ac",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efbg] D[efgd] E1[ac] 
    {"abcd,efbg,fecd,ag",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efbg] D[fecd] E1[ag] 
    {"abcd,efbg,fecg,ad",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efbg] D[fecg] E1[ad] 
    {"abcd,efbg,fedc,ag",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efbg] D[fedc] E1[ag] 
    {"abcd,efbg,fedg,ac",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efbg] D[fedg] E1[ac] 
    {"abcd,efbg,fegc,ad",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efbg] D[fegc] E1[ad] 
    {"abcd,efbg,fegd,ac",        2.0,   4, { 1,14,14,22}},     //   2.0 AO[abcd] D[efbg] D[fegd] E1[ac] 
    {"abcd,efga,efcd,bg",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efga] D[efcd] E1[bg] 
    {"abcd,efga,efcg,bd",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efga] D[efcg] E1[bd] 
    {"abcd,efga,efdc,bg",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efga] D[efdc] E1[bg] 
    {"abcd,efga,efdg,bc",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efga] D[efdg] E1[bc] 
    {"abcd,efga,efgc,bd",        2.0,   4, { 1,14,14,22}},     //   2.0 AO[abcd] D[efga] D[efgc] E1[bd] 
    {"abcd,efga,efgd,bc",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efga] D[efgd] E1[bc] 
    {"abcd,efga,fecd,bg",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efga] D[fecd] E1[bg] 
    {"abcd,efga,fecg,bd",        2.0,   4, { 1,14,14,22}},     //   2.0 AO[abcd] D[efga] D[fecg] E1[bd] 
    {"abcd,efga,fedc,bg",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efga] D[fedc] E1[bg] 
    {"abcd,efga,fedg,bc",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efga] D[fedg] E1[bc] 
    {"abcd,efga,fegc,bd",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efga] D[fegc] E1[bd] 
    {"abcd,efga,fegd,bc",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efga] D[fegd] E1[bc] 
    {"abcd,efgb,efcd,ag",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efgb] D[efcd] E1[ag] 
    {"abcd,efgb,efcg,ad",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efgb] D[efcg] E1[ad] 
    {"abcd,efgb,efdc,ag",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efgb] D[efdc] E1[ag] 
    {"abcd,efgb,efdg,ac",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efgb] D[efdg] E1[ac] 
    {"abcd,efgb,efgc,ad",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efgb] D[efgc] E1[ad] 
    {"abcd,efgb,efgd,ac",        2.0,   4, { 1,14,14,22}},     //   2.0 AO[abcd] D[efgb] D[efgd] E1[ac] 
    {"abcd,efgb,fecd,ag",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efgb] D[fecd] E1[ag] 
    {"abcd,efgb,fecg,ad",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efgb] D[fecg] E1[ad] 
    {"abcd,efgb,fedc,ag",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efgb] D[fedc] E1[ag] 
    {"abcd,efgb,fedg,ac",        2.0,   4, { 1,14,14,22}},     //   2.0 AO[abcd] D[efgb] D[fedg] E1[ac] 
    {"abcd,efgb,fegc,ad",        0.5,   4, { 1,14,14,22}},     //   0.5 AO[abcd] D[efgb] D[fegc] E1[ad] 
    {"abcd,efgb,fegd,ac",       -1.0,   4, { 1,14,14,22}},     //  -1.0 AO[abcd] D[efgb] D[fegd] E1[ac] 
    {"abcd,efag,efch,bhdg",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efag] D[efch] E2[bhdg] 
    {"abcd,efag,efdh,bhcg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efag] D[efdh] E2[bhcg] 
    {"abcd,efag,efhc,bhdg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efag] D[efhc] E2[bhdg] 
    {"abcd,efag,efhd,bhgc",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efag] D[efhd] E2[bhgc] 
    {"abcd,efag,fech,bhdg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efag] D[fech] E2[bhdg] 
    {"abcd,efag,fedh,bhgc",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efag] D[fedh] E2[bhgc] 
    {"abcd,efag,fehc,bhdg",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efag] D[fehc] E2[bhdg] 
    {"abcd,efag,fehd,bhcg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efag] D[fehd] E2[bhcg] 
    {"abcd,efbg,efch,ahdg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efbg] D[efch] E2[ahdg] 
    {"abcd,efbg,efdh,ahcg",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efbg] D[efdh] E2[ahcg] 
    {"abcd,efbg,efhc,ahgd",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efbg] D[efhc] E2[ahgd] 
    {"abcd,efbg,efhd,ahcg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efbg] D[efhd] E2[ahcg] 
    {"abcd,efbg,fech,ahgd",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efbg] D[fech] E2[ahgd] 
    {"abcd,efbg,fedh,ahcg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efbg] D[fedh] E2[ahcg] 
    {"abcd,efbg,fehc,ahdg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efbg] D[fehc] E2[ahdg] 
    {"abcd,efbg,fehd,ahcg",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efbg] D[fehd] E2[ahcg] 
    {"abcd,efcd,efgh,abgh",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efcd] D[efgh] E2[abgh] 
    {"abcd,efcd,fegh,abhg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efcd] D[fegh] E2[abhg] 
    {"abcd,efcg,efgh,abhd",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efcg] D[efgh] E2[abhd] 
    {"abcd,efcg,efhg,abhd",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efcg] D[efhg] E2[abhd] 
    {"abcd,efcg,fegh,abhd",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efcg] D[fegh] E2[abhd] 
    {"abcd,efcg,fehg,abhd",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efcg] D[fehg] E2[abhd] 
    {"abcd,efdc,efgh,abhg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efdc] D[efgh] E2[abhg] 
    {"abcd,efdc,fegh,abgh",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efdc] D[fegh] E2[abgh] 
    {"abcd,efdg,efgh,abch",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efdg] D[efgh] E2[abch] 
    {"abcd,efdg,efhg,abch",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efdg] D[efhg] E2[abch] 
    {"abcd,efdg,fegh,abch",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efdg] D[fegh] E2[abch] 
    {"abcd,efdg,fehg,abch",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efdg] D[fehg] E2[abch] 
    {"abcd,efga,efch,bhdg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efga] D[efch] E2[bhdg] 
    {"abcd,efga,efdh,bhgc",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efga] D[efdh] E2[bhgc] 
    {"abcd,efga,efhc,bhdg",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efga] D[efhc] E2[bhdg] 
    {"abcd,efga,efhd,bhcg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efga] D[efhd] E2[bhcg] 
    {"abcd,efga,fech,bhdg",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efga] D[fech] E2[bhdg] 
    {"abcd,efga,fedh,bhcg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efga] D[fedh] E2[bhcg] 
    {"abcd,efga,fehc,bhdg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efga] D[fehc] E2[bhdg] 
    {"abcd,efga,fehd,bhgc",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efga] D[fehd] E2[bhgc] 
    {"abcd,efgb,efch,ahgd",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efgb] D[efch] E2[ahgd] 
    {"abcd,efgb,efdh,ahcg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efgb] D[efdh] E2[ahcg] 
    {"abcd,efgb,efhc,ahdg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efgb] D[efhc] E2[ahdg] 
    {"abcd,efgb,efhd,ahcg",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efgb] D[efhd] E2[ahcg] 
    {"abcd,efgb,fech,ahdg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efgb] D[fech] E2[ahdg] 
    {"abcd,efgb,fedh,ahcg",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efgb] D[fedh] E2[ahcg] 
    {"abcd,efgb,fehc,ahgd",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efgb] D[fehc] E2[ahgd] 
    {"abcd,efgb,fehd,ahcg",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efgb] D[fehd] E2[ahcg] 
    {"abcd,efgc,efgh,abhd",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efgc] D[efgh] E2[abhd] 
    {"abcd,efgc,efhg,abhd",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efgc] D[efhg] E2[abhd] 
    {"abcd,efgc,fegh,abhd",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efgc] D[fegh] E2[abhd] 
    {"abcd,efgc,fehg,abhd",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efgc] D[fehg] E2[abhd] 
    {"abcd,efgd,efgh,abch",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efgd] D[efgh] E2[abch] 
    {"abcd,efgd,efhg,abch",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efgd] D[efhg] E2[abch] 
    {"abcd,efgd,fegh,abch",      0.5,   4, { 1,14,14,23}},     //   0.5 AO[abcd] D[efgd] D[fegh] E2[abch] 
    {"abcd,efgd,fehg,abch",     -1.0,   4, { 1,14,14,23}},     //  -1.0 AO[abcd] D[efgd] D[fehg] E2[abch] 
    {"abcd,efcg,efhi,abghdi",    0.5,   4, { 1,14,14,24}},     //   0.5 AO[abcd] D[efcg] D[efhi] E3[abghdi] 
    {"abcd,efcg,fehi,abgidh",    0.5,   4, { 1,14,14,24}},     //   0.5 AO[abcd] D[efcg] D[fehi] E3[abgidh] 
    {"abcd,efdg,efhi,abgchi",    0.5,   4, { 1,14,14,24}},     //   0.5 AO[abcd] D[efdg] D[efhi] E3[abgchi] 
    {"abcd,efdg,fehi,abgcih",    0.5,   4, { 1,14,14,24}},     //   0.5 AO[abcd] D[efdg] D[fehi] E3[abgcih] 
    {"abcd,efgc,efhi,abgidh",    0.5,   4, { 1,14,14,24}},     //   0.5 AO[abcd] D[efgc] D[efhi] E3[abgidh] 
    {"abcd,efgc,fehi,abghdi",    0.5,   4, { 1,14,14,24}},     //   0.5 AO[abcd] D[efgc] D[fehi] E3[abghdi] 
    {"abcd,efgd,efhi,abgcih",    0.5,   4, { 1,14,14,24}},     //   0.5 AO[abcd] D[efgd] D[efhi] E3[abgcih] 
    {"abcd,efgd,fehi,abgchi",    0.5,   4, { 1,14,14,24}},     //   0.5 AO[abcd] D[efgd] D[fehi] E3[abgchi] 
    {"ab,cdae,cdbe",             4.0,   3, { 0,14,14}},        //   4.0 AO[ab] D[cdae] D[cdbe] 
    {"ab,cdae,cdeb",            -2.0,   3, { 0,14,14}},        //  -2.0 AO[ab] D[cdae] D[cdeb] 
    {"ab,cdae,dcbe",            -2.0,   3, { 0,14,14}},        //  -2.0 AO[ab] D[cdae] D[dcbe] 
    {"ab,cdae,dceb",             4.0,   3, { 0,14,14}},        //   4.0 AO[ab] D[cdae] D[dceb] 
    {"ab,cdea,cdbe",            -2.0,   3, { 0,14,14}},        //  -2.0 AO[ab] D[cdea] D[cdbe] 
    {"ab,cdea,cdeb",             4.0,   3, { 0,14,14}},        //   4.0 AO[ab] D[cdea] D[cdeb] 
    {"ab,cdea,dcbe",             4.0,   3, { 0,14,14}},        //   4.0 AO[ab] D[cdea] D[dcbe] 
    {"ab,cdea,dceb",            -2.0,   3, { 0,14,14}},        //  -2.0 AO[ab] D[cdea] D[dceb] 
    {"ab,cdae,cdbf,ef",         -2.0,   4, { 0,14,14,22}},     //  -2.0 AO[ab] D[cdae] D[cdbf] E1[ef] 
    {"ab,cdae,cdef,bf",          1.0,   4, { 0,14,14,22}},     //   1.0 AO[ab] D[cdae] D[cdef] E1[bf] 
    {"ab,cdae,cdfb,ef",          1.0,   4, { 0,14,14,22}},     //   1.0 AO[ab] D[cdae] D[cdfb] E1[ef] 
    {"ab,cdae,cdfe,bf",         -2.0,   4, { 0,14,14,22}},     //  -2.0 AO[ab] D[cdae] D[cdfe] E1[bf] 
    {"ab,cdae,dcbf,ef",          1.0,   4, { 0,14,14,22}},     //   1.0 AO[ab] D[cdae] D[dcbf] E1[ef] 
    {"ab,cdae,dcef,bf",         -2.0,   4, { 0,14,14,22}},     //  -2.0 AO[ab] D[cdae] D[dcef] E1[bf] 
    {"ab,cdae,dcfb,ef",         -2.0,   4, { 0,14,14,22}},     //  -2.0 AO[ab] D[cdae] D[dcfb] E1[ef] 
    {"ab,cdae,dcfe,bf",          1.0,   4, { 0,14,14,22}},     //   1.0 AO[ab] D[cdae] D[dcfe] E1[bf] 
    {"ab,cdea,cdbf,ef",          1.0,   4, { 0,14,14,22}},     //   1.0 AO[ab] D[cdea] D[cdbf] E1[ef] 
    {"ab,cdea,cdef,bf",         -2.0,   4, { 0,14,14,22}},     //  -2.0 AO[ab] D[cdea] D[cdef] E1[bf] 
    {"ab,cdea,cdfb,ef",         -2.0,   4, { 0,14,14,22}},     //  -2.0 AO[ab] D[cdea] D[cdfb] E1[ef] 
    {"ab,cdea,cdfe,bf",          1.0,   4, { 0,14,14,22}},     //   1.0 AO[ab] D[cdea] D[cdfe] E1[bf] 
    {"ab,cdea,dcbf,ef",         -2.0,   4, { 0,14,14,22}},     //  -2.0 AO[ab] D[cdea] D[dcbf] E1[ef] 
    {"ab,cdea,dcef,bf",          1.0,   4, { 0,14,14,22}},     //   1.0 AO[ab] D[cdea] D[dcef] E1[bf] 
    {"ab,cdea,dcfb,ef",          1.0,   4, { 0,14,14,22}},     //   1.0 AO[ab] D[cdea] D[dcfb] E1[ef] 
    {"ab,cdea,dcfe,bf",         -2.0,   4, { 0,14,14,22}},     //  -2.0 AO[ab] D[cdea] D[dcfe] E1[bf] 
    {"ab,cdae,cdfg,befg",        1.0,   4, { 0,14,14,23}},     //   1.0 AO[ab] D[cdae] D[cdfg] E2[befg] 
    {"ab,cdae,dcfg,begf",        1.0,   4, { 0,14,14,23}},     //   1.0 AO[ab] D[cdae] D[dcfg] E2[begf] 
    {"ab,cdea,cdfg,begf",        1.0,   4, { 0,14,14,23}},     //   1.0 AO[ab] D[cdea] D[cdfg] E2[begf] 
    {"ab,cdea,dcfg,befg",        1.0,   4, { 0,14,14,23}},     //   1.0 AO[ab] D[cdea] D[dcfg] E2[befg] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 25;
    Out.EqsRes = FEqSet(&EqsRes[0], 600, "MRLCC3/Res");
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

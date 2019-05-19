[0]
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
// <E_cv E_cv  | E_vc E_vc > =   40
// <E_cv E_cv  | E_vc E_vc > =    8
// <E_cv E_cv  | E_vc E_vc > =   24
// <E_cv E_cv  | E_vc E_vc > =   24
// <E_cv E_cv  | E_vc E_vc > =    8
// <E_cv E_cv  | E_vc E_vc > =    8
// <E_cv E_cv  | E_vc E_vc > =    0
// <E_cv E_cv  | E_vc E_vc > =    0
// <E_cv E_cv  | E_vc E_vc > =    8
// <E_cv E_cv  | E_vc E_vc > =    8
// <E_cv E_cv  | E_vc E_vc > =    8
// <E_cv E_cv  | E_vc E_vc > =    8
namespace MRLCC3 {

  FTensorDecl TensorDecls[31] = {
    /*  0*/{"AO"     , "aeae"     , "", USAGE_Amplitude   },
    /*  1*/{"AO"     , "caca"     , "", USAGE_Amplitude   },
    /*  2*/{"AO"     , "cc"       , "", USAGE_Amplitude   },
    /*  3*/{"AO"     , "ccaa"     , "", USAGE_Amplitude   },
    /*  4*/{"AO"     , "cccc"     , "", USAGE_Amplitude   },
    /*  5*/{"AO"     , "cece"     , "", USAGE_Amplitude   },
    /*  6*/{"AO"     , "ee"       , "", USAGE_Amplitude   },
    /*  7*/{"AO"     , "eeaa"     , "", USAGE_Amplitude   },
    /*  8*/{"AO"     , "eecc"     , "", USAGE_Amplitude   },
    /*  9*/{"AO"     , "eeee"     , "", USAGE_Amplitude   },
    /* 10*/{"W"      , "aeae"     , "", USAGE_Amplitude   },
    /* 11*/{"W"      , "caca"     , "", USAGE_Amplitude   },
    /* 12*/{"W"      , "ccaa"     , "", USAGE_Amplitude   },
    /* 13*/{"W"      , "cccc"     , "", USAGE_Amplitude   },
    /* 14*/{"W"      , "cece"     , "", USAGE_Amplitude   },
    /* 15*/{"W"      , "eeaa"     , "", USAGE_Amplitude   },
    /* 16*/{"W"      , "eecc"     , "", USAGE_Amplitude   },
    /* 17*/{"W"      , "eeee"     , "", USAGE_Amplitude   },
    /* 18*/{"k"      , "cc"       , "", USAGE_Amplitude   },
    /* 19*/{"k"      , "ee"       , "", USAGE_Amplitude   },
    /* 20*/{"D"      , "aeca"     , "", USAGE_Hamiltonian },
    /* 21*/{"D"      , "caaa"     , "", USAGE_Hamiltonian },
    /* 22*/{"D"      , "ccaa"     , "", USAGE_Hamiltonian },
    /* 23*/{"D"      , "ccae"     , "", USAGE_Hamiltonian },
    /* 24*/{"D"      , "eaaa"     , "", USAGE_Hamiltonian },
    /* 25*/{"D"      , "eaca"     , "", USAGE_Hamiltonian },
    /* 26*/{"D"      , "eeaa"     , "", USAGE_Hamiltonian },
    /* 27*/{"D"      , "eeca"     , "", USAGE_Hamiltonian },
    /* 28*/{"D"      , "eecc"     , "", USAGE_Hamiltonian },
    /* 29*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 30*/{"E1"     , "aa"       , "", USAGE_Density     },
  };

	FEqInfo EqsRes[144] = {
    {"abgc,debf,decf,ga",  -4.0,   4, { 4,28,28,29}},  //  -4.0 AO[abgc] D[debf] D[decf] delta[ga] 
    {"abgc,debf,defc,ga",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abgc] D[debf] D[defc] delta[ga] 
    {"abgc,debf,edcf,ga",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abgc] D[debf] D[edcf] delta[ga] 
    {"abgc,debf,edfc,ga",  -4.0,   4, { 4,28,28,29}},  //  -4.0 AO[abgc] D[debf] D[edfc] delta[ga] 
    {"abgc,defb,decf,ga",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abgc] D[defb] D[decf] delta[ga] 
    {"abgc,defb,defc,ga",  -4.0,   4, { 4,28,28,29}},  //  -4.0 AO[abgc] D[defb] D[defc] delta[ga] 
    {"abgc,defb,edcf,ga",  -4.0,   4, { 4,28,28,29}},  //  -4.0 AO[abgc] D[defb] D[edcf] delta[ga] 
    {"abgc,defb,edfc,ga",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abgc] D[defb] D[edfc] delta[ga] 
    {"abgc,deaf,decf,gb",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abgc] D[deaf] D[decf] delta[gb] 
    {"abgc,deaf,defc,gb",  -1.0,   4, { 4,28,28,29}},  //  -1.0 AO[abgc] D[deaf] D[defc] delta[gb] 
    {"abgc,deaf,edcf,gb",  -1.0,   4, { 4,28,28,29}},  //  -1.0 AO[abgc] D[deaf] D[edcf] delta[gb] 
    {"abgc,deaf,edfc,gb",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abgc] D[deaf] D[edfc] delta[gb] 
    {"abgc,defa,decf,gb",  -1.0,   4, { 4,28,28,29}},  //  -1.0 AO[abgc] D[defa] D[decf] delta[gb] 
    {"abgc,defa,defc,gb",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abgc] D[defa] D[defc] delta[gb] 
    {"abgc,defa,edcf,gb",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abgc] D[defa] D[edcf] delta[gb] 
    {"abgc,defa,edfc,gb",  -1.0,   4, { 4,28,28,29}},  //  -1.0 AO[abgc] D[defa] D[edfc] delta[gb] 
    {"abcg,debf,decf,ga",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abcg] D[debf] D[decf] delta[ga] 
    {"abcg,debf,defc,ga",  -1.0,   4, { 4,28,28,29}},  //  -1.0 AO[abcg] D[debf] D[defc] delta[ga] 
    {"abcg,debf,edcf,ga",  -1.0,   4, { 4,28,28,29}},  //  -1.0 AO[abcg] D[debf] D[edcf] delta[ga] 
    {"abcg,debf,edfc,ga",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abcg] D[debf] D[edfc] delta[ga] 
    {"abcg,defb,decf,ga",  -1.0,   4, { 4,28,28,29}},  //  -1.0 AO[abcg] D[defb] D[decf] delta[ga] 
    {"abcg,defb,defc,ga",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abcg] D[defb] D[defc] delta[ga] 
    {"abcg,defb,edcf,ga",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abcg] D[defb] D[edcf] delta[ga] 
    {"abcg,defb,edfc,ga",  -1.0,   4, { 4,28,28,29}},  //  -1.0 AO[abcg] D[defb] D[edfc] delta[ga] 
    {"abcg,deaf,decf,gb",  -4.0,   4, { 4,28,28,29}},  //  -4.0 AO[abcg] D[deaf] D[decf] delta[gb] 
    {"abcg,deaf,defc,gb",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abcg] D[deaf] D[defc] delta[gb] 
    {"abcg,deaf,edcf,gb",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abcg] D[deaf] D[edcf] delta[gb] 
    {"abcg,deaf,edfc,gb",  -4.0,   4, { 4,28,28,29}},  //  -4.0 AO[abcg] D[deaf] D[edfc] delta[gb] 
    {"abcg,defa,decf,gb",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abcg] D[defa] D[decf] delta[gb] 
    {"abcg,defa,defc,gb",  -4.0,   4, { 4,28,28,29}},  //  -4.0 AO[abcg] D[defa] D[defc] delta[gb] 
    {"abcg,defa,edcf,gb",  -4.0,   4, { 4,28,28,29}},  //  -4.0 AO[abcg] D[defa] D[edcf] delta[gb] 
    {"abcg,defa,edfc,gb",   2.0,   4, { 4,28,28,29}},  //   2.0 AO[abcg] D[defa] D[edfc] delta[gb] 
    {"abcd,efab,efcd",      2.0,   3, { 4,28,28}},     //   2.0 AO[abcd] D[efab] D[efcd] 
    {"abcd,efab,efdc",     -1.0,   3, { 4,28,28}},     //  -1.0 AO[abcd] D[efab] D[efdc] 
    {"abcd,efab,fecd",     -1.0,   3, { 4,28,28}},     //  -1.0 AO[abcd] D[efab] D[fecd] 
    {"abcd,efab,fedc",      2.0,   3, { 4,28,28}},     //   2.0 AO[abcd] D[efab] D[fedc] 
    {"abcd,efba,efcd",     -1.0,   3, { 4,28,28}},     //  -1.0 AO[abcd] D[efba] D[efcd] 
    {"abcd,efba,efdc",      2.0,   3, { 4,28,28}},     //   2.0 AO[abcd] D[efba] D[efdc] 
    {"abcd,efba,fecd",      2.0,   3, { 4,28,28}},     //   2.0 AO[abcd] D[efba] D[fecd] 
    {"abcd,efba,fedc",     -1.0,   3, { 4,28,28}},     //  -1.0 AO[abcd] D[efba] D[fedc] 
    {"ab,cdae,cdbe",       -4.0,   3, { 2,28,28}},     //  -4.0 AO[ab] D[cdae] D[cdbe] 
    {"ab,cdae,cdeb",        2.0,   3, { 2,28,28}},     //   2.0 AO[ab] D[cdae] D[cdeb] 
    {"ab,cdae,dcbe",        2.0,   3, { 2,28,28}},     //   2.0 AO[ab] D[cdae] D[dcbe] 
    {"ab,cdae,dceb",       -4.0,   3, { 2,28,28}},     //  -4.0 AO[ab] D[cdae] D[dceb] 
    {"ab,cdea,cdbe",        2.0,   3, { 2,28,28}},     //   2.0 AO[ab] D[cdea] D[cdbe] 
    {"ab,cdea,cdeb",       -4.0,   3, { 2,28,28}},     //  -4.0 AO[ab] D[cdea] D[cdeb] 
    {"ab,cdea,dcbe",       -4.0,   3, { 2,28,28}},     //  -4.0 AO[ab] D[cdea] D[dcbe] 
    {"ab,cdea,dceb",        2.0,   3, { 2,28,28}},     //   2.0 AO[ab] D[cdea] D[dceb] 
    {"abgc,bdef,cdef,ga",   8.0,   4, { 5,28,28,29}},  //   8.0 AO[abgc] D[bdef] D[cdef] delta[ga] 
    {"abgc,bdef,cdfe,ga",  -4.0,   4, { 5,28,28,29}},  //  -4.0 AO[abgc] D[bdef] D[cdfe] delta[ga] 
    {"abgc,bdef,dcef,ga",  -4.0,   4, { 5,28,28,29}},  //  -4.0 AO[abgc] D[bdef] D[dcef] delta[ga] 
    {"abgc,bdef,dcfe,ga",   8.0,   4, { 5,28,28,29}},  //   8.0 AO[abgc] D[bdef] D[dcfe] delta[ga] 
    {"abgc,dbef,cdef,ga",  -4.0,   4, { 5,28,28,29}},  //  -4.0 AO[abgc] D[dbef] D[cdef] delta[ga] 
    {"abgc,dbef,cdfe,ga",   8.0,   4, { 5,28,28,29}},  //   8.0 AO[abgc] D[dbef] D[cdfe] delta[ga] 
    {"abgc,dbef,dcef,ga",   8.0,   4, { 5,28,28,29}},  //   8.0 AO[abgc] D[dbef] D[dcef] delta[ga] 
    {"abgc,dbef,dcfe,ga",  -4.0,   4, { 5,28,28,29}},  //  -4.0 AO[abgc] D[dbef] D[dcfe] delta[ga] 
    {"abcd,deaf,becf",     -4.0,   3, { 5,28,28}},     //  -4.0 AO[abcd] D[deaf] D[becf] 
    {"abcd,deaf,befc",      2.0,   3, { 5,28,28}},     //   2.0 AO[abcd] D[deaf] D[befc] 
    {"abcd,deaf,ebcf",      2.0,   3, { 5,28,28}},     //   2.0 AO[abcd] D[deaf] D[ebcf] 
    {"abcd,deaf,ebfc",     -4.0,   3, { 5,28,28}},     //  -4.0 AO[abcd] D[deaf] D[ebfc] 
    {"abcd,defa,becf",      2.0,   3, { 5,28,28}},     //   2.0 AO[abcd] D[defa] D[becf] 
    {"abcd,defa,befc",     -4.0,   3, { 5,28,28}},     //  -4.0 AO[abcd] D[defa] D[befc] 
    {"abcd,defa,ebcf",     -4.0,   3, { 5,28,28}},     //  -4.0 AO[abcd] D[defa] D[ebcf] 
    {"abcd,defa,ebfc",      2.0,   3, { 5,28,28}},     //   2.0 AO[abcd] D[defa] D[ebfc] 
    {"abcd,edaf,becf",      2.0,   3, { 5,28,28}},     //   2.0 AO[abcd] D[edaf] D[becf] 
    {"abcd,edaf,befc",     -4.0,   3, { 5,28,28}},     //  -4.0 AO[abcd] D[edaf] D[befc] 
    {"abcd,edaf,ebcf",     -4.0,   3, { 5,28,28}},     //  -4.0 AO[abcd] D[edaf] D[ebcf] 
    {"abcd,edaf,ebfc",      2.0,   3, { 5,28,28}},     //   2.0 AO[abcd] D[edaf] D[ebfc] 
    {"abcd,edfa,becf",     -4.0,   3, { 5,28,28}},     //  -4.0 AO[abcd] D[edfa] D[becf] 
    {"abcd,edfa,befc",      2.0,   3, { 5,28,28}},     //   2.0 AO[abcd] D[edfa] D[befc] 
    {"abcd,edfa,ebcf",      2.0,   3, { 5,28,28}},     //   2.0 AO[abcd] D[edfa] D[ebcf] 
    {"abcd,edfa,ebfc",     -4.0,   3, { 5,28,28}},     //  -4.0 AO[abcd] D[edfa] D[ebfc] 
    {"abcg,adef,bdef,gc",  -4.0,   4, { 8,28,28,29}},  //  -4.0 AO[abcg] D[adef] D[bdef] delta[gc] 
    {"abcg,adef,bdfe,gc",   2.0,   4, { 8,28,28,29}},  //   2.0 AO[abcg] D[adef] D[bdfe] delta[gc] 
    {"abcg,adef,dbef,gc",   2.0,   4, { 8,28,28,29}},  //   2.0 AO[abcg] D[adef] D[dbef] delta[gc] 
    {"abcg,adef,dbfe,gc",  -4.0,   4, { 8,28,28,29}},  //  -4.0 AO[abcg] D[adef] D[dbfe] delta[gc] 
    {"abcg,daef,bdef,gc",   2.0,   4, { 8,28,28,29}},  //   2.0 AO[abcg] D[daef] D[bdef] delta[gc] 
    {"abcg,daef,bdfe,gc",  -4.0,   4, { 8,28,28,29}},  //  -4.0 AO[abcg] D[daef] D[bdfe] delta[gc] 
    {"abcg,daef,dbef,gc",  -4.0,   4, { 8,28,28,29}},  //  -4.0 AO[abcg] D[daef] D[dbef] delta[gc] 
    {"abcg,daef,dbfe,gc",   2.0,   4, { 8,28,28,29}},  //   2.0 AO[abcg] D[daef] D[dbfe] delta[gc] 
    {"abcd,aecf,bedf",      8.0,   3, { 8,28,28}},     //   8.0 AO[abcd] D[aecf] D[bedf] 
    {"abcd,aecf,befd",     -4.0,   3, { 8,28,28}},     //  -4.0 AO[abcd] D[aecf] D[befd] 
    {"abcd,aecf,ebdf",     -4.0,   3, { 8,28,28}},     //  -4.0 AO[abcd] D[aecf] D[ebdf] 
    {"abcd,aecf,ebfd",      8.0,   3, { 8,28,28}},     //   8.0 AO[abcd] D[aecf] D[ebfd] 
    {"abcd,aefc,bedf",     -4.0,   3, { 8,28,28}},     //  -4.0 AO[abcd] D[aefc] D[bedf] 
    {"abcd,aefc,befd",      2.0,   3, { 8,28,28}},     //   2.0 AO[abcd] D[aefc] D[befd] 
    {"abcd,aefc,ebdf",      2.0,   3, { 8,28,28}},     //   2.0 AO[abcd] D[aefc] D[ebdf] 
    {"abcd,aefc,ebfd",     -4.0,   3, { 8,28,28}},     //  -4.0 AO[abcd] D[aefc] D[ebfd] 
    {"abcd,eacf,bedf",     -4.0,   3, { 8,28,28}},     //  -4.0 AO[abcd] D[eacf] D[bedf] 
    {"abcd,eacf,befd",      2.0,   3, { 8,28,28}},     //   2.0 AO[abcd] D[eacf] D[befd] 
    {"abcd,eacf,ebdf",      2.0,   3, { 8,28,28}},     //   2.0 AO[abcd] D[eacf] D[ebdf] 
    {"abcd,eacf,ebfd",     -4.0,   3, { 8,28,28}},     //  -4.0 AO[abcd] D[eacf] D[ebfd] 
    {"abcd,eafc,bedf",      8.0,   3, { 8,28,28}},     //   8.0 AO[abcd] D[eafc] D[bedf] 
    {"abcd,eafc,befd",     -4.0,   3, { 8,28,28}},     //  -4.0 AO[abcd] D[eafc] D[befd] 
    {"abcd,eafc,ebdf",     -4.0,   3, { 8,28,28}},     //  -4.0 AO[abcd] D[eafc] D[ebdf] 
    {"abcd,eafc,ebfd",      8.0,   3, { 8,28,28}},     //   8.0 AO[abcd] D[eafc] D[ebfd] 
    {"abcd,efag,efbg,cd",   2.0,   4, { 3,28,28,30}},  //   2.0 AO[abcd] D[efag] D[efbg] E1[cd] 
    {"abcd,efag,efgb,cd",  -1.0,   4, { 3,28,28,30}},  //  -1.0 AO[abcd] D[efag] D[efgb] E1[cd] 
    {"abcd,efag,febg,cd",  -1.0,   4, { 3,28,28,30}},  //  -1.0 AO[abcd] D[efag] D[febg] E1[cd] 
    {"abcd,efag,fegb,cd",   2.0,   4, { 3,28,28,30}},  //   2.0 AO[abcd] D[efag] D[fegb] E1[cd] 
    {"abcd,efga,efbg,cd",  -1.0,   4, { 3,28,28,30}},  //  -1.0 AO[abcd] D[efga] D[efbg] E1[cd] 
    {"abcd,efga,efgb,cd",   2.0,   4, { 3,28,28,30}},  //   2.0 AO[abcd] D[efga] D[efgb] E1[cd] 
    {"abcd,efga,febg,cd",   2.0,   4, { 3,28,28,30}},  //   2.0 AO[abcd] D[efga] D[febg] E1[cd] 
    {"abcd,efga,fegb,cd",  -1.0,   4, { 3,28,28,30}},  //  -1.0 AO[abcd] D[efga] D[fegb] E1[cd] 
    {"abcd,efag,efcg,bd",  -4.0,   4, { 1,28,28,30}},  //  -4.0 AO[abcd] D[efag] D[efcg] E1[bd] 
    {"abcd,efag,efgc,bd",   2.0,   4, { 1,28,28,30}},  //   2.0 AO[abcd] D[efag] D[efgc] E1[bd] 
    {"abcd,efag,fecg,bd",   2.0,   4, { 1,28,28,30}},  //   2.0 AO[abcd] D[efag] D[fecg] E1[bd] 
    {"abcd,efag,fegc,bd",  -4.0,   4, { 1,28,28,30}},  //  -4.0 AO[abcd] D[efag] D[fegc] E1[bd] 
    {"abcd,efga,efcg,bd",   2.0,   4, { 1,28,28,30}},  //   2.0 AO[abcd] D[efga] D[efcg] E1[bd] 
    {"abcd,efga,efgc,bd",  -4.0,   4, { 1,28,28,30}},  //  -4.0 AO[abcd] D[efga] D[efgc] E1[bd] 
    {"abcd,efga,fecg,bd",  -4.0,   4, { 1,28,28,30}},  //  -4.0 AO[abcd] D[efga] D[fecg] E1[bd] 
    {"abcd,efga,fegc,bd",   2.0,   4, { 1,28,28,30}},  //   2.0 AO[abcd] D[efga] D[fegc] E1[bd] 
    {"abcd,befg,defg,ac",   4.0,   4, { 0,28,28,30}},  //   4.0 AO[abcd] D[befg] D[defg] E1[ac] 
    {"abcd,befg,degf,ac",  -2.0,   4, { 0,28,28,30}},  //  -2.0 AO[abcd] D[befg] D[degf] E1[ac] 
    {"abcd,befg,edfg,ac",  -2.0,   4, { 0,28,28,30}},  //  -2.0 AO[abcd] D[befg] D[edfg] E1[ac] 
    {"abcd,befg,edgf,ac",   4.0,   4, { 0,28,28,30}},  //   4.0 AO[abcd] D[befg] D[edgf] E1[ac] 
    {"abcd,ebfg,defg,ac",  -2.0,   4, { 0,28,28,30}},  //  -2.0 AO[abcd] D[ebfg] D[defg] E1[ac] 
    {"abcd,ebfg,degf,ac",   4.0,   4, { 0,28,28,30}},  //   4.0 AO[abcd] D[ebfg] D[degf] E1[ac] 
    {"abcd,ebfg,edfg,ac",   4.0,   4, { 0,28,28,30}},  //   4.0 AO[abcd] D[ebfg] D[edfg] E1[ac] 
    {"abcd,ebfg,edgf,ac",  -2.0,   4, { 0,28,28,30}},  //  -2.0 AO[abcd] D[ebfg] D[edgf] E1[ac] 
    {"abcd,aefg,befg,cd",  -2.0,   4, { 7,28,28,30}},  //  -2.0 AO[abcd] D[aefg] D[befg] E1[cd] 
    {"abcd,aefg,begf,cd",   1.0,   4, { 7,28,28,30}},  //   1.0 AO[abcd] D[aefg] D[begf] E1[cd] 
    {"abcd,aefg,ebfg,cd",   1.0,   4, { 7,28,28,30}},  //   1.0 AO[abcd] D[aefg] D[ebfg] E1[cd] 
    {"abcd,aefg,ebgf,cd",  -2.0,   4, { 7,28,28,30}},  //  -2.0 AO[abcd] D[aefg] D[ebgf] E1[cd] 
    {"abcd,eafg,befg,cd",   1.0,   4, { 7,28,28,30}},  //   1.0 AO[abcd] D[eafg] D[befg] E1[cd] 
    {"abcd,eafg,begf,cd",  -2.0,   4, { 7,28,28,30}},  //  -2.0 AO[abcd] D[eafg] D[begf] E1[cd] 
    {"abcd,eafg,ebfg,cd",  -2.0,   4, { 7,28,28,30}},  //  -2.0 AO[abcd] D[eafg] D[ebfg] E1[cd] 
    {"abcd,eafg,ebgf,cd",   1.0,   4, { 7,28,28,30}},  //   1.0 AO[abcd] D[eafg] D[ebgf] E1[cd] 
    {"abcd,abef,cdef",      2.0,   3, { 9,28,28}},     //   2.0 AO[abcd] D[abef] D[cdef] 
    {"abcd,abef,cdfe",     -1.0,   3, { 9,28,28}},     //  -1.0 AO[abcd] D[abef] D[cdfe] 
    {"abcd,abef,dcef",     -1.0,   3, { 9,28,28}},     //  -1.0 AO[abcd] D[abef] D[dcef] 
    {"abcd,abef,dcfe",      2.0,   3, { 9,28,28}},     //   2.0 AO[abcd] D[abef] D[dcfe] 
    {"abcd,baef,cdef",     -1.0,   3, { 9,28,28}},     //  -1.0 AO[abcd] D[baef] D[cdef] 
    {"abcd,baef,cdfe",      2.0,   3, { 9,28,28}},     //   2.0 AO[abcd] D[baef] D[cdfe] 
    {"abcd,baef,dcef",      2.0,   3, { 9,28,28}},     //   2.0 AO[abcd] D[baef] D[dcef] 
    {"abcd,baef,dcfe",     -1.0,   3, { 9,28,28}},     //  -1.0 AO[abcd] D[baef] D[dcfe] 
    {"ab,acde,bcde",        4.0,   3, { 6,28,28}},     //   4.0 AO[ab] D[acde] D[bcde] 
    {"ab,acde,bced",       -2.0,   3, { 6,28,28}},     //  -2.0 AO[ab] D[acde] D[bced] 
    {"ab,acde,cbde",       -2.0,   3, { 6,28,28}},     //  -2.0 AO[ab] D[acde] D[cbde] 
    {"ab,acde,cbed",        4.0,   3, { 6,28,28}},     //   4.0 AO[ab] D[acde] D[cbed] 
    {"ab,cade,bcde",       -2.0,   3, { 6,28,28}},     //  -2.0 AO[ab] D[cade] D[bcde] 
    {"ab,cade,bced",        4.0,   3, { 6,28,28}},     //   4.0 AO[ab] D[cade] D[bced] 
    {"ab,cade,cbde",        4.0,   3, { 6,28,28}},     //   4.0 AO[ab] D[cade] D[cbde] 
    {"ab,cade,cbed",       -2.0,   3, { 6,28,28}},     //  -2.0 AO[ab] D[cade] D[cbed] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 31;
    Out.EqsRes = FEqSet(&EqsRes[0], 144, "MRLCC3/Res");
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

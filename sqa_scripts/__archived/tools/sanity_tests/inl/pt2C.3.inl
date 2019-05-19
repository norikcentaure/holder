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
// <E_cv E_ca  | E_ac E_vc > =   40
// <E_cv E_ca  | E_ac E_vc > =    8
// <E_cv E_ca  | E_ac E_vc > =   12
// <E_cv E_ca  | E_ac E_vc > =   12
// <E_cv E_ca  | E_ac E_vc > =   24
// <E_cv E_ca  | E_ac E_vc > =   24
// <E_cv E_ca  | E_ac E_vc > =   12
// <E_cv E_ca  | E_ac E_vc > =    4
// <E_cv E_ca  | E_ac E_vc > =   10
// <E_cv E_ca  | E_ac E_vc > =   10
// <E_cv E_ca  | E_ac E_vc > =    0
// <E_cv E_ca  | E_ac E_vc > =    4
namespace MRLCC3 {

  FTensorDecl TensorDecls[34] = {
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
    /* 31*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 32*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 33*/{"E2"     , "aaaa"     , "", USAGE_Density     },
  };

	FEqInfo EqsRes[160] = {
    {"abgc,bdef,cdef,ga",     -4.0,   4, { 6,25,25,31}},     //  -4.0 AO[abgc] D[bdef] D[cdef] delta[ga] 
    {"abgc,bdef,dcef,ga",      2.0,   4, { 6,25,25,31}},     //   2.0 AO[abgc] D[bdef] D[dcef] delta[ga] 
    {"abgc,dbef,cdef,ga",      2.0,   4, { 6,25,25,31}},     //   2.0 AO[abgc] D[dbef] D[cdef] delta[ga] 
    {"abgc,dbef,dcef,ga",     -4.0,   4, { 6,25,25,31}},     //  -4.0 AO[abgc] D[dbef] D[dcef] delta[ga] 
    {"abgc,adef,cdef,gb",      2.0,   4, { 6,25,25,31}},     //   2.0 AO[abgc] D[adef] D[cdef] delta[gb] 
    {"abgc,adef,dcef,gb",     -1.0,   4, { 6,25,25,31}},     //  -1.0 AO[abgc] D[adef] D[dcef] delta[gb] 
    {"abgc,daef,cdef,gb",     -1.0,   4, { 6,25,25,31}},     //  -1.0 AO[abgc] D[daef] D[cdef] delta[gb] 
    {"abgc,daef,dcef,gb",      2.0,   4, { 6,25,25,31}},     //   2.0 AO[abgc] D[daef] D[dcef] delta[gb] 
    {"abcg,bdef,cdef,ga",      2.0,   4, { 6,25,25,31}},     //   2.0 AO[abcg] D[bdef] D[cdef] delta[ga] 
    {"abcg,bdef,dcef,ga",     -1.0,   4, { 6,25,25,31}},     //  -1.0 AO[abcg] D[bdef] D[dcef] delta[ga] 
    {"abcg,dbef,cdef,ga",     -1.0,   4, { 6,25,25,31}},     //  -1.0 AO[abcg] D[dbef] D[cdef] delta[ga] 
    {"abcg,dbef,dcef,ga",      2.0,   4, { 6,25,25,31}},     //   2.0 AO[abcg] D[dbef] D[dcef] delta[ga] 
    {"abcg,adef,cdef,gb",     -4.0,   4, { 6,25,25,31}},     //  -4.0 AO[abcg] D[adef] D[cdef] delta[gb] 
    {"abcg,adef,dcef,gb",      2.0,   4, { 6,25,25,31}},     //   2.0 AO[abcg] D[adef] D[dcef] delta[gb] 
    {"abcg,daef,cdef,gb",      2.0,   4, { 6,25,25,31}},     //   2.0 AO[abcg] D[daef] D[cdef] delta[gb] 
    {"abcg,daef,dcef,gb",     -4.0,   4, { 6,25,25,31}},     //  -4.0 AO[abcg] D[daef] D[dcef] delta[gb] 
    {"abcd,abef,cdef",         2.0,   3, { 6,25,25}},        //   2.0 AO[abcd] D[abef] D[cdef] 
    {"abcd,abef,dcef",        -1.0,   3, { 6,25,25}},        //  -1.0 AO[abcd] D[abef] D[dcef] 
    {"abcd,baef,cdef",        -1.0,   3, { 6,25,25}},        //  -1.0 AO[abcd] D[baef] D[cdef] 
    {"abcd,baef,dcef",         2.0,   3, { 6,25,25}},        //   2.0 AO[abcd] D[baef] D[dcef] 
    {"abhc,bdef,cdgf,eg,ha",   2.0,   5, { 6,25,25,32,31}},  //   2.0 AO[abhc] D[bdef] D[cdgf] E1[eg] delta[ha] 
    {"abhc,bdef,dcgf,eg,ha",  -1.0,   5, { 6,25,25,32,31}},  //  -1.0 AO[abhc] D[bdef] D[dcgf] E1[eg] delta[ha] 
    {"abhc,dbef,cdgf,eg,ha",  -1.0,   5, { 6,25,25,32,31}},  //  -1.0 AO[abhc] D[dbef] D[cdgf] E1[eg] delta[ha] 
    {"abhc,dbef,dcgf,eg,ha",   2.0,   5, { 6,25,25,32,31}},  //   2.0 AO[abhc] D[dbef] D[dcgf] E1[eg] delta[ha] 
    {"abhc,adef,cdgf,eg,hb",  -1.0,   5, { 6,25,25,32,31}},  //  -1.0 AO[abhc] D[adef] D[cdgf] E1[eg] delta[hb] 
    {"abhc,adef,dcgf,eg,hb",   0.5,   5, { 6,25,25,32,31}},  //   0.5 AO[abhc] D[adef] D[dcgf] E1[eg] delta[hb] 
    {"abhc,daef,cdgf,eg,hb",   0.5,   5, { 6,25,25,32,31}},  //   0.5 AO[abhc] D[daef] D[cdgf] E1[eg] delta[hb] 
    {"abhc,daef,dcgf,eg,hb",  -1.0,   5, { 6,25,25,32,31}},  //  -1.0 AO[abhc] D[daef] D[dcgf] E1[eg] delta[hb] 
    {"abch,bdef,cdgf,eg,ha",  -1.0,   5, { 6,25,25,32,31}},  //  -1.0 AO[abch] D[bdef] D[cdgf] E1[eg] delta[ha] 
    {"abch,bdef,dcgf,eg,ha",   0.5,   5, { 6,25,25,32,31}},  //   0.5 AO[abch] D[bdef] D[dcgf] E1[eg] delta[ha] 
    {"abch,dbef,cdgf,eg,ha",   0.5,   5, { 6,25,25,32,31}},  //   0.5 AO[abch] D[dbef] D[cdgf] E1[eg] delta[ha] 
    {"abch,dbef,dcgf,eg,ha",  -1.0,   5, { 6,25,25,32,31}},  //  -1.0 AO[abch] D[dbef] D[dcgf] E1[eg] delta[ha] 
    {"abch,adef,cdgf,eg,hb",   2.0,   5, { 6,25,25,32,31}},  //   2.0 AO[abch] D[adef] D[cdgf] E1[eg] delta[hb] 
    {"abch,adef,dcgf,eg,hb",  -1.0,   5, { 6,25,25,32,31}},  //  -1.0 AO[abch] D[adef] D[dcgf] E1[eg] delta[hb] 
    {"abch,daef,cdgf,eg,hb",  -1.0,   5, { 6,25,25,32,31}},  //  -1.0 AO[abch] D[daef] D[cdgf] E1[eg] delta[hb] 
    {"abch,daef,dcgf,eg,hb",   2.0,   5, { 6,25,25,32,31}},  //   2.0 AO[abch] D[daef] D[dcgf] E1[eg] delta[hb] 
    {"abcd,abef,cdgf,eg",     -1.0,   4, { 6,25,25,32}},     //  -1.0 AO[abcd] D[abef] D[cdgf] E1[eg] 
    {"abcd,abef,dcgf,eg",      0.5,   4, { 6,25,25,32}},     //   0.5 AO[abcd] D[abef] D[dcgf] E1[eg] 
    {"abcd,baef,cdgf,eg",      0.5,   4, { 6,25,25,32}},     //   0.5 AO[abcd] D[baef] D[cdgf] E1[eg] 
    {"abcd,baef,dcgf,eg",     -1.0,   4, { 6,25,25,32}},     //  -1.0 AO[abcd] D[baef] D[dcgf] E1[eg] 
    {"ab,acde,bcde",          -4.0,   3, { 4,25,25}},        //  -4.0 AO[ab] D[acde] D[bcde] 
    {"ab,acde,cbde",           2.0,   3, { 4,25,25}},        //   2.0 AO[ab] D[acde] D[cbde] 
    {"ab,cade,bcde",           2.0,   3, { 4,25,25}},        //   2.0 AO[ab] D[cade] D[bcde] 
    {"ab,cade,cbde",          -4.0,   3, { 4,25,25}},        //  -4.0 AO[ab] D[cade] D[cbde] 
    {"ab,acde,bcfe,fd",        2.0,   4, { 4,25,25,32}},     //   2.0 AO[ab] D[acde] D[bcfe] E1[fd] 
    {"ab,acde,cbfe,fd",       -1.0,   4, { 4,25,25,32}},     //  -1.0 AO[ab] D[acde] D[cbfe] E1[fd] 
    {"ab,cade,bcfe,fd",       -1.0,   4, { 4,25,25,32}},     //  -1.0 AO[ab] D[cade] D[bcfe] E1[fd] 
    {"ab,cade,cbfe,fd",        2.0,   4, { 4,25,25,32}},     //   2.0 AO[ab] D[cade] D[cbfe] E1[fd] 
    {"abgc,defb,defc,ga",      8.0,   4, { 7,25,25,31}},     //   8.0 AO[abgc] D[defb] D[defc] delta[ga] 
    {"abgc,defb,edfc,ga",     -4.0,   4, { 7,25,25,31}},     //  -4.0 AO[abgc] D[defb] D[edfc] delta[ga] 
    {"abcd,aefd,cefb",        -4.0,   3, { 7,25,25}},        //  -4.0 AO[abcd] D[aefd] D[cefb] 
    {"abcd,aefd,ecfb",         2.0,   3, { 7,25,25}},        //   2.0 AO[abcd] D[aefd] D[ecfb] 
    {"abcd,eafd,cefb",         2.0,   3, { 7,25,25}},        //   2.0 AO[abcd] D[eafd] D[cefb] 
    {"abcd,eafd,ecfb",        -4.0,   3, { 7,25,25}},        //  -4.0 AO[abcd] D[eafd] D[ecfb] 
    {"abhc,defb,degc,gf,ha",  -4.0,   5, { 7,25,25,32,31}},  //  -4.0 AO[abhc] D[defb] D[degc] E1[gf] delta[ha] 
    {"abhc,defb,edgc,gf,ha",   2.0,   5, { 7,25,25,32,31}},  //   2.0 AO[abhc] D[defb] D[edgc] E1[gf] delta[ha] 
    {"abcd,aefd,cegb,fg",      2.0,   4, { 7,25,25,32}},     //   2.0 AO[abcd] D[aefd] D[cegb] E1[fg] 
    {"abcd,aefd,ecgb,fg",     -1.0,   4, { 7,25,25,32}},     //  -1.0 AO[abcd] D[aefd] D[ecgb] E1[fg] 
    {"abcd,eafd,cegb,fg",     -1.0,   4, { 7,25,25,32}},     //  -1.0 AO[abcd] D[eafd] D[cegb] E1[fg] 
    {"abcd,eafd,ecgb,fg",      2.0,   4, { 7,25,25,32}},     //   2.0 AO[abcd] D[eafd] D[ecgb] E1[fg] 
    {"abcg,defa,defb,gc",     -4.0,   4, {10,25,25,31}},     //  -4.0 AO[abcg] D[defa] D[defb] delta[gc] 
    {"abcg,defa,edfb,gc",      2.0,   4, {10,25,25,31}},     //   2.0 AO[abcg] D[defa] D[edfb] delta[gc] 
    {"abcd,cefa,defb",         2.0,   3, {10,25,25}},        //   2.0 AO[abcd] D[cefa] D[defb] 
    {"abcd,cefa,edfb",        -4.0,   3, {10,25,25}},        //  -4.0 AO[abcd] D[cefa] D[edfb] 
    {"abcd,ecfa,defb",        -4.0,   3, {10,25,25}},        //  -4.0 AO[abcd] D[ecfa] D[defb] 
    {"abcd,ecfa,edfb",         8.0,   3, {10,25,25}},        //   8.0 AO[abcd] D[ecfa] D[edfb] 
    {"abch,defa,degb,fg,hc",   2.0,   5, {10,25,25,32,31}},  //   2.0 AO[abch] D[defa] D[degb] E1[fg] delta[hc] 
    {"abch,defa,edgb,fg,hc",  -1.0,   5, {10,25,25,32,31}},  //  -1.0 AO[abch] D[defa] D[edgb] E1[fg] delta[hc] 
    {"abcd,cefa,degb,fg",     -1.0,   4, {10,25,25,32}},     //  -1.0 AO[abcd] D[cefa] D[degb] E1[fg] 
    {"abcd,cefa,edgb,fg",      2.0,   4, {10,25,25,32}},     //   2.0 AO[abcd] D[cefa] D[edgb] E1[fg] 
    {"abcd,ecfa,degb,fg",      2.0,   4, {10,25,25,32}},     //   2.0 AO[abcd] D[ecfa] D[degb] E1[fg] 
    {"abcd,ecfa,edgb,fg",     -4.0,   4, {10,25,25,32}},     //  -4.0 AO[abcd] D[ecfa] D[edgb] E1[fg] 
    {"agbc,debf,decf,ga",     -4.0,   4, { 5,25,25,31}},     //  -4.0 AO[agbc] D[debf] D[decf] delta[ga] 
    {"agbc,debf,edcf,ga",      2.0,   4, { 5,25,25,31}},     //   2.0 AO[agbc] D[debf] D[edcf] delta[ga] 
    {"abcd,aecf,bedf",         8.0,   3, { 5,25,25}},        //   8.0 AO[abcd] D[aecf] D[bedf] 
    {"abcd,aecf,ebdf",        -4.0,   3, { 5,25,25}},        //  -4.0 AO[abcd] D[aecf] D[ebdf] 
    {"abcd,eacf,bedf",        -4.0,   3, { 5,25,25}},        //  -4.0 AO[abcd] D[eacf] D[bedf] 
    {"abcd,eacf,ebdf",         2.0,   3, { 5,25,25}},        //   2.0 AO[abcd] D[eacf] D[ebdf] 
    {"ahbc,decf,degf,bg,ha",   2.0,   5, { 5,25,25,32,31}},  //   2.0 AO[ahbc] D[decf] D[degf] E1[bg] delta[ha] 
    {"ahbc,decf,edgf,bg,ha",  -1.0,   5, { 5,25,25,32,31}},  //  -1.0 AO[ahbc] D[decf] D[edgf] E1[bg] delta[ha] 
    {"abcd,aecf,begf,gd",     -4.0,   4, { 5,25,25,32}},     //  -4.0 AO[abcd] D[aecf] D[begf] E1[gd] 
    {"abcd,aecf,ebgf,gd",      2.0,   4, { 5,25,25,32}},     //   2.0 AO[abcd] D[aecf] D[ebgf] E1[gd] 
    {"abcd,aefg,bedg,cf",     -4.0,   4, { 5,25,25,32}},     //  -4.0 AO[abcd] D[aefg] D[bedg] E1[cf] 
    {"abcd,aefg,befg,cd",      2.0,   4, { 5,25,25,32}},     //   2.0 AO[abcd] D[aefg] D[befg] E1[cd] 
    {"abcd,aefg,ebdg,cf",      2.0,   4, { 5,25,25,32}},     //   2.0 AO[abcd] D[aefg] D[ebdg] E1[cf] 
    {"abcd,aefg,ebfg,cd",     -1.0,   4, { 5,25,25,32}},     //  -1.0 AO[abcd] D[aefg] D[ebfg] E1[cd] 
    {"abcd,eacf,begf,gd",      2.0,   4, { 5,25,25,32}},     //   2.0 AO[abcd] D[eacf] D[begf] E1[gd] 
    {"abcd,eacf,ebgf,gd",     -1.0,   4, { 5,25,25,32}},     //  -1.0 AO[abcd] D[eacf] D[ebgf] E1[gd] 
    {"abcd,eafg,bedg,cf",      2.0,   4, { 5,25,25,32}},     //   2.0 AO[abcd] D[eafg] D[bedg] E1[cf] 
    {"abcd,eafg,befg,cd",     -1.0,   4, { 5,25,25,32}},     //  -1.0 AO[abcd] D[eafg] D[befg] E1[cd] 
    {"abcd,eafg,ebdg,cf",     -1.0,   4, { 5,25,25,32}},     //  -1.0 AO[abcd] D[eafg] D[ebdg] E1[cf] 
    {"abcd,eafg,ebfg,cd",      2.0,   4, { 5,25,25,32}},     //   2.0 AO[abcd] D[eafg] D[ebfg] E1[cd] 
    {"abcd,aefg,behg,chfd",    2.0,   4, { 5,25,25,33}},     //   2.0 AO[abcd] D[aefg] D[behg] E2[chfd] 
    {"abcd,aefg,ebhg,chfd",   -1.0,   4, { 5,25,25,33}},     //  -1.0 AO[abcd] D[aefg] D[ebhg] E2[chfd] 
    {"abcd,eafg,behg,chfd",   -1.0,   4, { 5,25,25,33}},     //  -1.0 AO[abcd] D[eafg] D[behg] E2[chfd] 
    {"abcd,eafg,ebhg,chdf",   -1.0,   4, { 5,25,25,33}},     //  -1.0 AO[abcd] D[eafg] D[ebhg] E2[chdf] 
    {"abgc,debf,decf,ga",      8.0,   4, { 3,25,25,31}},     //   8.0 AO[abgc] D[debf] D[decf] delta[ga] 
    {"abgc,debf,edcf,ga",     -4.0,   4, { 3,25,25,31}},     //  -4.0 AO[abgc] D[debf] D[edcf] delta[ga] 
    {"abcd,aedf,cebf",        -4.0,   3, { 3,25,25}},        //  -4.0 AO[abcd] D[aedf] D[cebf] 
    {"abcd,aedf,ecbf",         2.0,   3, { 3,25,25}},        //   2.0 AO[abcd] D[aedf] D[ecbf] 
    {"abcd,eadf,cebf",         2.0,   3, { 3,25,25}},        //   2.0 AO[abcd] D[eadf] D[cebf] 
    {"abcd,eadf,ecbf",        -4.0,   3, { 3,25,25}},        //  -4.0 AO[abcd] D[eadf] D[ecbf] 
    {"abhc,decf,degf,bg,ha",  -4.0,   5, { 3,25,25,32,31}},  //  -4.0 AO[abhc] D[decf] D[degf] E1[bg] delta[ha] 
    {"abhc,decf,edgf,bg,ha",   2.0,   5, { 3,25,25,32,31}},  //   2.0 AO[abhc] D[decf] D[edgf] E1[bg] delta[ha] 
    {"abcd,aedf,cegf,bg",      2.0,   4, { 3,25,25,32}},     //   2.0 AO[abcd] D[aedf] D[cegf] E1[bg] 
    {"abcd,aedf,ecgf,bg",     -1.0,   4, { 3,25,25,32}},     //  -1.0 AO[abcd] D[aedf] D[ecgf] E1[bg] 
    {"abcd,aefg,cebg,fd",      2.0,   4, { 3,25,25,32}},     //   2.0 AO[abcd] D[aefg] D[cebg] E1[fd] 
    {"abcd,aefg,cefg,bd",     -4.0,   4, { 3,25,25,32}},     //  -4.0 AO[abcd] D[aefg] D[cefg] E1[bd] 
    {"abcd,aefg,ecbg,fd",     -1.0,   4, { 3,25,25,32}},     //  -1.0 AO[abcd] D[aefg] D[ecbg] E1[fd] 
    {"abcd,aefg,ecfg,bd",      2.0,   4, { 3,25,25,32}},     //   2.0 AO[abcd] D[aefg] D[ecfg] E1[bd] 
    {"abcd,eadf,cegf,bg",     -1.0,   4, { 3,25,25,32}},     //  -1.0 AO[abcd] D[eadf] D[cegf] E1[bg] 
    {"abcd,eadf,ecgf,bg",      2.0,   4, { 3,25,25,32}},     //   2.0 AO[abcd] D[eadf] D[ecgf] E1[bg] 
    {"abcd,eafg,cebg,fd",     -1.0,   4, { 3,25,25,32}},     //  -1.0 AO[abcd] D[eafg] D[cebg] E1[fd] 
    {"abcd,eafg,cefg,bd",      2.0,   4, { 3,25,25,32}},     //   2.0 AO[abcd] D[eafg] D[cefg] E1[bd] 
    {"abcd,eafg,ecbg,fd",      2.0,   4, { 3,25,25,32}},     //   2.0 AO[abcd] D[eafg] D[ecbg] E1[fd] 
    {"abcd,eafg,ecfg,bd",     -4.0,   4, { 3,25,25,32}},     //  -4.0 AO[abcd] D[eafg] D[ecfg] E1[bd] 
    {"abcd,aefg,cehg,bfdh",    2.0,   4, { 3,25,25,33}},     //   2.0 AO[abcd] D[aefg] D[cehg] E2[bfdh] 
    {"abcd,aefg,echg,bfdh",   -1.0,   4, { 3,25,25,33}},     //  -1.0 AO[abcd] D[aefg] D[echg] E2[bfdh] 
    {"abcd,eafg,cehg,bfdh",   -1.0,   4, { 3,25,25,33}},     //  -1.0 AO[abcd] D[eafg] D[cehg] E2[bfdh] 
    {"abcd,eafg,echg,bfdh",    2.0,   4, { 3,25,25,33}},     //   2.0 AO[abcd] D[eafg] D[echg] E2[bfdh] 
    {"abcd,efag,efcg,bd",      2.0,   4, { 1,25,25,32}},     //   2.0 AO[abcd] D[efag] D[efcg] E1[bd] 
    {"abcd,efag,efdg,bc",     -1.0,   4, { 1,25,25,32}},     //  -1.0 AO[abcd] D[efag] D[efdg] E1[bc] 
    {"abcd,efag,fecg,bd",     -1.0,   4, { 1,25,25,32}},     //  -1.0 AO[abcd] D[efag] D[fecg] E1[bd] 
    {"abcd,efag,fedg,bc",      0.5,   4, { 1,25,25,32}},     //   0.5 AO[abcd] D[efag] D[fedg] E1[bc] 
    {"abcd,efbg,efcg,ad",     -1.0,   4, { 1,25,25,32}},     //  -1.0 AO[abcd] D[efbg] D[efcg] E1[ad] 
    {"abcd,efbg,efdg,ac",      2.0,   4, { 1,25,25,32}},     //   2.0 AO[abcd] D[efbg] D[efdg] E1[ac] 
    {"abcd,efbg,fecg,ad",      0.5,   4, { 1,25,25,32}},     //   0.5 AO[abcd] D[efbg] D[fecg] E1[ad] 
    {"abcd,efbg,fedg,ac",     -1.0,   4, { 1,25,25,32}},     //  -1.0 AO[abcd] D[efbg] D[fedg] E1[ac] 
    {"abcd,efcg,efhg,abhd",   -1.0,   4, { 1,25,25,33}},     //  -1.0 AO[abcd] D[efcg] D[efhg] E2[abhd] 
    {"abcd,efcg,fehg,abhd",    0.5,   4, { 1,25,25,33}},     //   0.5 AO[abcd] D[efcg] D[fehg] E2[abhd] 
    {"abcd,efdg,efhg,abch",   -1.0,   4, { 1,25,25,33}},     //  -1.0 AO[abcd] D[efdg] D[efhg] E2[abch] 
    {"abcd,efdg,fehg,abch",    0.5,   4, { 1,25,25,33}},     //   0.5 AO[abcd] D[efdg] D[fehg] E2[abch] 
    {"ab,cdae,cdbe",           4.0,   3, { 0,25,25}},        //   4.0 AO[ab] D[cdae] D[cdbe] 
    {"ab,cdae,dcbe",          -2.0,   3, { 0,25,25}},        //  -2.0 AO[ab] D[cdae] D[dcbe] 
    {"ab,cdae,cdfe,bf",       -2.0,   4, { 0,25,25,32}},     //  -2.0 AO[ab] D[cdae] D[cdfe] E1[bf] 
    {"ab,cdae,dcfe,bf",        1.0,   4, { 0,25,25,32}},     //   1.0 AO[ab] D[cdae] D[dcfe] E1[bf] 
    {"abcd,efab,efcd",         4.0,   3, { 2,25,25}},        //   4.0 AO[abcd] D[efab] D[efcd] 
    {"abcd,efab,fecd",        -2.0,   3, { 2,25,25}},        //  -2.0 AO[abcd] D[efab] D[fecd] 
    {"abcd,efab,efgd,gc",     -2.0,   4, { 2,25,25,32}},     //  -2.0 AO[abcd] D[efab] D[efgd] E1[gc] 
    {"abcd,efab,fegd,gc",      1.0,   4, { 2,25,25,32}},     //   1.0 AO[abcd] D[efab] D[fegd] E1[gc] 
    {"abcd,efgb,efcd,ag",     -2.0,   4, { 2,25,25,32}},     //  -2.0 AO[abcd] D[efgb] D[efcd] E1[ag] 
    {"abcd,efgb,efgd,ac",      4.0,   4, { 2,25,25,32}},     //   4.0 AO[abcd] D[efgb] D[efgd] E1[ac] 
    {"abcd,efgb,fecd,ag",      1.0,   4, { 2,25,25,32}},     //   1.0 AO[abcd] D[efgb] D[fecd] E1[ag] 
    {"abcd,efgb,fegd,ac",     -2.0,   4, { 2,25,25,32}},     //  -2.0 AO[abcd] D[efgb] D[fegd] E1[ac] 
    {"abcd,efgb,efhd,ahcg",   -2.0,   4, { 2,25,25,33}},     //  -2.0 AO[abcd] D[efgb] D[efhd] E2[ahcg] 
    {"abcd,efgb,fehd,ahcg",    1.0,   4, { 2,25,25,33}},     //   1.0 AO[abcd] D[efgb] D[fehd] E2[ahcg] 
    {"abcd,efda,efcb",        -2.0,   3, { 9,25,25}},        //  -2.0 AO[abcd] D[efda] D[efcb] 
    {"abcd,efda,fecb",         4.0,   3, { 9,25,25}},        //   4.0 AO[abcd] D[efda] D[fecb] 
    {"abcd,efda,efgb,cg",      1.0,   4, { 9,25,25,32}},     //   1.0 AO[abcd] D[efda] D[efgb] E1[cg] 
    {"abcd,efda,fegb,cg",     -2.0,   4, { 9,25,25,32}},     //  -2.0 AO[abcd] D[efda] D[fegb] E1[cg] 
    {"abcd,efga,efcb,gd",      1.0,   4, { 9,25,25,32}},     //   1.0 AO[abcd] D[efga] D[efcb] E1[gd] 
    {"abcd,efga,efgb,cd",     -2.0,   4, { 9,25,25,32}},     //  -2.0 AO[abcd] D[efga] D[efgb] E1[cd] 
    {"abcd,efga,fecb,gd",     -2.0,   4, { 9,25,25,32}},     //  -2.0 AO[abcd] D[efga] D[fecb] E1[gd] 
    {"abcd,efga,fegb,cd",      1.0,   4, { 9,25,25,32}},     //   1.0 AO[abcd] D[efga] D[fegb] E1[cd] 
    {"abcd,efga,efhb,cgdh",    1.0,   4, { 9,25,25,33}},     //   1.0 AO[abcd] D[efga] D[efhb] E2[cgdh] 
    {"abcd,efga,fehb,cghd",    1.0,   4, { 9,25,25,33}},     //   1.0 AO[abcd] D[efga] D[fehb] E2[cghd] 
    {"ab,cdea,cdeb",           4.0,   3, { 8,25,25}},        //   4.0 AO[ab] D[cdea] D[cdeb] 
    {"ab,cdea,dceb",          -2.0,   3, { 8,25,25}},        //  -2.0 AO[ab] D[cdea] D[dceb] 
    {"ab,cdea,cdfb,ef",       -2.0,   4, { 8,25,25,32}},     //  -2.0 AO[ab] D[cdea] D[cdfb] E1[ef] 
    {"ab,cdea,dcfb,ef",        1.0,   4, { 8,25,25,32}},     //   1.0 AO[ab] D[cdea] D[dcfb] E1[ef] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 34;
    Out.EqsRes = FEqSet(&EqsRes[0], 160, "MRLCC3/Res");
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

[3]
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
// <E_av E_av  | E_va E_va > =    0
// <E_av E_av  | E_va E_va > =    0
// <E_av E_av  | E_va E_va > =    4
// <E_av E_av  | E_va E_va > =    4
// <E_av E_av  | E_va E_va > =    4
// <E_av E_av  | E_va E_va > =    4
// <E_av E_av  | E_va E_va > =   12
// <E_av E_av  | E_va E_va > =    4
// <E_av E_av  | E_va E_va > =    4
// <E_av E_av  | E_va E_va > =    4
// <E_av E_av  | E_va E_va > =    4
// <E_av E_av  | E_va E_va > =    4
namespace MRLCC3 {

  FTensorDecl TensorDecls[32] = {
    /*  0*/{"AO"     , "aa"       , "", USAGE_Amplitude   },
    /*  1*/{"AO"     , "aaaa"     , "", USAGE_Amplitude   },
    /*  2*/{"AO"     , "aeae"     , "", USAGE_Amplitude   },
    /*  3*/{"AO"     , "caca"     , "", USAGE_Amplitude   },
    /*  4*/{"AO"     , "ccaa"     , "", USAGE_Amplitude   },
    /*  5*/{"AO"     , "cece"     , "", USAGE_Amplitude   },
    /*  6*/{"AO"     , "ee"       , "", USAGE_Amplitude   },
    /*  7*/{"AO"     , "eeaa"     , "", USAGE_Amplitude   },
    /*  8*/{"AO"     , "eecc"     , "", USAGE_Amplitude   },
    /*  9*/{"AO"     , "eeee"     , "", USAGE_Amplitude   },
    /* 10*/{"W"      , "aaaa"     , "", USAGE_Amplitude   },
    /* 11*/{"W"      , "aeae"     , "", USAGE_Amplitude   },
    /* 12*/{"W"      , "caca"     , "", USAGE_Amplitude   },
    /* 13*/{"W"      , "ccaa"     , "", USAGE_Amplitude   },
    /* 14*/{"W"      , "cece"     , "", USAGE_Amplitude   },
    /* 15*/{"W"      , "eeaa"     , "", USAGE_Amplitude   },
    /* 16*/{"W"      , "eecc"     , "", USAGE_Amplitude   },
    /* 17*/{"W"      , "eeee"     , "", USAGE_Amplitude   },
    /* 18*/{"k"      , "aa"       , "", USAGE_Amplitude   },
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
    /* 30*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 31*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

	FEqInfo EqsRes[48] = {
    {"abic,bdef,cdgh,efgh,ia",   2.0,   5, { 5,26,26,30,29}},  //   2.0 AO[abic] D[bdef] D[cdgh] E2[efgh] delta[ia] 
    {"abic,bdef,dcgh,efhg,ia",   2.0,   5, { 5,26,26,30,29}},  //   2.0 AO[abic] D[bdef] D[dcgh] E2[efhg] delta[ia] 
    {"abic,dbef,cdgh,efhg,ia",   2.0,   5, { 5,26,26,30,29}},  //   2.0 AO[abic] D[dbef] D[cdgh] E2[efhg] delta[ia] 
    {"abic,dbef,dcgh,efgh,ia",   2.0,   5, { 5,26,26,30,29}},  //   2.0 AO[abic] D[dbef] D[dcgh] E2[efgh] delta[ia] 
    {"abci,adef,bdgh,ghef,ic",  -1.0,   5, { 8,26,26,30,29}},  //  -1.0 AO[abci] D[adef] D[bdgh] E2[ghef] delta[ic] 
    {"abci,adef,dbgh,ghfe,ic",  -1.0,   5, { 8,26,26,30,29}},  //  -1.0 AO[abci] D[adef] D[dbgh] E2[ghfe] delta[ic] 
    {"abci,daef,bdgh,ghfe,ic",  -1.0,   5, { 8,26,26,30,29}},  //  -1.0 AO[abci] D[daef] D[bdgh] E2[ghfe] delta[ic] 
    {"abci,daef,dbgh,ghef,ic",  -1.0,   5, { 8,26,26,30,29}},  //  -1.0 AO[abci] D[daef] D[dbgh] E2[ghef] delta[ic] 
    {"aibc,debf,degh,ghcf,ia",   1.0,   5, { 4,26,26,30,29}},  //   1.0 AO[aibc] D[debf] D[degh] E2[ghcf] delta[ia] 
    {"aibc,debf,edgh,ghfc,ia",   1.0,   5, { 4,26,26,30,29}},  //   1.0 AO[aibc] D[debf] D[edgh] E2[ghfc] delta[ia] 
    {"aibc,defb,degh,ghfc,ia",   1.0,   5, { 4,26,26,30,29}},  //   1.0 AO[aibc] D[defb] D[degh] E2[ghfc] delta[ia] 
    {"aibc,defb,edgh,ghcf,ia",   1.0,   5, { 4,26,26,30,29}},  //   1.0 AO[aibc] D[defb] D[edgh] E2[ghcf] delta[ia] 
    {"abic,debf,degh,ghcf,ia",  -2.0,   5, { 3,26,26,30,29}},  //  -2.0 AO[abic] D[debf] D[degh] E2[ghcf] delta[ia] 
    {"abic,debf,edgh,ghfc,ia",  -2.0,   5, { 3,26,26,30,29}},  //  -2.0 AO[abic] D[debf] D[edgh] E2[ghfc] delta[ia] 
    {"abic,defb,degh,ghfc,ia",  -2.0,   5, { 3,26,26,30,29}},  //  -2.0 AO[abic] D[defb] D[degh] E2[ghfc] delta[ia] 
    {"abic,defb,edgh,ghcf,ia",  -2.0,   5, { 3,26,26,30,29}},  //  -2.0 AO[abic] D[defb] D[edgh] E2[ghcf] delta[ia] 
    {"abcd,efab,efgh,ghcd",     -0.5,   4, { 1,26,26,30}},     //  -0.5 AO[abcd] D[efab] D[efgh] E2[ghcd] 
    {"abcd,efab,fegh,ghdc",     -0.5,   4, { 1,26,26,30}},     //  -0.5 AO[abcd] D[efab] D[fegh] E2[ghdc] 
    {"abcd,efba,efgh,ghdc",     -0.5,   4, { 1,26,26,30}},     //  -0.5 AO[abcd] D[efba] D[efgh] E2[ghdc] 
    {"abcd,efba,fegh,ghcd",     -0.5,   4, { 1,26,26,30}},     //  -0.5 AO[abcd] D[efba] D[fegh] E2[ghcd] 
    {"abcd,efag,efhi,bhidcg",   -0.5,   4, { 1,26,26,31}},     //  -0.5 AO[abcd] D[efag] D[efhi] E3[bhidcg] 
    {"abcd,efag,fehi,bhidgc",   -0.5,   4, { 1,26,26,31}},     //  -0.5 AO[abcd] D[efag] D[fehi] E3[bhidgc] 
    {"abcd,efbg,efhi,ahicdg",   -0.5,   4, { 1,26,26,31}},     //  -0.5 AO[abcd] D[efbg] D[efhi] E3[ahicdg] 
    {"abcd,efbg,fehi,ahicgd",   -0.5,   4, { 1,26,26,31}},     //  -0.5 AO[abcd] D[efbg] D[fehi] E3[ahicgd] 
    {"abcd,efga,efhi,bhidgc",   -0.5,   4, { 1,26,26,31}},     //  -0.5 AO[abcd] D[efga] D[efhi] E3[bhidgc] 
    {"abcd,efga,fehi,bhidcg",   -0.5,   4, { 1,26,26,31}},     //  -0.5 AO[abcd] D[efga] D[fehi] E3[bhidcg] 
    {"abcd,efgb,efhi,ahicgd",   -0.5,   4, { 1,26,26,31}},     //  -0.5 AO[abcd] D[efgb] D[efhi] E3[ahicgd] 
    {"abcd,efgb,fehi,ahicdg",   -0.5,   4, { 1,26,26,31}},     //  -0.5 AO[abcd] D[efgb] D[fehi] E3[ahicdg] 
    {"ab,cdbe,cdfg,fgae",       -1.0,   4, { 0,26,26,30}},     //  -1.0 AO[ab] D[cdbe] D[cdfg] E2[fgae] 
    {"ab,cdbe,dcfg,fgea",       -1.0,   4, { 0,26,26,30}},     //  -1.0 AO[ab] D[cdbe] D[dcfg] E2[fgea] 
    {"ab,cdeb,cdfg,fgea",       -1.0,   4, { 0,26,26,30}},     //  -1.0 AO[ab] D[cdeb] D[cdfg] E2[fgea] 
    {"ab,cdeb,dcfg,fgae",       -1.0,   4, { 0,26,26,30}},     //  -1.0 AO[ab] D[cdeb] D[dcfg] E2[fgae] 
    {"abcd,befg,dehi,afgchi",    1.0,   4, { 2,26,26,31}},     //   1.0 AO[abcd] D[befg] D[dehi] E3[afgchi] 
    {"abcd,befg,edhi,afgcih",    1.0,   4, { 2,26,26,31}},     //   1.0 AO[abcd] D[befg] D[edhi] E3[afgcih] 
    {"abcd,ebfg,dehi,afgcih",    1.0,   4, { 2,26,26,31}},     //   1.0 AO[abcd] D[ebfg] D[dehi] E3[afgcih] 
    {"abcd,ebfg,edhi,afgchi",    1.0,   4, { 2,26,26,31}},     //   1.0 AO[abcd] D[ebfg] D[edhi] E3[afgchi] 
    {"abcd,aefg,behi,chifdg",    1.0,   4, { 7,26,26,31}},     //   1.0 AO[abcd] D[aefg] D[behi] E3[chifdg] 
    {"abcd,aefg,ebhi,chifgd",    1.0,   4, { 7,26,26,31}},     //   1.0 AO[abcd] D[aefg] D[ebhi] E3[chifgd] 
    {"abcd,eafg,behi,chigdf",    1.0,   4, { 7,26,26,31}},     //   1.0 AO[abcd] D[eafg] D[behi] E3[chigdf] 
    {"abcd,eafg,ebhi,chigfd",    1.0,   4, { 7,26,26,31}},     //   1.0 AO[abcd] D[eafg] D[ebhi] E3[chigfd] 
    {"abcd,abef,cdgh,efgh",      0.5,   4, { 9,26,26,30}},     //   0.5 AO[abcd] D[abef] D[cdgh] E2[efgh] 
    {"abcd,abef,dcgh,efhg",      0.5,   4, { 9,26,26,30}},     //   0.5 AO[abcd] D[abef] D[dcgh] E2[efhg] 
    {"abcd,baef,cdgh,efhg",      0.5,   4, { 9,26,26,30}},     //   0.5 AO[abcd] D[baef] D[cdgh] E2[efhg] 
    {"abcd,baef,dcgh,efgh",      0.5,   4, { 9,26,26,30}},     //   0.5 AO[abcd] D[baef] D[dcgh] E2[efgh] 
    {"ab,acde,bcfg,fgde",        1.0,   4, { 6,26,26,30}},     //   1.0 AO[ab] D[acde] D[bcfg] E2[fgde] 
    {"ab,acde,cbfg,fged",        1.0,   4, { 6,26,26,30}},     //   1.0 AO[ab] D[acde] D[cbfg] E2[fged] 
    {"ab,cade,bcfg,fged",        1.0,   4, { 6,26,26,30}},     //   1.0 AO[ab] D[cade] D[bcfg] E2[fged] 
    {"ab,cade,cbfg,fgde",        1.0,   4, { 6,26,26,30}},     //   1.0 AO[ab] D[cade] D[cbfg] E2[fgde] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 32;
    Out.EqsRes = FEqSet(&EqsRes[0], 48, "MRLCC3/Res");
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

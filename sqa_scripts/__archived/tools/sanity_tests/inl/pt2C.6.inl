[5, 6]
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
// <E_aa E_cv  | E_vc E_aa > =    8
// <E_aa E_cv  | E_ac E_va > =    8
// <E_av E_ca  | E_vc E_aa > =    8
// <E_av E_ca  | E_ac E_va > =    8
// <E_aa E_cv  | E_vc E_aa > =    2
// <E_aa E_cv  | E_ac E_va > =    2
// <E_av E_ca  | E_vc E_aa > =    2
// <E_av E_ca  | E_ac E_va > =    2
// <E_aa E_cv  | E_vc E_aa > =    4
// <E_aa E_cv  | E_ac E_va > =    4
// <E_av E_ca  | E_vc E_aa > =    4
// <E_av E_ca  | E_ac E_va > =    4
// <E_aa E_cv  | E_vc E_aa > =    4
// <E_aa E_cv  | E_ac E_va > =    4
// <E_av E_ca  | E_vc E_aa > =    4
// <E_av E_ca  | E_ac E_va > =    4
// <E_aa E_cv  | E_vc E_aa > =    9
// <E_aa E_cv  | E_ac E_va > =    9
// <E_av E_ca  | E_vc E_aa > =    9
// <E_av E_ca  | E_ac E_va > =    9
// <E_aa E_cv  | E_vc E_aa > =    9
// <E_aa E_cv  | E_ac E_va > =    9
// <E_av E_ca  | E_vc E_aa > =    9
// <E_av E_ca  | E_ac E_va > =    9
// <E_aa E_cv  | E_vc E_aa > =   11
// <E_aa E_cv  | E_ac E_va > =   12
// <E_av E_ca  | E_vc E_aa > =   12
// <E_av E_ca  | E_ac E_va > =   12
// <E_aa E_cv  | E_vc E_aa > =    4
// <E_aa E_cv  | E_ac E_va > =    4
// <E_av E_ca  | E_vc E_aa > =    4
// <E_av E_ca  | E_ac E_va > =    4
// <E_aa E_cv  | E_vc E_aa > =    5
// <E_aa E_cv  | E_ac E_va > =    5
// <E_av E_ca  | E_vc E_aa > =    5
// <E_av E_ca  | E_ac E_va > =    5
// <E_aa E_cv  | E_vc E_aa > =    5
// <E_aa E_cv  | E_ac E_va > =    5
// <E_av E_ca  | E_vc E_aa > =    5
// <E_av E_ca  | E_ac E_va > =    5
// <E_aa E_cv  | E_vc E_aa > =    0
// <E_aa E_cv  | E_ac E_va > =    0
// <E_av E_ca  | E_vc E_aa > =    0
// <E_av E_ca  | E_ac E_va > =    0
// <E_aa E_cv  | E_vc E_aa > =    2
// <E_aa E_cv  | E_ac E_va > =    2
// <E_av E_ca  | E_vc E_aa > =    2
// <E_av E_ca  | E_ac E_va > =    2
namespace MRLCC3 {

  FTensorDecl TensorDecls[35] = {
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
    /* 34*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

	FEqInfo EqsRes[255] = {
    {"abhc,debf,dgce,gf,ha",    -2.0,   5, { 6,27,27,32,31}},  //  -2.0 AO[abhc] D[debf] D[dgce] E1[gf] delta[ha] 
    {"abhc,deaf,dgce,gf,hb",     1.0,   5, { 6,27,27,32,31}},  //   1.0 AO[abhc] D[deaf] D[dgce] E1[gf] delta[hb] 
    {"abch,debf,dgce,gf,ha",     1.0,   5, { 6,27,27,32,31}},  //   1.0 AO[abch] D[debf] D[dgce] E1[gf] delta[ha] 
    {"abch,deaf,dgce,gf,hb",    -2.0,   5, { 6,27,27,32,31}},  //  -2.0 AO[abch] D[deaf] D[dgce] E1[gf] delta[hb] 
    {"abic,debf,dgch,egfh,ia",  -2.0,   5, { 6,27,27,33,31}},  //  -2.0 AO[abic] D[debf] D[dgch] E2[egfh] delta[ia] 
    {"abic,deaf,dgch,egfh,ib",   1.0,   5, { 6,27,27,33,31}},  //   1.0 AO[abic] D[deaf] D[dgch] E2[egfh] delta[ib] 
    {"abci,debf,dgch,egfh,ia",   1.0,   5, { 6,27,27,33,31}},  //   1.0 AO[abci] D[debf] D[dgch] E2[egfh] delta[ia] 
    {"abci,deaf,dgch,egfh,ib",  -2.0,   5, { 6,27,27,33,31}},  //  -2.0 AO[abci] D[deaf] D[dgch] E2[egfh] delta[ib] 
    {"abhc,debf,egcd,gf,ha",     1.0,   5, { 6,22,27,32,31}},  //   1.0 AO[abhc] D[debf] D[egcd] E1[gf] delta[ha] 
    {"abhc,deaf,egcd,gf,hb",    -0.5,   5, { 6,22,27,32,31}},  //  -0.5 AO[abhc] D[deaf] D[egcd] E1[gf] delta[hb] 
    {"abch,debf,egcd,gf,ha",    -0.5,   5, { 6,22,27,32,31}},  //  -0.5 AO[abch] D[debf] D[egcd] E1[gf] delta[ha] 
    {"abch,deaf,egcd,gf,hb",     1.0,   5, { 6,22,27,32,31}},  //   1.0 AO[abch] D[deaf] D[egcd] E1[gf] delta[hb] 
    {"abic,debf,egch,dgfh,ia",   1.0,   5, { 6,22,27,33,31}},  //   1.0 AO[abic] D[debf] D[egch] E2[dgfh] delta[ia] 
    {"abic,deaf,egch,dgfh,ib",  -0.5,   5, { 6,22,27,33,31}},  //  -0.5 AO[abic] D[deaf] D[egch] E2[dgfh] delta[ib] 
    {"abci,debf,egch,dgfh,ia",  -0.5,   5, { 6,22,27,33,31}},  //  -0.5 AO[abci] D[debf] D[egch] E2[dgfh] delta[ia] 
    {"abci,deaf,egch,dgfh,ib",   1.0,   5, { 6,22,27,33,31}},  //   1.0 AO[abci] D[deaf] D[egch] E2[dgfh] delta[ib] 
    {"abhc,decf,edbg,fg,ha",     1.0,   5, { 6,22,27,32,31}},  //   1.0 AO[abhc] D[decf] D[edbg] E1[fg] delta[ha] 
    {"abhc,decf,edag,fg,hb",    -0.5,   5, { 6,22,27,32,31}},  //  -0.5 AO[abhc] D[decf] D[edag] E1[fg] delta[hb] 
    {"abch,decf,edbg,fg,ha",    -0.5,   5, { 6,22,27,32,31}},  //  -0.5 AO[abch] D[decf] D[edbg] E1[fg] delta[ha] 
    {"abch,decf,edag,fg,hb",     1.0,   5, { 6,22,27,32,31}},  //   1.0 AO[abch] D[decf] D[edag] E1[fg] delta[hb] 
    {"abic,decf,egbh,fgdh,ia",   1.0,   5, { 6,22,27,33,31}},  //   1.0 AO[abic] D[decf] D[egbh] E2[fgdh] delta[ia] 
    {"abic,decf,egah,fgdh,ib",  -0.5,   5, { 6,22,27,33,31}},  //  -0.5 AO[abic] D[decf] D[egah] E2[fgdh] delta[ib] 
    {"abci,decf,egbh,fgdh,ia",  -0.5,   5, { 6,22,27,33,31}},  //  -0.5 AO[abci] D[decf] D[egbh] E2[fgdh] delta[ia] 
    {"abci,decf,egah,fgdh,ib",   1.0,   5, { 6,22,27,33,31}},  //   1.0 AO[abci] D[decf] D[egah] E2[fgdh] delta[ib] 
    {"abhc,debf,decg,gf,ha",    -2.0,   5, { 6,22,22,32,31}},  //  -2.0 AO[abhc] D[debf] D[decg] E1[gf] delta[ha] 
    {"abhc,deaf,decg,gf,hb",     1.0,   5, { 6,22,22,32,31}},  //   1.0 AO[abhc] D[deaf] D[decg] E1[gf] delta[hb] 
    {"abch,debf,decg,gf,ha",     1.0,   5, { 6,22,22,32,31}},  //   1.0 AO[abch] D[debf] D[decg] E1[gf] delta[ha] 
    {"abch,deaf,decg,gf,hb",    -2.0,   5, { 6,22,22,32,31}},  //  -2.0 AO[abch] D[deaf] D[decg] E1[gf] delta[hb] 
    {"abic,debf,gech,dhgf,ia",   1.0,   5, { 6,22,22,33,31}},  //   1.0 AO[abic] D[debf] D[gech] E2[dhgf] delta[ia] 
    {"abic,deaf,gech,dhgf,ib",  -0.5,   5, { 6,22,22,33,31}},  //  -0.5 AO[abic] D[deaf] D[gech] E2[dhgf] delta[ib] 
    {"abci,debf,gech,dhgf,ia",  -0.5,   5, { 6,22,22,33,31}},  //  -0.5 AO[abci] D[debf] D[gech] E2[dhgf] delta[ia] 
    {"abci,deaf,gech,dhgf,ib",   1.0,   5, { 6,22,22,33,31}},  //   1.0 AO[abci] D[deaf] D[gech] E2[dhgf] delta[ib] 
    {"ab,cdae,cebf,df",         -2.0,   4, { 4,27,27,32}},     //  -2.0 AO[ab] D[cdae] D[cebf] E1[df] 
    {"ab,cdae,cfbg,dfeg",       -2.0,   4, { 4,27,27,33}},     //  -2.0 AO[ab] D[cdae] D[cfbg] E2[dfeg] 
    {"ab,cdbe,dfac,fe",          1.0,   4, { 4,22,27,32}},     //   1.0 AO[ab] D[cdbe] D[dfac] E1[fe] 
    {"ab,cdbe,dfag,cfeg",        1.0,   4, { 4,22,27,33}},     //   1.0 AO[ab] D[cdbe] D[dfag] E2[cfeg] 
    {"ab,cdae,dcbf,ef",          1.0,   4, { 4,22,27,32}},     //   1.0 AO[ab] D[cdae] D[dcbf] E1[ef] 
    {"ab,cdae,dfbg,efcg",        1.0,   4, { 4,22,27,33}},     //   1.0 AO[ab] D[cdae] D[dfbg] E2[efcg] 
    {"ab,cdae,cdbf,ef",         -2.0,   4, { 4,22,22,32}},     //  -2.0 AO[ab] D[cdae] D[cdbf] E1[ef] 
    {"ab,cdae,fdbg,efgc",        1.0,   4, { 4,22,22,33}},     //   1.0 AO[ab] D[cdae] D[fdbg] E2[efgc] 
    {"abhc,bdef,cfeg,dg,ha",     4.0,   5, { 7,27,27,32,31}},  //   4.0 AO[abhc] D[bdef] D[cfeg] E1[dg] delta[ha] 
    {"abcd,deaf,bgce,gf",       -2.0,   4, { 7,27,27,32}},     //  -2.0 AO[abcd] D[deaf] D[bgce] E1[gf] 
    {"abic,bdef,cgeh,dgfh,ia",   4.0,   5, { 7,27,27,33,31}},  //   4.0 AO[abic] D[bdef] D[cgeh] E2[dgfh] delta[ia] 
    {"abcd,deaf,bgch,egfh",     -2.0,   4, { 7,27,27,33}},     //  -2.0 AO[abcd] D[deaf] D[bgch] E2[egfh] 
    {"abhc,dcef,bged,gf,ha",    -2.0,   5, { 7,22,27,32,31}},  //  -2.0 AO[abhc] D[dcef] D[bged] E1[gf] delta[ha] 
    {"abcd,edaf,bgce,gf",        1.0,   4, { 7,22,27,32}},     //   1.0 AO[abcd] D[edaf] D[bgce] E1[gf] 
    {"abic,dcef,bgeh,dgfh,ia",  -2.0,   5, { 7,22,27,33,31}},  //  -2.0 AO[abic] D[dcef] D[bgeh] E2[dgfh] delta[ia] 
    {"abcd,edaf,bgch,egfh",      1.0,   4, { 7,22,27,33}},     //   1.0 AO[abcd] D[edaf] D[bgch] E2[egfh] 
    {"abhc,dbef,cdeg,fg,ha",    -2.0,   5, { 7,22,27,32,31}},  //  -2.0 AO[abhc] D[dbef] D[cdeg] E1[fg] delta[ha] 
    {"abcd,ebcf,deag,fg",        1.0,   4, { 7,22,27,32}},     //   1.0 AO[abcd] D[ebcf] D[deag] E1[fg] 
    {"abic,dbef,cgeh,fgdh,ia",  -2.0,   5, { 7,22,27,33,31}},  //  -2.0 AO[abic] D[dbef] D[cgeh] E2[fgdh] delta[ia] 
    {"abcd,ebcf,dgah,fgeh",      1.0,   4, { 7,22,27,33}},     //   1.0 AO[abcd] D[ebcf] D[dgah] E2[fgeh] 
    {"abhc,dbef,dceg,fg,ha",     4.0,   5, { 7,22,22,32,31}},  //   4.0 AO[abhc] D[dbef] D[dceg] E1[fg] delta[ha] 
    {"abcd,edaf,ebcg,gf",       -2.0,   4, { 7,22,22,32}},     //  -2.0 AO[abcd] D[edaf] D[ebcg] E1[gf] 
    {"abic,dbef,gceh,fghd,ia",  -2.0,   5, { 7,22,22,33,31}},  //  -2.0 AO[abic] D[dbef] D[gceh] E2[fghd] delta[ia] 
    {"abcd,edaf,gbch,ehgf",      1.0,   4, { 7,22,22,33}},     //   1.0 AO[abcd] D[edaf] D[gbch] E2[ehgf] 
    {"abch,adef,bged,gf,hc",    -2.0,   5, {10,27,27,32,31}},  //  -2.0 AO[abch] D[adef] D[bged] E1[gf] delta[hc] 
    {"abcd,aecf,bgde,gf",        4.0,   4, {10,27,27,32}},     //   4.0 AO[abcd] D[aecf] D[bgde] E1[gf] 
    {"abci,adef,bgeh,dgfh,ic",  -2.0,   5, {10,27,27,33,31}},  //  -2.0 AO[abci] D[adef] D[bgeh] E2[dgfh] delta[ic] 
    {"abcd,aecf,bgdh,egfh",      4.0,   4, {10,27,27,33}},     //   4.0 AO[abcd] D[aecf] D[bgdh] E2[egfh] 
    {"abch,daef,bged,gf,hc",     1.0,   5, {10,22,27,32,31}},  //   1.0 AO[abch] D[daef] D[bged] E1[gf] delta[hc] 
    {"abcd,eacf,bgde,gf",       -2.0,   4, {10,22,27,32}},     //  -2.0 AO[abcd] D[eacf] D[bgde] E1[gf] 
    {"abci,daef,bgeh,dgfh,ic",   1.0,   5, {10,22,27,33,31}},  //   1.0 AO[abci] D[daef] D[bgeh] E2[dgfh] delta[ic] 
    {"abcd,eacf,bgdh,egfh",     -2.0,   4, {10,22,27,33}},     //  -2.0 AO[abcd] D[eacf] D[bgdh] E2[egfh] 
    {"abch,dbef,adeg,fg,hc",     1.0,   5, {10,22,27,32,31}},  //   1.0 AO[abch] D[dbef] D[adeg] E1[fg] delta[hc] 
    {"abcd,ebdf,aecg,fg",       -2.0,   4, {10,22,27,32}},     //  -2.0 AO[abcd] D[ebdf] D[aecg] E1[fg] 
    {"abci,dbef,ageh,fgdh,ic",   1.0,   5, {10,22,27,33,31}},  //   1.0 AO[abci] D[dbef] D[ageh] E2[fgdh] delta[ic] 
    {"abcd,ebdf,agch,fgeh",     -2.0,   4, {10,22,27,33}},     //  -2.0 AO[abcd] D[ebdf] D[agch] E2[fgeh] 
    {"abch,daef,dbeg,gf,hc",    -2.0,   5, {10,22,22,32,31}},  //  -2.0 AO[abch] D[daef] D[dbeg] E1[gf] delta[hc] 
    {"abcd,eacf,ebdg,gf",        1.0,   4, {10,22,22,32}},     //   1.0 AO[abcd] D[eacf] D[ebdg] E1[gf] 
    {"abci,daef,gbeh,dhgf,ic",   1.0,   5, {10,22,22,33,31}},  //   1.0 AO[abci] D[daef] D[gbeh] E2[dhgf] delta[ic] 
    {"abcd,eacf,gbdh,ehfg",      1.0,   4, {10,22,22,33}},     //   1.0 AO[abcd] D[eacf] D[gbdh] E2[ehfg] 
    {"ahbc,defb,dcfg,eg,ha",    -2.0,   5, { 5,27,27,32,31}},  //  -2.0 AO[ahbc] D[defb] D[dcfg] E1[eg] delta[ha] 
    {"ahbc,defb,dgfe,gc,ha",     2.0,   5, { 5,27,27,32,31}},  //   2.0 AO[ahbc] D[defb] D[dgfe] E1[gc] delta[ha] 
    {"abcd,efac,edbg,fg",        1.0,   4, { 5,27,27,32}},     //   1.0 AO[abcd] D[efac] D[edbg] E1[fg] 
    {"aibc,dcef,dgeh,bgfh,ia",  -2.0,   5, { 5,27,27,33,31}},  //  -2.0 AO[aibc] D[dcef] D[dgeh] E2[bgfh] delta[ia] 
    {"aibc,defb,dgfh,egch,ia",   2.0,   5, { 5,27,27,33,31}},  //   2.0 AO[aibc] D[defb] D[dgfh] E2[egch] delta[ia] 
    {"abcd,efac,egbh,fgdh",      1.0,   4, { 5,27,27,33}},     //   1.0 AO[abcd] D[efac] D[egbh] E2[fgdh] 
    {"abcd,efag,edbh,cfhg",      1.0,   4, { 5,27,27,33}},     //   1.0 AO[abcd] D[efag] D[edbh] E2[cfhg] 
    {"abcd,efag,egbh,cfdh",      1.0,   4, { 5,27,27,33}},     //   1.0 AO[abcd] D[efag] D[egbh] E2[cfdh] 
    {"abcd,efag,ehbi,cfhdgi",    1.0,   4, { 5,27,27,34}},     //   1.0 AO[abcd] D[efag] D[ehbi] E3[cfhdgi] 
    {"ahbc,cdef,dgeb,gf,ha",     1.0,   5, { 5,22,27,32,31}},  //   1.0 AO[ahbc] D[cdef] D[dgeb] E1[gf] delta[ha] 
    {"ahbc,defb,egfd,gc,ha",    -1.0,   5, { 5,22,27,32,31}},  //  -1.0 AO[ahbc] D[defb] D[egfd] E1[gc] delta[ha] 
    {"abcd,debf,egac,gf",       -2.0,   4, { 5,22,27,32}},     //  -2.0 AO[abcd] D[debf] D[egac] E1[gf] 
    {"aibc,cdef,dgeh,bgfh,ia",   1.0,   5, { 5,22,27,33,31}},  //   1.0 AO[aibc] D[cdef] D[dgeh] E2[bgfh] delta[ia] 
    {"aibc,defb,egfh,dgch,ia",  -1.0,   5, { 5,22,27,33,31}},  //  -1.0 AO[aibc] D[defb] D[egfh] E2[dgch] delta[ia] 
    {"abcd,debf,egah,cgfh",     -2.0,   4, { 5,22,27,33}},     //  -2.0 AO[abcd] D[debf] D[egah] E2[cgfh] 
    {"abcd,efbg,fhac,ehdg",      1.0,   4, { 5,22,27,33}},     //   1.0 AO[abcd] D[efbg] D[fhac] E2[ehdg] 
    {"abcd,efbg,fhae,chgd",      1.0,   4, { 5,22,27,33}},     //   1.0 AO[abcd] D[efbg] D[fhae] E2[chgd] 
    {"abcd,efbg,fhai,cehgdi",    1.0,   4, { 5,22,27,34}},     //   1.0 AO[abcd] D[efbg] D[fhai] E3[cehgdi] 
    {"ahbc,bdef,dceg,fg,ha",     1.0,   5, { 5,22,27,32,31}},  //   1.0 AO[ahbc] D[bdef] D[dceg] E1[fg] delta[ha] 
    {"ahbc,defg,edfb,gc,ha",    -1.0,   5, { 5,22,27,32,31}},  //  -1.0 AO[ahbc] D[defg] D[edfb] E1[gc] delta[ha] 
    {"abcd,ceaf,edbg,fg",       -2.0,   4, { 5,22,27,32}},     //  -2.0 AO[abcd] D[ceaf] D[edbg] E1[fg] 
    {"aibc,defg,ecfh,bghd,ia",   1.0,   5, { 5,22,27,33,31}},  //   1.0 AO[aibc] D[defg] D[ecfh] E2[bghd] delta[ia] 
    {"aibc,defg,ehfb,ghdc,ia",  -1.0,   5, { 5,22,27,33,31}},  //  -1.0 AO[aibc] D[defg] D[ehfb] E2[ghdc] delta[ia] 
    {"abcd,ceaf,egbh,fgdh",     -2.0,   4, { 5,22,27,33}},     //  -2.0 AO[abcd] D[ceaf] D[egbh] E2[fgdh] 
    {"abcd,efag,fdbh,cgeh",      1.0,   4, { 5,22,27,33}},     //   1.0 AO[abcd] D[efag] D[fdbh] E2[cgeh] 
    {"abcd,efag,febh,cghd",      1.0,   4, { 5,22,27,33}},     //   1.0 AO[abcd] D[efag] D[febh] E2[cghd] 
    {"abcd,efag,fhbi,cghedi",    1.0,   4, { 5,22,27,34}},     //   1.0 AO[abcd] D[efag] D[fhbi] E3[cghedi] 
    {"ahbc,bdef,cdeg,fg,ha",    -2.0,   5, { 5,22,22,32,31}},  //  -2.0 AO[ahbc] D[bdef] D[cdeg] E1[fg] delta[ha] 
    {"ahbc,defb,defg,gc,ha",     2.0,   5, { 5,22,22,32,31}},  //   2.0 AO[ahbc] D[defb] D[defg] E1[gc] delta[ha] 
    {"abcd,ceaf,debg,fg",        4.0,   4, { 5,22,22,32}},     //   4.0 AO[abcd] D[ceaf] D[debg] E1[fg] 
    {"aibc,cdef,gdeh,bhgf,ia",   1.0,   5, { 5,22,22,33,31}},  //   1.0 AO[aibc] D[cdef] D[gdeh] E2[bhgf] delta[ia] 
    {"aibc,defb,gefh,dhgc,ia",  -1.0,   5, { 5,22,22,33,31}},  //  -1.0 AO[aibc] D[defb] D[gefh] E2[dhgc] delta[ia] 
    {"abcd,ceaf,gebh,fghd",     -2.0,   4, { 5,22,22,33}},     //  -2.0 AO[abcd] D[ceaf] D[gebh] E2[fghd] 
    {"abcd,efag,dfbh,cgeh",     -2.0,   4, { 5,22,22,33}},     //  -2.0 AO[abcd] D[efag] D[dfbh] E2[cgeh] 
    {"abcd,efag,efbh,cgdh",      1.0,   4, { 5,22,22,33}},     //   1.0 AO[abcd] D[efag] D[efbh] E2[cgdh] 
    {"abcd,efag,hfbi,cgheid",    1.0,   4, { 5,22,22,34}},     //   1.0 AO[abcd] D[efag] D[hfbi] E3[cgheid] 
    {"abhc,defb,dcfg,eg,ha",     4.0,   5, { 3,27,27,32,31}},  //   4.0 AO[abhc] D[defb] D[dcfg] E1[eg] delta[ha] 
    {"abhc,defb,dgfe,gc,ha",    -4.0,   5, { 3,27,27,32,31}},  //  -4.0 AO[abhc] D[defb] D[dgfe] E1[gc] delta[ha] 
    {"abcd,edaf,egcb,gf",       -2.0,   4, { 3,27,27,32}},     //  -2.0 AO[abcd] D[edaf] D[egcb] E1[gf] 
    {"abic,dcef,dgeh,bgfh,ia",   4.0,   5, { 3,27,27,33,31}},  //   4.0 AO[abic] D[dcef] D[dgeh] E2[bgfh] delta[ia] 
    {"abic,defb,dgfh,egch,ia",  -4.0,   5, { 3,27,27,33,31}},  //  -4.0 AO[abic] D[defb] D[dgfh] E2[egch] delta[ia] 
    {"abcd,edaf,egch,bgfh",     -2.0,   4, { 3,27,27,33}},     //  -2.0 AO[abcd] D[edaf] D[egch] E2[bgfh] 
    {"abcd,efag,ehcb,fhgd",     -2.0,   4, { 3,27,27,33}},     //  -2.0 AO[abcd] D[efag] D[ehcb] E2[fhgd] 
    {"abcd,efag,ehcf,bhdg",     -2.0,   4, { 3,27,27,33}},     //  -2.0 AO[abcd] D[efag] D[ehcf] E2[bhdg] 
    {"abcd,efag,ehci,bfhdgi",   -2.0,   4, { 3,27,27,34}},     //  -2.0 AO[abcd] D[efag] D[ehci] E3[bfhdgi] 
    {"abhc,cdef,dgeb,gf,ha",    -2.0,   5, { 3,22,27,32,31}},  //  -2.0 AO[abhc] D[cdef] D[dgeb] E1[gf] delta[ha] 
    {"abhc,defb,egfd,gc,ha",     2.0,   5, { 3,22,27,32,31}},  //   2.0 AO[abhc] D[defb] D[egfd] E1[gc] delta[ha] 
    {"abcd,deaf,egcb,gf",        1.0,   4, { 3,22,27,32}},     //   1.0 AO[abcd] D[deaf] D[egcb] E1[gf] 
    {"abic,cdef,dgeh,bgfh,ia",  -2.0,   5, { 3,22,27,33,31}},  //  -2.0 AO[abic] D[cdef] D[dgeh] E2[bgfh] delta[ia] 
    {"abic,defb,egfh,dgch,ia",   2.0,   5, { 3,22,27,33,31}},  //   2.0 AO[abic] D[defb] D[egfh] E2[dgch] delta[ia] 
    {"abcd,deaf,egch,bgfh",      1.0,   4, { 3,22,27,33}},     //   1.0 AO[abcd] D[deaf] D[egch] E2[bgfh] 
    {"abcd,efag,fhcb,ehgd",      1.0,   4, { 3,22,27,33}},     //   1.0 AO[abcd] D[efag] D[fhcb] E2[ehgd] 
    {"abcd,efag,fhce,bhdg",      1.0,   4, { 3,22,27,33}},     //   1.0 AO[abcd] D[efag] D[fhce] E2[bhdg] 
    {"abcd,efag,fhci,behdgi",    1.0,   4, { 3,22,27,34}},     //   1.0 AO[abcd] D[efag] D[fhci] E3[behdgi] 
    {"abhc,bdef,dceg,fg,ha",    -2.0,   5, { 3,22,27,32,31}},  //  -2.0 AO[abhc] D[bdef] D[dceg] E1[fg] delta[ha] 
    {"abhc,defg,edfb,gc,ha",     2.0,   5, { 3,22,27,32,31}},  //   2.0 AO[abhc] D[defg] D[edfb] E1[gc] delta[ha] 
    {"abcd,becf,edag,fg",        1.0,   4, { 3,22,27,32}},     //   1.0 AO[abcd] D[becf] D[edag] E1[fg] 
    {"abic,defg,ecfh,bghd,ia",  -2.0,   5, { 3,22,27,33,31}},  //  -2.0 AO[abic] D[defg] D[ecfh] E2[bghd] delta[ia] 
    {"abic,defg,ehfb,ghdc,ia",   2.0,   5, { 3,22,27,33,31}},  //   2.0 AO[abic] D[defg] D[ehfb] E2[ghdc] delta[ia] 
    {"abcd,becf,egah,fgdh",      1.0,   4, { 3,22,27,33}},     //   1.0 AO[abcd] D[becf] D[egah] E2[fgdh] 
    {"abcd,efcg,fdah,bghe",      1.0,   4, { 3,22,27,33}},     //   1.0 AO[abcd] D[efcg] D[fdah] E2[bghe] 
    {"abcd,efcg,feah,bgdh",      1.0,   4, { 3,22,27,33}},     //   1.0 AO[abcd] D[efcg] D[feah] E2[bgdh] 
    {"abcd,efcg,fhai,bghdei",    1.0,   4, { 3,22,27,34}},     //   1.0 AO[abcd] D[efcg] D[fhai] E3[bghdei] 
    {"abhc,bdef,cdeg,fg,ha",     4.0,   5, { 3,22,22,32,31}},  //   4.0 AO[abhc] D[bdef] D[cdeg] E1[fg] delta[ha] 
    {"abhc,defb,defg,gc,ha",    -4.0,   5, { 3,22,22,32,31}},  //  -4.0 AO[abhc] D[defb] D[defg] E1[gc] delta[ha] 
    {"abcd,deaf,becg,gf",       -2.0,   4, { 3,22,22,32}},     //  -2.0 AO[abcd] D[deaf] D[becg] E1[gf] 
    {"abic,cdef,gdeh,bhgf,ia",  -2.0,   5, { 3,22,22,33,31}},  //  -2.0 AO[abic] D[cdef] D[gdeh] E2[bhgf] delta[ia] 
    {"abic,defb,gefh,dhgc,ia",   2.0,   5, { 3,22,22,33,31}},  //   2.0 AO[abic] D[defb] D[gefh] E2[dhgc] delta[ia] 
    {"abcd,deaf,gech,bhgf",      1.0,   4, { 3,22,22,33}},     //   1.0 AO[abcd] D[deaf] D[gech] E2[bhgf] 
    {"abcd,efag,bfch,ehdg",      1.0,   4, { 3,22,22,33}},     //   1.0 AO[abcd] D[efag] D[bfch] E2[ehdg] 
    {"abcd,efag,efch,bhdg",     -2.0,   4, { 3,22,22,33}},     //  -2.0 AO[abcd] D[efag] D[efch] E2[bhdg] 
    {"abcd,efag,hfci,beidhg",    1.0,   4, { 3,22,22,34}},     //   1.0 AO[abcd] D[efag] D[hfci] E3[beidhg] 
    {"abcd,efga,ecgh,bfdh",      1.0,   4, { 1,27,27,33}},     //   1.0 AO[abcd] D[efga] D[ecgh] E2[bfdh] 
    {"abcd,efga,edgh,bfhc",      1.0,   4, { 1,27,27,33}},     //   1.0 AO[abcd] D[efga] D[edgh] E2[bfhc] 
    {"abcd,efga,ehgb,fhcd",     -2.0,   4, { 1,27,27,33}},     //  -2.0 AO[abcd] D[efga] D[ehgb] E2[fhcd] 
    {"abcd,efga,ehgf,bhdc",     -1.0,   4, { 1,27,27,33}},     //  -1.0 AO[abcd] D[efga] D[ehgf] E2[bhdc] 
    {"abcd,efgb,ecgh,afhd",      1.0,   4, { 1,27,27,33}},     //   1.0 AO[abcd] D[efgb] D[ecgh] E2[afhd] 
    {"abcd,efgb,edgh,afch",      1.0,   4, { 1,27,27,33}},     //   1.0 AO[abcd] D[efgb] D[edgh] E2[afch] 
    {"abcd,efgb,ehgf,ahcd",     -1.0,   4, { 1,27,27,33}},     //  -1.0 AO[abcd] D[efgb] D[ehgf] E2[ahcd] 
    {"abcd,ecfg,ehfi,abhgdi",    1.0,   4, { 1,27,27,34}},     //   1.0 AO[abcd] D[ecfg] D[ehfi] E3[abhgdi] 
    {"abcd,edfg,ehfi,abhcgi",    1.0,   4, { 1,27,27,34}},     //   1.0 AO[abcd] D[edfg] D[ehfi] E3[abhcgi] 
    {"abcd,efga,ehgi,bfhdci",   -1.0,   4, { 1,27,27,34}},     //  -1.0 AO[abcd] D[efga] D[ehgi] E3[bfhdci] 
    {"abcd,efgb,ehgi,afhcdi",   -1.0,   4, { 1,27,27,34}},     //  -1.0 AO[abcd] D[efgb] D[ehgi] E3[afhcdi] 
    {"abcd,cefg,ehfa,bhdg",     -0.5,   4, { 1,22,27,33}},     //  -0.5 AO[abcd] D[cefg] D[ehfa] E2[bhdg] 
    {"abcd,cefg,ehfb,ahgd",     -0.5,   4, { 1,22,27,33}},     //  -0.5 AO[abcd] D[cefg] D[ehfb] E2[ahgd] 
    {"abcd,defg,ehfa,bhgc",     -0.5,   4, { 1,22,27,33}},     //  -0.5 AO[abcd] D[defg] D[ehfa] E2[bhgc] 
    {"abcd,defg,ehfb,ahcg",     -0.5,   4, { 1,22,27,33}},     //  -0.5 AO[abcd] D[defg] D[ehfb] E2[ahcg] 
    {"abcd,efga,fhgb,ehcd",      0.5,   4, { 1,22,27,33}},     //   0.5 AO[abcd] D[efga] D[fhgb] E2[ehcd] 
    {"abcd,efga,fhge,bhdc",      0.5,   4, { 1,22,27,33}},     //   0.5 AO[abcd] D[efga] D[fhge] E2[bhdc] 
    {"abcd,efgb,fhga,ehdc",      0.5,   4, { 1,22,27,33}},     //   0.5 AO[abcd] D[efgb] D[fhga] E2[ehdc] 
    {"abcd,efgb,fhge,ahcd",      0.5,   4, { 1,22,27,33}},     //   0.5 AO[abcd] D[efgb] D[fhge] E2[ahcd] 
    {"abcd,cefg,ehfi,abhgdi",   -0.5,   4, { 1,22,27,34}},     //  -0.5 AO[abcd] D[cefg] D[ehfi] E3[abhgdi] 
    {"abcd,defg,ehfi,abhcgi",   -0.5,   4, { 1,22,27,34}},     //  -0.5 AO[abcd] D[defg] D[ehfi] E3[abhcgi] 
    {"abcd,efga,fhgi,behdci",    0.5,   4, { 1,22,27,34}},     //   0.5 AO[abcd] D[efga] D[fhgi] E3[behdci] 
    {"abcd,efgb,fhgi,aehcdi",    0.5,   4, { 1,22,27,34}},     //   0.5 AO[abcd] D[efgb] D[fhgi] E3[aehcdi] 
    {"abcd,aefg,ecfh,bgdh",     -0.5,   4, { 1,22,27,33}},     //  -0.5 AO[abcd] D[aefg] D[ecfh] E2[bgdh] 
    {"abcd,aefg,edfh,bghc",     -0.5,   4, { 1,22,27,33}},     //  -0.5 AO[abcd] D[aefg] D[edfh] E2[bghc] 
    {"abcd,aefg,ehfb,ghcd",      0.5,   4, { 1,22,27,33}},     //   0.5 AO[abcd] D[aefg] D[ehfb] E2[ghcd] 
    {"abcd,befg,ecfh,aghd",     -0.5,   4, { 1,22,27,33}},     //  -0.5 AO[abcd] D[befg] D[ecfh] E2[aghd] 
    {"abcd,befg,edfh,agch",     -0.5,   4, { 1,22,27,33}},     //  -0.5 AO[abcd] D[befg] D[edfh] E2[agch] 
    {"abcd,befg,ehfa,ghdc",      0.5,   4, { 1,22,27,33}},     //   0.5 AO[abcd] D[befg] D[ehfa] E2[ghdc] 
    {"abcd,efgh,fega,bhdc",      0.5,   4, { 1,22,27,33}},     //   0.5 AO[abcd] D[efgh] D[fega] E2[bhdc] 
    {"abcd,efgh,fegb,ahcd",      0.5,   4, { 1,22,27,33}},     //   0.5 AO[abcd] D[efgh] D[fegb] E2[ahcd] 
    {"abcd,efgh,fcgi,abhide",   -0.5,   4, { 1,22,27,34}},     //  -0.5 AO[abcd] D[efgh] D[fcgi] E3[abhide] 
    {"abcd,efgh,fdgi,abhcie",   -0.5,   4, { 1,22,27,34}},     //  -0.5 AO[abcd] D[efgh] D[fdgi] E3[abhcie] 
    {"abcd,efgh,figa,bhidec",    0.5,   4, { 1,22,27,34}},     //   0.5 AO[abcd] D[efgh] D[figa] E3[bhidec] 
    {"abcd,efgh,figb,ahiced",    0.5,   4, { 1,22,27,34}},     //   0.5 AO[abcd] D[efgh] D[figb] E3[ahiced] 
    {"abcd,aefg,cefh,bgdh",      1.0,   4, { 1,22,22,33}},     //   1.0 AO[abcd] D[aefg] D[cefh] E2[bgdh] 
    {"abcd,aefg,defh,bgch",     -0.5,   4, { 1,22,22,33}},     //  -0.5 AO[abcd] D[aefg] D[defh] E2[bgch] 
    {"abcd,aefg,hefb,ghdc",      0.5,   4, { 1,22,22,33}},     //   0.5 AO[abcd] D[aefg] D[hefb] E2[ghdc] 
    {"abcd,befg,cefh,agdh",     -0.5,   4, { 1,22,22,33}},     //  -0.5 AO[abcd] D[befg] D[cefh] E2[agdh] 
    {"abcd,befg,defh,agch",      1.0,   4, { 1,22,22,33}},     //   1.0 AO[abcd] D[befg] D[defh] E2[agch] 
    {"abcd,efga,bfgh,ehdc",      0.5,   4, { 1,22,22,33}},     //   0.5 AO[abcd] D[efga] D[bfgh] E2[ehdc] 
    {"abcd,efga,efgh,bhdc",     -1.0,   4, { 1,22,22,33}},     //  -1.0 AO[abcd] D[efga] D[efgh] E2[bhdc] 
    {"abcd,efgb,efgh,ahcd",     -1.0,   4, { 1,22,22,33}},     //  -1.0 AO[abcd] D[efgb] D[efgh] E2[ahcd] 
    {"abcd,cefg,hefi,abihdg",   -0.5,   4, { 1,22,22,34}},     //  -0.5 AO[abcd] D[cefg] D[hefi] E3[abihdg] 
    {"abcd,defg,hefi,abichg",   -0.5,   4, { 1,22,22,34}},     //  -0.5 AO[abcd] D[defg] D[hefi] E3[abichg] 
    {"abcd,efga,hfgi,beidhc",    0.5,   4, { 1,22,22,34}},     //   0.5 AO[abcd] D[efga] D[hfgi] E3[beidhc] 
    {"abcd,efgb,hfgi,aeichd",    0.5,   4, { 1,22,22,34}},     //   0.5 AO[abcd] D[efgb] D[hfgi] E3[aeichd] 
    {"ab,cade,cfdb,fe",          2.0,   4, { 0,27,27,32}},     //   2.0 AO[ab] D[cade] D[cfdb] E1[fe] 
    {"ab,cdeb,cfed,fa",         -2.0,   4, { 0,27,27,32}},     //  -2.0 AO[ab] D[cdeb] D[cfed] E1[fa] 
    {"ab,cade,cfdg,bfeg",        2.0,   4, { 0,27,27,33}},     //   2.0 AO[ab] D[cade] D[cfdg] E2[bfeg] 
    {"ab,cdeb,cfeg,dfag",       -2.0,   4, { 0,27,27,33}},     //  -2.0 AO[ab] D[cdeb] D[cfeg] E2[dfag] 
    {"ab,acde,cfdb,fe",         -1.0,   4, { 0,22,27,32}},     //  -1.0 AO[ab] D[acde] D[cfdb] E1[fe] 
    {"ab,cdeb,dfec,fa",          1.0,   4, { 0,22,27,32}},     //   1.0 AO[ab] D[cdeb] D[dfec] E1[fa] 
    {"ab,acde,cfdg,bfeg",       -1.0,   4, { 0,22,27,33}},     //  -1.0 AO[ab] D[acde] D[cfdg] E2[bfeg] 
    {"ab,cdeb,dfeg,cfag",        1.0,   4, { 0,22,27,33}},     //   1.0 AO[ab] D[cdeb] D[dfeg] E2[cfag] 
    {"ab,bcde,cadf,ef",         -1.0,   4, { 0,22,27,32}},     //  -1.0 AO[ab] D[bcde] D[cadf] E1[ef] 
    {"ab,cdef,dceb,fa",          1.0,   4, { 0,22,27,32}},     //   1.0 AO[ab] D[cdef] D[dceb] E1[fa] 
    {"ab,cdef,daeg,bfgc",       -1.0,   4, { 0,22,27,33}},     //  -1.0 AO[ab] D[cdef] D[daeg] E2[bfgc] 
    {"ab,cdef,dgeb,fgca",        1.0,   4, { 0,22,27,33}},     //   1.0 AO[ab] D[cdef] D[dgeb] E2[fgca] 
    {"ab,acde,bcdf,fe",          2.0,   4, { 0,22,22,32}},     //   2.0 AO[ab] D[acde] D[bcdf] E1[fe] 
    {"ab,cdeb,cdef,fa",         -2.0,   4, { 0,22,22,32}},     //  -2.0 AO[ab] D[cdeb] D[cdef] E1[fa] 
    {"ab,acde,fcdg,bgfe",       -1.0,   4, { 0,22,22,33}},     //  -1.0 AO[ab] D[acde] D[fcdg] E2[bgfe] 
    {"ab,cdeb,fdeg,cgfa",        1.0,   4, { 0,22,22,33}},     //   1.0 AO[ab] D[cdeb] D[fdeg] E2[cgfa] 
    {"abcd,befa,dcfg,eg",        2.0,   4, { 2,27,27,32}},     //   2.0 AO[abcd] D[befa] D[dcfg] E1[eg] 
    {"abcd,befa,dgfh,egch",      2.0,   4, { 2,27,27,33}},     //   2.0 AO[abcd] D[befa] D[dgfh] E2[egch] 
    {"abcd,befg,dcfh,aehg",      2.0,   4, { 2,27,27,33}},     //   2.0 AO[abcd] D[befg] D[dcfh] E2[aehg] 
    {"abcd,befg,dgfh,aech",      2.0,   4, { 2,27,27,33}},     //   2.0 AO[abcd] D[befg] D[dgfh] E2[aech] 
    {"abcd,befg,dhfi,aehcgi",    2.0,   4, { 2,27,27,34}},     //   2.0 AO[abcd] D[befg] D[dhfi] E3[aehcgi] 
    {"abcd,cdef,bgea,gf",       -1.0,   4, { 2,22,27,32}},     //  -1.0 AO[abcd] D[cdef] D[bgea] E1[gf] 
    {"abcd,cdef,bgeh,agfh",     -1.0,   4, { 2,22,27,33}},     //  -1.0 AO[abcd] D[cdef] D[bgeh] E2[agfh] 
    {"abcd,edfg,bhfa,ehgc",     -1.0,   4, { 2,22,27,33}},     //  -1.0 AO[abcd] D[edfg] D[bhfa] E2[ehgc] 
    {"abcd,edfg,bhfe,ahcg",     -1.0,   4, { 2,22,27,33}},     //  -1.0 AO[abcd] D[edfg] D[bhfe] E2[ahcg] 
    {"abcd,edfg,bhfi,aehcgi",   -1.0,   4, { 2,22,27,34}},     //  -1.0 AO[abcd] D[edfg] D[bhfi] E3[aehcgi] 
    {"abcd,abef,dceg,fg",       -1.0,   4, { 2,22,27,32}},     //  -1.0 AO[abcd] D[abef] D[dceg] E1[fg] 
    {"abcd,abef,dgeh,fgch",     -1.0,   4, { 2,22,27,33}},     //  -1.0 AO[abcd] D[abef] D[dgeh] E2[fgch] 
    {"abcd,ebfg,dcfh,aghe",     -1.0,   4, { 2,22,27,33}},     //  -1.0 AO[abcd] D[ebfg] D[dcfh] E2[aghe] 
    {"abcd,ebfg,defh,agch",     -1.0,   4, { 2,22,27,33}},     //  -1.0 AO[abcd] D[ebfg] D[defh] E2[agch] 
    {"abcd,ebfg,dhfi,aghcei",   -1.0,   4, { 2,22,27,34}},     //  -1.0 AO[abcd] D[ebfg] D[dhfi] E3[aghcei] 
    {"abcd,abef,cdeg,fg",        2.0,   4, { 2,22,22,32}},     //   2.0 AO[abcd] D[abef] D[cdeg] E1[fg] 
    {"abcd,abef,gdeh,fghc",     -1.0,   4, { 2,22,22,33}},     //  -1.0 AO[abcd] D[abef] D[gdeh] E2[fghc] 
    {"abcd,ebfg,cdfh,ageh",     -1.0,   4, { 2,22,22,33}},     //  -1.0 AO[abcd] D[ebfg] D[cdfh] E2[ageh] 
    {"abcd,ebfg,edfh,agch",      2.0,   4, { 2,22,22,33}},     //   2.0 AO[abcd] D[ebfg] D[edfh] E2[agch] 
    {"abcd,ebfg,hdfi,aghcie",   -1.0,   4, { 2,22,22,34}},     //  -1.0 AO[abcd] D[ebfg] D[hdfi] E3[aghcie] 
    {"abcd,adef,bgec,gf",       -1.0,   4, { 9,27,27,32}},     //  -1.0 AO[abcd] D[adef] D[bgec] E1[gf] 
    {"abcd,adef,bgeh,cgfh",     -1.0,   4, { 9,27,27,33}},     //  -1.0 AO[abcd] D[adef] D[bgeh] E2[cgfh] 
    {"abcd,aefg,bhfc,ehgd",     -1.0,   4, { 9,27,27,33}},     //  -1.0 AO[abcd] D[aefg] D[bhfc] E2[ehgd] 
    {"abcd,aefg,bhfe,chdg",     -1.0,   4, { 9,27,27,33}},     //  -1.0 AO[abcd] D[aefg] D[bhfe] E2[chdg] 
    {"abcd,aefg,bhfi,cehdgi",   -1.0,   4, { 9,27,27,34}},     //  -1.0 AO[abcd] D[aefg] D[bhfi] E3[cehdgi] 
    {"abcd,daef,bgec,gf",        2.0,   4, { 9,22,27,32}},     //   2.0 AO[abcd] D[daef] D[bgec] E1[gf] 
    {"abcd,daef,bgeh,cgfh",      2.0,   4, { 9,22,27,33}},     //   2.0 AO[abcd] D[daef] D[bgeh] E2[cgfh] 
    {"abcd,eafg,bhfc,ehdg",     -1.0,   4, { 9,22,27,33}},     //  -1.0 AO[abcd] D[eafg] D[bhfc] E2[ehdg] 
    {"abcd,eafg,bhfe,chgd",     -1.0,   4, { 9,22,27,33}},     //  -1.0 AO[abcd] D[eafg] D[bhfe] E2[chgd] 
    {"abcd,eafg,bhfi,cehgdi",   -1.0,   4, { 9,22,27,34}},     //  -1.0 AO[abcd] D[eafg] D[bhfi] E3[cehgdi] 
    {"abcd,cbef,adeg,fg",        2.0,   4, { 9,22,27,32}},     //   2.0 AO[abcd] D[cbef] D[adeg] E1[fg] 
    {"abcd,cbef,ageh,fgdh",      2.0,   4, { 9,22,27,33}},     //   2.0 AO[abcd] D[cbef] D[ageh] E2[fgdh] 
    {"abcd,ebfg,adfh,cgeh",     -1.0,   4, { 9,22,27,33}},     //  -1.0 AO[abcd] D[ebfg] D[adfh] E2[cgeh] 
    {"abcd,ebfg,aefh,cghd",     -1.0,   4, { 9,22,27,33}},     //  -1.0 AO[abcd] D[ebfg] D[aefh] E2[cghd] 
    {"abcd,ebfg,ahfi,cghedi",   -1.0,   4, { 9,22,27,34}},     //  -1.0 AO[abcd] D[ebfg] D[ahfi] E3[cghedi] 
    {"abcd,daef,cbeg,gf",       -1.0,   4, { 9,22,22,32}},     //  -1.0 AO[abcd] D[daef] D[cbeg] E1[gf] 
    {"abcd,daef,gbeh,chfg",     -1.0,   4, { 9,22,22,33}},     //  -1.0 AO[abcd] D[daef] D[gbeh] E2[chfg] 
    {"abcd,eafg,cbfh,ehgd",     -1.0,   4, { 9,22,22,33}},     //  -1.0 AO[abcd] D[eafg] D[cbfh] E2[ehgd] 
    {"abcd,eafg,ebfh,chgd",      2.0,   4, { 9,22,22,33}},     //   2.0 AO[abcd] D[eafg] D[ebfh] E2[chgd] 
    {"abcd,eafg,hbfi,ceighd",   -1.0,   4, { 9,22,22,34}},     //  -1.0 AO[abcd] D[eafg] D[hbfi] E3[ceighd] 
    {"ab,acde,bfdc,fe",          2.0,   4, { 8,27,27,32}},     //   2.0 AO[ab] D[acde] D[bfdc] E1[fe] 
    {"ab,acde,bfdg,cfeg",        2.0,   4, { 8,27,27,33}},     //   2.0 AO[ab] D[acde] D[bfdg] E2[cfeg] 
    {"ab,cade,bfdc,fe",         -1.0,   4, { 8,22,27,32}},     //  -1.0 AO[ab] D[cade] D[bfdc] E1[fe] 
    {"ab,cade,bfdg,cfeg",       -1.0,   4, { 8,22,27,33}},     //  -1.0 AO[ab] D[cade] D[bfdg] E2[cfeg] 
    {"ab,cbde,acdf,ef",         -1.0,   4, { 8,22,27,32}},     //  -1.0 AO[ab] D[cbde] D[acdf] E1[ef] 
    {"ab,cbde,afdg,efcg",       -1.0,   4, { 8,22,27,33}},     //  -1.0 AO[ab] D[cbde] D[afdg] E2[efcg] 
    {"ab,cade,cbdf,fe",          2.0,   4, { 8,22,22,32}},     //   2.0 AO[ab] D[cade] D[cbdf] E1[fe] 
    {"ab,cade,fbdg,cgfe",       -1.0,   4, { 8,22,22,33}},     //  -1.0 AO[ab] D[cade] D[fbdg] E2[cgfe] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 35;
    Out.EqsRes = FEqSet(&EqsRes[0], 255, "MRLCC3/Res");
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

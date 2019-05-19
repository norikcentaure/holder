[8]
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
// <E_aa E_ca  | E_ac E_aa > =   28
// <E_aa E_ca  | E_ac E_aa > =    7
// <E_aa E_ca  | E_ac E_aa > =    0
// <E_aa E_ca  | E_ac E_aa > =    0
// <E_aa E_ca  | E_ac E_aa > =   48
// <E_aa E_ca  | E_ac E_aa > =   48
// <E_aa E_ca  | E_ac E_aa > =   91
// <E_aa E_ca  | E_ac E_aa > =   21
// <E_aa E_ca  | E_ac E_aa > =    0
// <E_aa E_ca  | E_ac E_aa > =    0
// <E_aa E_ca  | E_ac E_aa > =    0
// <E_aa E_ca  | E_ac E_aa > =    0
namespace MRLCC3 {

  FTensorDecl TensorDecls[26] = {
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
    /* 25*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

	FEqInfo EqsRes[243] = {
    {"abhc,bdef,cgde,gf,ha",       1.0,   5, { 5,13,13,22,21}},  //   1.0 AO[abhc] D[bdef] D[cgde] E1[gf] delta[ha] 
    {"abhc,bdef,cged,gf,ha",      -2.0,   5, { 5,13,13,22,21}},  //  -2.0 AO[abhc] D[bdef] D[cged] E1[gf] delta[ha] 
    {"abhc,adef,cgde,gf,hb",      -0.5,   5, { 5,13,13,22,21}},  //  -0.5 AO[abhc] D[adef] D[cgde] E1[gf] delta[hb] 
    {"abhc,adef,cged,gf,hb",       1.0,   5, { 5,13,13,22,21}},  //   1.0 AO[abhc] D[adef] D[cged] E1[gf] delta[hb] 
    {"abch,bdef,cgde,gf,ha",      -0.5,   5, { 5,13,13,22,21}},  //  -0.5 AO[abch] D[bdef] D[cgde] E1[gf] delta[ha] 
    {"abch,bdef,cged,gf,ha",       1.0,   5, { 5,13,13,22,21}},  //   1.0 AO[abch] D[bdef] D[cged] E1[gf] delta[ha] 
    {"abch,adef,cgde,gf,hb",       1.0,   5, { 5,13,13,22,21}},  //   1.0 AO[abch] D[adef] D[cgde] E1[gf] delta[hb] 
    {"abch,adef,cged,gf,hb",      -2.0,   5, { 5,13,13,22,21}},  //  -2.0 AO[abch] D[adef] D[cged] E1[gf] delta[hb] 
    {"abic,bdef,cgdh,egfh,ia",     1.0,   5, { 5,13,13,23,21}},  //   1.0 AO[abic] D[bdef] D[cgdh] E2[egfh] delta[ia] 
    {"abic,bdef,cgeh,dgfh,ia",    -2.0,   5, { 5,13,13,23,21}},  //  -2.0 AO[abic] D[bdef] D[cgeh] E2[dgfh] delta[ia] 
    {"abic,bdef,cghd,eghf,ia",     1.0,   5, { 5,13,13,23,21}},  //   1.0 AO[abic] D[bdef] D[cghd] E2[eghf] delta[ia] 
    {"abic,bdef,cghe,dgfh,ia",     1.0,   5, { 5,13,13,23,21}},  //   1.0 AO[abic] D[bdef] D[cghe] E2[dgfh] delta[ia] 
    {"abic,adef,cgdh,egfh,ib",    -0.5,   5, { 5,13,13,23,21}},  //  -0.5 AO[abic] D[adef] D[cgdh] E2[egfh] delta[ib] 
    {"abic,adef,cgeh,dgfh,ib",     1.0,   5, { 5,13,13,23,21}},  //   1.0 AO[abic] D[adef] D[cgeh] E2[dgfh] delta[ib] 
    {"abic,adef,cghd,eghf,ib",    -0.5,   5, { 5,13,13,23,21}},  //  -0.5 AO[abic] D[adef] D[cghd] E2[eghf] delta[ib] 
    {"abic,adef,cghe,dgfh,ib",    -0.5,   5, { 5,13,13,23,21}},  //  -0.5 AO[abic] D[adef] D[cghe] E2[dgfh] delta[ib] 
    {"abci,bdef,cgdh,egfh,ia",    -0.5,   5, { 5,13,13,23,21}},  //  -0.5 AO[abci] D[bdef] D[cgdh] E2[egfh] delta[ia] 
    {"abci,bdef,cgeh,dgfh,ia",     1.0,   5, { 5,13,13,23,21}},  //   1.0 AO[abci] D[bdef] D[cgeh] E2[dgfh] delta[ia] 
    {"abci,bdef,cghd,eghf,ia",    -0.5,   5, { 5,13,13,23,21}},  //  -0.5 AO[abci] D[bdef] D[cghd] E2[eghf] delta[ia] 
    {"abci,bdef,cghe,dgfh,ia",    -0.5,   5, { 5,13,13,23,21}},  //  -0.5 AO[abci] D[bdef] D[cghe] E2[dgfh] delta[ia] 
    {"abci,adef,cgdh,egfh,ib",     1.0,   5, { 5,13,13,23,21}},  //   1.0 AO[abci] D[adef] D[cgdh] E2[egfh] delta[ib] 
    {"abci,adef,cgeh,dgfh,ib",    -2.0,   5, { 5,13,13,23,21}},  //  -2.0 AO[abci] D[adef] D[cgeh] E2[dgfh] delta[ib] 
    {"abci,adef,cghd,eghf,ib",     1.0,   5, { 5,13,13,23,21}},  //   1.0 AO[abci] D[adef] D[cghd] E2[eghf] delta[ib] 
    {"abci,adef,cghe,dgfh,ib",     1.0,   5, { 5,13,13,23,21}},  //   1.0 AO[abci] D[adef] D[cghe] E2[dgfh] delta[ib] 
    {"abjc,bdef,cghi,degfhi,ja",   1.0,   5, { 5,13,13,24,21}},  //   1.0 AO[abjc] D[bdef] D[cghi] E3[degfhi] delta[ja] 
    {"abjc,adef,cghi,degfhi,jb",  -0.5,   5, { 5,13,13,24,21}},  //  -0.5 AO[abjc] D[adef] D[cghi] E3[degfhi] delta[jb] 
    {"abcj,bdef,cghi,degfhi,ja",  -0.5,   5, { 5,13,13,24,21}},  //  -0.5 AO[abcj] D[bdef] D[cghi] E3[degfhi] delta[ja] 
    {"abcj,adef,cghi,degfhi,jb",   1.0,   5, { 5,13,13,24,21}},  //   1.0 AO[abcj] D[adef] D[cghi] E3[degfhi] delta[jb] 
    {"ab,acde,bdef,cf",            1.0,   4, { 3,13,13,22}},     //   1.0 AO[ab] D[acde] D[bdef] E1[cf] 
    {"ab,acde,bedf,cf",           -2.0,   4, { 3,13,13,22}},     //  -2.0 AO[ab] D[acde] D[bedf] E1[cf] 
    {"ab,acde,bdfg,cfeg",          1.0,   4, { 3,13,13,23}},     //   1.0 AO[ab] D[acde] D[bdfg] E2[cfeg] 
    {"ab,acde,befg,cfgd",          1.0,   4, { 3,13,13,23}},     //   1.0 AO[ab] D[acde] D[befg] E2[cfgd] 
    {"ab,acde,bfdg,cfeg",         -2.0,   4, { 3,13,13,23}},     //  -2.0 AO[ab] D[acde] D[bfdg] E2[cfeg] 
    {"ab,acde,bfeg,cfdg",          1.0,   4, { 3,13,13,23}},     //   1.0 AO[ab] D[acde] D[bfeg] E2[cfdg] 
    {"ab,acde,bfgh,cfgehd",        1.0,   4, { 3,13,13,24}},     //   1.0 AO[ab] D[acde] D[bfgh] E3[cfgehd] 
    {"ahbc,debf,dcfg,eg,ha",       1.0,   5, { 4,13,13,22,21}},  //   1.0 AO[ahbc] D[debf] D[dcfg] E1[eg] delta[ha] 
    {"ahbc,debf,dfcg,eg,ha",      -2.0,   5, { 4,13,13,22,21}},  //  -2.0 AO[ahbc] D[debf] D[dfcg] E1[eg] delta[ha] 
    {"ahbc,defb,dcfg,eg,ha",      -2.0,   5, { 4,13,13,22,21}},  //  -2.0 AO[ahbc] D[defb] D[dcfg] E1[eg] delta[ha] 
    {"ahbc,defb,dfcg,eg,ha",       1.0,   5, { 4,13,13,22,21}},  //   1.0 AO[ahbc] D[defb] D[dfcg] E1[eg] delta[ha] 
    {"ahbc,defb,dgef,gc,ha",      -1.0,   5, { 4,13,13,22,21}},  //  -1.0 AO[ahbc] D[defb] D[dgef] E1[gc] delta[ha] 
    {"ahbc,defb,dgfe,gc,ha",       2.0,   5, { 4,13,13,22,21}},  //   2.0 AO[ahbc] D[defb] D[dgfe] E1[gc] delta[ha] 
    {"abcd,aecf,bdfg,eg",         -2.0,   4, { 4,13,13,22}},     //  -2.0 AO[abcd] D[aecf] D[bdfg] E1[eg] 
    {"abcd,aecf,bfdg,eg",          4.0,   4, { 4,13,13,22}},     //   4.0 AO[abcd] D[aecf] D[bfdg] E1[eg] 
    {"abcd,aefc,bdfg,eg",          1.0,   4, { 4,13,13,22}},     //   1.0 AO[abcd] D[aefc] D[bdfg] E1[eg] 
    {"abcd,aefc,bfdg,eg",         -2.0,   4, { 4,13,13,22}},     //  -2.0 AO[abcd] D[aefc] D[bfdg] E1[eg] 
    {"aibc,dcef,dgeh,bgfh,ia",    -2.0,   5, { 4,13,13,23,21}},  //  -2.0 AO[aibc] D[dcef] D[dgeh] E2[bgfh] delta[ia] 
    {"aibc,dcef,dghe,bgfh,ia",     1.0,   5, { 4,13,13,23,21}},  //   1.0 AO[aibc] D[dcef] D[dghe] E2[bgfh] delta[ia] 
    {"aibc,debf,dcgh,egfh,ia",     1.0,   5, { 4,13,13,23,21}},  //   1.0 AO[aibc] D[debf] D[dcgh] E2[egfh] delta[ia] 
    {"aibc,debf,dgch,egfh,ia",    -2.0,   5, { 4,13,13,23,21}},  //  -2.0 AO[aibc] D[debf] D[dgch] E2[egfh] delta[ia] 
    {"aibc,decf,dgeh,bgfh,ia",     1.0,   5, { 4,13,13,23,21}},  //   1.0 AO[aibc] D[decf] D[dgeh] E2[bgfh] delta[ia] 
    {"aibc,decf,dghe,bghf,ia",     1.0,   5, { 4,13,13,23,21}},  //   1.0 AO[aibc] D[decf] D[dghe] E2[bghf] delta[ia] 
    {"aibc,defb,dcgh,eghf,ia",     1.0,   5, { 4,13,13,23,21}},  //   1.0 AO[aibc] D[defb] D[dcgh] E2[eghf] delta[ia] 
    {"aibc,defb,dgch,egfh,ia",     1.0,   5, { 4,13,13,23,21}},  //   1.0 AO[aibc] D[defb] D[dgch] E2[egfh] delta[ia] 
    {"aibc,defb,dgeh,fgch,ia",    -1.0,   5, { 4,13,13,23,21}},  //  -1.0 AO[aibc] D[defb] D[dgeh] E2[fgch] delta[ia] 
    {"aibc,defb,dgfh,egch,ia",     2.0,   5, { 4,13,13,23,21}},  //   2.0 AO[aibc] D[defb] D[dgfh] E2[egch] delta[ia] 
    {"aibc,defb,dghe,fghc,ia",    -1.0,   5, { 4,13,13,23,21}},  //  -1.0 AO[aibc] D[defb] D[dghe] E2[fghc] delta[ia] 
    {"aibc,defb,dghf,egch,ia",    -1.0,   5, { 4,13,13,23,21}},  //  -1.0 AO[aibc] D[defb] D[dghf] E2[egch] delta[ia] 
    {"abcd,aecf,bdgh,egfh",       -2.0,   4, { 4,13,13,23}},     //  -2.0 AO[abcd] D[aecf] D[bdgh] E2[egfh] 
    {"abcd,aecf,bfgh,eghd",       -2.0,   4, { 4,13,13,23}},     //  -2.0 AO[abcd] D[aecf] D[bfgh] E2[eghd] 
    {"abcd,aecf,bgdh,egfh",        4.0,   4, { 4,13,13,23}},     //   4.0 AO[abcd] D[aecf] D[bgdh] E2[egfh] 
    {"abcd,aecf,bgfh,egdh",       -2.0,   4, { 4,13,13,23}},     //  -2.0 AO[abcd] D[aecf] D[bgfh] E2[egdh] 
    {"abcd,aefc,bdgh,egfh",        1.0,   4, { 4,13,13,23}},     //   1.0 AO[abcd] D[aefc] D[bdgh] E2[egfh] 
    {"abcd,aefc,bfgh,eghd",        1.0,   4, { 4,13,13,23}},     //   1.0 AO[abcd] D[aefc] D[bfgh] E2[eghd] 
    {"abcd,aefc,bgdh,egfh",       -2.0,   4, { 4,13,13,23}},     //  -2.0 AO[abcd] D[aefc] D[bgdh] E2[egfh] 
    {"abcd,aefc,bgfh,egdh",        1.0,   4, { 4,13,13,23}},     //   1.0 AO[abcd] D[aefc] D[bgfh] E2[egdh] 
    {"abcd,aefg,bdfh,cehg",        1.0,   4, { 4,13,13,23}},     //   1.0 AO[abcd] D[aefg] D[bdfh] E2[cehg] 
    {"abcd,aefg,bdgh,cefh",        1.0,   4, { 4,13,13,23}},     //   1.0 AO[abcd] D[aefg] D[bdgh] E2[cefh] 
    {"abcd,aefg,bfdh,cehg",       -2.0,   4, { 4,13,13,23}},     //  -2.0 AO[abcd] D[aefg] D[bfdh] E2[cehg] 
    {"abcd,aefg,bfgh,cehd",        1.0,   4, { 4,13,13,23}},     //   1.0 AO[abcd] D[aefg] D[bfgh] E2[cehd] 
    {"abcd,aefg,bgdh,cefh",       -2.0,   4, { 4,13,13,23}},     //  -2.0 AO[abcd] D[aefg] D[bgdh] E2[cefh] 
    {"abcd,aefg,bgfh,cedh",        1.0,   4, { 4,13,13,23}},     //   1.0 AO[abcd] D[aefg] D[bgfh] E2[cedh] 
    {"ajbc,dcef,dghi,begfhi,ja",   1.0,   5, { 4,13,13,24,21}},  //   1.0 AO[ajbc] D[dcef] D[dghi] E3[begfhi] delta[ja] 
    {"ajbc,decf,dghi,beghfi,ja",   1.0,   5, { 4,13,13,24,21}},  //   1.0 AO[ajbc] D[decf] D[dghi] E3[beghfi] delta[ja] 
    {"ajbc,defb,dghi,efgchi,ja",  -1.0,   5, { 4,13,13,24,21}},  //  -1.0 AO[ajbc] D[defb] D[dghi] E3[efgchi] delta[ja] 
    {"abcd,aecf,bghi,eghfid",     -2.0,   4, { 4,13,13,24}},     //  -2.0 AO[abcd] D[aecf] D[bghi] E3[eghfid] 
    {"abcd,aefc,bghi,eghfid",      1.0,   4, { 4,13,13,24}},     //   1.0 AO[abcd] D[aefc] D[bghi] E3[eghfid] 
    {"abcd,aefg,bdhi,cehfgi",      1.0,   4, { 4,13,13,24}},     //   1.0 AO[abcd] D[aefg] D[bdhi] E3[cehfgi] 
    {"abcd,aefg,bfhi,cehigd",      1.0,   4, { 4,13,13,24}},     //   1.0 AO[abcd] D[aefg] D[bfhi] E3[cehigd] 
    {"abcd,aefg,bghi,cehfid",      1.0,   4, { 4,13,13,24}},     //   1.0 AO[abcd] D[aefg] D[bghi] E3[cehfid] 
    {"abcd,aefg,bhdi,cehfgi",     -2.0,   4, { 4,13,13,24}},     //  -2.0 AO[abcd] D[aefg] D[bhdi] E3[cehfgi] 
    {"abcd,aefg,bhfi,cehdgi",      1.0,   4, { 4,13,13,24}},     //   1.0 AO[abcd] D[aefg] D[bhfi] E3[cehdgi] 
    {"abcd,aefg,bhgi,cehfdi",      1.0,   4, { 4,13,13,24}},     //   1.0 AO[abcd] D[aefg] D[bhgi] E3[cehfdi] 
    {"abcd,aefg,bhij,cehifgjd",    1.0,   4, { 4,13,13,25}},     //   1.0 AO[abcd] D[aefg] D[bhij] E4[cehifgjd] 
    {"abhc,debf,dcfg,eg,ha",      -2.0,   5, { 2,13,13,22,21}},  //  -2.0 AO[abhc] D[debf] D[dcfg] E1[eg] delta[ha] 
    {"abhc,debf,dfcg,eg,ha",       4.0,   5, { 2,13,13,22,21}},  //   4.0 AO[abhc] D[debf] D[dfcg] E1[eg] delta[ha] 
    {"abhc,defb,dcfg,eg,ha",       4.0,   5, { 2,13,13,22,21}},  //   4.0 AO[abhc] D[defb] D[dcfg] E1[eg] delta[ha] 
    {"abhc,defb,dfcg,eg,ha",      -2.0,   5, { 2,13,13,22,21}},  //  -2.0 AO[abhc] D[defb] D[dfcg] E1[eg] delta[ha] 
    {"abhc,defb,dgef,gc,ha",       2.0,   5, { 2,13,13,22,21}},  //   2.0 AO[abhc] D[defb] D[dgef] E1[gc] delta[ha] 
    {"abhc,defb,dgfe,gc,ha",      -4.0,   5, { 2,13,13,22,21}},  //  -4.0 AO[abhc] D[defb] D[dgfe] E1[gc] delta[ha] 
    {"abcd,adef,cgbe,gf",          1.0,   4, { 2,13,13,22}},     //   1.0 AO[abcd] D[adef] D[cgbe] E1[gf] 
    {"abcd,adef,cgeb,gf",         -2.0,   4, { 2,13,13,22}},     //  -2.0 AO[abcd] D[adef] D[cgeb] E1[gf] 
    {"abcd,aedf,cgbe,gf",         -2.0,   4, { 2,13,13,22}},     //  -2.0 AO[abcd] D[aedf] D[cgbe] E1[gf] 
    {"abcd,aedf,cgeb,gf",          1.0,   4, { 2,13,13,22}},     //   1.0 AO[abcd] D[aedf] D[cgeb] E1[gf] 
    {"abic,dcef,dgeh,bgfh,ia",     4.0,   5, { 2,13,13,23,21}},  //   4.0 AO[abic] D[dcef] D[dgeh] E2[bgfh] delta[ia] 
    {"abic,dcef,dghe,bgfh,ia",    -2.0,   5, { 2,13,13,23,21}},  //  -2.0 AO[abic] D[dcef] D[dghe] E2[bgfh] delta[ia] 
    {"abic,debf,dcgh,egfh,ia",    -2.0,   5, { 2,13,13,23,21}},  //  -2.0 AO[abic] D[debf] D[dcgh] E2[egfh] delta[ia] 
    {"abic,debf,dgch,egfh,ia",     4.0,   5, { 2,13,13,23,21}},  //   4.0 AO[abic] D[debf] D[dgch] E2[egfh] delta[ia] 
    {"abic,decf,dgeh,bgfh,ia",    -2.0,   5, { 2,13,13,23,21}},  //  -2.0 AO[abic] D[decf] D[dgeh] E2[bgfh] delta[ia] 
    {"abic,decf,dghe,bghf,ia",    -2.0,   5, { 2,13,13,23,21}},  //  -2.0 AO[abic] D[decf] D[dghe] E2[bghf] delta[ia] 
    {"abic,defb,dcgh,eghf,ia",    -2.0,   5, { 2,13,13,23,21}},  //  -2.0 AO[abic] D[defb] D[dcgh] E2[eghf] delta[ia] 
    {"abic,defb,dgch,egfh,ia",    -2.0,   5, { 2,13,13,23,21}},  //  -2.0 AO[abic] D[defb] D[dgch] E2[egfh] delta[ia] 
    {"abic,defb,dgeh,fgch,ia",     2.0,   5, { 2,13,13,23,21}},  //   2.0 AO[abic] D[defb] D[dgeh] E2[fgch] delta[ia] 
    {"abic,defb,dgfh,egch,ia",    -4.0,   5, { 2,13,13,23,21}},  //  -4.0 AO[abic] D[defb] D[dgfh] E2[egch] delta[ia] 
    {"abic,defb,dghe,fghc,ia",     2.0,   5, { 2,13,13,23,21}},  //   2.0 AO[abic] D[defb] D[dghe] E2[fghc] delta[ia] 
    {"abic,defb,dghf,egch,ia",     2.0,   5, { 2,13,13,23,21}},  //   2.0 AO[abic] D[defb] D[dghf] E2[egch] delta[ia] 
    {"abcd,adef,cgbh,egfh",        1.0,   4, { 2,13,13,23}},     //   1.0 AO[abcd] D[adef] D[cgbh] E2[egfh] 
    {"abcd,adef,cgeh,bgfh",       -2.0,   4, { 2,13,13,23}},     //  -2.0 AO[abcd] D[adef] D[cgeh] E2[bgfh] 
    {"abcd,adef,cghb,eghf",        1.0,   4, { 2,13,13,23}},     //   1.0 AO[abcd] D[adef] D[cghb] E2[eghf] 
    {"abcd,adef,cghe,bgfh",        1.0,   4, { 2,13,13,23}},     //   1.0 AO[abcd] D[adef] D[cghe] E2[bgfh] 
    {"abcd,aedf,cgbh,egfh",       -2.0,   4, { 2,13,13,23}},     //  -2.0 AO[abcd] D[aedf] D[cgbh] E2[egfh] 
    {"abcd,aedf,cgeh,bgfh",        1.0,   4, { 2,13,13,23}},     //   1.0 AO[abcd] D[aedf] D[cgeh] E2[bgfh] 
    {"abcd,aedf,cghb,egfh",        1.0,   4, { 2,13,13,23}},     //   1.0 AO[abcd] D[aedf] D[cghb] E2[egfh] 
    {"abcd,aedf,cghe,bghf",        1.0,   4, { 2,13,13,23}},     //   1.0 AO[abcd] D[aedf] D[cghe] E2[bghf] 
    {"abcd,aefg,chbe,fhdg",        1.0,   4, { 2,13,13,23}},     //   1.0 AO[abcd] D[aefg] D[chbe] E2[fhdg] 
    {"abcd,aefg,chbf,ehgd",        1.0,   4, { 2,13,13,23}},     //   1.0 AO[abcd] D[aefg] D[chbf] E2[ehgd] 
    {"abcd,aefg,cheb,fhgd",        1.0,   4, { 2,13,13,23}},     //   1.0 AO[abcd] D[aefg] D[cheb] E2[fhgd] 
    {"abcd,aefg,chef,bhdg",        1.0,   4, { 2,13,13,23}},     //   1.0 AO[abcd] D[aefg] D[chef] E2[bhdg] 
    {"abcd,aefg,chfb,ehgd",       -2.0,   4, { 2,13,13,23}},     //  -2.0 AO[abcd] D[aefg] D[chfb] E2[ehgd] 
    {"abcd,aefg,chfe,bhdg",       -2.0,   4, { 2,13,13,23}},     //  -2.0 AO[abcd] D[aefg] D[chfe] E2[bhdg] 
    {"abjc,dcef,dghi,begfhi,ja",  -2.0,   5, { 2,13,13,24,21}},  //  -2.0 AO[abjc] D[dcef] D[dghi] E3[begfhi] delta[ja] 
    {"abjc,decf,dghi,beghfi,ja",  -2.0,   5, { 2,13,13,24,21}},  //  -2.0 AO[abjc] D[decf] D[dghi] E3[beghfi] delta[ja] 
    {"abjc,defb,dghi,efgchi,ja",   2.0,   5, { 2,13,13,24,21}},  //   2.0 AO[abjc] D[defb] D[dghi] E3[efgchi] delta[ja] 
    {"abcd,adef,cghi,begfhi",      1.0,   4, { 2,13,13,24}},     //   1.0 AO[abcd] D[adef] D[cghi] E3[begfhi] 
    {"abcd,aedf,cghi,beghfi",      1.0,   4, { 2,13,13,24}},     //   1.0 AO[abcd] D[aedf] D[cghi] E3[beghfi] 
    {"abcd,aefg,chbi,efhgdi",      1.0,   4, { 2,13,13,24}},     //   1.0 AO[abcd] D[aefg] D[chbi] E3[efhgdi] 
    {"abcd,aefg,chei,bfhdgi",      1.0,   4, { 2,13,13,24}},     //   1.0 AO[abcd] D[aefg] D[chei] E3[bfhdgi] 
    {"abcd,aefg,chfi,behdgi",     -2.0,   4, { 2,13,13,24}},     //  -2.0 AO[abcd] D[aefg] D[chfi] E3[behdgi] 
    {"abcd,aefg,chib,efhgid",      1.0,   4, { 2,13,13,24}},     //   1.0 AO[abcd] D[aefg] D[chib] E3[efhgid] 
    {"abcd,aefg,chie,bfhdig",      1.0,   4, { 2,13,13,24}},     //   1.0 AO[abcd] D[aefg] D[chie] E3[bfhdig] 
    {"abcd,aefg,chif,behdgi",      1.0,   4, { 2,13,13,24}},     //   1.0 AO[abcd] D[aefg] D[chif] E3[behdgi] 
    {"abcd,aefg,chij,befhdgij",    1.0,   4, { 2,13,13,25}},     //   1.0 AO[abcd] D[aefg] D[chij] E4[befhdgij] 
    {"abcd,efab,ecdg,fg",         -0.5,   4, { 1,13,13,22}},     //  -0.5 AO[abcd] D[efab] D[ecdg] E1[fg] 
    {"abcd,efab,edcg,fg",          1.0,   4, { 1,13,13,22}},     //   1.0 AO[abcd] D[efab] D[edcg] E1[fg] 
    {"abcd,efba,ecdg,fg",          1.0,   4, { 1,13,13,22}},     //   1.0 AO[abcd] D[efba] D[ecdg] E1[fg] 
    {"abcd,efba,edcg,fg",         -0.5,   4, { 1,13,13,22}},     //  -0.5 AO[abcd] D[efba] D[edcg] E1[fg] 
    {"abcd,efab,ecgh,fgdh",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efab] D[ecgh] E2[fgdh] 
    {"abcd,efab,edgh,fghc",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efab] D[edgh] E2[fghc] 
    {"abcd,efab,egch,fgdh",        1.0,   4, { 1,13,13,23}},     //   1.0 AO[abcd] D[efab] D[egch] E2[fgdh] 
    {"abcd,efab,egdh,fgch",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efab] D[egdh] E2[fgch] 
    {"abcd,efag,ecdh,bfhg",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efag] D[ecdh] E2[bfhg] 
    {"abcd,efag,ecgh,bfdh",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efag] D[ecgh] E2[bfdh] 
    {"abcd,efag,edch,bfhg",        1.0,   4, { 1,13,13,23}},     //   1.0 AO[abcd] D[efag] D[edch] E2[bfhg] 
    {"abcd,efag,edgh,bfhc",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efag] D[edgh] E2[bfhc] 
    {"abcd,efag,egch,bfdh",        1.0,   4, { 1,13,13,23}},     //   1.0 AO[abcd] D[efag] D[egch] E2[bfdh] 
    {"abcd,efag,egdh,bfch",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efag] D[egdh] E2[bfch] 
    {"abcd,efag,eghb,fhdc",        0.5,   4, { 1,13,13,23}},     //   0.5 AO[abcd] D[efag] D[eghb] E2[fhdc] 
    {"abcd,efag,ehgb,fhcd",        0.5,   4, { 1,13,13,23}},     //   0.5 AO[abcd] D[efag] D[ehgb] E2[fhcd] 
    {"abcd,efba,ecgh,fghd",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efba] D[ecgh] E2[fghd] 
    {"abcd,efba,edgh,fgch",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efba] D[edgh] E2[fgch] 
    {"abcd,efba,egch,fgdh",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efba] D[egch] E2[fgdh] 
    {"abcd,efba,egdh,fgch",        1.0,   4, { 1,13,13,23}},     //   1.0 AO[abcd] D[efba] D[egdh] E2[fgch] 
    {"abcd,efbg,ecdh,afhg",        1.0,   4, { 1,13,13,23}},     //   1.0 AO[abcd] D[efbg] D[ecdh] E2[afhg] 
    {"abcd,efbg,ecgh,afhd",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efbg] D[ecgh] E2[afhd] 
    {"abcd,efbg,edch,afhg",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efbg] D[edch] E2[afhg] 
    {"abcd,efbg,edgh,afch",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efbg] D[edgh] E2[afch] 
    {"abcd,efbg,egch,afdh",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efbg] D[egch] E2[afdh] 
    {"abcd,efbg,egdh,afch",        1.0,   4, { 1,13,13,23}},     //   1.0 AO[abcd] D[efbg] D[egdh] E2[afch] 
    {"abcd,efga,ecdh,bfgh",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efga] D[ecdh] E2[bfgh] 
    {"abcd,efga,ecgh,bfdh",        1.0,   4, { 1,13,13,23}},     //   1.0 AO[abcd] D[efga] D[ecgh] E2[bfdh] 
    {"abcd,efga,edch,bfhg",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efga] D[edch] E2[bfhg] 
    {"abcd,efga,edgh,bfhc",        1.0,   4, { 1,13,13,23}},     //   1.0 AO[abcd] D[efga] D[edgh] E2[bfhc] 
    {"abcd,efga,egch,bfdh",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efga] D[egch] E2[bfdh] 
    {"abcd,efga,egdh,bfhc",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efga] D[egdh] E2[bfhc] 
    {"abcd,efga,eghb,fhcd",        0.5,   4, { 1,13,13,23}},     //   0.5 AO[abcd] D[efga] D[eghb] E2[fhcd] 
    {"abcd,efga,ehbf,ghdc",        0.5,   4, { 1,13,13,23}},     //   0.5 AO[abcd] D[efga] D[ehbf] E2[ghdc] 
    {"abcd,efga,ehbg,fhcd",        0.5,   4, { 1,13,13,23}},     //   0.5 AO[abcd] D[efga] D[ehbg] E2[fhcd] 
    {"abcd,efga,ehfb,ghcd",        0.5,   4, { 1,13,13,23}},     //   0.5 AO[abcd] D[efga] D[ehfb] E2[ghcd] 
    {"abcd,efga,ehfg,bhdc",        0.5,   4, { 1,13,13,23}},     //   0.5 AO[abcd] D[efga] D[ehfg] E2[bhdc] 
    {"abcd,efga,ehgb,fhcd",       -2.0,   4, { 1,13,13,23}},     //  -2.0 AO[abcd] D[efga] D[ehgb] E2[fhcd] 
    {"abcd,efga,ehgf,bhdc",       -1.0,   4, { 1,13,13,23}},     //  -1.0 AO[abcd] D[efga] D[ehgf] E2[bhdc] 
    {"abcd,efgb,ecdh,afhg",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efgb] D[ecdh] E2[afhg] 
    {"abcd,efgb,ecgh,afhd",        1.0,   4, { 1,13,13,23}},     //   1.0 AO[abcd] D[efgb] D[ecgh] E2[afhd] 
    {"abcd,efgb,edch,afgh",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efgb] D[edch] E2[afgh] 
    {"abcd,efgb,edgh,afch",        1.0,   4, { 1,13,13,23}},     //   1.0 AO[abcd] D[efgb] D[edgh] E2[afch] 
    {"abcd,efgb,egch,afhd",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efgb] D[egch] E2[afhd] 
    {"abcd,efgb,egdh,afch",       -0.5,   4, { 1,13,13,23}},     //  -0.5 AO[abcd] D[efgb] D[egdh] E2[afch] 
    {"abcd,efgb,ehfg,ahcd",        0.5,   4, { 1,13,13,23}},     //   0.5 AO[abcd] D[efgb] D[ehfg] E2[ahcd] 
    {"abcd,efgb,ehgf,ahcd",       -1.0,   4, { 1,13,13,23}},     //  -1.0 AO[abcd] D[efgb] D[ehgf] E2[ahcd] 
    {"abcd,ecdf,eghi,abgfhi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[ecdf] D[eghi] E3[abgfhi] 
    {"abcd,ecfg,ehfi,abhgdi",      1.0,   4, { 1,13,13,24}},     //   1.0 AO[abcd] D[ecfg] D[ehfi] E3[abhgdi] 
    {"abcd,ecfg,ehif,abhgdi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[ecfg] D[ehif] E3[abhgdi] 
    {"abcd,edcf,eghi,abghfi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[edcf] D[eghi] E3[abghfi] 
    {"abcd,edfg,ehfi,abhcgi",      1.0,   4, { 1,13,13,24}},     //   1.0 AO[abcd] D[edfg] D[ehfi] E3[abhcgi] 
    {"abcd,edfg,ehif,abhcgi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[edfg] D[ehif] E3[abhcgi] 
    {"abcd,efag,echi,bfhdgi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efag] D[echi] E3[bfhdgi] 
    {"abcd,efag,edhi,bfhigc",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efag] D[edhi] E3[bfhigc] 
    {"abcd,efag,ehci,bfhdgi",      1.0,   4, { 1,13,13,24}},     //   1.0 AO[abcd] D[efag] D[ehci] E3[bfhdgi] 
    {"abcd,efag,ehdi,bfhcgi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efag] D[ehdi] E3[bfhcgi] 
    {"abcd,efag,ehib,fhigdc",      0.5,   4, { 1,13,13,24}},     //   0.5 AO[abcd] D[efag] D[ehib] E3[fhigdc] 
    {"abcd,efbg,echi,afhigd",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efbg] D[echi] E3[afhigd] 
    {"abcd,efbg,edhi,afhcgi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efbg] D[edhi] E3[afhcgi] 
    {"abcd,efbg,ehci,afhdgi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efbg] D[ehci] E3[afhdgi] 
    {"abcd,efbg,ehdi,afhcgi",      1.0,   4, { 1,13,13,24}},     //   1.0 AO[abcd] D[efbg] D[ehdi] E3[afhcgi] 
    {"abcd,efcg,ehfi,abhgdi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efcg] D[ehfi] E3[abhgdi] 
    {"abcd,efcg,ehif,abhidg",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efcg] D[ehif] E3[abhidg] 
    {"abcd,efdg,ehfi,abhcgi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efdg] D[ehfi] E3[abhcgi] 
    {"abcd,efdg,ehif,abhcig",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efdg] D[ehif] E3[abhcig] 
    {"abcd,efga,echi,bfhdig",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efga] D[echi] E3[bfhdig] 
    {"abcd,efga,edhi,bfhicg",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efga] D[edhi] E3[bfhicg] 
    {"abcd,efga,ehbi,fghcdi",      0.5,   4, { 1,13,13,24}},     //   0.5 AO[abcd] D[efga] D[ehbi] E3[fghcdi] 
    {"abcd,efga,ehci,bfhdgi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efga] D[ehci] E3[bfhdgi] 
    {"abcd,efga,ehdi,bfhgci",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efga] D[ehdi] E3[bfhgci] 
    {"abcd,efga,ehfi,bghdci",      0.5,   4, { 1,13,13,24}},     //   0.5 AO[abcd] D[efga] D[ehfi] E3[bghdci] 
    {"abcd,efga,ehgi,bfhdci",     -1.0,   4, { 1,13,13,24}},     //  -1.0 AO[abcd] D[efga] D[ehgi] E3[bfhdci] 
    {"abcd,efga,ehib,fghcid",      0.5,   4, { 1,13,13,24}},     //   0.5 AO[abcd] D[efga] D[ehib] E3[fghcid] 
    {"abcd,efga,ehib,fhicdg",      0.5,   4, { 1,13,13,24}},     //   0.5 AO[abcd] D[efga] D[ehib] E3[fhicdg] 
    {"abcd,efga,ehif,bghdic",      0.5,   4, { 1,13,13,24}},     //   0.5 AO[abcd] D[efga] D[ehif] E3[bghdic] 
    {"abcd,efga,ehig,bfhdci",      0.5,   4, { 1,13,13,24}},     //   0.5 AO[abcd] D[efga] D[ehig] E3[bfhdci] 
    {"abcd,efgb,echi,afhidg",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efgb] D[echi] E3[afhidg] 
    {"abcd,efgb,edhi,afhcig",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efgb] D[edhi] E3[afhcig] 
    {"abcd,efgb,ehci,afhgdi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efgb] D[ehci] E3[afhgdi] 
    {"abcd,efgb,ehdi,afhcgi",     -0.5,   4, { 1,13,13,24}},     //  -0.5 AO[abcd] D[efgb] D[ehdi] E3[afhcgi] 
    {"abcd,efgb,ehfi,aghcdi",      0.5,   4, { 1,13,13,24}},     //   0.5 AO[abcd] D[efgb] D[ehfi] E3[aghcdi] 
    {"abcd,efgb,ehgi,afhcdi",     -1.0,   4, { 1,13,13,24}},     //  -1.0 AO[abcd] D[efgb] D[ehgi] E3[afhcdi] 
    {"abcd,efgb,ehif,aghcid",      0.5,   4, { 1,13,13,24}},     //   0.5 AO[abcd] D[efgb] D[ehif] E3[aghcid] 
    {"abcd,efgb,ehig,afhcdi",      0.5,   4, { 1,13,13,24}},     //   0.5 AO[abcd] D[efgb] D[ehig] E3[afhcdi] 
    {"abcd,ecfg,ehij,abfhgdij",   -0.5,   4, { 1,13,13,25}},     //  -0.5 AO[abcd] D[ecfg] D[ehij] E4[abfhgdij] 
    {"abcd,edfg,ehij,abfhcgij",   -0.5,   4, { 1,13,13,25}},     //  -0.5 AO[abcd] D[edfg] D[ehij] E4[abfhcgij] 
    {"abcd,efcg,ehij,abfhidgj",   -0.5,   4, { 1,13,13,25}},     //  -0.5 AO[abcd] D[efcg] D[ehij] E4[abfhidgj] 
    {"abcd,efdg,ehij,abfhcigj",   -0.5,   4, { 1,13,13,25}},     //  -0.5 AO[abcd] D[efdg] D[ehij] E4[abfhcigj] 
    {"abcd,efga,ehij,bfghdcij",    0.5,   4, { 1,13,13,25}},     //   0.5 AO[abcd] D[efga] D[ehij] E4[bfghdcij] 
    {"abcd,efgb,ehij,afghcdij",    0.5,   4, { 1,13,13,25}},     //   0.5 AO[abcd] D[efgb] D[ehij] E4[afghcdij] 
    {"ab,cade,cfbd,fe",           -1.0,   4, { 0,13,13,22}},     //  -1.0 AO[ab] D[cade] D[cfbd] E1[fe] 
    {"ab,cade,cfdb,fe",            2.0,   4, { 0,13,13,22}},     //   2.0 AO[ab] D[cade] D[cfdb] E1[fe] 
    {"ab,cdae,cfbd,fe",            2.0,   4, { 0,13,13,22}},     //   2.0 AO[ab] D[cdae] D[cfbd] E1[fe] 
    {"ab,cdae,cfdb,fe",           -1.0,   4, { 0,13,13,22}},     //  -1.0 AO[ab] D[cdae] D[cfdb] E1[fe] 
    {"ab,cdeb,cfde,fa",            1.0,   4, { 0,13,13,22}},     //   1.0 AO[ab] D[cdeb] D[cfde] E1[fa] 
    {"ab,cdeb,cfed,fa",           -2.0,   4, { 0,13,13,22}},     //  -2.0 AO[ab] D[cdeb] D[cfed] E1[fa] 
    {"ab,cade,cfbg,dfeg",         -1.0,   4, { 0,13,13,23}},     //  -1.0 AO[ab] D[cade] D[cfbg] E2[dfeg] 
    {"ab,cade,cfdg,bfeg",          2.0,   4, { 0,13,13,23}},     //   2.0 AO[ab] D[cade] D[cfdg] E2[bfeg] 
    {"ab,cade,cfgb,dfge",         -1.0,   4, { 0,13,13,23}},     //  -1.0 AO[ab] D[cade] D[cfgb] E2[dfge] 
    {"ab,cade,cfgd,bfeg",         -1.0,   4, { 0,13,13,23}},     //  -1.0 AO[ab] D[cade] D[cfgd] E2[bfeg] 
    {"ab,cdae,cfbg,dfeg",          2.0,   4, { 0,13,13,23}},     //   2.0 AO[ab] D[cdae] D[cfbg] E2[dfeg] 
    {"ab,cdae,cfdg,bfeg",         -1.0,   4, { 0,13,13,23}},     //  -1.0 AO[ab] D[cdae] D[cfdg] E2[bfeg] 
    {"ab,cdae,cfgb,dfeg",         -1.0,   4, { 0,13,13,23}},     //  -1.0 AO[ab] D[cdae] D[cfgb] E2[dfeg] 
    {"ab,cdae,cfgd,bfge",         -1.0,   4, { 0,13,13,23}},     //  -1.0 AO[ab] D[cdae] D[cfgd] E2[bfge] 
    {"ab,cdeb,cfdg,efag",          1.0,   4, { 0,13,13,23}},     //   1.0 AO[ab] D[cdeb] D[cfdg] E2[efag] 
    {"ab,cdeb,cfeg,dfag",         -2.0,   4, { 0,13,13,23}},     //  -2.0 AO[ab] D[cdeb] D[cfeg] E2[dfag] 
    {"ab,cdeb,cfgd,efga",          1.0,   4, { 0,13,13,23}},     //   1.0 AO[ab] D[cdeb] D[cfgd] E2[efga] 
    {"ab,cdeb,cfge,dfag",          1.0,   4, { 0,13,13,23}},     //   1.0 AO[ab] D[cdeb] D[cfge] E2[dfag] 
    {"ab,cade,cfgh,bdfegh",       -1.0,   4, { 0,13,13,24}},     //  -1.0 AO[ab] D[cade] D[cfgh] E3[bdfegh] 
    {"ab,cdae,cfgh,bdfgeh",       -1.0,   4, { 0,13,13,24}},     //  -1.0 AO[ab] D[cdae] D[cfgh] E3[bdfgeh] 
    {"ab,cdeb,cfgh,defagh",        1.0,   4, { 0,13,13,24}},     //   1.0 AO[ab] D[cdeb] D[cfgh] E3[defagh] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 26;
    Out.EqsRes = FEqSet(&EqsRes[0], 243, "MRLCC3/Res");
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

[7]
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
// <E_aa E_av  | E_va E_aa > =    0
// <E_aa E_av  | E_va E_aa > =    0
// <E_aa E_av  | E_va E_aa > =    5
// <E_aa E_av  | E_va E_aa > =    5
// <E_aa E_av  | E_va E_aa > =   11
// <E_aa E_av  | E_va E_aa > =   11
// <E_aa E_av  | E_va E_aa > =   36
// <E_aa E_av  | E_va E_aa > =   11
// <E_aa E_av  | E_va E_aa > =   10
// <E_aa E_av  | E_va E_aa > =   10
// <E_aa E_av  | E_va E_aa > =    0
// <E_aa E_av  | E_va E_aa > =    5
namespace MRLCC3 {

  FTensorDecl TensorDecls[33] = {
    /*  0*/{"AO"     , "aa"       , "", USAGE_Amplitude   },
    /*  1*/{"AO"     , "aaaa"     , "", USAGE_Amplitude   },
    /*  2*/{"AO"     , "aeae"     , "", USAGE_Amplitude   },
    /*  3*/{"AO"     , "caca"     , "", USAGE_Amplitude   },
    /*  4*/{"AO"     , "ccaa"     , "", USAGE_Amplitude   },
    /*  5*/{"AO"     , "cece"     , "", USAGE_Amplitude   },
    /*  6*/{"AO"     , "ee"       , "", USAGE_Amplitude   },
    /*  7*/{"AO"     , "eeaa"     , "", USAGE_Amplitude   },
    /*  8*/{"AO"     , "eecc"     , "", USAGE_Amplitude   },
    /*  9*/{"W"      , "aaaa"     , "", USAGE_Amplitude   },
    /* 10*/{"W"      , "aeae"     , "", USAGE_Amplitude   },
    /* 11*/{"W"      , "caca"     , "", USAGE_Amplitude   },
    /* 12*/{"W"      , "ccaa"     , "", USAGE_Amplitude   },
    /* 13*/{"W"      , "cece"     , "", USAGE_Amplitude   },
    /* 14*/{"W"      , "eeaa"     , "", USAGE_Amplitude   },
    /* 15*/{"W"      , "eecc"     , "", USAGE_Amplitude   },
    /* 16*/{"k"      , "aa"       , "", USAGE_Amplitude   },
    /* 17*/{"k"      , "ee"       , "", USAGE_Amplitude   },
    /* 18*/{"D"      , "aeca"     , "", USAGE_Hamiltonian },
    /* 19*/{"D"      , "caaa"     , "", USAGE_Hamiltonian },
    /* 20*/{"D"      , "ccaa"     , "", USAGE_Hamiltonian },
    /* 21*/{"D"      , "ccae"     , "", USAGE_Hamiltonian },
    /* 22*/{"D"      , "eaaa"     , "", USAGE_Hamiltonian },
    /* 23*/{"D"      , "eaca"     , "", USAGE_Hamiltonian },
    /* 24*/{"D"      , "eeaa"     , "", USAGE_Hamiltonian },
    /* 25*/{"D"      , "eeca"     , "", USAGE_Hamiltonian },
    /* 26*/{"D"      , "eecc"     , "", USAGE_Hamiltonian },
    /* 27*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 28*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 29*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 30*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 31*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 32*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

	FEqInfo EqsRes[104] = {
    {"abhc,bdei,cfjg,dg,ha,ie,jf",   2.0,   7, { 5,22,22,29,28,27,27}},  //   2.0 AO[abhc] D[bdei] D[cfjg] E1[dg] delta[ha] delta[ie] delta[jf] 
    {"abic,bdej,cfgh,dfgh,ia,je",    2.0,   6, { 5,22,22,30,28,27}},     //   2.0 AO[abic] D[bdej] D[cfgh] E2[dfgh] delta[ia] delta[je] 
    {"abic,bdef,cfgh,dehg,ia",       2.0,   5, { 5,22,22,30,28}},        //   2.0 AO[abic] D[bdef] D[cfgh] E2[dehg] delta[ia] 
    {"abic,bdef,cgjh,defh,ia,jg",    2.0,   6, { 5,22,22,30,28,27}},     //   2.0 AO[abic] D[bdef] D[cgjh] E2[defh] delta[ia] delta[jg] 
    {"abjc,bdef,cghi,degfhi,ja",     2.0,   5, { 5,22,22,31,28}},        //   2.0 AO[abjc] D[bdef] D[cghi] E3[degfhi] delta[ja] 
    {"abch,adie,bfgj,fe,hc,id,jg",  -1.0,   7, { 8,22,22,29,28,27,27}},  //  -1.0 AO[abch] D[adie] D[bfgj] E1[fe] delta[hc] delta[id] delta[jg] 
    {"abci,adje,bfgh,fghe,ic,jd",   -1.0,   6, { 8,22,22,30,28,27}},     //  -1.0 AO[abci] D[adje] D[bfgh] E2[fghe] delta[ic] delta[jd] 
    {"abci,adef,bghd,ghfe,ic",      -1.0,   5, { 8,22,22,30,28}},        //  -1.0 AO[abci] D[adef] D[bghd] E2[ghfe] delta[ic] 
    {"abci,adef,bghj,dgfe,ic,jh",   -1.0,   6, { 8,22,22,30,28,27}},     //  -1.0 AO[abci] D[adef] D[bghj] E2[dgfe] delta[ic] delta[jh] 
    {"abcj,adef,bghi,dghfie,jc",    -1.0,   5, { 8,22,22,31,28}},        //  -1.0 AO[abcj] D[adef] D[bghi] E3[dghfie] delta[jc] 
    {"ahbc,deib,dfgj,fc,ha,ie,jg",   1.0,   7, { 4,22,22,29,28,27,27}},  //   1.0 AO[ahbc] D[deib] D[dfgj] E1[fc] delta[ha] delta[ie] delta[jg] 
    {"aibc,dcef,dghj,bgfe,ia,jh",   -1.0,   6, { 4,22,22,30,28,27}},     //  -1.0 AO[aibc] D[dcef] D[dghj] E2[bgfe] delta[ia] delta[jh] 
    {"aibc,debf,dghe,ghfc,ia",       1.0,   5, { 4,22,22,30,28}},        //   1.0 AO[aibc] D[debf] D[dghe] E2[ghfc] delta[ia] 
    {"aibc,debf,dghj,egfc,ia,jh",    1.0,   6, { 4,22,22,30,28,27}},     //   1.0 AO[aibc] D[debf] D[dghj] E2[egfc] delta[ia] delta[jh] 
    {"aibc,dejb,dfgh,fghc,ia,je",    1.0,   6, { 4,22,22,30,28,27}},     //   1.0 AO[aibc] D[dejb] D[dfgh] E2[fghc] delta[ia] delta[je] 
    {"aibc,defb,dcgh,efhg,ia",      -1.0,   5, { 4,22,22,30,28}},        //  -1.0 AO[aibc] D[defb] D[dcgh] E2[efhg] delta[ia] 
    {"aibc,defb,dghe,ghcf,ia",       1.0,   5, { 4,22,22,30,28}},        //   1.0 AO[aibc] D[defb] D[dghe] E2[ghcf] delta[ia] 
    {"aibc,defb,dghj,egcf,ia,jh",    1.0,   6, { 4,22,22,30,28,27}},     //   1.0 AO[aibc] D[defb] D[dghj] E2[egcf] delta[ia] delta[jh] 
    {"ajbc,dcef,dghi,bghfie,ja",    -1.0,   5, { 4,22,22,31,28}},        //  -1.0 AO[ajbc] D[dcef] D[dghi] E3[bghfie] delta[ja] 
    {"ajbc,debf,dghi,eghfic,ja",     1.0,   5, { 4,22,22,31,28}},        //   1.0 AO[ajbc] D[debf] D[dghi] E3[eghfic] delta[ja] 
    {"ajbc,defb,dghi,eghcif,ja",     1.0,   5, { 4,22,22,31,28}},        //   1.0 AO[ajbc] D[defb] D[dghi] E3[eghcif] delta[ja] 
    {"abhc,deib,dfgj,fc,ha,ie,jg",  -2.0,   7, { 3,22,22,29,28,27,27}},  //  -2.0 AO[abhc] D[deib] D[dfgj] E1[fc] delta[ha] delta[ie] delta[jg] 
    {"abic,dcef,dghj,bgfe,ia,jh",    2.0,   6, { 3,22,22,30,28,27}},     //   2.0 AO[abic] D[dcef] D[dghj] E2[bgfe] delta[ia] delta[jh] 
    {"abic,debf,dghe,ghfc,ia",      -2.0,   5, { 3,22,22,30,28}},        //  -2.0 AO[abic] D[debf] D[dghe] E2[ghfc] delta[ia] 
    {"abic,debf,dghj,egfc,ia,jh",   -2.0,   6, { 3,22,22,30,28,27}},     //  -2.0 AO[abic] D[debf] D[dghj] E2[egfc] delta[ia] delta[jh] 
    {"abic,dejb,dfgh,fghc,ia,je",   -2.0,   6, { 3,22,22,30,28,27}},     //  -2.0 AO[abic] D[dejb] D[dfgh] E2[fghc] delta[ia] delta[je] 
    {"abic,defb,dcgh,efhg,ia",       2.0,   5, { 3,22,22,30,28}},        //   2.0 AO[abic] D[defb] D[dcgh] E2[efhg] delta[ia] 
    {"abic,defb,dghe,ghcf,ia",      -2.0,   5, { 3,22,22,30,28}},        //  -2.0 AO[abic] D[defb] D[dghe] E2[ghcf] delta[ia] 
    {"abic,defb,dghj,egcf,ia,jh",   -2.0,   6, { 3,22,22,30,28,27}},     //  -2.0 AO[abic] D[defb] D[dghj] E2[egcf] delta[ia] delta[jh] 
    {"abjc,dcef,dghi,bghfie,ja",     2.0,   5, { 3,22,22,31,28}},        //   2.0 AO[abjc] D[dcef] D[dghi] E3[bghfie] delta[ja] 
    {"abjc,debf,dghi,eghfic,ja",    -2.0,   5, { 3,22,22,31,28}},        //  -2.0 AO[abjc] D[debf] D[dghi] E3[eghfic] delta[ja] 
    {"abjc,defb,dghi,eghcif,ja",    -2.0,   5, { 3,22,22,31,28}},        //  -2.0 AO[abjc] D[defb] D[dghi] E3[eghcif] delta[ja] 
    {"abcd,efab,eghf,ghdc",         -0.5,   4, { 1,22,22,30}},           //  -0.5 AO[abcd] D[efab] D[eghf] E2[ghdc] 
    {"abcd,efab,eghi,fgdc,ih",      -0.5,   5, { 1,22,22,30,27}},        //  -0.5 AO[abcd] D[efab] D[eghi] E2[fgdc] delta[ih] 
    {"abcd,efba,eghf,ghcd",         -0.5,   4, { 1,22,22,30}},           //  -0.5 AO[abcd] D[efba] D[eghf] E2[ghcd] 
    {"abcd,efba,eghi,fgcd,ih",      -0.5,   5, { 1,22,22,30,27}},        //  -0.5 AO[abcd] D[efba] D[eghi] E2[fgcd] delta[ih] 
    {"abcd,efia,eghb,ghdc,if",      -0.5,   5, { 1,22,22,30,27}},        //  -0.5 AO[abcd] D[efia] D[eghb] E2[ghdc] delta[if] 
    {"abcd,efia,eghj,bgdc,if,jh",   -0.5,   6, { 1,22,22,30,27,27}},     //  -0.5 AO[abcd] D[efia] D[eghj] E2[bgdc] delta[if] delta[jh] 
    {"abcd,efib,eghj,agcd,if,jh",   -0.5,   6, { 1,22,22,30,27,27}},     //  -0.5 AO[abcd] D[efib] D[eghj] E2[agcd] delta[if] delta[jh] 
    {"abcd,efga,ehib,fgcd,ih",      -0.5,   5, { 1,22,22,30,27}},        //  -0.5 AO[abcd] D[efga] D[ehib] E2[fgcd] delta[ih] 
    {"abcd,ecfg,ehij,abhgdf,ji",     0.5,   5, { 1,22,22,31,27}},        //   0.5 AO[abcd] D[ecfg] D[ehij] E3[abhgdf] delta[ji] 
    {"abcd,edfg,ehij,abhcgf,ji",     0.5,   5, { 1,22,22,31,27}},        //   0.5 AO[abcd] D[edfg] D[ehij] E3[abhcgf] delta[ji] 
    {"abcd,efab,eghi,fghdic",       -0.5,   4, { 1,22,22,31}},           //  -0.5 AO[abcd] D[efab] D[eghi] E3[fghdic] 
    {"abcd,efag,ehib,fhigdc",       -0.5,   4, { 1,22,22,31}},           //  -0.5 AO[abcd] D[efag] D[ehib] E3[fhigdc] 
    {"abcd,efag,ehif,bhidgc",       -0.5,   4, { 1,22,22,31}},           //  -0.5 AO[abcd] D[efag] D[ehif] E3[bhidgc] 
    {"abcd,efag,ehij,bfhdgc,ji",    -0.5,   5, { 1,22,22,31,27}},        //  -0.5 AO[abcd] D[efag] D[ehij] E3[bfhdgc] delta[ji] 
    {"abcd,efba,eghi,fghcid",       -0.5,   4, { 1,22,22,31}},           //  -0.5 AO[abcd] D[efba] D[eghi] E3[fghcid] 
    {"abcd,efbg,ehif,ahicgd",       -0.5,   4, { 1,22,22,31}},           //  -0.5 AO[abcd] D[efbg] D[ehif] E3[ahicgd] 
    {"abcd,efbg,ehij,afhcgd,ji",    -0.5,   5, { 1,22,22,31,27}},        //  -0.5 AO[abcd] D[efbg] D[ehij] E3[afhcgd] delta[ji] 
    {"abcd,efja,eghi,bghdic,jf",    -0.5,   5, { 1,22,22,31,27}},        //  -0.5 AO[abcd] D[efja] D[eghi] E3[bghdic] delta[jf] 
    {"abcd,efjb,eghi,aghcid,jf",    -0.5,   5, { 1,22,22,31,27}},        //  -0.5 AO[abcd] D[efjb] D[eghi] E3[aghcid] delta[jf] 
    {"abcd,efga,echi,bfgdih",        0.5,   4, { 1,22,22,31}},           //   0.5 AO[abcd] D[efga] D[echi] E3[bfgdih] 
    {"abcd,efga,edhi,bfgich",        0.5,   4, { 1,22,22,31}},           //   0.5 AO[abcd] D[efga] D[edhi] E3[bfgich] 
    {"abcd,efga,ehbi,fghcdi",       -0.5,   4, { 1,22,22,31}},           //  -0.5 AO[abcd] D[efga] D[ehbi] E3[fghcdi] 
    {"abcd,efga,ehib,fghcid",       -0.5,   4, { 1,22,22,31}},           //  -0.5 AO[abcd] D[efga] D[ehib] E3[fghcid] 
    {"abcd,efga,ehib,fhicdg",       -0.5,   4, { 1,22,22,31}},           //  -0.5 AO[abcd] D[efga] D[ehib] E3[fhicdg] 
    {"abcd,efga,ehif,bhidcg",       -0.5,   4, { 1,22,22,31}},           //  -0.5 AO[abcd] D[efga] D[ehif] E3[bhidcg] 
    {"abcd,efga,ehij,bfhdcg,ji",    -0.5,   5, { 1,22,22,31,27}},        //  -0.5 AO[abcd] D[efga] D[ehij] E3[bfhdcg] delta[ji] 
    {"abcd,efgb,echi,afgidh",        0.5,   4, { 1,22,22,31}},           //   0.5 AO[abcd] D[efgb] D[echi] E3[afgidh] 
    {"abcd,efgb,edhi,afgcih",        0.5,   4, { 1,22,22,31}},           //   0.5 AO[abcd] D[efgb] D[edhi] E3[afgcih] 
    {"abcd,efgb,ehif,ahicdg",       -0.5,   4, { 1,22,22,31}},           //  -0.5 AO[abcd] D[efgb] D[ehif] E3[ahicdg] 
    {"abcd,efgb,ehij,afhcdg,ji",    -0.5,   5, { 1,22,22,31,27}},        //  -0.5 AO[abcd] D[efgb] D[ehij] E3[afhcdg] delta[ji] 
    {"abcd,ecfg,ehij,abhigdjf",      0.5,   4, { 1,22,22,32}},           //   0.5 AO[abcd] D[ecfg] D[ehij] E4[abhigdjf] 
    {"abcd,edfg,ehij,abhicgjf",      0.5,   4, { 1,22,22,32}},           //   0.5 AO[abcd] D[edfg] D[ehij] E4[abhicgjf] 
    {"abcd,efag,ehij,bfhidgjc",     -0.5,   4, { 1,22,22,32}},           //  -0.5 AO[abcd] D[efag] D[ehij] E4[bfhidgjc] 
    {"abcd,efbg,ehij,afhicgjd",     -0.5,   4, { 1,22,22,32}},           //  -0.5 AO[abcd] D[efbg] D[ehij] E4[afhicgjd] 
    {"abcd,efga,ehij,bfhidcjg",     -0.5,   4, { 1,22,22,32}},           //  -0.5 AO[abcd] D[efga] D[ehij] E4[bfhidcjg] 
    {"abcd,efgb,ehij,afhicdjg",     -0.5,   4, { 1,22,22,32}},           //  -0.5 AO[abcd] D[efgb] D[ehij] E4[afhicdjg] 
    {"ab,cdgb,cefh,ea,gd,hf",       -1.0,   6, { 0,22,22,29,27,27}},     //  -1.0 AO[ab] D[cdgb] D[cefh] E1[ea] delta[gd] delta[hf] 
    {"ab,cade,cfgb,fged",            1.0,   4, { 0,22,22,30}},           //   1.0 AO[ab] D[cade] D[cfgb] E2[fged] 
    {"ab,cade,cfgh,bfed,hg",         1.0,   5, { 0,22,22,30,27}},        //   1.0 AO[ab] D[cade] D[cfgh] E2[bfed] delta[hg] 
    {"ab,cdbe,cfgd,fgea",           -1.0,   4, { 0,22,22,30}},           //  -1.0 AO[ab] D[cdbe] D[cfgd] E2[fgea] 
    {"ab,cdbe,cfgh,dfea,hg",        -1.0,   5, { 0,22,22,30,27}},        //  -1.0 AO[ab] D[cdbe] D[cfgh] E2[dfea] delta[hg] 
    {"ab,cdhb,cefg,efga,hd",        -1.0,   5, { 0,22,22,30,27}},        //  -1.0 AO[ab] D[cdhb] D[cefg] E2[efga] delta[hd] 
    {"ab,cdeb,cfgd,fgae",           -1.0,   4, { 0,22,22,30}},           //  -1.0 AO[ab] D[cdeb] D[cfgd] E2[fgae] 
    {"ab,cdeb,cfgh,dfae,hg",        -1.0,   5, { 0,22,22,30,27}},        //  -1.0 AO[ab] D[cdeb] D[cfgh] E2[dfae] delta[hg] 
    {"ab,cade,cfgh,bfgehd",          1.0,   4, { 0,22,22,31}},           //   1.0 AO[ab] D[cade] D[cfgh] E3[bfgehd] 
    {"ab,cdbe,cfgh,dfgeha",         -1.0,   4, { 0,22,22,31}},           //  -1.0 AO[ab] D[cdbe] D[cfgh] E3[dfgeha] 
    {"ab,cdeb,cfgh,dfgahe",         -1.0,   4, { 0,22,22,31}},           //  -1.0 AO[ab] D[cdeb] D[cfgh] E3[dfgahe] 
    {"abcd,befa,dcgh,efhg",          1.0,   4, { 2,22,22,30}},           //   1.0 AO[abcd] D[befa] D[dcgh] E2[efhg] 
    {"abcd,befa,dgih,efch,ig",       1.0,   5, { 2,22,22,30,27}},        //   1.0 AO[abcd] D[befa] D[dgih] E2[efch] delta[ig] 
    {"abcd,befi,dcgh,aehg,if",       1.0,   5, { 2,22,22,30,27}},        //   1.0 AO[abcd] D[befi] D[dcgh] E2[aehg] delta[if] 
    {"abcd,befi,dgjh,aech,if,jg",    1.0,   6, { 2,22,22,30,27,27}},     //   1.0 AO[abcd] D[befi] D[dgjh] E2[aech] delta[if] delta[jg] 
    {"abcd,befa,dghi,efgchi",        1.0,   4, { 2,22,22,31}},           //   1.0 AO[abcd] D[befa] D[dghi] E3[efgchi] 
    {"abcd,befj,dghi,aegchi,jf",     1.0,   5, { 2,22,22,31,27}},        //   1.0 AO[abcd] D[befj] D[dghi] E3[aegchi] delta[jf] 
    {"abcd,befg,dchi,aefigh",        1.0,   4, { 2,22,22,31}},           //   1.0 AO[abcd] D[befg] D[dchi] E3[aefigh] 
    {"abcd,befg,dghi,aefcih",        1.0,   4, { 2,22,22,31}},           //   1.0 AO[abcd] D[befg] D[dghi] E3[aefcih] 
    {"abcd,befg,dhji,aefcgi,jh",     1.0,   5, { 2,22,22,31,27}},        //   1.0 AO[abcd] D[befg] D[dhji] E3[aefcgi] delta[jh] 
    {"abcd,befg,dhij,aefhcgij",      1.0,   4, { 2,22,22,32}},           //   1.0 AO[abcd] D[befg] D[dhij] E4[aefhcgij] 
    {"abcd,adef,bghc,ghef",          1.0,   4, { 7,22,22,30}},           //   1.0 AO[abcd] D[adef] D[bghc] E2[ghef] 
    {"abcd,adef,bghi,cgef,ih",       1.0,   5, { 7,22,22,30,27}},        //   1.0 AO[abcd] D[adef] D[bghi] E2[cgef] delta[ih] 
    {"abcd,aeif,bghc,ghfd,ie",       1.0,   5, { 7,22,22,30,27}},        //   1.0 AO[abcd] D[aeif] D[bghc] E2[ghfd] delta[ie] 
    {"abcd,aeif,bghj,cgfd,ie,jh",    1.0,   6, { 7,22,22,30,27,27}},     //   1.0 AO[abcd] D[aeif] D[bghj] E2[cgfd] delta[ie] delta[jh] 
    {"abcd,adef,bghi,cgheif",        1.0,   4, { 7,22,22,31}},           //   1.0 AO[abcd] D[adef] D[bghi] E3[cgheif] 
    {"abcd,aejf,bghi,cghfid,je",     1.0,   5, { 7,22,22,31,27}},        //   1.0 AO[abcd] D[aejf] D[bghi] E3[cghfid] delta[je] 
    {"abcd,aefg,bhic,ehigfd",        1.0,   4, { 7,22,22,31}},           //   1.0 AO[abcd] D[aefg] D[bhic] E3[ehigfd] 
    {"abcd,aefg,bhie,chifgd",        1.0,   4, { 7,22,22,31}},           //   1.0 AO[abcd] D[aefg] D[bhie] E3[chifgd] 
    {"abcd,aefg,bhij,cehfgd,ji",     1.0,   5, { 7,22,22,31,27}},        //   1.0 AO[abcd] D[aefg] D[bhij] E3[cehfgd] delta[ji] 
    {"abcd,aefg,bhij,cehifgjd",      1.0,   4, { 7,22,22,32}},           //   1.0 AO[abcd] D[aefg] D[bhij] E4[cehifgjd] 
    {"ab,acgd,befh,ed,gc,hf",        1.0,   6, { 6,22,22,29,27,27}},     //   1.0 AO[ab] D[acgd] D[befh] E1[ed] delta[gc] delta[hf] 
    {"ab,achd,befg,efgd,hc",         1.0,   5, { 6,22,22,30,27}},        //   1.0 AO[ab] D[achd] D[befg] E2[efgd] delta[hc] 
    {"ab,acde,bfgc,fged",            1.0,   4, { 6,22,22,30}},           //   1.0 AO[ab] D[acde] D[bfgc] E2[fged] 
    {"ab,acde,bfgh,cfed,hg",         1.0,   5, { 6,22,22,30,27}},        //   1.0 AO[ab] D[acde] D[bfgh] E2[cfed] delta[hg] 
    {"ab,acde,bfgh,cfgehd",          1.0,   4, { 6,22,22,31}},           //   1.0 AO[ab] D[acde] D[bfgh] E3[cfgehd] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 33;
    Out.EqsRes = FEqSet(&EqsRes[0], 104, "MRLCC3/Res");
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

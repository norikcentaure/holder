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
// <E_aa E_av  | E_cccc  | E_va E_aa > =    8    Class:h0    
// <E_aa E_av  | E_cc    | E_va E_aa > =    4    Class:h0    
// <E_aa E_av  | E_cvcv  | E_va E_aa > =    4    Class:h0    
// <E_aa E_av  | E_cvvc  | E_va E_aa > =    4    Class:h0    
// <E_aa E_av  | E_acca  | E_va E_aa > =    9    Class:h0    
// <E_aa E_av  | E_acac  | E_va E_aa > =    9    Class:h0    
// <E_aa E_av  | E_aaaa  | E_va E_aa > =   16    Class:h0    
// <E_aa E_av  | E_aa    | E_va E_aa > =    9    Class:h0    
// <E_aa E_av  | E_avav  | E_va E_aa > =    9    Class:h0    
// <E_aa E_av  | E_avva  | E_va E_aa > =   10    Class:h0    
// <E_aa E_av  | E_vvvv  | E_va E_aa > =    0    Class:h0    
// <E_aa E_av  | E_vv    | E_va E_aa > =    4    Class:h0    
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
    /* 22*/{"E5"     , ""         , "", USAGE_Amplitude   },
    /* 23*/{"D"      , "aeca"     , "", USAGE_Hamiltonian },
    /* 24*/{"D"      , "caaa"     , "", USAGE_Hamiltonian },
    /* 25*/{"D"      , "ccaa"     , "", USAGE_Hamiltonian },
    /* 26*/{"D"      , "ccae"     , "", USAGE_Hamiltonian },
    /* 27*/{"D"      , "eaaa"     , "", USAGE_Hamiltonian },
    /* 28*/{"D"      , "eaca"     , "", USAGE_Hamiltonian },
    /* 29*/{"D"      , "eeaa"     , "", USAGE_Hamiltonian },
    /* 30*/{"D"      , "eeca"     , "", USAGE_Hamiltonian },
    /* 31*/{"D"      , "eecc"     , "", USAGE_Hamiltonian },
    /* 32*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 33*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 34*/{"delta"  , "ee"       , "", USAGE_Density     },
    /* 35*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 36*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 37*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 38*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

	FEqInfo EqsRes[86] = {
    {"abfg,cdhe,cedi,ej,fa,gb,hd,id,je",        2.0,   9, { 6,27,27,35,33,33,32,32,32}},     //   2.0 AO[abfg] D[cdhe] D[cedi] E1[ej] delta[fa] delta[gb] delta[hd] delta[id] delta[je] 
    {"abgf,cdhe,cedi,ej,fa,gb,hd,id,je",       -1.0,   9, { 6,27,27,35,33,33,32,32,32}},     //  -1.0 AO[abgf] D[cdhe] D[cedi] E1[ej] delta[fa] delta[gb] delta[hd] delta[id] delta[je] 
    {"abfg,cdeh,ceid,dekj,fa,gb,he,ie,jd,ke",   4.0,  10, { 6,27,27,36,33,33,32,32,32,32}},  //   4.0 AO[abfg] D[cdeh] D[ceid] E2[dekj] delta[fa] delta[gb] delta[he] delta[ie] delta[jd] delta[ke] 
    {"abgh,cdef,cfed,efij,ga,hb,ie,jf",         2.0,   8, { 6,27,27,36,33,33,32,32}},        //   2.0 AO[abgh] D[cdef] D[cfed] E2[efij] delta[ga] delta[hb] delta[ie] delta[jf] 
    {"abgf,cdeh,ceid,dekj,fa,gb,he,ie,jd,ke",  -2.0,  10, { 6,27,27,36,33,33,32,32,32,32}},  //  -2.0 AO[abgf] D[cdeh] D[ceid] E2[dekj] delta[fa] delta[gb] delta[he] delta[ie] delta[jd] delta[ke] 
    {"abhg,cdef,cfed,efij,ga,hb,ie,jf",        -1.0,   8, { 6,27,27,36,33,33,32,32}},        //  -1.0 AO[abhg] D[cdef] D[cfed] E2[efij] delta[ga] delta[hb] delta[ie] delta[jf] 
    {"abgh,cdef,cfed,defkji,ga,hb,id,je,kf",    2.0,   9, { 6,27,27,37,33,33,32,32,32}},     //   2.0 AO[abgh] D[cdef] D[cfed] E3[defkji] delta[ga] delta[hb] delta[id] delta[je] delta[kf] 
    {"abhg,cdef,cfed,defkji,ga,hb,id,je,kf",   -1.0,   9, { 6,27,27,37,33,33,32,32,32}},     //  -1.0 AO[abhg] D[cdef] D[cfed] E3[defkji] delta[ga] delta[hb] delta[id] delta[je] delta[kf] 
    {"ae,bcfd,bdcg,dh,ea,fc,gc,hd",             2.0,   8, { 4,27,27,35,33,32,32,32}},        //   2.0 AO[ae] D[bcfd] D[bdcg] E1[dh] delta[ea] delta[fc] delta[gc] delta[hd] 
    {"ae,bcdf,bdgc,cdih,ea,fd,gd,hc,id",        4.0,   9, { 4,27,27,36,33,32,32,32,32}},     //   4.0 AO[ae] D[bcdf] D[bdgc] E2[cdih] delta[ea] delta[fd] delta[gd] delta[hc] delta[id] 
    {"af,bcde,bedc,degh,fa,gd,he",              2.0,   7, { 4,27,27,36,33,32,32}},           //   2.0 AO[af] D[bcde] D[bedc] E2[degh] delta[fa] delta[gd] delta[he] 
    {"af,bcde,bedc,cdeihg,fa,gc,hd,ie",         2.0,   8, { 4,27,27,37,33,32,32,32}},        //   2.0 AO[af] D[bcde] D[bedc] E3[cdeihg] delta[fa] delta[gc] delta[hd] delta[ie] 
    {"abef,bcdg,bdhc,ci,ea,fb,gd,hd,ic",        2.0,   9, { 7,27,27,35,33,34,32,32,32}},     //   2.0 AO[abef] D[bcdg] D[bdhc] E1[ci] delta[ea] delta[fb] delta[gd] delta[hd] delta[ic] 
    {"abef,bcdg,bdhc,cdji,ea,fb,gd,hd,ic,jd",   4.0,  10, { 7,27,27,36,33,34,32,32,32,32}},  //   4.0 AO[abef] D[bcdg] D[bdhc] E2[cdji] delta[ea] delta[fb] delta[gd] delta[hd] delta[ic] delta[jd] 
    {"abfg,bcde,bedc,cdhi,fa,gb,hc,id",         2.0,   8, { 7,27,27,36,33,34,32,32}},        //   2.0 AO[abfg] D[bcde] D[bedc] E2[cdhi] delta[fa] delta[gb] delta[hc] delta[id] 
    {"abfg,bcde,bedc,cdejih,fa,gb,hc,id,je",    2.0,   9, { 7,27,27,37,33,34,32,32,32}},     //   2.0 AO[abfg] D[bcde] D[bedc] E3[cdejih] delta[fa] delta[gb] delta[hc] delta[id] delta[je] 
    {"aebf,acdg,adhc,ci,ea,fb,gd,hd,ic",       -1.0,   9, {10,27,27,35,34,33,32,32,32}},     //  -1.0 AO[aebf] D[acdg] D[adhc] E1[ci] delta[ea] delta[fb] delta[gd] delta[hd] delta[ic] 
    {"aebf,acdg,adhc,cdji,ea,fb,gd,hd,ic,jd",  -2.0,  10, {10,27,27,36,34,33,32,32,32,32}},  //  -2.0 AO[aebf] D[acdg] D[adhc] E2[cdji] delta[ea] delta[fb] delta[gd] delta[hd] delta[ic] delta[jd] 
    {"afbg,acde,aedc,cdhi,fa,gb,hc,id",        -1.0,   8, {10,27,27,36,34,33,32,32}},        //  -1.0 AO[afbg] D[acde] D[aedc] E2[cdhi] delta[fa] delta[gb] delta[hc] delta[id] 
    {"afbg,acde,aedc,cdejih,fa,gb,hc,id,je",   -1.0,   9, {10,27,27,37,34,33,32,32,32}},     //  -1.0 AO[afbg] D[acde] D[aedc] E3[cdejih] delta[fa] delta[gb] delta[hc] delta[id] delta[je] 
    {"afbg,cdeb,cbed,dehi,fa,gb,hd,ie",        -1.0,   8, { 5,27,27,36,33,32,32,32}},        //  -1.0 AO[afbg] D[cdeb] D[cbed] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"afbc,debg,dbhe,beic,fa,gb,hb,ie",        -1.0,   8, { 5,27,27,36,33,32,32,32}},        //  -1.0 AO[afbc] D[debg] D[dbhe] E2[beic] delta[fa] delta[gb] delta[hb] delta[ie] 
    {"afbc,decg,dche,beic,fa,gc,hc,ie",        -1.0,   8, { 5,27,27,36,33,32,32,32}},        //  -1.0 AO[afbc] D[decg] D[dche] E2[beic] delta[fa] delta[gc] delta[hc] delta[ie] 
    {"agbc,dehf,dfei,bfcj,ga,he,ie,jf",        -1.0,   8, { 5,27,27,36,33,32,32,32}},        //  -1.0 AO[agbc] D[dehf] D[dfei] E2[bfcj] delta[ga] delta[he] delta[ie] delta[jf] 
    {"agbc,defb,dbfe,befhci,ga,he,if",         -1.0,   7, { 5,27,27,37,33,32,32}},           //  -1.0 AO[agbc] D[defb] D[dbfe] E3[befhci] delta[ga] delta[he] delta[if] 
    {"agbc,defc,dcfe,befhci,ga,he,if",         -1.0,   7, { 5,27,27,37,33,32,32}},           //  -1.0 AO[agbc] D[defc] D[dcfe] E3[befhci] delta[ga] delta[he] delta[if] 
    {"agbc,defh,dfie,befckj,ga,hf,if,je,kf",   -2.0,   9, { 5,27,27,37,33,32,32,32,32}},     //  -2.0 AO[agbc] D[defh] D[dfie] E3[befckj] delta[ga] delta[hf] delta[if] delta[je] delta[kf] 
    {"ahbc,defg,dgfe,bfgcij,ha,if,jg",         -1.0,   7, { 5,27,27,37,33,32,32}},           //  -1.0 AO[ahbc] D[defg] D[dgfe] E3[bfgcij] delta[ha] delta[if] delta[jg] 
    {"ahbc,defg,dgfe,befgckji,ha,ie,jf,kg",    -1.0,   8, { 5,27,27,38,33,32,32,32}},        //  -1.0 AO[ahbc] D[defg] D[dgfe] E4[befgckji] delta[ha] delta[ie] delta[jf] delta[kg] 
    {"abfg,cdeb,cbed,dehi,fa,gb,hd,ie",         2.0,   8, { 3,27,27,36,33,32,32,32}},        //   2.0 AO[abfg] D[cdeb] D[cbed] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abfc,debg,dbhe,beic,fa,gb,hb,ie",         2.0,   8, { 3,27,27,36,33,32,32,32}},        //   2.0 AO[abfc] D[debg] D[dbhe] E2[beic] delta[fa] delta[gb] delta[hb] delta[ie] 
    {"abfc,decg,dche,beic,fa,gc,hc,ie",         2.0,   8, { 3,27,27,36,33,32,32,32}},        //   2.0 AO[abfc] D[decg] D[dche] E2[beic] delta[fa] delta[gc] delta[hc] delta[ie] 
    {"abgc,dehf,dfei,bfcj,ga,he,ie,jf",         2.0,   8, { 3,27,27,36,33,32,32,32}},        //   2.0 AO[abgc] D[dehf] D[dfei] E2[bfcj] delta[ga] delta[he] delta[ie] delta[jf] 
    {"abgc,defb,dbfe,befhci,ga,he,if",          2.0,   7, { 3,27,27,37,33,32,32}},           //   2.0 AO[abgc] D[defb] D[dbfe] E3[befhci] delta[ga] delta[he] delta[if] 
    {"abgc,defc,dcfe,befhci,ga,he,if",          2.0,   7, { 3,27,27,37,33,32,32}},           //   2.0 AO[abgc] D[defc] D[dcfe] E3[befhci] delta[ga] delta[he] delta[if] 
    {"abgc,defh,dfie,befckj,ga,hf,if,je,kf",    4.0,   9, { 3,27,27,37,33,32,32,32,32}},     //   4.0 AO[abgc] D[defh] D[dfie] E3[befckj] delta[ga] delta[hf] delta[if] delta[je] delta[kf] 
    {"abhc,defg,dgfe,bfgcij,ha,if,jg",          2.0,   7, { 3,27,27,37,33,32,32}},           //   2.0 AO[abhc] D[defg] D[dgfe] E3[bfgcij] delta[ha] delta[if] delta[jg] 
    {"abhc,defg,dgfe,befgckji,ha,ie,jf,kg",     2.0,   8, { 3,27,27,38,33,32,32,32}},        //   2.0 AO[abhc] D[defg] D[dgfe] E4[befgckji] delta[ha] delta[ie] delta[jf] delta[kg] 
    {"abgc,defa,dafe,befchi,ga,he,if",          0.5,   7, { 1,27,27,37,32,32,32}},           //   0.5 AO[abgc] D[defa] D[dafe] E3[befchi] delta[ga] delta[he] delta[if] 
    {"abgc,defb,dbfe,aefhci,gb,he,if",          0.5,   7, { 1,27,27,37,32,32,32}},           //   0.5 AO[abgc] D[defb] D[dbfe] E3[aefhci] delta[gb] delta[he] delta[if] 
    {"abcg,defa,dafe,befhci,ga,he,if",          0.5,   7, { 1,27,27,37,32,32,32}},           //   0.5 AO[abcg] D[defa] D[dafe] E3[befhci] delta[ga] delta[he] delta[if] 
    {"abcg,defb,dbfe,aefchi,gb,he,if",          0.5,   7, { 1,27,27,37,32,32,32}},           //   0.5 AO[abcg] D[defb] D[dbfe] E3[aefchi] delta[gb] delta[he] delta[if] 
    {"abcd,efag,eahf,abfidc,ga,ha,if",          0.5,   7, { 1,27,27,37,32,32,32}},           //   0.5 AO[abcd] D[efag] D[eahf] E3[abfidc] delta[ga] delta[ha] delta[if] 
    {"abcd,efbg,ebhf,abfcid,gb,hb,if",          0.5,   7, { 1,27,27,37,32,32,32}},           //   0.5 AO[abcd] D[efbg] D[ebhf] E3[abfcid] delta[gb] delta[hb] delta[if] 
    {"abcd,efcg,echf,abfidc,gc,hc,if",          0.5,   7, { 1,27,27,37,32,32,32}},           //   0.5 AO[abcd] D[efcg] D[echf] E3[abfidc] delta[gc] delta[hc] delta[if] 
    {"abcd,efdg,edhf,abfcid,gd,hd,if",          0.5,   7, { 1,27,27,37,32,32,32}},           //   0.5 AO[abcd] D[efdg] D[edhf] E3[abfcid] delta[gd] delta[hd] delta[if] 
    {"abcd,efhg,egfi,abgcdj,hf,if,jg",          0.5,   7, { 1,27,27,37,32,32,32}},           //   0.5 AO[abcd] D[efhg] D[egfi] E3[abgcdj] delta[hf] delta[if] delta[jg] 
    {"abcd,efga,eagf,abfghdci,hf,ig",           0.5,   6, { 1,27,27,38,32,32}},              //   0.5 AO[abcd] D[efga] D[eagf] E4[abfghdci] delta[hf] delta[ig] 
    {"abcd,efgb,ebgf,abfgchdi,hf,ig",           0.5,   6, { 1,27,27,38,32,32}},              //   0.5 AO[abcd] D[efgb] D[ebgf] E4[abfgchdi] delta[hf] delta[ig] 
    {"abcd,efgc,ecgf,abfghdci,hf,ig",           0.5,   6, { 1,27,27,38,32,32}},              //   0.5 AO[abcd] D[efgc] D[ecgf] E4[abfghdci] delta[hf] delta[ig] 
    {"abcd,efgd,edgf,abfgchdi,hf,ig",           0.5,   6, { 1,27,27,38,32,32}},              //   0.5 AO[abcd] D[efgd] D[edgf] E4[abfgchdi] delta[hf] delta[ig] 
    {"abcd,efgh,egif,abfgcdkj,hg,ig,jf,kg",     1.0,   8, { 1,27,27,38,32,32,32,32}},        //   1.0 AO[abcd] D[efgh] D[egif] E4[abfgcdkj] delta[hg] delta[ig] delta[jf] delta[kg] 
    {"abcd,efgh,ehgf,abghcdij,ig,jh",           0.5,   6, { 1,27,27,38,32,32}},              //   0.5 AO[abcd] D[efgh] D[ehgf] E4[abghcdij] delta[ig] delta[jh] 
    {"abcd,efgh,ehgf,abfghcdkji,if,jg,kh",      0.5,   7, { 1,27,27,22,32,32,32}},           //   0.5 AO[abcd] D[efgh] D[ehgf] E5[abfghcdkji] delta[if] delta[jg] delta[kh] 
    {"ae,bcda,badc,cdfg,ea,fc,gd",              1.0,   7, { 0,27,27,36,32,32,32}},           //   1.0 AO[ae] D[bcda] D[badc] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ab,cdae,cafd,bdga,ea,fa,gd",              1.0,   7, { 0,27,27,36,32,32,32}},           //   1.0 AO[ab] D[cdae] D[cafd] E2[bdga] delta[ea] delta[fa] delta[gd] 
    {"ab,cdbe,cbfd,bdga,eb,fb,gd",              1.0,   7, { 0,27,27,36,32,32,32}},           //   1.0 AO[ab] D[cdbe] D[cbfd] E2[bdga] delta[eb] delta[fb] delta[gd] 
    {"ab,cdfe,cedg,beah,fd,gd,he",              1.0,   7, { 0,27,27,36,32,32,32}},           //   1.0 AO[ab] D[cdfe] D[cedg] E2[beah] delta[fd] delta[gd] delta[he] 
    {"ab,cdea,caed,bdefag,fd,ge",               1.0,   6, { 0,27,27,37,32,32}},              //   1.0 AO[ab] D[cdea] D[caed] E3[bdefag] delta[fd] delta[ge] 
    {"ab,cdeb,cbed,bdefag,fd,ge",               1.0,   6, { 0,27,27,37,32,32}},              //   1.0 AO[ab] D[cdeb] D[cbed] E3[bdefag] delta[fd] delta[ge] 
    {"ab,cdef,cegd,bdeaih,fe,ge,hd,ie",         2.0,   8, { 0,27,27,37,32,32,32,32}},        //   2.0 AO[ab] D[cdef] D[cegd] E3[bdeaih] delta[fe] delta[ge] delta[hd] delta[ie] 
    {"ab,cdef,cfed,befagh,ge,hf",               1.0,   6, { 0,27,27,37,32,32}},              //   1.0 AO[ab] D[cdef] D[cfed] E3[befagh] delta[ge] delta[hf] 
    {"ab,cdef,cfed,bdefaihg,gd,he,if",          1.0,   7, { 0,27,27,38,32,32,32}},           //   1.0 AO[ab] D[cdef] D[cfed] E4[bdefaihg] delta[gd] delta[he] delta[if] 
    {"abef,bcda,badc,cdgh,ea,fb,gc,hd",         1.0,   8, { 2,27,27,36,32,34,32,32}},        //   1.0 AO[abef] D[bcda] D[badc] E2[cdgh] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"abce,bdaf,bagd,adhc,eb,fa,ga,hd",         1.0,   8, { 2,27,27,36,34,32,32,32}},        //   1.0 AO[abce] D[bdaf] D[bagd] E2[adhc] delta[eb] delta[fa] delta[ga] delta[hd] 
    {"abce,bdcf,bcgd,adhc,eb,fc,gc,hd",         1.0,   8, { 2,27,27,36,34,32,32,32}},        //   1.0 AO[abce] D[bdcf] D[bcgd] E2[adhc] delta[eb] delta[fc] delta[gc] delta[hd] 
    {"abcf,bdeg,behd,adci,fb,ge,he,id",         1.0,   8, { 2,27,27,36,34,32,32,32}},        //   1.0 AO[abcf] D[bdeg] D[behd] E2[adci] delta[fb] delta[ge] delta[he] delta[id] 
    {"abcf,bdea,baed,adegch,fb,gd,he",          1.0,   7, { 2,27,27,37,34,32,32}},           //   1.0 AO[abcf] D[bdea] D[baed] E3[adegch] delta[fb] delta[gd] delta[he] 
    {"abcf,bdec,bced,adegch,fb,gd,he",          1.0,   7, { 2,27,27,37,34,32,32}},           //   1.0 AO[abcf] D[bdec] D[bced] E3[adegch] delta[fb] delta[gd] delta[he] 
    {"abcf,bdeg,behd,adecji,fb,ge,he,id,je",    2.0,   9, { 2,27,27,37,34,32,32,32,32}},     //   2.0 AO[abcf] D[bdeg] D[behd] E3[adecji] delta[fb] delta[ge] delta[he] delta[id] delta[je] 
    {"abcg,bdef,bfed,adechi,gb,hd,ie",          1.0,   7, { 2,27,27,37,34,32,32}},           //   1.0 AO[abcg] D[bdef] D[bfed] E3[adechi] delta[gb] delta[hd] delta[ie] 
    {"abcg,bdef,bfed,adefcjih,gb,hd,ie,jf",     1.0,   8, { 2,27,27,38,34,32,32,32}},        //   1.0 AO[abcg] D[bdef] D[bfed] E4[adefcjih] delta[gb] delta[hd] delta[ie] delta[jf] 
    {"aebf,acdb,abdc,cdhg,ea,fb,gc,hd",         1.0,   8, { 9,27,27,36,34,32,32,32}},        //   1.0 AO[aebf] D[acdb] D[abdc] E2[cdhg] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"aebc,adbf,abgd,bdch,ea,fb,gb,hd",         1.0,   8, { 9,27,27,36,34,32,32,32}},        //   1.0 AO[aebc] D[adbf] D[abgd] E2[bdch] delta[ea] delta[fb] delta[gb] delta[hd] 
    {"aebc,adcf,acgd,bdch,ea,fc,gc,hd",         1.0,   8, { 9,27,27,36,34,32,32,32}},        //   1.0 AO[aebc] D[adcf] D[acgd] E2[bdch] delta[ea] delta[fc] delta[gc] delta[hd] 
    {"afbc,adeg,aehd,bdic,fa,ge,he,id",         1.0,   8, { 9,27,27,36,34,32,32,32}},        //   1.0 AO[afbc] D[adeg] D[aehd] E2[bdic] delta[fa] delta[ge] delta[he] delta[id] 
    {"afbc,adeb,abed,bdeghc,fa,gd,he",          1.0,   7, { 9,27,27,37,34,32,32}},           //   1.0 AO[afbc] D[adeb] D[abed] E3[bdeghc] delta[fa] delta[gd] delta[he] 
    {"afbc,adec,aced,bdehcg,fa,gd,he",          1.0,   7, { 9,27,27,37,34,32,32}},           //   1.0 AO[afbc] D[adec] D[aced] E3[bdehcg] delta[fa] delta[gd] delta[he] 
    {"afbc,adeg,aehd,bdeijc,fa,ge,he,id,je",    1.0,   9, { 9,27,27,37,34,32,32,32,32}},     //   1.0 AO[afbc] D[adeg] D[aehd] E3[bdeijc] delta[fa] delta[ge] delta[he] delta[id] delta[je] 
    {"afbc,adeg,aehd,bdejci,fa,ge,he,id,je",    1.0,   9, { 9,27,27,37,34,32,32,32,32}},     //   1.0 AO[afbc] D[adeg] D[aehd] E3[bdejci] delta[fa] delta[ge] delta[he] delta[id] delta[je] 
    {"agbc,adef,afed,bdeihc,ga,hd,ie",          1.0,   7, { 9,27,27,37,34,32,32}},           //   1.0 AO[agbc] D[adef] D[afed] E3[bdeihc] delta[ga] delta[hd] delta[ie] 
    {"agbc,adef,afed,bdefijch,ga,hd,ie,jf",     1.0,   8, { 9,27,27,38,34,32,32,32}},        //   1.0 AO[agbc] D[adef] D[afed] E4[bdefijch] delta[ga] delta[hd] delta[ie] delta[jf] 
    {"ad,abce,acfb,bg,da,ec,fc,gb",             1.0,   8, { 8,27,27,35,34,32,32,32}},        //   1.0 AO[ad] D[abce] D[acfb] E1[bg] delta[da] delta[ec] delta[fc] delta[gb] 
    {"ad,abce,acfb,bchg,da,ec,fc,gb,hc",        2.0,   9, { 8,27,27,36,34,32,32,32,32}},     //   2.0 AO[ad] D[abce] D[acfb] E2[bchg] delta[da] delta[ec] delta[fc] delta[gb] delta[hc] 
    {"ae,abcd,adcb,bcfg,ea,fb,gc",              1.0,   7, { 8,27,27,36,34,32,32}},           //   1.0 AO[ae] D[abcd] D[adcb] E2[bcfg] delta[ea] delta[fb] delta[gc] 
    {"ae,abcd,adcb,bcdhgf,ea,fb,gc,hd",         1.0,   8, { 8,27,27,37,34,32,32,32}},        //   1.0 AO[ae] D[abcd] D[adcb] E3[bcdhgf] delta[ea] delta[fb] delta[gc] delta[hd] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 39;
    Out.EqsRes = FEqSet(&EqsRes[0], 86, "MRLCC3/Res");
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

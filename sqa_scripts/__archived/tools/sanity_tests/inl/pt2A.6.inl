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
// <E_aa E_cv  | E_cccc  | E_vc E_aa > =   12    Class:h0    
// <E_aa E_cv  | E_cccc  | E_ac E_va > =   12    Class:h0    
// <E_av E_ca  | E_cccc  | E_vc E_aa > =   12    Class:h0    
// <E_av E_ca  | E_cccc  | E_ac E_va > =   12    Class:h0    
// <E_aa E_cv  | E_cc    | E_vc E_aa > =    4    Class:h0    
// <E_aa E_cv  | E_cc    | E_ac E_va > =    4    Class:h0    
// <E_av E_ca  | E_cc    | E_vc E_aa > =    4    Class:h0    
// <E_av E_ca  | E_cc    | E_ac E_va > =    4    Class:h0    
// <E_aa E_cv  | E_cvcv  | E_vc E_aa > =    4    Class:h0    
// <E_aa E_cv  | E_cvcv  | E_ac E_va > =    4    Class:h0    
// <E_av E_ca  | E_cvcv  | E_vc E_aa > =    4    Class:h0    
// <E_av E_ca  | E_cvcv  | E_ac E_va > =    4    Class:h0    
// <E_aa E_cv  | E_cvvc  | E_vc E_aa > =    4    Class:h0    
// <E_aa E_cv  | E_cvvc  | E_ac E_va > =    4    Class:h0    
// <E_av E_ca  | E_cvvc  | E_vc E_aa > =    4    Class:h0    
// <E_av E_ca  | E_cvvc  | E_ac E_va > =    4    Class:h0    
// <E_aa E_cv  | E_acca  | E_vc E_aa > =   10    Class:h0    
// <E_aa E_cv  | E_acca  | E_ac E_va > =   10    Class:h0    
// <E_av E_ca  | E_acca  | E_vc E_aa > =   10    Class:h0    
// <E_av E_ca  | E_acca  | E_ac E_va > =   10    Class:h0    
// <E_aa E_cv  | E_acac  | E_vc E_aa > =   10    Class:h0    
// <E_aa E_cv  | E_acac  | E_ac E_va > =   10    Class:h0    
// <E_av E_ca  | E_acac  | E_vc E_aa > =   10    Class:h0    
// <E_av E_ca  | E_acac  | E_ac E_va > =   10    Class:h0    
// <E_aa E_cv  | E_aaaa  | E_vc E_aa > =   10    Class:h0    
// <E_aa E_cv  | E_aaaa  | E_ac E_va > =   10    Class:h0    
// <E_av E_ca  | E_aaaa  | E_vc E_aa > =   10    Class:h0    
// <E_av E_ca  | E_aaaa  | E_ac E_va > =   10    Class:h0    
// <E_aa E_cv  | E_aa    | E_vc E_aa > =    5    Class:h0    
// <E_aa E_cv  | E_aa    | E_ac E_va > =    5    Class:h0    
// <E_av E_ca  | E_aa    | E_vc E_aa > =    5    Class:h0    
// <E_av E_ca  | E_aa    | E_ac E_va > =    5    Class:h0    
// <E_aa E_cv  | E_avav  | E_vc E_aa > =    5    Class:h0    
// <E_aa E_cv  | E_avav  | E_ac E_va > =    5    Class:h0    
// <E_av E_ca  | E_avav  | E_vc E_aa > =    5    Class:h0    
// <E_av E_ca  | E_avav  | E_ac E_va > =    5    Class:h0    
// <E_aa E_cv  | E_avva  | E_vc E_aa > =    5    Class:h0    
// <E_aa E_cv  | E_avva  | E_ac E_va > =    5    Class:h0    
// <E_av E_ca  | E_avva  | E_vc E_aa > =    5    Class:h0    
// <E_av E_ca  | E_avva  | E_ac E_va > =    5    Class:h0    
// <E_aa E_cv  | E_vvvv  | E_vc E_aa > =    0    Class:h0    
// <E_aa E_cv  | E_vvvv  | E_ac E_va > =    0    Class:h0    
// <E_av E_ca  | E_vvvv  | E_vc E_aa > =    0    Class:h0    
// <E_av E_ca  | E_vvvv  | E_ac E_va > =    0    Class:h0    
// <E_aa E_cv  | E_vv    | E_vc E_aa > =    2    Class:h0    
// <E_aa E_cv  | E_vv    | E_ac E_va > =    2    Class:h0    
// <E_av E_ca  | E_vv    | E_vc E_aa > =    2    Class:h0    
// <E_av E_ca  | E_vv    | E_ac E_va > =    2    Class:h0    
namespace MRLCC3 {

  FTensorDecl TensorDecls[38] = {
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
    /* 37*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

	FEqInfo EqsRes[284] = {
    {"abfg,cdae,cead,eh,fa,gb,he",       -2.0,   7, { 6,27,27,34,32,32,31}},     //  -2.0 AO[abfg] D[cdae] D[cead] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abfg,cdbe,cebd,eh,fa,gb,he",       -2.0,   7, { 6,27,27,34,32,32,31}},     //  -2.0 AO[abfg] D[cdbe] D[cebd] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abgh,cdef,cfed,fi,ga,hb,if",        4.0,   7, { 6,27,27,34,32,32,31}},     //   4.0 AO[abgh] D[cdef] D[cfed] E1[fi] delta[ga] delta[hb] delta[if] 
    {"abgf,cdae,cead,eh,fa,gb,he",        1.0,   7, { 6,27,27,34,32,32,31}},     //   1.0 AO[abgf] D[cdae] D[cead] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abgf,cdbe,cebd,eh,fa,gb,he",        1.0,   7, { 6,27,27,34,32,32,31}},     //   1.0 AO[abgf] D[cdbe] D[cebd] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abhg,cdef,cfed,fi,ga,hb,if",       -2.0,   7, { 6,27,27,34,32,32,31}},     //  -2.0 AO[abhg] D[cdef] D[cfed] E1[fi] delta[ga] delta[hb] delta[if] 
    {"abfg,cdae,cead,deih,fa,gb,hd,ie",  -2.0,   8, { 6,27,27,35,32,32,31,31}},  //  -2.0 AO[abfg] D[cdae] D[cead] E2[deih] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abfg,cdbe,cebd,deih,fa,gb,hd,ie",  -2.0,   8, { 6,27,27,35,32,32,31,31}},  //  -2.0 AO[abfg] D[cdbe] D[cebd] E2[deih] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abgh,cdef,cfed,dfji,ga,hb,id,jf",   4.0,   8, { 6,27,27,35,32,32,31,31}},  //   4.0 AO[abgh] D[cdef] D[cfed] E2[dfji] delta[ga] delta[hb] delta[id] delta[jf] 
    {"abgf,cdae,cead,deih,fa,gb,hd,ie",   1.0,   8, { 6,27,27,35,32,32,31,31}},  //   1.0 AO[abgf] D[cdae] D[cead] E2[deih] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abgf,cdbe,cebd,deih,fa,gb,hd,ie",   1.0,   8, { 6,27,27,35,32,32,31,31}},  //   1.0 AO[abgf] D[cdbe] D[cebd] E2[deih] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abhg,cdef,cfed,dfji,ga,hb,id,jf",  -2.0,   8, { 6,27,27,35,32,32,31,31}},  //  -2.0 AO[abhg] D[cdef] D[cfed] E2[dfji] delta[ga] delta[hb] delta[id] delta[jf] 
    {"abhi,cdef,dgec,gf,ha,ib",          -2.0,   6, { 6,22,27,34,32,32}},        //  -2.0 AO[abhi] D[cdef] D[dgec] E1[gf] delta[ha] delta[ib] 
    {"abhc,debf,egcd,gf,ha",              1.0,   5, { 6,22,27,34,32}},           //   1.0 AO[abhc] D[debf] D[egcd] E1[gf] delta[ha] 
    {"abih,cdef,dgec,gf,ha,ib",           1.0,   6, { 6,22,27,34,32,32}},        //   1.0 AO[abih] D[cdef] D[dgec] E1[gf] delta[ha] delta[ib] 
    {"abhc,deaf,egcd,gf,hb",             -0.5,   5, { 6,22,27,34,32}},           //  -0.5 AO[abhc] D[deaf] D[egcd] E1[gf] delta[hb] 
    {"abch,debf,egcd,gf,ha",             -0.5,   5, { 6,22,27,34,32}},           //  -0.5 AO[abch] D[debf] D[egcd] E1[gf] delta[ha] 
    {"abch,deaf,egcd,gf,hb",              1.0,   5, { 6,22,27,34,32}},           //   1.0 AO[abch] D[deaf] D[egcd] E1[gf] delta[hb] 
    {"abij,cdef,dgeh,cgfh,ia,jb",        -2.0,   6, { 6,22,27,35,32,32}},        //  -2.0 AO[abij] D[cdef] D[dgeh] E2[cgfh] delta[ia] delta[jb] 
    {"abic,debf,egch,dgfh,ia",            1.0,   5, { 6,22,27,35,32}},           //   1.0 AO[abic] D[debf] D[egch] E2[dgfh] delta[ia] 
    {"abji,cdef,dgeh,cgfh,ia,jb",         1.0,   6, { 6,22,27,35,32,32}},        //   1.0 AO[abji] D[cdef] D[dgeh] E2[cgfh] delta[ia] delta[jb] 
    {"abic,deaf,egch,dgfh,ib",           -0.5,   5, { 6,22,27,35,32}},           //  -0.5 AO[abic] D[deaf] D[egch] E2[dgfh] delta[ib] 
    {"abci,debf,egch,dgfh,ia",           -0.5,   5, { 6,22,27,35,32}},           //  -0.5 AO[abci] D[debf] D[egch] E2[dgfh] delta[ia] 
    {"abci,deaf,egch,dgfh,ib",            1.0,   5, { 6,22,27,35,32}},           //   1.0 AO[abci] D[deaf] D[egch] E2[dgfh] delta[ib] 
    {"abhi,cdef,dceg,fg,ha,ib",          -2.0,   6, { 6,22,27,34,32,32}},        //  -2.0 AO[abhi] D[cdef] D[dceg] E1[fg] delta[ha] delta[ib] 
    {"abhc,decf,edbg,fg,ha",              1.0,   5, { 6,22,27,34,32}},           //   1.0 AO[abhc] D[decf] D[edbg] E1[fg] delta[ha] 
    {"abih,cdef,dceg,fg,ha,ib",           1.0,   6, { 6,22,27,34,32,32}},        //   1.0 AO[abih] D[cdef] D[dceg] E1[fg] delta[ha] delta[ib] 
    {"abhc,decf,edag,fg,hb",             -0.5,   5, { 6,22,27,34,32}},           //  -0.5 AO[abhc] D[decf] D[edag] E1[fg] delta[hb] 
    {"abch,decf,edbg,fg,ha",             -0.5,   5, { 6,22,27,34,32}},           //  -0.5 AO[abch] D[decf] D[edbg] E1[fg] delta[ha] 
    {"abch,decf,edag,fg,hb",              1.0,   5, { 6,22,27,34,32}},           //   1.0 AO[abch] D[decf] D[edag] E1[fg] delta[hb] 
    {"abij,cdef,dgeh,fgch,ia,jb",        -2.0,   6, { 6,22,27,35,32,32}},        //  -2.0 AO[abij] D[cdef] D[dgeh] E2[fgch] delta[ia] delta[jb] 
    {"abic,decf,egbh,fgdh,ia",            1.0,   5, { 6,22,27,35,32}},           //   1.0 AO[abic] D[decf] D[egbh] E2[fgdh] delta[ia] 
    {"abji,cdef,dgeh,fgch,ia,jb",         1.0,   6, { 6,22,27,35,32,32}},        //   1.0 AO[abji] D[cdef] D[dgeh] E2[fgch] delta[ia] delta[jb] 
    {"abic,decf,egah,fgdh,ib",           -0.5,   5, { 6,22,27,35,32}},           //  -0.5 AO[abic] D[decf] D[egah] E2[fgdh] delta[ib] 
    {"abci,decf,egbh,fgdh,ia",           -0.5,   5, { 6,22,27,35,32}},           //  -0.5 AO[abci] D[decf] D[egbh] E2[fgdh] delta[ia] 
    {"abci,decf,egah,fgdh,ib",            1.0,   5, { 6,22,27,35,32}},           //   1.0 AO[abci] D[decf] D[egah] E2[fgdh] delta[ib] 
    {"abfg,cdae,cdae,eh,fa,gb,he",       -2.0,   7, { 6,22,22,34,32,32,31}},     //  -2.0 AO[abfg] D[cdae] D[cdae] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abfg,cdbe,cdbe,eh,fa,gb,he",       -2.0,   7, { 6,22,22,34,32,32,31}},     //  -2.0 AO[abfg] D[cdbe] D[cdbe] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abgh,cdef,cdef,fi,ga,hb,if",        4.0,   7, { 6,22,22,34,32,32,31}},     //   4.0 AO[abgh] D[cdef] D[cdef] E1[fi] delta[ga] delta[hb] delta[if] 
    {"abgf,cdae,cdae,eh,fa,gb,he",        1.0,   7, { 6,22,22,34,32,32,31}},     //   1.0 AO[abgf] D[cdae] D[cdae] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abgf,cdbe,cdbe,eh,fa,gb,he",        1.0,   7, { 6,22,22,34,32,32,31}},     //   1.0 AO[abgf] D[cdbe] D[cdbe] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abhg,cdef,cdef,fi,ga,hb,if",       -2.0,   7, { 6,22,22,34,32,32,31}},     //  -2.0 AO[abhg] D[cdef] D[cdef] E1[fi] delta[ga] delta[hb] delta[if] 
    {"abfg,cdae,cdae,cehi,fa,gb,hc,ie",   1.0,   8, { 6,22,22,35,32,32,31,31}},  //   1.0 AO[abfg] D[cdae] D[cdae] E2[cehi] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"abfg,cdbe,cdbe,cehi,fa,gb,hc,ie",   1.0,   8, { 6,22,22,35,32,32,31,31}},  //   1.0 AO[abfg] D[cdbe] D[cdbe] E2[cehi] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"abgh,cdef,cdef,cfij,ga,hb,ic,jf",  -2.0,   8, { 6,22,22,35,32,32,31,31}},  //  -2.0 AO[abgh] D[cdef] D[cdef] E2[cfij] delta[ga] delta[hb] delta[ic] delta[jf] 
    {"abgf,cdae,cdae,cehi,fa,gb,hc,ie",  -0.5,   8, { 6,22,22,35,32,32,31,31}},  //  -0.5 AO[abgf] D[cdae] D[cdae] E2[cehi] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"abgf,cdbe,cdbe,cehi,fa,gb,hc,ie",  -0.5,   8, { 6,22,22,35,32,32,31,31}},  //  -0.5 AO[abgf] D[cdbe] D[cdbe] E2[cehi] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"abhg,cdef,cdef,cfij,ga,hb,ic,jf",   1.0,   8, { 6,22,22,35,32,32,31,31}},  //   1.0 AO[abhg] D[cdef] D[cdef] E2[cfij] delta[ga] delta[hb] delta[ic] delta[jf] 
    {"ae,bcad,bdac,df,ea,fd",            -2.0,   6, { 4,27,27,34,32,31}},        //  -2.0 AO[ae] D[bcad] D[bdac] E1[df] delta[ea] delta[fd] 
    {"af,bcde,bedc,eg,fa,ge",             4.0,   6, { 4,27,27,34,32,31}},        //   4.0 AO[af] D[bcde] D[bedc] E1[eg] delta[fa] delta[ge] 
    {"ae,bcad,bdac,cdgf,ea,fc,gd",       -2.0,   7, { 4,27,27,35,32,31,31}},     //  -2.0 AO[ae] D[bcad] D[bdac] E2[cdgf] delta[ea] delta[fc] delta[gd] 
    {"af,bcde,bedc,cehg,fa,gc,he",        4.0,   7, { 4,27,27,35,32,31,31}},     //   4.0 AO[af] D[bcde] D[bedc] E2[cehg] delta[fa] delta[gc] delta[he] 
    {"ag,bcde,cfdb,fe,ga",               -2.0,   5, { 4,22,27,34,32}},           //  -2.0 AO[ag] D[bcde] D[cfdb] E1[fe] delta[ga] 
    {"ab,cdbe,dfac,fe",                   1.0,   4, { 4,22,27,34}},              //   1.0 AO[ab] D[cdbe] D[dfac] E1[fe] 
    {"ah,bcde,cfdg,bfeg,ha",             -2.0,   5, { 4,22,27,35,32}},           //  -2.0 AO[ah] D[bcde] D[cfdg] E2[bfeg] delta[ha] 
    {"ab,cdbe,dfag,cfeg",                 1.0,   4, { 4,22,27,35}},              //   1.0 AO[ab] D[cdbe] D[dfag] E2[cfeg] 
    {"ag,bcde,cbdf,ef,ga",               -2.0,   5, { 4,22,27,34,32}},           //  -2.0 AO[ag] D[bcde] D[cbdf] E1[ef] delta[ga] 
    {"ab,cdae,dcbf,ef",                   1.0,   4, { 4,22,27,34}},              //   1.0 AO[ab] D[cdae] D[dcbf] E1[ef] 
    {"ah,bcde,cfdg,efbg,ha",             -2.0,   5, { 4,22,27,35,32}},           //  -2.0 AO[ah] D[bcde] D[cfdg] E2[efbg] delta[ha] 
    {"ab,cdae,dfbg,efcg",                 1.0,   4, { 4,22,27,35}},              //   1.0 AO[ab] D[cdae] D[dfbg] E2[efcg] 
    {"ae,bcad,bcad,df,ea,fd",            -2.0,   6, { 4,22,22,34,32,31}},        //  -2.0 AO[ae] D[bcad] D[bcad] E1[df] delta[ea] delta[fd] 
    {"af,bcde,bcde,eg,fa,ge",             4.0,   6, { 4,22,22,34,32,31}},        //   4.0 AO[af] D[bcde] D[bcde] E1[eg] delta[fa] delta[ge] 
    {"ae,bcad,bcad,bdfg,ea,fb,gd",        1.0,   7, { 4,22,22,35,32,31,31}},     //   1.0 AO[ae] D[bcad] D[bcad] E2[bdfg] delta[ea] delta[fb] delta[gd] 
    {"af,bcde,bcde,begh,fa,gb,he",       -2.0,   7, { 4,22,22,35,32,31,31}},     //  -2.0 AO[af] D[bcde] D[bcde] E2[begh] delta[fa] delta[gb] delta[he] 
    {"abef,bcad,bdac,cg,ea,fb,gc",       -2.0,   7, { 7,27,27,34,32,33,31}},     //  -2.0 AO[abef] D[bcad] D[bdac] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"abfg,bcde,bedc,ch,fa,gb,hc",        4.0,   7, { 7,27,27,34,32,33,31}},     //   4.0 AO[abfg] D[bcde] D[bedc] E1[ch] delta[fa] delta[gb] delta[hc] 
    {"abef,bcad,bdac,cdhg,ea,fb,gc,hd",  -2.0,   8, { 7,27,27,35,32,33,31,31}},  //  -2.0 AO[abef] D[bcad] D[bdac] E2[cdhg] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"abfg,bcde,bedc,ceih,fa,gb,hc,ie",   4.0,   8, { 7,27,27,35,32,33,31,31}},  //   4.0 AO[abfg] D[bcde] D[bedc] E2[ceih] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"abhc,dcef,bged,gf,ha",             -2.0,   5, { 7,22,27,34,32}},           //  -2.0 AO[abhc] D[dcef] D[bged] E1[gf] delta[ha] 
    {"abcd,edaf,bgce,gf",                 1.0,   4, { 7,22,27,34}},              //   1.0 AO[abcd] D[edaf] D[bgce] E1[gf] 
    {"abic,dcef,bgeh,dgfh,ia",           -2.0,   5, { 7,22,27,35,32}},           //  -2.0 AO[abic] D[dcef] D[bgeh] E2[dgfh] delta[ia] 
    {"abcd,edaf,bgch,egfh",               1.0,   4, { 7,22,27,35}},              //   1.0 AO[abcd] D[edaf] D[bgch] E2[egfh] 
    {"abhc,dbef,cdeg,fg,ha",             -2.0,   5, { 7,22,27,34,32}},           //  -2.0 AO[abhc] D[dbef] D[cdeg] E1[fg] delta[ha] 
    {"abcd,ebcf,deag,fg",                 1.0,   4, { 7,22,27,34}},              //   1.0 AO[abcd] D[ebcf] D[deag] E1[fg] 
    {"abic,dbef,cgeh,fgdh,ia",           -2.0,   5, { 7,22,27,35,32}},           //  -2.0 AO[abic] D[dbef] D[cgeh] E2[fgdh] delta[ia] 
    {"abcd,ebcf,dgah,fgeh",               1.0,   4, { 7,22,27,35}},              //   1.0 AO[abcd] D[ebcf] D[dgah] E2[fgeh] 
    {"abef,cbad,cbad,dg,ea,fb,gd",       -2.0,   7, { 7,22,22,34,32,33,31}},     //  -2.0 AO[abef] D[cbad] D[cbad] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abfg,cbde,cbde,eh,fa,gb,he",        4.0,   7, { 7,22,22,34,32,33,31}},     //   4.0 AO[abfg] D[cbde] D[cbde] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abef,cbad,cbad,cdgh,ea,fb,gc,hd",   1.0,   8, { 7,22,22,35,32,33,31,31}},  //   1.0 AO[abef] D[cbad] D[cbad] E2[cdgh] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"abfg,cbde,cbde,cehi,fa,gb,hc,ie",  -2.0,   8, { 7,22,22,35,32,33,31,31}},  //  -2.0 AO[abfg] D[cbde] D[cbde] E2[cehi] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"aebf,acbd,adbc,cg,ea,fb,gc",        4.0,   7, {10,27,27,34,33,32,31}},     //   4.0 AO[aebf] D[acbd] D[adbc] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"afbg,acde,aedc,ch,fa,gb,hc",       -2.0,   7, {10,27,27,34,33,32,31}},     //  -2.0 AO[afbg] D[acde] D[aedc] E1[ch] delta[fa] delta[gb] delta[hc] 
    {"aebf,acbd,adbc,cdhg,ea,fb,gc,hd",   4.0,   8, {10,27,27,35,33,32,31,31}},  //   4.0 AO[aebf] D[acbd] D[adbc] E2[cdhg] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"afbg,acde,aedc,ceih,fa,gb,hc,ie",  -2.0,   8, {10,27,27,35,33,32,31,31}},  //  -2.0 AO[afbg] D[acde] D[aedc] E2[ceih] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"abch,daef,bged,gf,hc",              1.0,   5, {10,22,27,34,32}},           //   1.0 AO[abch] D[daef] D[bged] E1[gf] delta[hc] 
    {"abcd,eacf,bgde,gf",                -2.0,   4, {10,22,27,34}},              //  -2.0 AO[abcd] D[eacf] D[bgde] E1[gf] 
    {"abci,daef,bgeh,dgfh,ic",            1.0,   5, {10,22,27,35,32}},           //   1.0 AO[abci] D[daef] D[bgeh] E2[dgfh] delta[ic] 
    {"abcd,eacf,bgdh,egfh",              -2.0,   4, {10,22,27,35}},              //  -2.0 AO[abcd] D[eacf] D[bgdh] E2[egfh] 
    {"abch,dbef,adeg,fg,hc",              1.0,   5, {10,22,27,34,32}},           //   1.0 AO[abch] D[dbef] D[adeg] E1[fg] delta[hc] 
    {"abcd,ebdf,aecg,fg",                -2.0,   4, {10,22,27,34}},              //  -2.0 AO[abcd] D[ebdf] D[aecg] E1[fg] 
    {"abci,dbef,ageh,fgdh,ic",            1.0,   5, {10,22,27,35,32}},           //   1.0 AO[abci] D[dbef] D[ageh] E2[fgdh] delta[ic] 
    {"abcd,ebdf,agch,fgeh",              -2.0,   4, {10,22,27,35}},              //  -2.0 AO[abcd] D[ebdf] D[agch] E2[fgeh] 
    {"aebf,cabd,cabd,dg,ea,fb,gd",        1.0,   7, {10,22,22,34,33,32,31}},     //   1.0 AO[aebf] D[cabd] D[cabd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"afbg,cade,cade,eh,fa,gb,he",       -2.0,   7, {10,22,22,34,33,32,31}},     //  -2.0 AO[afbg] D[cade] D[cade] E1[eh] delta[fa] delta[gb] delta[he] 
    {"aebf,cabd,cabd,cdhg,ea,fb,gc,hd",   1.0,   8, {10,22,22,35,33,32,31,31}},  //   1.0 AO[aebf] D[cabd] D[cabd] E2[cdhg] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"afbg,cade,cade,cehi,fa,gb,hc,ie",   1.0,   8, {10,22,22,35,33,32,31,31}},  //   1.0 AO[afbg] D[cade] D[cade] E2[cehi] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"aebf,cdab,cbad,dg,ea,fb,gd",        1.0,   7, { 5,27,27,34,32,31,31}},     //   1.0 AO[aebf] D[cdab] D[cbad] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"afbg,cdeb,cbed,dh,fa,gb,hd",       -2.0,   7, { 5,27,27,34,32,31,31}},     //  -2.0 AO[afbg] D[cdeb] D[cbed] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"afbc,deab,dbae,begc,fa,ge",         1.0,   6, { 5,27,27,35,32,31}},        //   1.0 AO[afbc] D[deab] D[dbae] E2[begc] delta[fa] delta[ge] 
    {"afbc,deac,dcae,begc,fa,ge",         1.0,   6, { 5,27,27,35,32,31}},        //   1.0 AO[afbc] D[deac] D[dcae] E2[begc] delta[fa] delta[ge] 
    {"agbc,deaf,dfae,bfch,ga,hf",         1.0,   6, { 5,27,27,35,32,31}},        //   1.0 AO[agbc] D[deaf] D[dfae] E2[bfch] delta[ga] delta[hf] 
    {"agbc,defb,dbfe,behc,ga,he",        -2.0,   6, { 5,27,27,35,32,31}},        //  -2.0 AO[agbc] D[defb] D[dbfe] E2[behc] delta[ga] delta[he] 
    {"agbc,defc,dcfe,behc,ga,he",        -2.0,   6, { 5,27,27,35,32,31}},        //  -2.0 AO[agbc] D[defc] D[dcfe] E2[behc] delta[ga] delta[he] 
    {"ahbc,defg,dgfe,bgci,ha,ig",        -2.0,   6, { 5,27,27,35,32,31}},        //  -2.0 AO[ahbc] D[defg] D[dgfe] E2[bgci] delta[ha] delta[ig] 
    {"agbc,deaf,dfae,befcih,ga,he,if",    1.0,   7, { 5,27,27,36,32,31,31}},     //   1.0 AO[agbc] D[deaf] D[dfae] E3[befcih] delta[ga] delta[he] delta[if] 
    {"ahbc,defg,dgfe,begcji,ha,ie,jg",   -2.0,   7, { 5,27,27,36,32,31,31}},     //  -2.0 AO[ahbc] D[defg] D[dgfe] E3[begcji] delta[ha] delta[ie] delta[jg] 
    {"ahbc,cdef,dgeb,gf,ha",              1.0,   5, { 5,22,27,34,32}},           //   1.0 AO[ahbc] D[cdef] D[dgeb] E1[gf] delta[ha] 
    {"abcd,debf,egac,gf",                -2.0,   4, { 5,22,27,34}},              //  -2.0 AO[abcd] D[debf] D[egac] E1[gf] 
    {"aibc,cdef,dgeh,bgfh,ia",            1.0,   5, { 5,22,27,35,32}},           //   1.0 AO[aibc] D[cdef] D[dgeh] E2[bgfh] delta[ia] 
    {"aibc,defg,ehfb,dhgc,ia",            1.0,   5, { 5,22,27,35,32}},           //   1.0 AO[aibc] D[defg] D[ehfb] E2[dhgc] delta[ia] 
    {"aibc,defg,ehfd,bhcg,ia",            1.0,   5, { 5,22,27,35,32}},           //   1.0 AO[aibc] D[defg] D[ehfd] E2[bhcg] delta[ia] 
    {"abcd,debf,egah,cgfh",              -2.0,   4, { 5,22,27,35}},              //  -2.0 AO[abcd] D[debf] D[egah] E2[cgfh] 
    {"abcd,efbg,fhac,ehdg",               1.0,   4, { 5,22,27,35}},              //   1.0 AO[abcd] D[efbg] D[fhac] E2[ehdg] 
    {"abcd,efbg,fhae,chgd",               1.0,   4, { 5,22,27,35}},              //   1.0 AO[abcd] D[efbg] D[fhae] E2[chgd] 
    {"ajbc,defg,ehfi,bdhcgi,ja",          1.0,   5, { 5,22,27,36,32}},           //   1.0 AO[ajbc] D[defg] D[ehfi] E3[bdhcgi] delta[ja] 
    {"abcd,efbg,fhai,cehgdi",             1.0,   4, { 5,22,27,36}},              //   1.0 AO[abcd] D[efbg] D[fhai] E3[cehgdi] 
    {"ahbc,bdef,dceg,fg,ha",              1.0,   5, { 5,22,27,34,32}},           //   1.0 AO[ahbc] D[bdef] D[dceg] E1[fg] delta[ha] 
    {"abcd,ceaf,edbg,fg",                -2.0,   4, { 5,22,27,34}},              //  -2.0 AO[abcd] D[ceaf] D[edbg] E1[fg] 
    {"aibc,bdef,dgeh,fgch,ia",            1.0,   5, { 5,22,27,35,32}},           //   1.0 AO[aibc] D[bdef] D[dgeh] E2[fgch] delta[ia] 
    {"aibc,defg,ecfh,bghd,ia",            1.0,   5, { 5,22,27,35,32}},           //   1.0 AO[aibc] D[defg] D[ecfh] E2[bghd] delta[ia] 
    {"aibc,defg,edfh,bgch,ia",            1.0,   5, { 5,22,27,35,32}},           //   1.0 AO[aibc] D[defg] D[edfh] E2[bgch] delta[ia] 
    {"abcd,ceaf,egbh,fgdh",              -2.0,   4, { 5,22,27,35}},              //  -2.0 AO[abcd] D[ceaf] D[egbh] E2[fgdh] 
    {"abcd,efag,fdbh,cgeh",               1.0,   4, { 5,22,27,35}},              //   1.0 AO[abcd] D[efag] D[fdbh] E2[cgeh] 
    {"abcd,efag,febh,cghd",               1.0,   4, { 5,22,27,35}},              //   1.0 AO[abcd] D[efag] D[febh] E2[cghd] 
    {"ajbc,defg,ehfi,bghcdi,ja",          1.0,   5, { 5,22,27,36,32}},           //   1.0 AO[ajbc] D[defg] D[ehfi] E3[bghcdi] delta[ja] 
    {"abcd,efag,fhbi,cghedi",             1.0,   4, { 5,22,27,36}},              //   1.0 AO[abcd] D[efag] D[fhbi] E3[cghedi] 
    {"aebf,bcad,bcad,dg,ea,fb,gd",        4.0,   7, { 5,22,22,34,32,31,31}},     //   4.0 AO[aebf] D[bcad] D[bcad] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"afbg,bcde,bcde,eh,fa,gb,he",       -2.0,   7, { 5,22,22,34,32,31,31}},     //  -2.0 AO[afbg] D[bcde] D[bcde] E1[eh] delta[fa] delta[gb] delta[he] 
    {"afbc,bdae,bdae,becg,fa,ge",        -2.0,   6, { 5,22,22,35,32,31}},        //  -2.0 AO[afbc] D[bdae] D[bdae] E2[becg] delta[fa] delta[ge] 
    {"agbc,bdef,bdef,bfch,ga,hf",         1.0,   6, { 5,22,22,35,32,31}},        //   1.0 AO[agbc] D[bdef] D[bdef] E2[bfch] delta[ga] delta[hf] 
    {"afbc,cdae,cdae,becg,fa,ge",        -2.0,   6, { 5,22,22,35,32,31}},        //  -2.0 AO[afbc] D[cdae] D[cdae] E2[becg] delta[fa] delta[ge] 
    {"agbc,cdef,cdef,bfch,ga,hf",         1.0,   6, { 5,22,22,35,32,31}},        //   1.0 AO[agbc] D[cdef] D[cdef] E2[bfch] delta[ga] delta[hf] 
    {"agbc,deaf,deaf,bfch,ga,hf",         1.0,   6, { 5,22,22,35,32,31}},        //   1.0 AO[agbc] D[deaf] D[deaf] E2[bfch] delta[ga] delta[hf] 
    {"ahbc,defg,defg,bgci,ha,ig",        -2.0,   6, { 5,22,22,35,32,31}},        //  -2.0 AO[ahbc] D[defg] D[defg] E2[bgci] delta[ha] delta[ig] 
    {"agbc,deaf,deaf,bdfhci,ga,hd,if",    1.0,   7, { 5,22,22,36,32,31,31}},     //   1.0 AO[agbc] D[deaf] D[deaf] E3[bdfhci] delta[ga] delta[hd] delta[if] 
    {"ahbc,defg,defg,bdgcij,ha,id,jg",    1.0,   7, { 5,22,22,36,32,31,31}},     //   1.0 AO[ahbc] D[defg] D[defg] E3[bdgcij] delta[ha] delta[id] delta[jg] 
    {"abef,cdab,cbad,dg,ea,fb,gd",       -2.0,   7, { 3,27,27,34,32,31,31}},     //  -2.0 AO[abef] D[cdab] D[cbad] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abfg,cdeb,cbed,dh,fa,gb,hd",        4.0,   7, { 3,27,27,34,32,31,31}},     //   4.0 AO[abfg] D[cdeb] D[cbed] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"abfc,deab,dbae,begc,fa,ge",        -2.0,   6, { 3,27,27,35,32,31}},        //  -2.0 AO[abfc] D[deab] D[dbae] E2[begc] delta[fa] delta[ge] 
    {"abfc,deac,dcae,begc,fa,ge",        -2.0,   6, { 3,27,27,35,32,31}},        //  -2.0 AO[abfc] D[deac] D[dcae] E2[begc] delta[fa] delta[ge] 
    {"abgc,deaf,dfae,bfch,ga,hf",        -2.0,   6, { 3,27,27,35,32,31}},        //  -2.0 AO[abgc] D[deaf] D[dfae] E2[bfch] delta[ga] delta[hf] 
    {"abgc,defb,dbfe,behc,ga,he",         4.0,   6, { 3,27,27,35,32,31}},        //   4.0 AO[abgc] D[defb] D[dbfe] E2[behc] delta[ga] delta[he] 
    {"abgc,defc,dcfe,behc,ga,he",         4.0,   6, { 3,27,27,35,32,31}},        //   4.0 AO[abgc] D[defc] D[dcfe] E2[behc] delta[ga] delta[he] 
    {"abhc,defg,dgfe,bgci,ha,ig",         4.0,   6, { 3,27,27,35,32,31}},        //   4.0 AO[abhc] D[defg] D[dgfe] E2[bgci] delta[ha] delta[ig] 
    {"abgc,deaf,dfae,befcih,ga,he,if",   -2.0,   7, { 3,27,27,36,32,31,31}},     //  -2.0 AO[abgc] D[deaf] D[dfae] E3[befcih] delta[ga] delta[he] delta[if] 
    {"abhc,defg,dgfe,begcji,ha,ie,jg",    4.0,   7, { 3,27,27,36,32,31,31}},     //   4.0 AO[abhc] D[defg] D[dgfe] E3[begcji] delta[ha] delta[ie] delta[jg] 
    {"abhc,cdef,dgeb,gf,ha",             -2.0,   5, { 3,22,27,34,32}},           //  -2.0 AO[abhc] D[cdef] D[dgeb] E1[gf] delta[ha] 
    {"abcd,deaf,egcb,gf",                 1.0,   4, { 3,22,27,34}},              //   1.0 AO[abcd] D[deaf] D[egcb] E1[gf] 
    {"abic,cdef,dgeh,bgfh,ia",           -2.0,   5, { 3,22,27,35,32}},           //  -2.0 AO[abic] D[cdef] D[dgeh] E2[bgfh] delta[ia] 
    {"abic,defg,ehfb,dhgc,ia",           -2.0,   5, { 3,22,27,35,32}},           //  -2.0 AO[abic] D[defg] D[ehfb] E2[dhgc] delta[ia] 
    {"abic,defg,ehfd,bhcg,ia",           -2.0,   5, { 3,22,27,35,32}},           //  -2.0 AO[abic] D[defg] D[ehfd] E2[bhcg] delta[ia] 
    {"abcd,deaf,egch,bgfh",               1.0,   4, { 3,22,27,35}},              //   1.0 AO[abcd] D[deaf] D[egch] E2[bgfh] 
    {"abcd,efag,fhcb,ehgd",               1.0,   4, { 3,22,27,35}},              //   1.0 AO[abcd] D[efag] D[fhcb] E2[ehgd] 
    {"abcd,efag,fhce,bhdg",               1.0,   4, { 3,22,27,35}},              //   1.0 AO[abcd] D[efag] D[fhce] E2[bhdg] 
    {"abjc,defg,ehfi,bdhcgi,ja",         -2.0,   5, { 3,22,27,36,32}},           //  -2.0 AO[abjc] D[defg] D[ehfi] E3[bdhcgi] delta[ja] 
    {"abcd,efag,fhci,behdgi",             1.0,   4, { 3,22,27,36}},              //   1.0 AO[abcd] D[efag] D[fhci] E3[behdgi] 
    {"abhc,bdef,dceg,fg,ha",             -2.0,   5, { 3,22,27,34,32}},           //  -2.0 AO[abhc] D[bdef] D[dceg] E1[fg] delta[ha] 
    {"abcd,becf,edag,fg",                 1.0,   4, { 3,22,27,34}},              //   1.0 AO[abcd] D[becf] D[edag] E1[fg] 
    {"abic,bdef,dgeh,fgch,ia",           -2.0,   5, { 3,22,27,35,32}},           //  -2.0 AO[abic] D[bdef] D[dgeh] E2[fgch] delta[ia] 
    {"abic,defg,ecfh,bghd,ia",           -2.0,   5, { 3,22,27,35,32}},           //  -2.0 AO[abic] D[defg] D[ecfh] E2[bghd] delta[ia] 
    {"abic,defg,edfh,bgch,ia",           -2.0,   5, { 3,22,27,35,32}},           //  -2.0 AO[abic] D[defg] D[edfh] E2[bgch] delta[ia] 
    {"abcd,becf,egah,fgdh",               1.0,   4, { 3,22,27,35}},              //   1.0 AO[abcd] D[becf] D[egah] E2[fgdh] 
    {"abcd,efcg,fdah,bghe",               1.0,   4, { 3,22,27,35}},              //   1.0 AO[abcd] D[efcg] D[fdah] E2[bghe] 
    {"abcd,efcg,feah,bgdh",               1.0,   4, { 3,22,27,35}},              //   1.0 AO[abcd] D[efcg] D[feah] E2[bgdh] 
    {"abjc,defg,ehfi,bghcdi,ja",         -2.0,   5, { 3,22,27,36,32}},           //  -2.0 AO[abjc] D[defg] D[ehfi] E3[bghcdi] delta[ja] 
    {"abcd,efcg,fhai,bghdei",             1.0,   4, { 3,22,27,36}},              //   1.0 AO[abcd] D[efcg] D[fhai] E3[bghdei] 
    {"abef,bcad,bcad,dg,ea,fb,gd",       -2.0,   7, { 3,22,22,34,32,31,31}},     //  -2.0 AO[abef] D[bcad] D[bcad] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abfg,bcde,bcde,eh,fa,gb,he",        4.0,   7, { 3,22,22,34,32,31,31}},     //   4.0 AO[abfg] D[bcde] D[bcde] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abfc,bdae,bdae,becg,fa,ge",         1.0,   6, { 3,22,22,35,32,31}},        //   1.0 AO[abfc] D[bdae] D[bdae] E2[becg] delta[fa] delta[ge] 
    {"abgc,bdef,bdef,bfch,ga,hf",        -2.0,   6, { 3,22,22,35,32,31}},        //  -2.0 AO[abgc] D[bdef] D[bdef] E2[bfch] delta[ga] delta[hf] 
    {"abfc,cdae,cdae,becg,fa,ge",         1.0,   6, { 3,22,22,35,32,31}},        //   1.0 AO[abfc] D[cdae] D[cdae] E2[becg] delta[fa] delta[ge] 
    {"abgc,cdef,cdef,bfch,ga,hf",        -2.0,   6, { 3,22,22,35,32,31}},        //  -2.0 AO[abgc] D[cdef] D[cdef] E2[bfch] delta[ga] delta[hf] 
    {"abgc,deaf,deaf,bfch,ga,hf",        -2.0,   6, { 3,22,22,35,32,31}},        //  -2.0 AO[abgc] D[deaf] D[deaf] E2[bfch] delta[ga] delta[hf] 
    {"abhc,defg,defg,bgci,ha,ig",         4.0,   6, { 3,22,22,35,32,31}},        //   4.0 AO[abhc] D[defg] D[defg] E2[bgci] delta[ha] delta[ig] 
    {"abgc,deaf,deaf,bdfchi,ga,hd,if",    1.0,   7, { 3,22,22,36,32,31,31}},     //   1.0 AO[abgc] D[deaf] D[deaf] E3[bdfchi] delta[ga] delta[hd] delta[if] 
    {"abhc,defg,defg,bdgcij,ha,id,jg",   -2.0,   7, { 3,22,22,36,32,31,31}},     //  -2.0 AO[abhc] D[defg] D[defg] E3[bdgcij] delta[ha] delta[id] delta[jg] 
    {"abgc,defa,dafe,bech,ga,he",         1.0,   6, { 1,27,27,35,31,31}},        //   1.0 AO[abgc] D[defa] D[dafe] E2[bech] delta[ga] delta[he] 
    {"abgc,defb,dbfe,aehc,gb,he",         1.0,   6, { 1,27,27,35,31,31}},        //   1.0 AO[abgc] D[defb] D[dbfe] E2[aehc] delta[gb] delta[he] 
    {"abcg,defa,dafe,behc,ga,he",         1.0,   6, { 1,27,27,35,31,31}},        //   1.0 AO[abcg] D[defa] D[dafe] E2[behc] delta[ga] delta[he] 
    {"abcg,defb,dbfe,aech,gb,he",         1.0,   6, { 1,27,27,35,31,31}},        //   1.0 AO[abcg] D[defb] D[dbfe] E2[aech] delta[gb] delta[he] 
    {"abcd,efga,eagf,abfhdc,hf",          1.0,   5, { 1,27,27,36,31}},           //   1.0 AO[abcd] D[efga] D[eagf] E3[abfhdc] delta[hf] 
    {"abcd,efgb,ebgf,abfchd,hf",          1.0,   5, { 1,27,27,36,31}},           //   1.0 AO[abcd] D[efgb] D[ebgf] E3[abfchd] delta[hf] 
    {"abcd,efgc,ecgf,abfhdc,hf",          1.0,   5, { 1,27,27,36,31}},           //   1.0 AO[abcd] D[efgc] D[ecgf] E3[abfhdc] delta[hf] 
    {"abcd,efgd,edgf,abfchd,hf",          1.0,   5, { 1,27,27,36,31}},           //   1.0 AO[abcd] D[efgd] D[edgf] E3[abfchd] delta[hf] 
    {"abcd,efgh,ehgf,abhcdi,ih",          1.0,   5, { 1,27,27,36,31}},           //   1.0 AO[abcd] D[efgh] D[ehgf] E3[abhcdi] delta[ih] 
    {"abcd,efgh,ehgf,abfhcdji,if,jh",     1.0,   6, { 1,27,27,37,31,31}},        //   1.0 AO[abcd] D[efgh] D[ehgf] E4[abfhcdji] delta[if] delta[jh] 
    {"abcd,cefg,ehfa,bhdg",              -0.5,   4, { 1,22,27,35}},              //  -0.5 AO[abcd] D[cefg] D[ehfa] E2[bhdg] 
    {"abcd,cefg,ehfb,ahgd",              -0.5,   4, { 1,22,27,35}},              //  -0.5 AO[abcd] D[cefg] D[ehfb] E2[ahgd] 
    {"abcd,defg,ehfa,bhgc",              -0.5,   4, { 1,22,27,35}},              //  -0.5 AO[abcd] D[defg] D[ehfa] E2[bhgc] 
    {"abcd,defg,ehfb,ahcg",              -0.5,   4, { 1,22,27,35}},              //  -0.5 AO[abcd] D[defg] D[ehfb] E2[ahcg] 
    {"abcd,cefg,ehfi,abhgdi",            -0.5,   4, { 1,22,27,36}},              //  -0.5 AO[abcd] D[cefg] D[ehfi] E3[abhgdi] 
    {"abcd,defg,ehfi,abhcgi",            -0.5,   4, { 1,22,27,36}},              //  -0.5 AO[abcd] D[defg] D[ehfi] E3[abhcgi] 
    {"abcd,efgh,figa,beidhc",            -0.5,   4, { 1,22,27,36}},              //  -0.5 AO[abcd] D[efgh] D[figa] E3[beidhc] 
    {"abcd,efgh,figb,aeichd",            -0.5,   4, { 1,22,27,36}},              //  -0.5 AO[abcd] D[efgh] D[figb] E3[aeichd] 
    {"abcd,efgh,fige,abicdh",            -0.5,   4, { 1,22,27,36}},              //  -0.5 AO[abcd] D[efgh] D[fige] E3[abicdh] 
    {"abcd,efgh,figj,abeicdhj",          -0.5,   4, { 1,22,27,37}},              //  -0.5 AO[abcd] D[efgh] D[figj] E4[abeicdhj] 
    {"abcd,aefg,ecfh,bgdh",              -0.5,   4, { 1,22,27,35}},              //  -0.5 AO[abcd] D[aefg] D[ecfh] E2[bgdh] 
    {"abcd,aefg,edfh,bghc",              -0.5,   4, { 1,22,27,35}},              //  -0.5 AO[abcd] D[aefg] D[edfh] E2[bghc] 
    {"abcd,befg,ecfh,aghd",              -0.5,   4, { 1,22,27,35}},              //  -0.5 AO[abcd] D[befg] D[ecfh] E2[aghd] 
    {"abcd,befg,edfh,agch",              -0.5,   4, { 1,22,27,35}},              //  -0.5 AO[abcd] D[befg] D[edfh] E2[agch] 
    {"abcd,aefg,ehfi,bghdci",            -0.5,   4, { 1,22,27,36}},              //  -0.5 AO[abcd] D[aefg] D[ehfi] E3[bghdci] 
    {"abcd,befg,ehfi,aghcdi",            -0.5,   4, { 1,22,27,36}},              //  -0.5 AO[abcd] D[befg] D[ehfi] E3[aghcdi] 
    {"abcd,efgh,fcgi,abhide",            -0.5,   4, { 1,22,27,36}},              //  -0.5 AO[abcd] D[efgh] D[fcgi] E3[abhide] 
    {"abcd,efgh,fdgi,abhcie",            -0.5,   4, { 1,22,27,36}},              //  -0.5 AO[abcd] D[efgh] D[fdgi] E3[abhcie] 
    {"abcd,efgh,fegi,abhcdi",            -0.5,   4, { 1,22,27,36}},              //  -0.5 AO[abcd] D[efgh] D[fegi] E3[abhcdi] 
    {"abcd,efgh,figj,abhicdej",          -0.5,   4, { 1,22,27,37}},              //  -0.5 AO[abcd] D[efgh] D[figj] E4[abhicdej] 
    {"abgc,adef,adef,bfch,ga,hf",         1.0,   6, { 1,22,22,35,31,31}},        //   1.0 AO[abgc] D[adef] D[adef] E2[bfch] delta[ga] delta[hf] 
    {"abgc,bdef,bdef,afch,gb,hf",        -0.5,   6, { 1,22,22,35,31,31}},        //  -0.5 AO[abgc] D[bdef] D[bdef] E2[afch] delta[gb] delta[hf] 
    {"abcg,adef,adef,bfch,ga,hf",        -0.5,   6, { 1,22,22,35,31,31}},        //  -0.5 AO[abcg] D[adef] D[adef] E2[bfch] delta[ga] delta[hf] 
    {"abcg,bdef,bdef,afch,gb,hf",         1.0,   6, { 1,22,22,35,31,31}},        //   1.0 AO[abcg] D[bdef] D[bdef] E2[afch] delta[gb] delta[hf] 
    {"abcd,aefg,aefg,abgcdh,hg",         -0.5,   5, { 1,22,22,36,31}},           //  -0.5 AO[abcd] D[aefg] D[aefg] E3[abgcdh] delta[hg] 
    {"abcd,befg,befg,abgcdh,hg",         -0.5,   5, { 1,22,22,36,31}},           //  -0.5 AO[abcd] D[befg] D[befg] E3[abgcdh] delta[hg] 
    {"abcd,cefg,cefg,abgcdh,hg",         -0.5,   5, { 1,22,22,36,31}},           //  -0.5 AO[abcd] D[cefg] D[cefg] E3[abgcdh] delta[hg] 
    {"abcd,defg,defg,abgcdh,hg",         -0.5,   5, { 1,22,22,36,31}},           //  -0.5 AO[abcd] D[defg] D[defg] E3[abgcdh] delta[hg] 
    {"abcd,efgh,efgh,abhcdi,ih",          1.0,   5, { 1,22,22,36,31}},           //   1.0 AO[abcd] D[efgh] D[efgh] E3[abhcdi] delta[ih] 
    {"abcd,efgh,efgh,abehcdij,ie,jh",    -0.5,   6, { 1,22,22,37,31,31}},        //  -0.5 AO[abcd] D[efgh] D[efgh] E4[abehcdij] delta[ie] delta[jh] 
    {"ae,bcda,badc,cf,ea,fc",             2.0,   6, { 0,27,27,34,31,31}},        //   2.0 AO[ae] D[bcda] D[badc] E1[cf] delta[ea] delta[fc] 
    {"ab,cdea,caed,bdfa,fd",              2.0,   5, { 0,27,27,35,31}},           //   2.0 AO[ab] D[cdea] D[caed] E2[bdfa] delta[fd] 
    {"ab,cdeb,cbed,bdfa,fd",              2.0,   5, { 0,27,27,35,31}},           //   2.0 AO[ab] D[cdeb] D[cbed] E2[bdfa] delta[fd] 
    {"ab,cdef,cfed,bfag,gf",              2.0,   5, { 0,27,27,35,31}},           //   2.0 AO[ab] D[cdef] D[cfed] E2[bfag] delta[gf] 
    {"ab,cdef,cfed,bdfahg,gd,hf",         2.0,   6, { 0,27,27,36,31,31}},        //   2.0 AO[ab] D[cdef] D[cfed] E3[bdfahg] delta[gd] delta[hf] 
    {"ab,acde,cfdb,fe",                  -1.0,   4, { 0,22,27,34}},              //  -1.0 AO[ab] D[acde] D[cfdb] E1[fe] 
    {"ab,acde,cfdg,bfeg",                -1.0,   4, { 0,22,27,35}},              //  -1.0 AO[ab] D[acde] D[cfdg] E2[bfeg] 
    {"ab,cdef,dgeb,cgfa",                -1.0,   4, { 0,22,27,35}},              //  -1.0 AO[ab] D[cdef] D[dgeb] E2[cgfa] 
    {"ab,cdef,dgec,bgaf",                -1.0,   4, { 0,22,27,35}},              //  -1.0 AO[ab] D[cdef] D[dgec] E2[bgaf] 
    {"ab,cdef,dgeh,bcgafh",              -1.0,   4, { 0,22,27,36}},              //  -1.0 AO[ab] D[cdef] D[dgeh] E3[bcgafh] 
    {"ab,bcde,cadf,ef",                  -1.0,   4, { 0,22,27,34}},              //  -1.0 AO[ab] D[bcde] D[cadf] E1[ef] 
    {"ab,bcde,cfdg,efag",                -1.0,   4, { 0,22,27,35}},              //  -1.0 AO[ab] D[bcde] D[cfdg] E2[efag] 
    {"ab,cdef,daeg,bfgc",                -1.0,   4, { 0,22,27,35}},              //  -1.0 AO[ab] D[cdef] D[daeg] E2[bfgc] 
    {"ab,cdef,dceg,bfag",                -1.0,   4, { 0,22,27,35}},              //  -1.0 AO[ab] D[cdef] D[dceg] E2[bfag] 
    {"ab,cdef,dgeh,bfgach",              -1.0,   4, { 0,22,27,36}},              //  -1.0 AO[ab] D[cdef] D[dgeh] E3[bfgach] 
    {"ae,abcd,abcd,df,ea,fd",             2.0,   6, { 0,22,22,34,31,31}},        //   2.0 AO[ae] D[abcd] D[abcd] E1[df] delta[ea] delta[fd] 
    {"ab,acde,acde,beaf,fe",             -1.0,   5, { 0,22,22,35,31}},           //  -1.0 AO[ab] D[acde] D[acde] E2[beaf] delta[fe] 
    {"ab,bcde,bcde,beaf,fe",             -1.0,   5, { 0,22,22,35,31}},           //  -1.0 AO[ab] D[bcde] D[bcde] E2[beaf] delta[fe] 
    {"ab,cdef,cdef,bfag,gf",              2.0,   5, { 0,22,22,35,31}},           //   2.0 AO[ab] D[cdef] D[cdef] E2[bfag] delta[gf] 
    {"ab,cdef,cdef,bcfagh,gc,hf",        -1.0,   6, { 0,22,22,36,31,31}},        //  -1.0 AO[ab] D[cdef] D[cdef] E3[bcfagh] delta[gc] delta[hf] 
    {"abef,bcda,badc,cg,ea,fb,gc",        2.0,   7, { 2,27,27,34,31,33,31}},     //   2.0 AO[abef] D[bcda] D[badc] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"abcf,bdea,baed,adgc,fb,gd",         2.0,   6, { 2,27,27,35,33,31}},        //   2.0 AO[abcf] D[bdea] D[baed] E2[adgc] delta[fb] delta[gd] 
    {"abcf,bdec,bced,adgc,fb,gd",         2.0,   6, { 2,27,27,35,33,31}},        //   2.0 AO[abcf] D[bdec] D[bced] E2[adgc] delta[fb] delta[gd] 
    {"abcg,bdef,bfed,adch,gb,hd",         2.0,   6, { 2,27,27,35,33,31}},        //   2.0 AO[abcg] D[bdef] D[bfed] E2[adch] delta[gb] delta[hd] 
    {"abcg,bdef,bfed,adfcih,gb,hd,if",    2.0,   7, { 2,27,27,36,33,31,31}},     //   2.0 AO[abcg] D[bdef] D[bfed] E3[adfcih] delta[gb] delta[hd] delta[if] 
    {"abcd,cdef,bgea,gf",                -1.0,   4, { 2,22,27,34}},              //  -1.0 AO[abcd] D[cdef] D[bgea] E1[gf] 
    {"abcd,cdef,bgeh,agfh",              -1.0,   4, { 2,22,27,35}},              //  -1.0 AO[abcd] D[cdef] D[bgeh] E2[agfh] 
    {"abcd,edfg,bhfa,ehgc",              -1.0,   4, { 2,22,27,35}},              //  -1.0 AO[abcd] D[edfg] D[bhfa] E2[ehgc] 
    {"abcd,edfg,bhfe,ahcg",              -1.0,   4, { 2,22,27,35}},              //  -1.0 AO[abcd] D[edfg] D[bhfe] E2[ahcg] 
    {"abcd,edfg,bhfi,aehcgi",            -1.0,   4, { 2,22,27,36}},              //  -1.0 AO[abcd] D[edfg] D[bhfi] E3[aehcgi] 
    {"abcd,abef,dceg,fg",                -1.0,   4, { 2,22,27,34}},              //  -1.0 AO[abcd] D[abef] D[dceg] E1[fg] 
    {"abcd,abef,dgeh,fgch",              -1.0,   4, { 2,22,27,35}},              //  -1.0 AO[abcd] D[abef] D[dgeh] E2[fgch] 
    {"abcd,ebfg,dcfh,aghe",              -1.0,   4, { 2,22,27,35}},              //  -1.0 AO[abcd] D[ebfg] D[dcfh] E2[aghe] 
    {"abcd,ebfg,defh,agch",              -1.0,   4, { 2,22,27,35}},              //  -1.0 AO[abcd] D[ebfg] D[defh] E2[agch] 
    {"abcd,ebfg,dhfi,aghcei",            -1.0,   4, { 2,22,27,36}},              //  -1.0 AO[abcd] D[ebfg] D[dhfi] E3[aghcei] 
    {"abef,abcd,abcd,dg,ea,fb,gd",        2.0,   7, { 2,22,22,34,31,33,31}},     //   2.0 AO[abef] D[abcd] D[abcd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abcf,abde,abde,aecg,fb,ge",        -1.0,   6, { 2,22,22,35,33,31}},        //  -1.0 AO[abcf] D[abde] D[abde] E2[aecg] delta[fb] delta[ge] 
    {"abcf,cbde,cbde,aecg,fb,ge",        -1.0,   6, { 2,22,22,35,33,31}},        //  -1.0 AO[abcf] D[cbde] D[cbde] E2[aecg] delta[fb] delta[ge] 
    {"abcg,dbef,dbef,afch,gb,hf",         2.0,   6, { 2,22,22,35,33,31}},        //   2.0 AO[abcg] D[dbef] D[dbef] E2[afch] delta[gb] delta[hf] 
    {"abcg,dbef,dbef,adfchi,gb,hd,if",   -1.0,   7, { 2,22,22,36,33,31,31}},     //  -1.0 AO[abcg] D[dbef] D[dbef] E3[adfchi] delta[gb] delta[hd] delta[if] 
    {"aebf,acdb,abdc,cg,ea,fb,gc",       -1.0,   7, { 9,27,27,34,33,31,31}},     //  -1.0 AO[aebf] D[acdb] D[abdc] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"afbc,adeb,abed,bdgc,fa,gd",        -1.0,   6, { 9,27,27,35,33,31}},        //  -1.0 AO[afbc] D[adeb] D[abed] E2[bdgc] delta[fa] delta[gd] 
    {"afbc,adec,aced,bdgc,fa,gd",        -1.0,   6, { 9,27,27,35,33,31}},        //  -1.0 AO[afbc] D[adec] D[aced] E2[bdgc] delta[fa] delta[gd] 
    {"agbc,adef,afed,bdch,ga,hd",        -1.0,   6, { 9,27,27,35,33,31}},        //  -1.0 AO[agbc] D[adef] D[afed] E2[bdch] delta[ga] delta[hd] 
    {"agbc,adef,afed,bdfcih,ga,hd,if",   -1.0,   7, { 9,27,27,36,33,31,31}},     //  -1.0 AO[agbc] D[adef] D[afed] E3[bdfcih] delta[ga] delta[hd] delta[if] 
    {"abcd,daef,bgec,gf",                 2.0,   4, { 9,22,27,34}},              //   2.0 AO[abcd] D[daef] D[bgec] E1[gf] 
    {"abcd,daef,bgeh,cgfh",               2.0,   4, { 9,22,27,35}},              //   2.0 AO[abcd] D[daef] D[bgeh] E2[cgfh] 
    {"abcd,eafg,bhfc,ehdg",              -1.0,   4, { 9,22,27,35}},              //  -1.0 AO[abcd] D[eafg] D[bhfc] E2[ehdg] 
    {"abcd,eafg,bhfe,chgd",              -1.0,   4, { 9,22,27,35}},              //  -1.0 AO[abcd] D[eafg] D[bhfe] E2[chgd] 
    {"abcd,eafg,bhfi,cehgdi",            -1.0,   4, { 9,22,27,36}},              //  -1.0 AO[abcd] D[eafg] D[bhfi] E3[cehgdi] 
    {"abcd,cbef,adeg,fg",                 2.0,   4, { 9,22,27,34}},              //   2.0 AO[abcd] D[cbef] D[adeg] E1[fg] 
    {"abcd,cbef,ageh,fgdh",               2.0,   4, { 9,22,27,35}},              //   2.0 AO[abcd] D[cbef] D[ageh] E2[fgdh] 
    {"abcd,ebfg,adfh,cgeh",              -1.0,   4, { 9,22,27,35}},              //  -1.0 AO[abcd] D[ebfg] D[adfh] E2[cgeh] 
    {"abcd,ebfg,aefh,cghd",              -1.0,   4, { 9,22,27,35}},              //  -1.0 AO[abcd] D[ebfg] D[aefh] E2[cghd] 
    {"abcd,ebfg,ahfi,cghedi",            -1.0,   4, { 9,22,27,36}},              //  -1.0 AO[abcd] D[ebfg] D[ahfi] E3[cghedi] 
    {"aebf,bacd,bacd,dg,ea,fb,gd",       -1.0,   7, { 9,22,22,34,33,31,31}},     //  -1.0 AO[aebf] D[bacd] D[bacd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"afbc,bade,bade,begc,fa,ge",        -1.0,   6, { 9,22,22,35,33,31}},        //  -1.0 AO[afbc] D[bade] D[bade] E2[begc] delta[fa] delta[ge] 
    {"afbc,cade,cade,begc,fa,ge",        -1.0,   6, { 9,22,22,35,33,31}},        //  -1.0 AO[afbc] D[cade] D[cade] E2[begc] delta[fa] delta[ge] 
    {"agbc,daef,daef,bfhc,ga,hf",         2.0,   6, { 9,22,22,35,33,31}},        //   2.0 AO[agbc] D[daef] D[daef] E2[bfhc] delta[ga] delta[hf] 
    {"agbc,daef,daef,bdfihc,ga,hd,if",   -1.0,   7, { 9,22,22,36,33,31,31}},     //  -1.0 AO[agbc] D[daef] D[daef] E3[bdfihc] delta[ga] delta[hd] delta[if] 
    {"ae,abcd,adcb,bf,ea,fb",             2.0,   6, { 8,27,27,34,33,31}},        //   2.0 AO[ae] D[abcd] D[adcb] E1[bf] delta[ea] delta[fb] 
    {"ae,abcd,adcb,bdgf,ea,fb,gd",        2.0,   7, { 8,27,27,35,33,31,31}},     //   2.0 AO[ae] D[abcd] D[adcb] E2[bdgf] delta[ea] delta[fb] delta[gd] 
    {"ab,cade,bfdc,fe",                  -1.0,   4, { 8,22,27,34}},              //  -1.0 AO[ab] D[cade] D[bfdc] E1[fe] 
    {"ab,cade,bfdg,cfeg",                -1.0,   4, { 8,22,27,35}},              //  -1.0 AO[ab] D[cade] D[bfdg] E2[cfeg] 
    {"ab,cbde,acdf,ef",                  -1.0,   4, { 8,22,27,34}},              //  -1.0 AO[ab] D[cbde] D[acdf] E1[ef] 
    {"ab,cbde,afdg,efcg",                -1.0,   4, { 8,22,27,35}},              //  -1.0 AO[ab] D[cbde] D[afdg] E2[efcg] 
    {"ae,bacd,bacd,df,ea,fd",             2.0,   6, { 8,22,22,34,33,31}},        //   2.0 AO[ae] D[bacd] D[bacd] E1[df] delta[ea] delta[fd] 
    {"ae,bacd,bacd,bdfg,ea,fb,gd",       -1.0,   7, { 8,22,22,35,33,31,31}},     //  -1.0 AO[ae] D[bacd] D[bacd] E2[bdfg] delta[ea] delta[fb] delta[gd] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 38;
    Out.EqsRes = FEqSet(&EqsRes[0], 284, "MRLCC3/Res");
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

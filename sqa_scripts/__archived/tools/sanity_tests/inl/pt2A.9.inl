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
// <E_aa E_ca  | E_cccc  | E_ac E_aa > =   36    Class:h0    
// <E_aa E_ca  | E_cc    | E_ac E_aa > =   12    Class:h0    
// <E_aa E_ca  | E_cvcv  | E_ac E_aa > =    0    Class:h0    
// <E_aa E_ca  | E_cvvc  | E_ac E_aa > =    0    Class:h0    
// <E_aa E_ca  | E_acca  | E_ac E_aa > =   49    Class:h0    
// <E_aa E_ca  | E_acac  | E_ac E_aa > =   46    Class:h0    
// <E_aa E_ca  | E_aaaa  | E_ac E_aa > =   78    Class:h0    
// <E_aa E_ca  | E_aa    | E_ac E_aa > =   23    Class:h0    
// <E_aa E_ca  | E_avav  | E_ac E_aa > =    0    Class:h0    
// <E_aa E_ca  | E_avva  | E_ac E_aa > =    0    Class:h0    
// <E_aa E_ca  | E_vvvv  | E_ac E_aa > =    0    Class:h0    
// <E_aa E_ca  | E_vv    | E_ac E_aa > =    0    Class:h0    
namespace MRLCC3 {

  FTensorDecl TensorDecls[28] = {
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
    /* 12*/{"E5"     , ""         , "", USAGE_Amplitude   },
    /* 13*/{"D"      , "aeca"     , "", USAGE_Hamiltonian },
    /* 14*/{"D"      , "caaa"     , "", USAGE_Hamiltonian },
    /* 15*/{"D"      , "ccaa"     , "", USAGE_Hamiltonian },
    /* 16*/{"D"      , "ccae"     , "", USAGE_Hamiltonian },
    /* 17*/{"D"      , "eaaa"     , "", USAGE_Hamiltonian },
    /* 18*/{"D"      , "eaca"     , "", USAGE_Hamiltonian },
    /* 19*/{"D"      , "eeaa"     , "", USAGE_Hamiltonian },
    /* 20*/{"D"      , "eeca"     , "", USAGE_Hamiltonian },
    /* 21*/{"D"      , "eecc"     , "", USAGE_Hamiltonian },
    /* 22*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 23*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 24*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 25*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 26*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 27*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

	FEqInfo EqsRes[244] = {
    {"abef,acgd,adch,di,ea,fb,gc,hc,id",        1.0,   9, { 5,14,14,24,23,23,22,22,22}},     //   1.0 AO[abef] D[acgd] D[adch] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"abfg,acde,aedc,eh,fa,gb,he",             -2.0,   7, { 5,14,14,24,23,23,22}},           //  -2.0 AO[abfg] D[acde] D[aedc] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abef,bcgd,bdch,di,ea,fb,gc,hc,id",        1.0,   9, { 5,14,14,24,23,23,22,22,22}},     //   1.0 AO[abef] D[bcgd] D[bdch] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"abfg,bcde,bedc,eh,fa,gb,he",             -2.0,   7, { 5,14,14,24,23,23,22}},           //  -2.0 AO[abfg] D[bcde] D[bedc] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abfg,cdhe,cedi,ej,fa,gb,hd,id,je",       -2.0,   9, { 5,14,14,24,23,23,22,22,22}},     //  -2.0 AO[abfg] D[cdhe] D[cedi] E1[ej] delta[fa] delta[gb] delta[hd] delta[id] delta[je] 
    {"abgh,cdef,cfed,fi,ga,hb,if",              4.0,   7, { 5,14,14,24,23,23,22}},           //   4.0 AO[abgh] D[cdef] D[cfed] E1[fi] delta[ga] delta[hb] delta[if] 
    {"abfe,acgd,adch,di,ea,fb,gc,hc,id",       -0.5,   9, { 5,14,14,24,23,23,22,22,22}},     //  -0.5 AO[abfe] D[acgd] D[adch] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"abgf,acde,aedc,eh,fa,gb,he",              1.0,   7, { 5,14,14,24,23,23,22}},           //   1.0 AO[abgf] D[acde] D[aedc] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abfe,bcgd,bdch,di,ea,fb,gc,hc,id",       -0.5,   9, { 5,14,14,24,23,23,22,22,22}},     //  -0.5 AO[abfe] D[bcgd] D[bdch] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"abgf,bcde,bedc,eh,fa,gb,he",              1.0,   7, { 5,14,14,24,23,23,22}},           //   1.0 AO[abgf] D[bcde] D[bedc] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abgf,cdhe,cedi,ej,fa,gb,hd,id,je",        1.0,   9, { 5,14,14,24,23,23,22,22,22}},     //   1.0 AO[abgf] D[cdhe] D[cedi] E1[ej] delta[fa] delta[gb] delta[hd] delta[id] delta[je] 
    {"abhg,cdef,cfed,fi,ga,hb,if",             -2.0,   7, { 5,14,14,24,23,23,22}},           //  -2.0 AO[abhg] D[cdef] D[cfed] E1[fi] delta[ga] delta[hb] delta[if] 
    {"abef,acdg,adhc,cdji,ea,fb,gd,hd,ic,jd",   2.0,  10, { 5,14,14,25,23,23,22,22,22,22}},  //   2.0 AO[abef] D[acdg] D[adhc] E2[cdji] delta[ea] delta[fb] delta[gd] delta[hd] delta[ic] delta[jd] 
    {"abfg,acde,aedc,ceih,fa,gb,hc,ie",        -2.0,   8, { 5,14,14,25,23,23,22,22}},        //  -2.0 AO[abfg] D[acde] D[aedc] E2[ceih] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"abfg,acde,aedc,dehi,fa,gb,hd,ie",         1.0,   8, { 5,14,14,25,23,23,22,22}},        //   1.0 AO[abfg] D[acde] D[aedc] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abef,bcdg,bdhc,cdji,ea,fb,gd,hd,ic,jd",   2.0,  10, { 5,14,14,25,23,23,22,22,22,22}},  //   2.0 AO[abef] D[bcdg] D[bdhc] E2[cdji] delta[ea] delta[fb] delta[gd] delta[hd] delta[ic] delta[jd] 
    {"abfg,bcde,bedc,ceih,fa,gb,hc,ie",        -2.0,   8, { 5,14,14,25,23,23,22,22}},        //  -2.0 AO[abfg] D[bcde] D[bedc] E2[ceih] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"abfg,bcde,bedc,dehi,fa,gb,hd,ie",         1.0,   8, { 5,14,14,25,23,23,22,22}},        //   1.0 AO[abfg] D[bcde] D[bedc] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abfg,cdeh,ceid,dekj,fa,gb,he,ie,jd,ke",  -4.0,  10, { 5,14,14,25,23,23,22,22,22,22}},  //  -4.0 AO[abfg] D[cdeh] D[ceid] E2[dekj] delta[fa] delta[gb] delta[he] delta[ie] delta[jd] delta[ke] 
    {"abgh,cdef,cfed,dfji,ga,hb,id,jf",         4.0,   8, { 5,14,14,25,23,23,22,22}},        //   4.0 AO[abgh] D[cdef] D[cfed] E2[dfji] delta[ga] delta[hb] delta[id] delta[jf] 
    {"abgh,cdef,cfed,efij,ga,hb,ie,jf",        -2.0,   8, { 5,14,14,25,23,23,22,22}},        //  -2.0 AO[abgh] D[cdef] D[cfed] E2[efij] delta[ga] delta[hb] delta[ie] delta[jf] 
    {"abfe,acdg,adhc,cdji,ea,fb,gd,hd,ic,jd",  -1.0,  10, { 5,14,14,25,23,23,22,22,22,22}},  //  -1.0 AO[abfe] D[acdg] D[adhc] E2[cdji] delta[ea] delta[fb] delta[gd] delta[hd] delta[ic] delta[jd] 
    {"abgf,acde,aedc,ceih,fa,gb,hc,ie",         1.0,   8, { 5,14,14,25,23,23,22,22}},        //   1.0 AO[abgf] D[acde] D[aedc] E2[ceih] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"abgf,acde,aedc,dehi,fa,gb,hd,ie",        -0.5,   8, { 5,14,14,25,23,23,22,22}},        //  -0.5 AO[abgf] D[acde] D[aedc] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abfe,bcdg,bdhc,cdji,ea,fb,gd,hd,ic,jd",  -1.0,  10, { 5,14,14,25,23,23,22,22,22,22}},  //  -1.0 AO[abfe] D[bcdg] D[bdhc] E2[cdji] delta[ea] delta[fb] delta[gd] delta[hd] delta[ic] delta[jd] 
    {"abgf,bcde,bedc,ceih,fa,gb,hc,ie",         1.0,   8, { 5,14,14,25,23,23,22,22}},        //   1.0 AO[abgf] D[bcde] D[bedc] E2[ceih] delta[fa] delta[gb] delta[hc] delta[ie] 
    {"abgf,bcde,bedc,dehi,fa,gb,hd,ie",        -0.5,   8, { 5,14,14,25,23,23,22,22}},        //  -0.5 AO[abgf] D[bcde] D[bedc] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abgf,cdeh,ceid,dekj,fa,gb,he,ie,jd,ke",   2.0,  10, { 5,14,14,25,23,23,22,22,22,22}},  //   2.0 AO[abgf] D[cdeh] D[ceid] E2[dekj] delta[fa] delta[gb] delta[he] delta[ie] delta[jd] delta[ke] 
    {"abhg,cdef,cfed,dfji,ga,hb,id,jf",        -2.0,   8, { 5,14,14,25,23,23,22,22}},        //  -2.0 AO[abhg] D[cdef] D[cfed] E2[dfji] delta[ga] delta[hb] delta[id] delta[jf] 
    {"abhg,cdef,cfed,efij,ga,hb,ie,jf",         1.0,   8, { 5,14,14,25,23,23,22,22}},        //   1.0 AO[abhg] D[cdef] D[cfed] E2[efij] delta[ga] delta[hb] delta[ie] delta[jf] 
    {"abfg,acde,aedc,cdejih,fa,gb,hc,id,je",    1.0,   9, { 5,14,14,26,23,23,22,22,22}},     //   1.0 AO[abfg] D[acde] D[aedc] E3[cdejih] delta[fa] delta[gb] delta[hc] delta[id] delta[je] 
    {"abfg,bcde,bedc,cdejih,fa,gb,hc,id,je",    1.0,   9, { 5,14,14,26,23,23,22,22,22}},     //   1.0 AO[abfg] D[bcde] D[bedc] E3[cdejih] delta[fa] delta[gb] delta[hc] delta[id] delta[je] 
    {"abgh,cdef,cfed,defkji,ga,hb,id,je,kf",   -2.0,   9, { 5,14,14,26,23,23,22,22,22}},     //  -2.0 AO[abgh] D[cdef] D[cfed] E3[defkji] delta[ga] delta[hb] delta[id] delta[je] delta[kf] 
    {"abgf,acde,aedc,cdejih,fa,gb,hc,id,je",   -0.5,   9, { 5,14,14,26,23,23,22,22,22}},     //  -0.5 AO[abgf] D[acde] D[aedc] E3[cdejih] delta[fa] delta[gb] delta[hc] delta[id] delta[je] 
    {"abgf,bcde,bedc,cdejih,fa,gb,hc,id,je",   -0.5,   9, { 5,14,14,26,23,23,22,22,22}},     //  -0.5 AO[abgf] D[bcde] D[bedc] E3[cdejih] delta[fa] delta[gb] delta[hc] delta[id] delta[je] 
    {"abhg,cdef,cfed,defkji,ga,hb,id,je,kf",    1.0,   9, { 5,14,14,26,23,23,22,22,22}},     //   1.0 AO[abhg] D[cdef] D[cfed] E3[defkji] delta[ga] delta[hb] delta[id] delta[je] delta[kf] 
    {"ad,abec,acbf,cg,da,eb,fb,gc",             1.0,   8, { 3,14,14,24,23,22,22,22}},        //   1.0 AO[ad] D[abec] D[acbf] E1[cg] delta[da] delta[eb] delta[fb] delta[gc] 
    {"ae,abcd,adcb,df,ea,fd",                  -2.0,   6, { 3,14,14,24,23,22}},              //  -2.0 AO[ae] D[abcd] D[adcb] E1[df] delta[ea] delta[fd] 
    {"ae,bcfd,bdcg,dh,ea,fc,gc,hd",            -2.0,   8, { 3,14,14,24,23,22,22,22}},        //  -2.0 AO[ae] D[bcfd] D[bdcg] E1[dh] delta[ea] delta[fc] delta[gc] delta[hd] 
    {"af,bcde,bedc,eg,fa,ge",                   4.0,   6, { 3,14,14,24,23,22}},              //   4.0 AO[af] D[bcde] D[bedc] E1[eg] delta[fa] delta[ge] 
    {"ad,abce,acfb,bchg,da,ec,fc,gb,hc",        2.0,   9, { 3,14,14,25,23,22,22,22,22}},     //   2.0 AO[ad] D[abce] D[acfb] E2[bchg] delta[da] delta[ec] delta[fc] delta[gb] delta[hc] 
    {"ae,abcd,adcb,bdgf,ea,fb,gd",             -2.0,   7, { 3,14,14,25,23,22,22}},           //  -2.0 AO[ae] D[abcd] D[adcb] E2[bdgf] delta[ea] delta[fb] delta[gd] 
    {"ae,abcd,adcb,cdfg,ea,fc,gd",              1.0,   7, { 3,14,14,25,23,22,22}},           //   1.0 AO[ae] D[abcd] D[adcb] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ae,bcdf,bdgc,cdih,ea,fd,gd,hc,id",       -4.0,   9, { 3,14,14,25,23,22,22,22,22}},     //  -4.0 AO[ae] D[bcdf] D[bdgc] E2[cdih] delta[ea] delta[fd] delta[gd] delta[hc] delta[id] 
    {"af,bcde,bedc,cehg,fa,gc,he",              4.0,   7, { 3,14,14,25,23,22,22}},           //   4.0 AO[af] D[bcde] D[bedc] E2[cehg] delta[fa] delta[gc] delta[he] 
    {"af,bcde,bedc,degh,fa,gd,he",             -2.0,   7, { 3,14,14,25,23,22,22}},           //  -2.0 AO[af] D[bcde] D[bedc] E2[degh] delta[fa] delta[gd] delta[he] 
    {"ae,abcd,adcb,bcdhgf,ea,fb,gc,hd",         1.0,   8, { 3,14,14,26,23,22,22,22}},        //   1.0 AO[ae] D[abcd] D[adcb] E3[bcdhgf] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"af,bcde,bedc,cdeihg,fa,gc,hd,ie",        -2.0,   8, { 3,14,14,26,23,22,22,22}},        //  -2.0 AO[af] D[bcde] D[bedc] E3[cdeihg] delta[fa] delta[gc] delta[hd] delta[ie] 
    {"adbe,acbf,abgc,ch,da,eb,fb,gb,hc",       -4.0,   9, { 4,14,14,24,23,22,22,22,22}},     //  -4.0 AO[adbe] D[acbf] D[abgc] E1[ch] delta[da] delta[eb] delta[fb] delta[gb] delta[hc] 
    {"aebf,acbd,adbc,cg,ea,fb,gc",              4.0,   7, { 4,14,14,24,23,22,22}},           //   4.0 AO[aebf] D[acbd] D[adbc] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"aebf,acdb,abdc,cg,ea,fb,gc",              1.0,   7, { 4,14,14,24,23,22,22}},           //   1.0 AO[aebf] D[acdb] D[abdc] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"aebf,cdbg,cbhd,di,ea,fb,gb,hb,id",        2.0,   9, { 4,14,14,24,23,22,22,22,22}},     //   2.0 AO[aebf] D[cdbg] D[cbhd] E1[di] delta[ea] delta[fb] delta[gb] delta[hb] delta[id] 
    {"afbg,cdbe,cebd,dh,fa,gb,hd",             -2.0,   7, { 4,14,14,24,23,22,22}},           //  -2.0 AO[afbg] D[cdbe] D[cebd] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"afbg,cdeb,cbed,dh,fa,gb,hd",             -2.0,   7, { 4,14,14,24,23,22,22}},           //  -2.0 AO[afbg] D[cdeb] D[cbed] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"aebf,acbd,adbc,cdhg,ea,fb,gc,hd",         4.0,   8, { 4,14,14,25,23,22,22,22}},        //   4.0 AO[aebf] D[acbd] D[adbc] E2[cdhg] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"aebf,acdb,abdc,cdhg,ea,fb,gc,hd",         1.0,   8, { 4,14,14,25,23,22,22,22}},        //   1.0 AO[aebf] D[acdb] D[abdc] E2[cdhg] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"afbg,cdbe,cebd,deih,fa,gb,hd,ie",        -2.0,   8, { 4,14,14,25,23,22,22,22}},        //  -2.0 AO[afbg] D[cdbe] D[cebd] E2[deih] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"afbg,cdeb,cbed,dehi,fa,gb,hd,ie",         1.0,   8, { 4,14,14,25,23,22,22,22}},        //   1.0 AO[afbg] D[cdeb] D[cbed] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"aebc,adbf,abgd,bdch,ea,fb,gb,hd",         1.0,   8, { 4,14,14,25,23,22,22,22}},        //   1.0 AO[aebc] D[adbf] D[abgd] E2[bdch] delta[ea] delta[fb] delta[gb] delta[hd] 
    {"aebc,adbf,abgd,bdhc,ea,fb,gb,hd",        -2.0,   8, { 4,14,14,25,23,22,22,22}},        //  -2.0 AO[aebc] D[adbf] D[abgd] E2[bdhc] delta[ea] delta[fb] delta[gb] delta[hd] 
    {"aebc,adbc,acbd,bdfc,ea,fd",              -2.0,   6, { 4,14,14,25,23,22}},              //  -2.0 AO[aebc] D[adbc] D[acbd] E2[bdfc] delta[ea] delta[fd] 
    {"afbc,adbe,aebd,bdcg,fa,gd",              -2.0,   6, { 4,14,14,25,23,22}},              //  -2.0 AO[afbc] D[adbe] D[aebd] E2[bdcg] delta[fa] delta[gd] 
    {"aebc,adcb,abcd,bdfc,ea,fd",              -2.0,   6, { 4,14,14,25,23,22}},              //  -2.0 AO[aebc] D[adcb] D[abcd] E2[bdfc] delta[ea] delta[fd] 
    {"aebc,adcf,acgd,bdch,ea,fc,gc,hd",         1.0,   8, { 4,14,14,25,23,22,22,22}},        //   1.0 AO[aebc] D[adcf] D[acgd] E2[bdch] delta[ea] delta[fc] delta[gc] delta[hd] 
    {"aebc,adcf,acgd,bdhc,ea,fc,gc,hd",        -2.0,   8, { 4,14,14,25,23,22,22,22}},        //  -2.0 AO[aebc] D[adcf] D[acgd] E2[bdhc] delta[ea] delta[fc] delta[gc] delta[hd] 
    {"afbc,adce,aecd,bdcg,fa,gd",              -2.0,   6, { 4,14,14,25,23,22}},              //  -2.0 AO[afbc] D[adce] D[aecd] E2[bdcg] delta[fa] delta[gd] 
    {"afbc,adge,aedh,beic,fa,gd,hd,ie",         1.0,   8, { 4,14,14,25,23,22,22,22}},        //   1.0 AO[afbc] D[adge] D[aedh] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"afbc,adeb,abed,bdgc,fa,gd",               1.0,   6, { 4,14,14,25,23,22}},              //   1.0 AO[afbc] D[adeb] D[abed] E2[bdgc] delta[fa] delta[gd] 
    {"afbc,adec,aced,bdgc,fa,gd",               1.0,   6, { 4,14,14,25,23,22}},              //   1.0 AO[afbc] D[adec] D[aced] E2[bdgc] delta[fa] delta[gd] 
    {"agbc,adef,afed,bfch,ga,hf",               1.0,   6, { 4,14,14,25,23,22}},              //   1.0 AO[agbc] D[adef] D[afed] E2[bfch] delta[ga] delta[hf] 
    {"afbc,debg,dbhe,beic,fa,gb,hb,ie",         2.0,   8, { 4,14,14,25,23,22,22,22}},        //   2.0 AO[afbc] D[debg] D[dbhe] E2[beic] delta[fa] delta[gb] delta[hb] delta[ie] 
    {"afbc,debc,dcbe,begc,fa,ge",               1.0,   6, { 4,14,14,25,23,22}},              //   1.0 AO[afbc] D[debc] D[dcbe] E2[begc] delta[fa] delta[ge] 
    {"agbc,debf,dfbe,bech,ga,he",               1.0,   6, { 4,14,14,25,23,22}},              //   1.0 AO[agbc] D[debf] D[dfbe] E2[bech] delta[ga] delta[he] 
    {"afbc,decb,dbce,begc,fa,ge",               1.0,   6, { 4,14,14,25,23,22}},              //   1.0 AO[afbc] D[decb] D[dbce] E2[begc] delta[fa] delta[ge] 
    {"afbc,decg,dche,beic,fa,gc,hc,ie",         2.0,   8, { 4,14,14,25,23,22,22,22}},        //   2.0 AO[afbc] D[decg] D[dche] E2[beic] delta[fa] delta[gc] delta[hc] delta[ie] 
    {"agbc,decf,dfce,bech,ga,he",               1.0,   6, { 4,14,14,25,23,22}},              //   1.0 AO[agbc] D[decf] D[dfce] E2[bech] delta[ga] delta[he] 
    {"agbc,dehf,dfei,bfcj,ga,he,ie,jf",         1.0,   8, { 4,14,14,25,23,22,22,22}},        //   1.0 AO[agbc] D[dehf] D[dfei] E2[bfcj] delta[ga] delta[he] delta[ie] delta[jf] 
    {"agbc,defb,dbfe,behc,ga,he",              -2.0,   6, { 4,14,14,25,23,22}},              //  -2.0 AO[agbc] D[defb] D[dbfe] E2[behc] delta[ga] delta[he] 
    {"agbc,defc,dcfe,behc,ga,he",              -2.0,   6, { 4,14,14,25,23,22}},              //  -2.0 AO[agbc] D[defc] D[dcfe] E2[behc] delta[ga] delta[he] 
    {"ahbc,defg,dgfe,bgci,ha,ig",              -2.0,   6, { 4,14,14,25,23,22}},              //  -2.0 AO[ahbc] D[defg] D[dgfe] E2[bgci] delta[ha] delta[ig] 
    {"afbc,adbe,aebd,bdechg,fa,gd,he",         -2.0,   7, { 4,14,14,26,23,22,22}},           //  -2.0 AO[afbc] D[adbe] D[aebd] E3[bdechg] delta[fa] delta[gd] delta[he] 
    {"afbc,adce,aecd,bdechg,fa,gd,he",         -2.0,   7, { 4,14,14,26,23,22,22}},           //  -2.0 AO[afbc] D[adce] D[aecd] E3[bdechg] delta[fa] delta[gd] delta[he] 
    {"afbc,adeb,abed,bdeghc,fa,gd,he",          1.0,   7, { 4,14,14,26,23,22,22}},           //   1.0 AO[afbc] D[adeb] D[abed] E3[bdeghc] delta[fa] delta[gd] delta[he] 
    {"afbc,adec,aced,bdehcg,fa,gd,he",          1.0,   7, { 4,14,14,26,23,22,22}},           //   1.0 AO[afbc] D[adec] D[aced] E3[bdehcg] delta[fa] delta[gd] delta[he] 
    {"afbc,adeg,aehd,bdeijc,fa,ge,he,id,je",    1.0,   9, { 4,14,14,26,23,22,22,22,22}},     //   1.0 AO[afbc] D[adeg] D[aehd] E3[bdeijc] delta[fa] delta[ge] delta[he] delta[id] delta[je] 
    {"afbc,adeg,aehd,bdejci,fa,ge,he,id,je",    1.0,   9, { 4,14,14,26,23,22,22,22,22}},     //   1.0 AO[afbc] D[adeg] D[aehd] E3[bdejci] delta[fa] delta[ge] delta[he] delta[id] delta[je] 
    {"agbc,adef,afed,bdfcih,ga,hd,if",          1.0,   7, { 4,14,14,26,23,22,22}},           //   1.0 AO[agbc] D[adef] D[afed] E3[bdfcih] delta[ga] delta[hd] delta[if] 
    {"agbc,adef,afed,befhci,ga,he,if",          1.0,   7, { 4,14,14,26,23,22,22}},           //   1.0 AO[agbc] D[adef] D[afed] E3[befhci] delta[ga] delta[he] delta[if] 
    {"agbc,debf,dfbe,befcih,ga,he,if",          1.0,   7, { 4,14,14,26,23,22,22}},           //   1.0 AO[agbc] D[debf] D[dfbe] E3[befcih] delta[ga] delta[he] delta[if] 
    {"agbc,decf,dfce,befcih,ga,he,if",          1.0,   7, { 4,14,14,26,23,22,22}},           //   1.0 AO[agbc] D[decf] D[dfce] E3[befcih] delta[ga] delta[he] delta[if] 
    {"agbc,defb,dbfe,befhci,ga,he,if",          1.0,   7, { 4,14,14,26,23,22,22}},           //   1.0 AO[agbc] D[defb] D[dbfe] E3[befhci] delta[ga] delta[he] delta[if] 
    {"agbc,defc,dcfe,befhci,ga,he,if",          1.0,   7, { 4,14,14,26,23,22,22}},           //   1.0 AO[agbc] D[defc] D[dcfe] E3[befhci] delta[ga] delta[he] delta[if] 
    {"agbc,defh,dfie,befckj,ga,hf,if,je,kf",    2.0,   9, { 4,14,14,26,23,22,22,22,22}},     //   2.0 AO[agbc] D[defh] D[dfie] E3[befckj] delta[ga] delta[hf] delta[if] delta[je] delta[kf] 
    {"ahbc,defg,dgfe,begcji,ha,ie,jg",         -2.0,   7, { 4,14,14,26,23,22,22}},           //  -2.0 AO[ahbc] D[defg] D[dgfe] E3[begcji] delta[ha] delta[ie] delta[jg] 
    {"ahbc,defg,dgfe,bfgcij,ha,if,jg",          1.0,   7, { 4,14,14,26,23,22,22}},           //   1.0 AO[ahbc] D[defg] D[dgfe] E3[bfgcij] delta[ha] delta[if] delta[jg] 
    {"agbc,adef,afed,bdefijch,ga,hd,ie,jf",     1.0,   8, { 4,14,14,27,23,22,22,22}},        //   1.0 AO[agbc] D[adef] D[afed] E4[bdefijch] delta[ga] delta[hd] delta[ie] delta[jf] 
    {"ahbc,defg,dgfe,befgckji,ha,ie,jf,kg",     1.0,   8, { 4,14,14,27,23,22,22,22}},        //   1.0 AO[ahbc] D[defg] D[dgfe] E4[befgckji] delta[ha] delta[ie] delta[jf] delta[kg] 
    {"abde,acbf,abgc,ch,da,eb,fb,gb,hc",        2.0,   9, { 2,14,14,24,23,22,22,22,22}},     //   2.0 AO[abde] D[acbf] D[abgc] E1[ch] delta[da] delta[eb] delta[fb] delta[gb] delta[hc] 
    {"abef,acbd,adbc,cg,ea,fb,gc",             -2.0,   7, { 2,14,14,24,23,22,22}},           //  -2.0 AO[abef] D[acbd] D[adbc] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"abef,acdb,abdc,cg,ea,fb,gc",             -2.0,   7, { 2,14,14,24,23,22,22}},           //  -2.0 AO[abef] D[acdb] D[abdc] E1[cg] delta[ea] delta[fb] delta[gc] 
    {"abef,cdbg,cbhd,di,ea,fb,gb,hb,id",       -4.0,   9, { 2,14,14,24,23,22,22,22,22}},     //  -4.0 AO[abef] D[cdbg] D[cbhd] E1[di] delta[ea] delta[fb] delta[gb] delta[hb] delta[id] 
    {"abfg,cdbe,cebd,dh,fa,gb,hd",              4.0,   7, { 2,14,14,24,23,22,22}},           //   4.0 AO[abfg] D[cdbe] D[cebd] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"abfg,cdeb,cbed,dh,fa,gb,hd",              4.0,   7, { 2,14,14,24,23,22,22}},           //   4.0 AO[abfg] D[cdeb] D[cbed] E1[dh] delta[fa] delta[gb] delta[hd] 
    {"abef,acbd,adbc,cdhg,ea,fb,gc,hd",        -2.0,   8, { 2,14,14,25,23,22,22,22}},        //  -2.0 AO[abef] D[acbd] D[adbc] E2[cdhg] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"abef,acdb,abdc,cdgh,ea,fb,gc,hd",         1.0,   8, { 2,14,14,25,23,22,22,22}},        //   1.0 AO[abef] D[acdb] D[abdc] E2[cdgh] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"abfg,cdbe,cebd,deih,fa,gb,hd,ie",         4.0,   8, { 2,14,14,25,23,22,22,22}},        //   4.0 AO[abfg] D[cdbe] D[cebd] E2[deih] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abfg,cdeb,cbed,dehi,fa,gb,hd,ie",        -2.0,   8, { 2,14,14,25,23,22,22,22}},        //  -2.0 AO[abfg] D[cdeb] D[cbed] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abec,adbf,abgd,bdhc,ea,fb,gb,hd",         2.0,   8, { 2,14,14,25,23,22,22,22}},        //   2.0 AO[abec] D[adbf] D[abgd] E2[bdhc] delta[ea] delta[fb] delta[gb] delta[hd] 
    {"abec,adbc,acbd,bdfc,ea,fd",               1.0,   6, { 2,14,14,25,23,22}},              //   1.0 AO[abec] D[adbc] D[acbd] E2[bdfc] delta[ea] delta[fd] 
    {"abfc,adbe,aebd,bdcg,fa,gd",               1.0,   6, { 2,14,14,25,23,22}},              //   1.0 AO[abfc] D[adbe] D[aebd] E2[bdcg] delta[fa] delta[gd] 
    {"abec,adcb,abcd,bdfc,ea,fd",               1.0,   6, { 2,14,14,25,23,22}},              //   1.0 AO[abec] D[adcb] D[abcd] E2[bdfc] delta[ea] delta[fd] 
    {"abec,adcf,acgd,bdhc,ea,fc,gc,hd",         2.0,   8, { 2,14,14,25,23,22,22,22}},        //   2.0 AO[abec] D[adcf] D[acgd] E2[bdhc] delta[ea] delta[fc] delta[gc] delta[hd] 
    {"abfc,adce,aecd,bdcg,fa,gd",               1.0,   6, { 2,14,14,25,23,22}},              //   1.0 AO[abfc] D[adce] D[aecd] E2[bdcg] delta[fa] delta[gd] 
    {"abfc,adge,aedh,beci,fa,gd,hd,ie",         1.0,   8, { 2,14,14,25,23,22,22,22}},        //   1.0 AO[abfc] D[adge] D[aedh] E2[beci] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"abfc,adeb,abed,bdgc,fa,gd",              -2.0,   6, { 2,14,14,25,23,22}},              //  -2.0 AO[abfc] D[adeb] D[abed] E2[bdgc] delta[fa] delta[gd] 
    {"abfc,adec,aced,bdgc,fa,gd",              -2.0,   6, { 2,14,14,25,23,22}},              //  -2.0 AO[abfc] D[adec] D[aced] E2[bdgc] delta[fa] delta[gd] 
    {"abgc,adef,afed,bfch,ga,hf",              -2.0,   6, { 2,14,14,25,23,22}},              //  -2.0 AO[abgc] D[adef] D[afed] E2[bfch] delta[ga] delta[hf] 
    {"abfc,debg,dbhe,beic,fa,gb,hb,ie",        -4.0,   8, { 2,14,14,25,23,22,22,22}},        //  -4.0 AO[abfc] D[debg] D[dbhe] E2[beic] delta[fa] delta[gb] delta[hb] delta[ie] 
    {"abfc,debc,dcbe,begc,fa,ge",              -2.0,   6, { 2,14,14,25,23,22}},              //  -2.0 AO[abfc] D[debc] D[dcbe] E2[begc] delta[fa] delta[ge] 
    {"abgc,debf,dfbe,bech,ga,he",              -2.0,   6, { 2,14,14,25,23,22}},              //  -2.0 AO[abgc] D[debf] D[dfbe] E2[bech] delta[ga] delta[he] 
    {"abfc,decb,dbce,begc,fa,ge",              -2.0,   6, { 2,14,14,25,23,22}},              //  -2.0 AO[abfc] D[decb] D[dbce] E2[begc] delta[fa] delta[ge] 
    {"abfc,decg,dche,beic,fa,gc,hc,ie",        -4.0,   8, { 2,14,14,25,23,22,22,22}},        //  -4.0 AO[abfc] D[decg] D[dche] E2[beic] delta[fa] delta[gc] delta[hc] delta[ie] 
    {"abgc,decf,dfce,bech,ga,he",              -2.0,   6, { 2,14,14,25,23,22}},              //  -2.0 AO[abgc] D[decf] D[dfce] E2[bech] delta[ga] delta[he] 
    {"abgc,dehf,dfei,bfcj,ga,he,ie,jf",        -2.0,   8, { 2,14,14,25,23,22,22,22}},        //  -2.0 AO[abgc] D[dehf] D[dfei] E2[bfcj] delta[ga] delta[he] delta[ie] delta[jf] 
    {"abgc,defb,dbfe,behc,ga,he",               4.0,   6, { 2,14,14,25,23,22}},              //   4.0 AO[abgc] D[defb] D[dbfe] E2[behc] delta[ga] delta[he] 
    {"abgc,defc,dcfe,behc,ga,he",               4.0,   6, { 2,14,14,25,23,22}},              //   4.0 AO[abgc] D[defc] D[dcfe] E2[behc] delta[ga] delta[he] 
    {"abhc,defg,dgfe,bgci,ha,ig",               4.0,   6, { 2,14,14,25,23,22}},              //   4.0 AO[abhc] D[defg] D[dgfe] E2[bgci] delta[ha] delta[ig] 
    {"abfc,adbe,aebd,bdechg,fa,gd,he",          1.0,   7, { 2,14,14,26,23,22,22}},           //   1.0 AO[abfc] D[adbe] D[aebd] E3[bdechg] delta[fa] delta[gd] delta[he] 
    {"abfc,adce,aecd,bdechg,fa,gd,he",          1.0,   7, { 2,14,14,26,23,22,22}},           //   1.0 AO[abfc] D[adce] D[aecd] E3[bdechg] delta[fa] delta[gd] delta[he] 
    {"abfc,adeb,abed,bdegch,fa,gd,he",          1.0,   7, { 2,14,14,26,23,22,22}},           //   1.0 AO[abfc] D[adeb] D[abed] E3[bdegch] delta[fa] delta[gd] delta[he] 
    {"abfc,adec,aced,bdegch,fa,gd,he",          1.0,   7, { 2,14,14,26,23,22,22}},           //   1.0 AO[abfc] D[adec] D[aced] E3[bdegch] delta[fa] delta[gd] delta[he] 
    {"abfc,adeg,aehd,bdecji,fa,ge,he,id,je",    2.0,   9, { 2,14,14,26,23,22,22,22,22}},     //   2.0 AO[abfc] D[adeg] D[aehd] E3[bdecji] delta[fa] delta[ge] delta[he] delta[id] delta[je] 
    {"abgc,adef,afed,bdfcih,ga,hd,if",         -2.0,   7, { 2,14,14,26,23,22,22}},           //  -2.0 AO[abgc] D[adef] D[afed] E3[bdfcih] delta[ga] delta[hd] delta[if] 
    {"abgc,adef,afed,befchi,ga,he,if",          1.0,   7, { 2,14,14,26,23,22,22}},           //   1.0 AO[abgc] D[adef] D[afed] E3[befchi] delta[ga] delta[he] delta[if] 
    {"abgc,debf,dfbe,befcih,ga,he,if",         -2.0,   7, { 2,14,14,26,23,22,22}},           //  -2.0 AO[abgc] D[debf] D[dfbe] E3[befcih] delta[ga] delta[he] delta[if] 
    {"abgc,decf,dfce,befcih,ga,he,if",         -2.0,   7, { 2,14,14,26,23,22,22}},           //  -2.0 AO[abgc] D[decf] D[dfce] E3[befcih] delta[ga] delta[he] delta[if] 
    {"abgc,defb,dbfe,befhci,ga,he,if",         -2.0,   7, { 2,14,14,26,23,22,22}},           //  -2.0 AO[abgc] D[defb] D[dbfe] E3[befhci] delta[ga] delta[he] delta[if] 
    {"abgc,defc,dcfe,befhci,ga,he,if",         -2.0,   7, { 2,14,14,26,23,22,22}},           //  -2.0 AO[abgc] D[defc] D[dcfe] E3[befhci] delta[ga] delta[he] delta[if] 
    {"abgc,defh,dfie,befckj,ga,hf,if,je,kf",   -4.0,   9, { 2,14,14,26,23,22,22,22,22}},     //  -4.0 AO[abgc] D[defh] D[dfie] E3[befckj] delta[ga] delta[hf] delta[if] delta[je] delta[kf] 
    {"abhc,defg,dgfe,begcji,ha,ie,jg",          4.0,   7, { 2,14,14,26,23,22,22}},           //   4.0 AO[abhc] D[defg] D[dgfe] E3[begcji] delta[ha] delta[ie] delta[jg] 
    {"abhc,defg,dgfe,bfgcij,ha,if,jg",         -2.0,   7, { 2,14,14,26,23,22,22}},           //  -2.0 AO[abhc] D[defg] D[dgfe] E3[bfgcij] delta[ha] delta[if] delta[jg] 
    {"abgc,adef,afed,bdefcjih,ga,hd,ie,jf",     1.0,   8, { 2,14,14,27,23,22,22,22}},        //   1.0 AO[abgc] D[adef] D[afed] E4[bdefcjih] delta[ga] delta[hd] delta[ie] delta[jf] 
    {"abhc,defg,dgfe,befgckji,ha,ie,jf,kg",    -2.0,   8, { 2,14,14,27,23,22,22,22}},        //  -2.0 AO[abhc] D[defg] D[dgfe] E4[befgckji] delta[ha] delta[ie] delta[jf] delta[kg] 
    {"abef,cdab,cbad,dg,ea,fb,gd",              1.0,   7, { 1,14,14,24,22,22,22}},           //   1.0 AO[abef] D[cdab] D[cbad] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abef,cdba,cabd,dg,ea,fb,gd",              1.0,   7, { 1,14,14,24,22,22,22}},           //   1.0 AO[abef] D[cdba] D[cabd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abfe,cdab,cbad,dg,ea,fb,gd",             -0.5,   7, { 1,14,14,24,22,22,22}},           //  -0.5 AO[abfe] D[cdab] D[cbad] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abfe,cdba,cabd,dg,ea,fb,gd",             -0.5,   7, { 1,14,14,24,22,22,22}},           //  -0.5 AO[abfe] D[cdba] D[cabd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abfc,deag,dahe,beci,fa,ga,ha,ie",        -1.0,   8, { 1,14,14,25,22,22,22,22}},        //  -1.0 AO[abfc] D[deag] D[dahe] E2[beci] delta[fa] delta[ga] delta[ha] delta[ie] 
    {"abfc,deab,dbae,begc,fa,ge",               1.0,   6, { 1,14,14,25,22,22}},              //   1.0 AO[abfc] D[deab] D[dbae] E2[begc] delta[fa] delta[ge] 
    {"abfc,deac,dcae,begc,fa,ge",               1.0,   6, { 1,14,14,25,22,22}},              //   1.0 AO[abfc] D[deac] D[dcae] E2[begc] delta[fa] delta[ge] 
    {"abgc,deaf,dfae,bech,ga,he",               1.0,   6, { 1,14,14,25,22,22}},              //   1.0 AO[abgc] D[deaf] D[dfae] E2[bech] delta[ga] delta[he] 
    {"abfc,deba,dabe,becg,fa,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abfc] D[deba] D[dabe] E2[becg] delta[fa] delta[ge] 
    {"abfc,deca,dace,becg,fa,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abfc] D[deca] D[dace] E2[becg] delta[fa] delta[ge] 
    {"abgc,defa,dafe,bech,ga,he",               1.0,   6, { 1,14,14,25,22,22}},              //   1.0 AO[abgc] D[defa] D[dafe] E2[bech] delta[ga] delta[he] 
    {"abfc,deab,dbae,aegc,fb,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abfc] D[deab] D[dbae] E2[aegc] delta[fb] delta[ge] 
    {"abfc,deba,dabe,aegc,fb,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abfc] D[deba] D[dabe] E2[aegc] delta[fb] delta[ge] 
    {"abfc,debg,dbhe,aeic,fb,gb,hb,ie",        -1.0,   8, { 1,14,14,25,22,22,22,22}},        //  -1.0 AO[abfc] D[debg] D[dbhe] E2[aeic] delta[fb] delta[gb] delta[hb] delta[ie] 
    {"abfc,debc,dcbe,aegc,fb,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abfc] D[debc] D[dcbe] E2[aegc] delta[fb] delta[ge] 
    {"abgc,debf,dfbe,aech,gb,he",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abgc] D[debf] D[dfbe] E2[aech] delta[gb] delta[he] 
    {"abfc,decb,dbce,aegc,fb,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abfc] D[decb] D[dbce] E2[aegc] delta[fb] delta[ge] 
    {"abgc,defb,dbfe,aehc,gb,he",               1.0,   6, { 1,14,14,25,22,22}},              //   1.0 AO[abgc] D[defb] D[dbfe] E2[aehc] delta[gb] delta[he] 
    {"abcf,deag,dahe,beic,fa,ga,ha,ie",        -1.0,   8, { 1,14,14,25,22,22,22,22}},        //  -1.0 AO[abcf] D[deag] D[dahe] E2[beic] delta[fa] delta[ga] delta[ha] delta[ie] 
    {"abcf,deab,dbae,begc,fa,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abcf] D[deab] D[dbae] E2[begc] delta[fa] delta[ge] 
    {"abcf,deac,dcae,begc,fa,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abcf] D[deac] D[dcae] E2[begc] delta[fa] delta[ge] 
    {"abcg,deaf,dfae,bech,ga,he",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abcg] D[deaf] D[dfae] E2[bech] delta[ga] delta[he] 
    {"abcf,deba,dabe,begc,fa,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abcf] D[deba] D[dabe] E2[begc] delta[fa] delta[ge] 
    {"abcf,deca,dace,begc,fa,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abcf] D[deca] D[dace] E2[begc] delta[fa] delta[ge] 
    {"abcg,defa,dafe,behc,ga,he",               1.0,   6, { 1,14,14,25,22,22}},              //   1.0 AO[abcg] D[defa] D[dafe] E2[behc] delta[ga] delta[he] 
    {"abcf,deab,dbae,aecg,fb,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abcf] D[deab] D[dbae] E2[aecg] delta[fb] delta[ge] 
    {"abcf,deba,dabe,aegc,fb,ge",               1.0,   6, { 1,14,14,25,22,22}},              //   1.0 AO[abcf] D[deba] D[dabe] E2[aegc] delta[fb] delta[ge] 
    {"abcf,debg,dbhe,aeci,fb,gb,hb,ie",        -1.0,   8, { 1,14,14,25,22,22,22,22}},        //  -1.0 AO[abcf] D[debg] D[dbhe] E2[aeci] delta[fb] delta[gb] delta[hb] delta[ie] 
    {"abcf,debc,dcbe,aegc,fb,ge",               1.0,   6, { 1,14,14,25,22,22}},              //   1.0 AO[abcf] D[debc] D[dcbe] E2[aegc] delta[fb] delta[ge] 
    {"abcg,debf,dfbe,aech,gb,he",               1.0,   6, { 1,14,14,25,22,22}},              //   1.0 AO[abcg] D[debf] D[dfbe] E2[aech] delta[gb] delta[he] 
    {"abcf,decb,dbce,aecg,fb,ge",              -0.5,   6, { 1,14,14,25,22,22}},              //  -0.5 AO[abcf] D[decb] D[dbce] E2[aecg] delta[fb] delta[ge] 
    {"abcg,defb,dbfe,aech,gb,he",               1.0,   6, { 1,14,14,25,22,22}},              //   1.0 AO[abcg] D[defb] D[dbfe] E2[aech] delta[gb] delta[he] 
    {"abgc,deaf,dfae,befcih,ga,he,if",          1.0,   7, { 1,14,14,26,22,22,22}},           //   1.0 AO[abgc] D[deaf] D[dfae] E3[befcih] delta[ga] delta[he] delta[if] 
    {"abgc,defa,dafe,befchi,ga,he,if",         -0.5,   7, { 1,14,14,26,22,22,22}},           //  -0.5 AO[abgc] D[defa] D[dafe] E3[befchi] delta[ga] delta[he] delta[if] 
    {"abgc,debf,dfbe,aefcih,gb,he,if",         -0.5,   7, { 1,14,14,26,22,22,22}},           //  -0.5 AO[abgc] D[debf] D[dfbe] E3[aefcih] delta[gb] delta[he] delta[if] 
    {"abgc,defb,dbfe,aefhci,gb,he,if",         -0.5,   7, { 1,14,14,26,22,22,22}},           //  -0.5 AO[abgc] D[defb] D[dbfe] E3[aefhci] delta[gb] delta[he] delta[if] 
    {"abcg,deaf,dfae,befcih,ga,he,if",         -0.5,   7, { 1,14,14,26,22,22,22}},           //  -0.5 AO[abcg] D[deaf] D[dfae] E3[befcih] delta[ga] delta[he] delta[if] 
    {"abcg,defa,dafe,befhci,ga,he,if",         -0.5,   7, { 1,14,14,26,22,22,22}},           //  -0.5 AO[abcg] D[defa] D[dafe] E3[befhci] delta[ga] delta[he] delta[if] 
    {"abcg,debf,dfbe,aefcih,gb,he,if",          1.0,   7, { 1,14,14,26,22,22,22}},           //   1.0 AO[abcg] D[debf] D[dfbe] E3[aefcih] delta[gb] delta[he] delta[if] 
    {"abcg,defb,dbfe,aefchi,gb,he,if",         -0.5,   7, { 1,14,14,26,22,22,22}},           //  -0.5 AO[abcg] D[defb] D[dbfe] E3[aefchi] delta[gb] delta[he] delta[if] 
    {"abcd,efag,eahf,abfidc,ga,ha,if",         -1.0,   7, { 1,14,14,26,22,22,22}},           //  -1.0 AO[abcd] D[efag] D[eahf] E3[abfidc] delta[ga] delta[ha] delta[if] 
    {"abcd,efab,ebaf,abfcgd,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efab] D[ebaf] E3[abfcgd] delta[gf] 
    {"abcd,efac,ecaf,abfgdc,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efac] D[ecaf] E3[abfgdc] delta[gf] 
    {"abcd,efad,edaf,abfcgd,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efad] D[edaf] E3[abfcgd] delta[gf] 
    {"abcd,efag,egaf,abfcdh,hf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efag] D[egaf] E3[abfcdh] delta[hf] 
    {"abcd,efba,eabf,abfgdc,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efba] D[eabf] E3[abfgdc] delta[gf] 
    {"abcd,efbg,ebhf,abfcid,gb,hb,if",         -1.0,   7, { 1,14,14,26,22,22,22}},           //  -1.0 AO[abcd] D[efbg] D[ebhf] E3[abfcid] delta[gb] delta[hb] delta[if] 
    {"abcd,efbc,ecbf,abfgdc,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efbc] D[ecbf] E3[abfgdc] delta[gf] 
    {"abcd,efbd,edbf,abfcgd,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efbd] D[edbf] E3[abfcgd] delta[gf] 
    {"abcd,efbg,egbf,abfcdh,hf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efbg] D[egbf] E3[abfcdh] delta[hf] 
    {"abcd,efca,eacf,abfgdc,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efca] D[eacf] E3[abfgdc] delta[gf] 
    {"abcd,efcb,ebcf,abfcgd,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efcb] D[ebcf] E3[abfcgd] delta[gf] 
    {"abcd,efcg,echf,abfidc,gc,hc,if",         -1.0,   7, { 1,14,14,26,22,22,22}},           //  -1.0 AO[abcd] D[efcg] D[echf] E3[abfidc] delta[gc] delta[hc] delta[if] 
    {"abcd,efcd,edcf,abfcgd,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efcd] D[edcf] E3[abfcgd] delta[gf] 
    {"abcd,efcg,egcf,abfcdh,hf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efcg] D[egcf] E3[abfcdh] delta[hf] 
    {"abcd,efda,eadf,abfgdc,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efda] D[eadf] E3[abfgdc] delta[gf] 
    {"abcd,efdb,ebdf,abfcgd,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efdb] D[ebdf] E3[abfcgd] delta[gf] 
    {"abcd,efdc,ecdf,abfgdc,gf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efdc] D[ecdf] E3[abfgdc] delta[gf] 
    {"abcd,efdg,edhf,abfcid,gd,hd,if",         -1.0,   7, { 1,14,14,26,22,22,22}},           //  -1.0 AO[abcd] D[efdg] D[edhf] E3[abfcid] delta[gd] delta[hd] delta[if] 
    {"abcd,efdg,egdf,abfcdh,hf",               -0.5,   5, { 1,14,14,26,22}},                 //  -0.5 AO[abcd] D[efdg] D[egdf] E3[abfcdh] delta[hf] 
    {"abcd,efhg,egfi,abgcdj,hf,if,jg",         -0.5,   7, { 1,14,14,26,22,22,22}},           //  -0.5 AO[abcd] D[efhg] D[egfi] E3[abgcdj] delta[hf] delta[if] delta[jg] 
    {"abcd,efga,eagf,abfhdc,hf",                1.0,   5, { 1,14,14,26,22}},                 //   1.0 AO[abcd] D[efga] D[eagf] E3[abfhdc] delta[hf] 
    {"abcd,efgb,ebgf,abfchd,hf",                1.0,   5, { 1,14,14,26,22}},                 //   1.0 AO[abcd] D[efgb] D[ebgf] E3[abfchd] delta[hf] 
    {"abcd,efgc,ecgf,abfhdc,hf",                1.0,   5, { 1,14,14,26,22}},                 //   1.0 AO[abcd] D[efgc] D[ecgf] E3[abfhdc] delta[hf] 
    {"abcd,efgd,edgf,abfchd,hf",                1.0,   5, { 1,14,14,26,22}},                 //   1.0 AO[abcd] D[efgd] D[edgf] E3[abfchd] delta[hf] 
    {"abcd,efgh,ehgf,abhcdi,ih",                1.0,   5, { 1,14,14,26,22}},                 //   1.0 AO[abcd] D[efgh] D[ehgf] E3[abhcdi] delta[ih] 
    {"abcd,efag,egaf,abfgcdih,hf,ig",          -0.5,   6, { 1,14,14,27,22,22}},              //  -0.5 AO[abcd] D[efag] D[egaf] E4[abfgcdih] delta[hf] delta[ig] 
    {"abcd,efbg,egbf,abfgcdih,hf,ig",          -0.5,   6, { 1,14,14,27,22,22}},              //  -0.5 AO[abcd] D[efbg] D[egbf] E4[abfgcdih] delta[hf] delta[ig] 
    {"abcd,efcg,egcf,abfgcdih,hf,ig",          -0.5,   6, { 1,14,14,27,22,22}},              //  -0.5 AO[abcd] D[efcg] D[egcf] E4[abfgcdih] delta[hf] delta[ig] 
    {"abcd,efdg,egdf,abfgcdih,hf,ig",          -0.5,   6, { 1,14,14,27,22,22}},              //  -0.5 AO[abcd] D[efdg] D[egdf] E4[abfgcdih] delta[hf] delta[ig] 
    {"abcd,efga,eagf,abfghdci,hf,ig",          -0.5,   6, { 1,14,14,27,22,22}},              //  -0.5 AO[abcd] D[efga] D[eagf] E4[abfghdci] delta[hf] delta[ig] 
    {"abcd,efgb,ebgf,abfgchdi,hf,ig",          -0.5,   6, { 1,14,14,27,22,22}},              //  -0.5 AO[abcd] D[efgb] D[ebgf] E4[abfgchdi] delta[hf] delta[ig] 
    {"abcd,efgc,ecgf,abfghdci,hf,ig",          -0.5,   6, { 1,14,14,27,22,22}},              //  -0.5 AO[abcd] D[efgc] D[ecgf] E4[abfghdci] delta[hf] delta[ig] 
    {"abcd,efgd,edgf,abfgchdi,hf,ig",          -0.5,   6, { 1,14,14,27,22,22}},              //  -0.5 AO[abcd] D[efgd] D[edgf] E4[abfgchdi] delta[hf] delta[ig] 
    {"abcd,efgh,egif,abfgcdkj,hg,ig,jf,kg",    -1.0,   8, { 1,14,14,27,22,22,22,22}},        //  -1.0 AO[abcd] D[efgh] D[egif] E4[abfgcdkj] delta[hg] delta[ig] delta[jf] delta[kg] 
    {"abcd,efgh,ehgf,abfhcdji,if,jh",           1.0,   6, { 1,14,14,27,22,22}},              //   1.0 AO[abcd] D[efgh] D[ehgf] E4[abfhcdji] delta[if] delta[jh] 
    {"abcd,efgh,ehgf,abghcdij,ig,jh",          -0.5,   6, { 1,14,14,27,22,22}},              //  -0.5 AO[abcd] D[efgh] D[ehgf] E4[abghcdij] delta[ig] delta[jh] 
    {"abcd,efgh,ehgf,abfghcdkji,if,jg,kh",     -0.5,   7, { 1,14,14,12,22,22,22}},           //  -0.5 AO[abcd] D[efgh] D[ehgf] E5[abfghcdkji] delta[if] delta[jg] delta[kh] 
    {"ad,bcae,bafc,cg,da,ea,fa,gc",            -2.0,   8, { 0,14,14,24,22,22,22,22}},        //  -2.0 AO[ad] D[bcae] D[bafc] E1[cg] delta[da] delta[ea] delta[fa] delta[gc] 
    {"ae,bcad,bdac,cf,ea,fc",                   2.0,   6, { 0,14,14,24,22,22}},              //   2.0 AO[ae] D[bcad] D[bdac] E1[cf] delta[ea] delta[fc] 
    {"ae,bcda,badc,cf,ea,fc",                   2.0,   6, { 0,14,14,24,22,22}},              //   2.0 AO[ae] D[bcda] D[badc] E1[cf] delta[ea] delta[fc] 
    {"ae,bcad,bdac,cdgf,ea,fc,gd",              2.0,   7, { 0,14,14,25,22,22,22}},           //   2.0 AO[ae] D[bcad] D[bdac] E2[cdgf] delta[ea] delta[fc] delta[gd] 
    {"ae,bcda,badc,cdfg,ea,fc,gd",             -1.0,   7, { 0,14,14,25,22,22,22}},           //  -1.0 AO[ae] D[bcda] D[badc] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ab,cdae,cafd,bdga,ea,fa,gd",             -2.0,   7, { 0,14,14,25,22,22,22}},           //  -2.0 AO[ab] D[cdae] D[cafd] E2[bdga] delta[ea] delta[fa] delta[gd] 
    {"ab,cdab,cbad,bdea,ed",                   -1.0,   5, { 0,14,14,25,22}},                 //  -1.0 AO[ab] D[cdab] D[cbad] E2[bdea] delta[ed] 
    {"ab,cdae,cead,bdaf,fd",                   -1.0,   5, { 0,14,14,25,22}},                 //  -1.0 AO[ab] D[cdae] D[cead] E2[bdaf] delta[fd] 
    {"ab,cdba,cabd,bdea,ed",                   -1.0,   5, { 0,14,14,25,22}},                 //  -1.0 AO[ab] D[cdba] D[cabd] E2[bdea] delta[ed] 
    {"ab,cdbe,cbfd,bdga,eb,fb,gd",             -2.0,   7, { 0,14,14,25,22,22,22}},           //  -2.0 AO[ab] D[cdbe] D[cbfd] E2[bdga] delta[eb] delta[fb] delta[gd] 
    {"ab,cdbe,cebd,bdaf,fd",                   -1.0,   5, { 0,14,14,25,22}},                 //  -1.0 AO[ab] D[cdbe] D[cebd] E2[bdaf] delta[fd] 
    {"ab,cdfe,cedg,beah,fd,gd,he",             -1.0,   7, { 0,14,14,25,22,22,22}},           //  -1.0 AO[ab] D[cdfe] D[cedg] E2[beah] delta[fd] delta[gd] delta[he] 
    {"ab,cdea,caed,bdfa,fd",                    2.0,   5, { 0,14,14,25,22}},                 //   2.0 AO[ab] D[cdea] D[caed] E2[bdfa] delta[fd] 
    {"ab,cdeb,cbed,bdfa,fd",                    2.0,   5, { 0,14,14,25,22}},                 //   2.0 AO[ab] D[cdeb] D[cbed] E2[bdfa] delta[fd] 
    {"ab,cdef,cfed,bfag,gf",                    2.0,   5, { 0,14,14,25,22}},                 //   2.0 AO[ab] D[cdef] D[cfed] E2[bfag] delta[gf] 
    {"ab,cdae,cead,bdeagf,fd,ge",              -1.0,   6, { 0,14,14,26,22,22}},              //  -1.0 AO[ab] D[cdae] D[cead] E3[bdeagf] delta[fd] delta[ge] 
    {"ab,cdbe,cebd,bdeagf,fd,ge",              -1.0,   6, { 0,14,14,26,22,22}},              //  -1.0 AO[ab] D[cdbe] D[cebd] E3[bdeagf] delta[fd] delta[ge] 
    {"ab,cdea,caed,bdefag,fd,ge",              -1.0,   6, { 0,14,14,26,22,22}},              //  -1.0 AO[ab] D[cdea] D[caed] E3[bdefag] delta[fd] delta[ge] 
    {"ab,cdeb,cbed,bdefag,fd,ge",              -1.0,   6, { 0,14,14,26,22,22}},              //  -1.0 AO[ab] D[cdeb] D[cbed] E3[bdefag] delta[fd] delta[ge] 
    {"ab,cdef,cegd,bdeaih,fe,ge,hd,ie",        -2.0,   8, { 0,14,14,26,22,22,22,22}},        //  -2.0 AO[ab] D[cdef] D[cegd] E3[bdeaih] delta[fe] delta[ge] delta[hd] delta[ie] 
    {"ab,cdef,cfed,bdfahg,gd,hf",               2.0,   6, { 0,14,14,26,22,22}},              //   2.0 AO[ab] D[cdef] D[cfed] E3[bdfahg] delta[gd] delta[hf] 
    {"ab,cdef,cfed,befagh,ge,hf",              -1.0,   6, { 0,14,14,26,22,22}},              //  -1.0 AO[ab] D[cdef] D[cfed] E3[befagh] delta[ge] delta[hf] 
    {"ab,cdef,cfed,bdefaihg,gd,he,if",         -1.0,   7, { 0,14,14,27,22,22,22}},           //  -1.0 AO[ab] D[cdef] D[cfed] E4[bdefaihg] delta[gd] delta[he] delta[if] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 28;
    Out.EqsRes = FEqSet(&EqsRes[0], 244, "MRLCC3/Res");
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

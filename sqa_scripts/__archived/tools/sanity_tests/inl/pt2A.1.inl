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
// <E_cv E_cv  | E_cccc  | E_vc E_vc > =   40    Class:h0    
// <E_cv E_cv  | E_cc    | E_vc E_vc > =   10    Class:h0    
// <E_cv E_cv  | E_cvcv  | E_vc E_vc > =   15    Class:h0    
// <E_cv E_cv  | E_cvvc  | E_vc E_vc > =   15    Class:h0    
// <E_cv E_cv  | E_acca  | E_vc E_vc > =   10    Class:h0    
// <E_cv E_cv  | E_acac  | E_vc E_vc > =   10    Class:h0    
// <E_cv E_cv  | E_aaaa  | E_vc E_vc > =    4    Class:h0    
// <E_cv E_cv  | E_aa    | E_vc E_vc > =    4    Class:h0    
// <E_cv E_cv  | E_avav  | E_vc E_vc > =    6    Class:h0    
// <E_cv E_cv  | E_avva  | E_vc E_vc > =    6    Class:h0    
// <E_cv E_cv  | E_vvvv  | E_vc E_vc > =    8    Class:h0    
// <E_cv E_cv  | E_vv    | E_vc E_vc > =    6    Class:h0    
namespace MRLCC3 {

  FTensorDecl TensorDecls[37] = {
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
    /* 11*/{"AO"     , "eeee"     , "", USAGE_Amplitude   },
    /* 12*/{"W"      , "aaaa"     , "", USAGE_Amplitude   },
    /* 13*/{"W"      , "aeae"     , "", USAGE_Amplitude   },
    /* 14*/{"W"      , "caca"     , "", USAGE_Amplitude   },
    /* 15*/{"W"      , "ccaa"     , "", USAGE_Amplitude   },
    /* 16*/{"W"      , "cccc"     , "", USAGE_Amplitude   },
    /* 17*/{"W"      , "cece"     , "", USAGE_Amplitude   },
    /* 18*/{"W"      , "eeaa"     , "", USAGE_Amplitude   },
    /* 19*/{"W"      , "eecc"     , "", USAGE_Amplitude   },
    /* 20*/{"W"      , "eeee"     , "", USAGE_Amplitude   },
    /* 21*/{"k"      , "aa"       , "", USAGE_Amplitude   },
    /* 22*/{"k"      , "cc"       , "", USAGE_Amplitude   },
    /* 23*/{"k"      , "ee"       , "", USAGE_Amplitude   },
    /* 24*/{"D"      , "aeca"     , "", USAGE_Hamiltonian },
    /* 25*/{"D"      , "caaa"     , "", USAGE_Hamiltonian },
    /* 26*/{"D"      , "ccaa"     , "", USAGE_Hamiltonian },
    /* 27*/{"D"      , "ccae"     , "", USAGE_Hamiltonian },
    /* 28*/{"D"      , "eaaa"     , "", USAGE_Hamiltonian },
    /* 29*/{"D"      , "eaca"     , "", USAGE_Hamiltonian },
    /* 30*/{"D"      , "eeaa"     , "", USAGE_Hamiltonian },
    /* 31*/{"D"      , "eeca"     , "", USAGE_Hamiltonian },
    /* 32*/{"D"      , "eecc"     , "", USAGE_Hamiltonian },
    /* 33*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 34*/{"delta"  , "ee"       , "", USAGE_Density     },
    /* 35*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 36*/{"E2"     , "aaaa"     , "", USAGE_Density     },
  };

	FEqInfo EqsRes[134] = {
    {"abde,cgaf,ciah,da,eb,fa,gc,ha,ic",  -8.0,   9, { 6,32,32,33,33,33,34,33,34}},  //  -8.0 AO[abde] D[cgaf] D[ciah] delta[da] delta[eb] delta[fa] delta[gc] delta[ha] delta[ic] 
    {"abde,cfab,cgba,da,eb,fc,gc",        -1.0,   7, { 6,32,32,33,33,34,34}},        //  -1.0 AO[abde] D[cfab] D[cgba] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abef,cgad,chda,ea,fb,gc,hc",         2.0,   7, { 6,32,32,33,33,34,34}},        //   2.0 AO[abef] D[cgad] D[chda] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abde,cfba,cgab,da,eb,fc,gc",        -1.0,   7, { 6,32,32,33,33,34,34}},        //  -1.0 AO[abde] D[cfba] D[cgab] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abde,cgbf,cibh,da,eb,fb,gc,hb,ic",  -8.0,   9, { 6,32,32,33,33,33,34,33,34}},  //  -8.0 AO[abde] D[cgbf] D[cibh] delta[da] delta[eb] delta[fb] delta[gc] delta[hb] delta[ic] 
    {"abef,cgbd,chdb,ea,fb,gc,hc",         2.0,   7, { 6,32,32,33,33,34,34}},        //   2.0 AO[abef] D[cgbd] D[chdb] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abef,cgda,chad,ea,fb,gc,hc",         2.0,   7, { 6,32,32,33,33,34,34}},        //   2.0 AO[abef] D[cgda] D[chad] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abef,cgdb,chbd,ea,fb,gc,hc",         2.0,   7, { 6,32,32,33,33,34,34}},        //   2.0 AO[abef] D[cgdb] D[chbd] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abef,cgdh,cidj,ea,fb,gc,hd,ic,jd",   8.0,   9, { 6,32,32,33,33,34,33,34,33}},  //   8.0 AO[abef] D[cgdh] D[cidj] delta[ea] delta[fb] delta[gc] delta[hd] delta[ic] delta[jd] 
    {"abfg,chde,cied,fa,gb,hc,ic",        -4.0,   7, { 6,32,32,33,33,34,34}},        //  -4.0 AO[abfg] D[chde] D[cied] delta[fa] delta[gb] delta[hc] delta[ic] 
    {"abef,cdag,dcah,ea,fb,ga,ha",         4.0,   7, { 6,32,32,33,33,33,33}},        //   4.0 AO[abef] D[cdag] D[dcah] delta[ea] delta[fb] delta[ga] delta[ha] 
    {"abef,cdab,dcba,ea,fb",               2.0,   5, { 6,32,32,33,33}},              //   2.0 AO[abef] D[cdab] D[dcba] delta[ea] delta[fb] 
    {"abfg,cdae,dcea,fa,gb",              -4.0,   5, { 6,32,32,33,33}},              //  -4.0 AO[abfg] D[cdae] D[dcea] delta[fa] delta[gb] 
    {"abef,cdba,dcab,ea,fb",               2.0,   5, { 6,32,32,33,33}},              //   2.0 AO[abef] D[cdba] D[dcab] delta[ea] delta[fb] 
    {"abef,cdbg,dcbh,ea,fb,gb,hb",         4.0,   7, { 6,32,32,33,33,33,33}},        //   4.0 AO[abef] D[cdbg] D[dcbh] delta[ea] delta[fb] delta[gb] delta[hb] 
    {"abfg,cdbe,dceb,fa,gb",              -4.0,   5, { 6,32,32,33,33}},              //  -4.0 AO[abfg] D[cdbe] D[dceb] delta[fa] delta[gb] 
    {"abfg,cdea,dcae,fa,gb",              -4.0,   5, { 6,32,32,33,33}},              //  -4.0 AO[abfg] D[cdea] D[dcae] delta[fa] delta[gb] 
    {"abfg,cdeb,dcbe,fa,gb",              -4.0,   5, { 6,32,32,33,33}},              //  -4.0 AO[abfg] D[cdeb] D[dcbe] delta[fa] delta[gb] 
    {"abfg,cdeh,dcei,fa,gb,he,ie",        -4.0,   7, { 6,32,32,33,33,33,33}},        //  -4.0 AO[abfg] D[cdeh] D[dcei] delta[fa] delta[gb] delta[he] delta[ie] 
    {"abgh,cdef,dcfe,ga,hb",               8.0,   5, { 6,32,32,33,33}},              //   8.0 AO[abgh] D[cdef] D[dcfe] delta[ga] delta[hb] 
    {"abed,cgaf,ciah,da,eb,fa,gc,ha,ic",   4.0,   9, { 6,32,32,33,33,33,34,33,34}},  //   4.0 AO[abed] D[cgaf] D[ciah] delta[da] delta[eb] delta[fa] delta[gc] delta[ha] delta[ic] 
    {"abed,cfab,cgba,da,eb,fc,gc",         2.0,   7, { 6,32,32,33,33,34,34}},        //   2.0 AO[abed] D[cfab] D[cgba] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abfe,cgad,chda,ea,fb,gc,hc",        -1.0,   7, { 6,32,32,33,33,34,34}},        //  -1.0 AO[abfe] D[cgad] D[chda] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abed,cfba,cgab,da,eb,fc,gc",         2.0,   7, { 6,32,32,33,33,34,34}},        //   2.0 AO[abed] D[cfba] D[cgab] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abed,cgbf,cibh,da,eb,fb,gc,hb,ic",   4.0,   9, { 6,32,32,33,33,33,34,33,34}},  //   4.0 AO[abed] D[cgbf] D[cibh] delta[da] delta[eb] delta[fb] delta[gc] delta[hb] delta[ic] 
    {"abfe,cgbd,chdb,ea,fb,gc,hc",        -1.0,   7, { 6,32,32,33,33,34,34}},        //  -1.0 AO[abfe] D[cgbd] D[chdb] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abfe,cgda,chad,ea,fb,gc,hc",        -1.0,   7, { 6,32,32,33,33,34,34}},        //  -1.0 AO[abfe] D[cgda] D[chad] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abfe,cgdb,chbd,ea,fb,gc,hc",        -1.0,   7, { 6,32,32,33,33,34,34}},        //  -1.0 AO[abfe] D[cgdb] D[chbd] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abfe,cgdh,cidj,ea,fb,gc,hd,ic,jd",  -4.0,   9, { 6,32,32,33,33,34,33,34,33}},  //  -4.0 AO[abfe] D[cgdh] D[cidj] delta[ea] delta[fb] delta[gc] delta[hd] delta[ic] delta[jd] 
    {"abgf,chde,cied,fa,gb,hc,ic",         2.0,   7, { 6,32,32,33,33,34,34}},        //   2.0 AO[abgf] D[chde] D[cied] delta[fa] delta[gb] delta[hc] delta[ic] 
    {"abfe,cdag,dcah,ea,fb,ga,ha",        -2.0,   7, { 6,32,32,33,33,33,33}},        //  -2.0 AO[abfe] D[cdag] D[dcah] delta[ea] delta[fb] delta[ga] delta[ha] 
    {"abfe,cdab,dcba,ea,fb",              -1.0,   5, { 6,32,32,33,33}},              //  -1.0 AO[abfe] D[cdab] D[dcba] delta[ea] delta[fb] 
    {"abgf,cdae,dcea,fa,gb",               2.0,   5, { 6,32,32,33,33}},              //   2.0 AO[abgf] D[cdae] D[dcea] delta[fa] delta[gb] 
    {"abfe,cdba,dcab,ea,fb",              -1.0,   5, { 6,32,32,33,33}},              //  -1.0 AO[abfe] D[cdba] D[dcab] delta[ea] delta[fb] 
    {"abfe,cdbg,dcbh,ea,fb,gb,hb",        -2.0,   7, { 6,32,32,33,33,33,33}},        //  -2.0 AO[abfe] D[cdbg] D[dcbh] delta[ea] delta[fb] delta[gb] delta[hb] 
    {"abgf,cdbe,dceb,fa,gb",               2.0,   5, { 6,32,32,33,33}},              //   2.0 AO[abgf] D[cdbe] D[dceb] delta[fa] delta[gb] 
    {"abgf,cdea,dcae,fa,gb",               2.0,   5, { 6,32,32,33,33}},              //   2.0 AO[abgf] D[cdea] D[dcae] delta[fa] delta[gb] 
    {"abgf,cdeb,dcbe,fa,gb",               2.0,   5, { 6,32,32,33,33}},              //   2.0 AO[abgf] D[cdeb] D[dcbe] delta[fa] delta[gb] 
    {"abgf,cdeh,dcei,fa,gb,he,ie",         2.0,   7, { 6,32,32,33,33,33,33}},        //   2.0 AO[abgf] D[cdeh] D[dcei] delta[fa] delta[gb] delta[he] delta[ie] 
    {"abhg,cdef,dcfe,ga,hb",              -4.0,   5, { 6,32,32,33,33}},              //  -4.0 AO[abhg] D[cdef] D[dcfe] delta[ga] delta[hb] 
    {"ac,bead,bgaf,ca,da,eb,fa,gb",       -8.0,   8, { 4,32,32,33,33,34,33,34}},     //  -8.0 AO[ac] D[bead] D[bgaf] delta[ca] delta[da] delta[eb] delta[fa] delta[gb] 
    {"ad,beac,bfca,da,eb,fb",              2.0,   6, { 4,32,32,33,34,34}},           //   2.0 AO[ad] D[beac] D[bfca] delta[da] delta[eb] delta[fb] 
    {"ad,beca,bfac,da,eb,fb",              2.0,   6, { 4,32,32,33,34,34}},           //   2.0 AO[ad] D[beca] D[bfac] delta[da] delta[eb] delta[fb] 
    {"ad,becf,bgch,da,eb,fc,gb,hc",        8.0,   8, { 4,32,32,33,34,33,34,33}},     //   8.0 AO[ad] D[becf] D[bgch] delta[da] delta[eb] delta[fc] delta[gb] delta[hc] 
    {"ae,bfcd,bgdc,ea,fb,gb",             -4.0,   6, { 4,32,32,33,34,34}},           //  -4.0 AO[ae] D[bfcd] D[bgdc] delta[ea] delta[fb] delta[gb] 
    {"ad,bcae,cbaf,da,ea,fa",              4.0,   6, { 4,32,32,33,33,33}},           //   4.0 AO[ad] D[bcae] D[cbaf] delta[da] delta[ea] delta[fa] 
    {"ae,bcad,cbda,ea",                   -4.0,   4, { 4,32,32,33}},                 //  -4.0 AO[ae] D[bcad] D[cbda] delta[ea] 
    {"ae,bcda,cbad,ea",                   -4.0,   4, { 4,32,32,33}},                 //  -4.0 AO[ae] D[bcda] D[cbad] delta[ea] 
    {"ae,bcdf,cbdg,ea,fd,gd",             -4.0,   6, { 4,32,32,33,33,33}},           //  -4.0 AO[ae] D[bcdf] D[cbdg] delta[ea] delta[fd] delta[gd] 
    {"af,bcde,cbed,fa",                    8.0,   4, { 4,32,32,33}},                 //   8.0 AO[af] D[bcde] D[cbed] delta[fa] 
    {"abcd,bfae,bhag,ca,db,ea,fb,ga,hb", -16.0,   9, { 7,32,32,33,34,33,34,33,34}},  // -16.0 AO[abcd] D[bfae] D[bhag] delta[ca] delta[db] delta[ea] delta[fb] delta[ga] delta[hb] 
    {"abde,bfac,bgca,da,eb,fb,gb",         4.0,   7, { 7,32,32,33,34,34,34}},        //   4.0 AO[abde] D[bfac] D[bgca] delta[da] delta[eb] delta[fb] delta[gb] 
    {"abde,bfca,bgac,da,eb,fb,gb",         4.0,   7, { 7,32,32,33,34,34,34}},        //   4.0 AO[abde] D[bfca] D[bgac] delta[da] delta[eb] delta[fb] delta[gb] 
    {"abde,bfcg,bhci,da,eb,fb,gc,hb,ic",  16.0,   9, { 7,32,32,33,34,34,33,34,33}},  //  16.0 AO[abde] D[bfcg] D[bhci] delta[da] delta[eb] delta[fb] delta[gc] delta[hb] delta[ic] 
    {"abef,bgcd,bhdc,ea,fb,gb,hb",        -8.0,   7, { 7,32,32,33,34,34,34}},        //  -8.0 AO[abef] D[bgcd] D[bhdc] delta[ea] delta[fb] delta[gb] delta[hb] 
    {"abde,bcaf,cbag,da,eb,fa,ga",         4.0,   7, { 7,32,32,33,34,33,33}},        //   4.0 AO[abde] D[bcaf] D[cbag] delta[da] delta[eb] delta[fa] delta[ga] 
    {"abef,bcad,cbda,ea,fb",              -4.0,   5, { 7,32,32,33,34}},              //  -4.0 AO[abef] D[bcad] D[cbda] delta[ea] delta[fb] 
    {"abef,bcda,cbad,ea,fb",              -4.0,   5, { 7,32,32,33,34}},              //  -4.0 AO[abef] D[bcda] D[cbad] delta[ea] delta[fb] 
    {"abef,bcdg,cbdh,ea,fb,gd,hd",        -4.0,   7, { 7,32,32,33,34,33,33}},        //  -4.0 AO[abef] D[bcdg] D[cbdh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"abfg,bcde,cbed,fa,gb",               8.0,   5, { 7,32,32,33,34}},              //   8.0 AO[abfg] D[bcde] D[cbed] delta[fa] delta[gb] 
    {"abde,cbaf,bcag,da,eb,fa,ga",         4.0,   7, { 7,32,32,33,34,33,33}},        //   4.0 AO[abde] D[cbaf] D[bcag] delta[da] delta[eb] delta[fa] delta[ga] 
    {"abef,cbad,bcda,ea,fb",              -4.0,   5, { 7,32,32,33,34}},              //  -4.0 AO[abef] D[cbad] D[bcda] delta[ea] delta[fb] 
    {"abef,cbda,bcad,ea,fb",              -4.0,   5, { 7,32,32,33,34}},              //  -4.0 AO[abef] D[cbda] D[bcad] delta[ea] delta[fb] 
    {"abef,cbdg,bcdh,ea,fb,gd,hd",        -4.0,   7, { 7,32,32,33,34,33,33}},        //  -4.0 AO[abef] D[cbdg] D[bcdh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"abfg,cbde,bced,fa,gb",               8.0,   5, { 7,32,32,33,34}},              //   8.0 AO[abfg] D[cbde] D[bced] delta[fa] delta[gb] 
    {"acbd,aebf,agbh,ca,db,ea,fb,ga,hb",  20.0,   9, {10,32,32,34,33,34,33,34,33}},  //  20.0 AO[acbd] D[aebf] D[agbh] delta[ca] delta[db] delta[ea] delta[fb] delta[ga] delta[hb] 
    {"adbe,afbc,agcb,da,eb,fa,ga",        -8.0,   7, {10,32,32,34,33,34,34}},        //  -8.0 AO[adbe] D[afbc] D[agcb] delta[da] delta[eb] delta[fa] delta[ga] 
    {"adbe,afcb,agbc,da,eb,fa,ga",        -8.0,   7, {10,32,32,34,33,34,34}},        //  -8.0 AO[adbe] D[afcb] D[agbc] delta[da] delta[eb] delta[fa] delta[ga] 
    {"adbe,afcg,ahci,da,eb,fa,gc,ha,ic",  -8.0,   9, {10,32,32,34,33,34,33,34,33}},  //  -8.0 AO[adbe] D[afcg] D[ahci] delta[da] delta[eb] delta[fa] delta[gc] delta[ha] delta[ic] 
    {"aebf,agcd,ahdc,ea,fb,ga,ha",         4.0,   7, {10,32,32,34,33,34,34}},        //   4.0 AO[aebf] D[agcd] D[ahdc] delta[ea] delta[fb] delta[ga] delta[ha] 
    {"adbe,acbf,cabg,da,eb,fb,gb",        -8.0,   7, {10,32,32,34,33,33,33}},        //  -8.0 AO[adbe] D[acbf] D[cabg] delta[da] delta[eb] delta[fb] delta[gb] 
    {"aebf,acbd,cadb,ea,fb",               8.0,   5, {10,32,32,34,33}},              //   8.0 AO[aebf] D[acbd] D[cadb] delta[ea] delta[fb] 
    {"aebf,acdb,cabd,ea,fb",               2.0,   5, {10,32,32,34,33}},              //   2.0 AO[aebf] D[acdb] D[cabd] delta[ea] delta[fb] 
    {"aebf,acdg,cadh,ea,fb,gd,hd",         2.0,   7, {10,32,32,34,33,33,33}},        //   2.0 AO[aebf] D[acdg] D[cadh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"afbg,acde,caed,fa,gb",              -4.0,   5, {10,32,32,34,33}},              //  -4.0 AO[afbg] D[acde] D[caed] delta[fa] delta[gb] 
    {"adbe,cabf,acbg,da,eb,fb,gb",        -8.0,   7, {10,32,32,34,33,33,33}},        //  -8.0 AO[adbe] D[cabf] D[acbg] delta[da] delta[eb] delta[fb] delta[gb] 
    {"aebf,cabd,acdb,ea,fb",               2.0,   5, {10,32,32,34,33}},              //   2.0 AO[aebf] D[cabd] D[acdb] delta[ea] delta[fb] 
    {"aebf,cadb,acbd,ea,fb",               8.0,   5, {10,32,32,34,33}},              //   8.0 AO[aebf] D[cadb] D[acbd] delta[ea] delta[fb] 
    {"aebf,cadg,acdh,ea,fb,gd,hd",         2.0,   7, {10,32,32,34,33,33,33}},        //   2.0 AO[aebf] D[cadg] D[acdh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"afbg,cade,aced,fa,gb",              -4.0,   5, {10,32,32,34,33}},              //  -4.0 AO[afbg] D[cade] D[aced] delta[fa] delta[gb] 
    {"aebc,dgaf,diah,bc,ea,fa,gd,ha,id",   4.0,   9, { 5,32,32,35,33,33,34,33,34}},  //   4.0 AO[aebc] D[dgaf] D[diah] E1[bc] delta[ea] delta[fa] delta[gd] delta[ha] delta[id] 
    {"afbc,dgae,dhea,bc,fa,gd,hd",        -1.0,   7, { 5,32,32,35,33,34,34}},        //  -1.0 AO[afbc] D[dgae] D[dhea] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"afbc,dgea,dhae,bc,fa,gd,hd",        -1.0,   7, { 5,32,32,35,33,34,34}},        //  -1.0 AO[afbc] D[dgea] D[dhae] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"afbc,dgeh,diej,bc,fa,gd,he,id,je",  -4.0,   9, { 5,32,32,35,33,34,33,34,33}},  //  -4.0 AO[afbc] D[dgeh] D[diej] E1[bc] delta[fa] delta[gd] delta[he] delta[id] delta[je] 
    {"agbc,dhef,dife,bc,ga,hd,id",         2.0,   7, { 5,32,32,35,33,34,34}},        //   2.0 AO[agbc] D[dhef] D[dife] E1[bc] delta[ga] delta[hd] delta[id] 
    {"afbc,deag,edah,bc,fa,ga,ha",        -2.0,   7, { 5,32,32,35,33,33,33}},        //  -2.0 AO[afbc] D[deag] D[edah] E1[bc] delta[fa] delta[ga] delta[ha] 
    {"agbc,deaf,edfa,bc,ga",               2.0,   5, { 5,32,32,35,33}},              //   2.0 AO[agbc] D[deaf] D[edfa] E1[bc] delta[ga] 
    {"agbc,defa,edaf,bc,ga",               2.0,   5, { 5,32,32,35,33}},              //   2.0 AO[agbc] D[defa] D[edaf] E1[bc] delta[ga] 
    {"agbc,defh,edfi,bc,ga,hf,if",         2.0,   7, { 5,32,32,35,33,33,33}},        //   2.0 AO[agbc] D[defh] D[edfi] E1[bc] delta[ga] delta[hf] delta[if] 
    {"ahbc,defg,edgf,bc,ha",              -4.0,   5, { 5,32,32,35,33}},              //  -4.0 AO[ahbc] D[defg] D[edgf] E1[bc] delta[ha] 
    {"abec,dgaf,diah,bc,ea,fa,gd,ha,id",  -8.0,   9, { 3,32,32,35,33,33,34,33,34}},  //  -8.0 AO[abec] D[dgaf] D[diah] E1[bc] delta[ea] delta[fa] delta[gd] delta[ha] delta[id] 
    {"abfc,dgae,dhea,bc,fa,gd,hd",         2.0,   7, { 3,32,32,35,33,34,34}},        //   2.0 AO[abfc] D[dgae] D[dhea] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abfc,dgea,dhae,bc,fa,gd,hd",         2.0,   7, { 3,32,32,35,33,34,34}},        //   2.0 AO[abfc] D[dgea] D[dhae] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abfc,dgeh,diej,bc,fa,gd,he,id,je",   8.0,   9, { 3,32,32,35,33,34,33,34,33}},  //   8.0 AO[abfc] D[dgeh] D[diej] E1[bc] delta[fa] delta[gd] delta[he] delta[id] delta[je] 
    {"abgc,dhef,dife,bc,ga,hd,id",        -4.0,   7, { 3,32,32,35,33,34,34}},        //  -4.0 AO[abgc] D[dhef] D[dife] E1[bc] delta[ga] delta[hd] delta[id] 
    {"abfc,deag,edah,bc,fa,ga,ha",         4.0,   7, { 3,32,32,35,33,33,33}},        //   4.0 AO[abfc] D[deag] D[edah] E1[bc] delta[fa] delta[ga] delta[ha] 
    {"abgc,deaf,edfa,bc,ga",              -4.0,   5, { 3,32,32,35,33}},              //  -4.0 AO[abgc] D[deaf] D[edfa] E1[bc] delta[ga] 
    {"abgc,defa,edaf,bc,ga",              -4.0,   5, { 3,32,32,35,33}},              //  -4.0 AO[abgc] D[defa] D[edaf] E1[bc] delta[ga] 
    {"abgc,defh,edfi,bc,ga,hf,if",        -4.0,   7, { 3,32,32,35,33,33,33}},        //  -4.0 AO[abgc] D[defh] D[edfi] E1[bc] delta[ga] delta[hf] delta[if] 
    {"abhc,defg,edgf,bc,ha",               8.0,   5, { 3,32,32,35,33}},              //   8.0 AO[abhc] D[defg] D[edgf] E1[bc] delta[ha] 
    {"abcd,egfh,eifj,abcd,ge,hf,ie,jf",    2.0,   8, { 1,32,32,36,34,33,34,33}},     //   2.0 AO[abcd] D[egfh] D[eifj] E2[abcd] delta[ge] delta[hf] delta[ie] delta[jf] 
    {"abcd,ehfg,eigf,abcd,he,ie",         -1.0,   6, { 1,32,32,36,34,34}},           //  -1.0 AO[abcd] D[ehfg] D[eigf] E2[abcd] delta[he] delta[ie] 
    {"abcd,efgh,fegi,abcd,hg,ig",         -1.0,   6, { 1,32,32,36,33,33}},           //  -1.0 AO[abcd] D[efgh] D[fegi] E2[abcd] delta[hg] delta[ig] 
    {"abcd,efgh,fehg,abcd",                2.0,   4, { 1,32,32,36}},                 //   2.0 AO[abcd] D[efgh] D[fehg] E2[abcd] 
    {"ab,cedf,cgdh,ba,ec,fd,gc,hd",        4.0,   8, { 0,32,32,35,34,33,34,33}},     //   4.0 AO[ab] D[cedf] D[cgdh] E1[ba] delta[ec] delta[fd] delta[gc] delta[hd] 
    {"ab,cfde,cged,ba,fc,gc",             -2.0,   6, { 0,32,32,35,34,34}},           //  -2.0 AO[ab] D[cfde] D[cged] E1[ba] delta[fc] delta[gc] 
    {"ab,cdef,dceg,ba,fe,ge",             -2.0,   6, { 0,32,32,35,33,33}},           //  -2.0 AO[ab] D[cdef] D[dceg] E1[ba] delta[fe] delta[ge] 
    {"ab,cdef,dcfe,ba",                    4.0,   4, { 0,32,32,35}},                 //   4.0 AO[ab] D[cdef] D[dcfe] E1[ba] 
    {"abce,bfdg,bhdi,ac,eb,fb,gd,hb,id",   8.0,   9, { 2,32,32,35,34,34,33,34,33}},  //   8.0 AO[abce] D[bfdg] D[bhdi] E1[ac] delta[eb] delta[fb] delta[gd] delta[hb] delta[id] 
    {"abcf,bgde,bhed,ac,fb,gb,hb",        -4.0,   7, { 2,32,32,35,34,34,34}},        //  -4.0 AO[abcf] D[bgde] D[bhed] E1[ac] delta[fb] delta[gb] delta[hb] 
    {"abcf,bdeg,dbeh,ac,fb,ge,he",        -2.0,   7, { 2,32,32,35,34,33,33}},        //  -2.0 AO[abcf] D[bdeg] D[dbeh] E1[ac] delta[fb] delta[ge] delta[he] 
    {"abcg,bdef,dbfe,ac,gb",               4.0,   5, { 2,32,32,35,34}},              //   4.0 AO[abcg] D[bdef] D[dbfe] E1[ac] delta[gb] 
    {"abcf,dbeg,bdeh,ac,fb,ge,he",        -2.0,   7, { 2,32,32,35,34,33,33}},        //  -2.0 AO[abcf] D[dbeg] D[bdeh] E1[ac] delta[fb] delta[ge] delta[he] 
    {"abcg,dbef,bdfe,ac,gb",               4.0,   5, { 2,32,32,35,34}},              //   4.0 AO[abcg] D[dbef] D[bdfe] E1[ac] delta[gb] 
    {"aebc,afdg,ahdi,bc,ea,fa,gd,ha,id",  -4.0,   9, { 9,32,32,35,34,34,33,34,33}},  //  -4.0 AO[aebc] D[afdg] D[ahdi] E1[bc] delta[ea] delta[fa] delta[gd] delta[ha] delta[id] 
    {"afbc,agde,ahed,bc,fa,ga,ha",         2.0,   7, { 9,32,32,35,34,34,34}},        //   2.0 AO[afbc] D[agde] D[ahed] E1[bc] delta[fa] delta[ga] delta[ha] 
    {"afbc,adeg,daeh,bc,fa,ge,he",         1.0,   7, { 9,32,32,35,34,33,33}},        //   1.0 AO[afbc] D[adeg] D[daeh] E1[bc] delta[fa] delta[ge] delta[he] 
    {"agbc,adef,dafe,bc,ga",              -2.0,   5, { 9,32,32,35,34}},              //  -2.0 AO[agbc] D[adef] D[dafe] E1[bc] delta[ga] 
    {"afbc,daeg,adeh,bc,fa,ge,he",         1.0,   7, { 9,32,32,35,34,33,33}},        //   1.0 AO[afbc] D[daeg] D[adeh] E1[bc] delta[fa] delta[ge] delta[he] 
    {"agbc,daef,adfe,bc,ga",              -2.0,   5, { 9,32,32,35,34}},              //  -2.0 AO[agbc] D[daef] D[adfe] E1[bc] delta[ga] 
    {"abde,abcf,bacg,da,eb,fc,gc",        -1.0,   7, {11,32,32,34,34,33,33}},        //  -1.0 AO[abde] D[abcf] D[bacg] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abef,abcd,badc,ea,fb",               2.0,   5, {11,32,32,34,34}},              //   2.0 AO[abef] D[abcd] D[badc] delta[ea] delta[fb] 
    {"abde,bacf,abcg,da,eb,fc,gc",        -1.0,   7, {11,32,32,34,34,33,33}},        //  -1.0 AO[abde] D[bacf] D[abcg] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abef,bacd,abdc,ea,fb",               2.0,   5, {11,32,32,34,34}},              //   2.0 AO[abef] D[bacd] D[abdc] delta[ea] delta[fb] 
    {"abed,abcf,bacg,da,eb,fc,gc",         2.0,   7, {11,32,32,34,34,33,33}},        //   2.0 AO[abed] D[abcf] D[bacg] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abfe,abcd,badc,ea,fb",              -1.0,   5, {11,32,32,34,34}},              //  -1.0 AO[abfe] D[abcd] D[badc] delta[ea] delta[fb] 
    {"abed,bacf,abcg,da,eb,fc,gc",         2.0,   7, {11,32,32,34,34,33,33}},        //   2.0 AO[abed] D[bacf] D[abcg] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abfe,bacd,abdc,ea,fb",              -1.0,   5, {11,32,32,34,34}},              //  -1.0 AO[abfe] D[bacd] D[abdc] delta[ea] delta[fb] 
    {"ac,adbe,afbg,ca,da,eb,fa,gb",        8.0,   8, { 8,32,32,34,34,33,34,33}},     //   8.0 AO[ac] D[adbe] D[afbg] delta[ca] delta[da] delta[eb] delta[fa] delta[gb] 
    {"ad,aebc,afcb,da,ea,fa",             -4.0,   6, { 8,32,32,34,34,34}},           //  -4.0 AO[ad] D[aebc] D[afcb] delta[da] delta[ea] delta[fa] 
    {"ad,abce,bacf,da,ec,fc",             -2.0,   6, { 8,32,32,34,33,33}},           //  -2.0 AO[ad] D[abce] D[bacf] delta[da] delta[ec] delta[fc] 
    {"ae,abcd,badc,ea",                    4.0,   4, { 8,32,32,34}},                 //   4.0 AO[ae] D[abcd] D[badc] delta[ea] 
    {"ad,bace,abcf,da,ec,fc",             -2.0,   6, { 8,32,32,34,33,33}},           //  -2.0 AO[ad] D[bace] D[abcf] delta[da] delta[ec] delta[fc] 
    {"ae,bacd,abdc,ea",                    4.0,   4, { 8,32,32,34}},                 //   4.0 AO[ae] D[bacd] D[abdc] delta[ea] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 37;
    Out.EqsRes = FEqSet(&EqsRes[0], 134, "MRLCC3/Res");
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

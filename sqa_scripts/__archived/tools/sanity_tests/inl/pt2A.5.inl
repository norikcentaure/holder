[4]
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
// <E_ca E_ca  | E_cccc  | E_ac E_ac > =  100    Class:h0    
// <E_ca E_ca  | E_cc    | E_ac E_ac > =   25    Class:h0    
// <E_ca E_ca  | E_cvcv  | E_ac E_ac > =    0    Class:h0    
// <E_ca E_ca  | E_cvvc  | E_ac E_ac > =    0    Class:h0    
// <E_ca E_ca  | E_acca  | E_ac E_ac > =  116    Class:h0    
// <E_ca E_ca  | E_acac  | E_ac E_ac > =  110    Class:h0    
// <E_ca E_ca  | E_aaaa  | E_ac E_ac > =  154    Class:h0    
// <E_ca E_ca  | E_aa    | E_ac E_ac > =   44    Class:h0    
// <E_ca E_ca  | E_avav  | E_ac E_ac > =    0    Class:h0    
// <E_ca E_ca  | E_avva  | E_ac E_ac > =    0    Class:h0    
// <E_ca E_ca  | E_vvvv  | E_ac E_ac > =    0    Class:h0    
// <E_ca E_ca  | E_vv    | E_ac E_ac > =    0    Class:h0    
namespace MRLCC3 {

  FTensorDecl TensorDecls[27] = {
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
    /* 21*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 22*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 23*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 24*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 25*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 26*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

	FEqInfo EqsRes[549] = {
    {"abde,afcg,ahci,da,eb,fa,gc,ha,ic",        -8.0,   9, { 5,14,14,22,22,22,21,22,21}},        //  -8.0 AO[abde] D[afcg] D[ahci] delta[da] delta[eb] delta[fa] delta[gc] delta[ha] delta[ic] 
    {"abef,agcd,ahdc,ea,fb,ga,ha",               4.0,   7, { 5,14,14,22,22,22,22}},              //   4.0 AO[abef] D[agcd] D[ahdc] delta[ea] delta[fb] delta[ga] delta[ha] 
    {"abde,abcf,bacg,da,eb,fc,gc",              -1.0,   7, { 5,14,14,22,22,21,21}},              //  -1.0 AO[abde] D[abcf] D[bacg] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abef,abcd,badc,ea,fb",                     2.0,   5, { 5,14,14,22,22}},                    //   2.0 AO[abef] D[abcd] D[badc] delta[ea] delta[fb] 
    {"abef,acdg,cadh,ea,fb,gd,hd",               2.0,   7, { 5,14,14,22,22,21,21}},              //   2.0 AO[abef] D[acdg] D[cadh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"abfg,acde,caed,fa,gb",                    -4.0,   5, { 5,14,14,22,22}},                    //  -4.0 AO[abfg] D[acde] D[caed] delta[fa] delta[gb] 
    {"abde,bacf,abcg,da,eb,fc,gc",              -1.0,   7, { 5,14,14,22,22,21,21}},              //  -1.0 AO[abde] D[bacf] D[abcg] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abef,bacd,abdc,ea,fb",                     2.0,   5, { 5,14,14,22,22}},                    //   2.0 AO[abef] D[bacd] D[abdc] delta[ea] delta[fb] 
    {"abde,bfcg,bhci,da,eb,fb,gc,hb,ic",        -8.0,   9, { 5,14,14,22,22,22,21,22,21}},        //  -8.0 AO[abde] D[bfcg] D[bhci] delta[da] delta[eb] delta[fb] delta[gc] delta[hb] delta[ic] 
    {"abef,bgcd,bhdc,ea,fb,gb,hb",               4.0,   7, { 5,14,14,22,22,22,22}},              //   4.0 AO[abef] D[bgcd] D[bhdc] delta[ea] delta[fb] delta[gb] delta[hb] 
    {"abef,bcdg,cbdh,ea,fb,gd,hd",               2.0,   7, { 5,14,14,22,22,21,21}},              //   2.0 AO[abef] D[bcdg] D[cbdh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"abfg,bcde,cbed,fa,gb",                    -4.0,   5, { 5,14,14,22,22}},                    //  -4.0 AO[abfg] D[bcde] D[cbed] delta[fa] delta[gb] 
    {"abef,cadg,acdh,ea,fb,gd,hd",               2.0,   7, { 5,14,14,22,22,21,21}},              //   2.0 AO[abef] D[cadg] D[acdh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"abfg,cade,aced,fa,gb",                    -4.0,   5, { 5,14,14,22,22}},                    //  -4.0 AO[abfg] D[cade] D[aced] delta[fa] delta[gb] 
    {"abef,cbdg,bcdh,ea,fb,gd,hd",               2.0,   7, { 5,14,14,22,22,21,21}},              //   2.0 AO[abef] D[cbdg] D[bcdh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"abfg,cbde,bced,fa,gb",                    -4.0,   5, { 5,14,14,22,22}},                    //  -4.0 AO[abfg] D[cbde] D[bced] delta[fa] delta[gb] 
    {"abef,cgdh,cidj,ea,fb,gc,hd,ic,jd",         8.0,   9, { 5,14,14,22,22,22,21,22,21}},        //   8.0 AO[abef] D[cgdh] D[cidj] delta[ea] delta[fb] delta[gc] delta[hd] delta[ic] delta[jd] 
    {"abfg,chde,cied,fa,gb,hc,ic",              -4.0,   7, { 5,14,14,22,22,22,22}},              //  -4.0 AO[abfg] D[chde] D[cied] delta[fa] delta[gb] delta[hc] delta[ic] 
    {"abfg,cdeh,dcei,fa,gb,he,ie",              -4.0,   7, { 5,14,14,22,22,21,21}},              //  -4.0 AO[abfg] D[cdeh] D[dcei] delta[fa] delta[gb] delta[he] delta[ie] 
    {"abgh,cdef,dcfe,ga,hb",                     8.0,   5, { 5,14,14,22,22}},                    //   8.0 AO[abgh] D[cdef] D[dcfe] delta[ga] delta[hb] 
    {"abed,afcg,ahci,da,eb,fa,gc,ha,ic",         4.0,   9, { 5,14,14,22,22,22,21,22,21}},        //   4.0 AO[abed] D[afcg] D[ahci] delta[da] delta[eb] delta[fa] delta[gc] delta[ha] delta[ic] 
    {"abfe,agcd,ahdc,ea,fb,ga,ha",              -2.0,   7, { 5,14,14,22,22,22,22}},              //  -2.0 AO[abfe] D[agcd] D[ahdc] delta[ea] delta[fb] delta[ga] delta[ha] 
    {"abed,abcf,bacg,da,eb,fc,gc",               2.0,   7, { 5,14,14,22,22,21,21}},              //   2.0 AO[abed] D[abcf] D[bacg] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abfe,abcd,badc,ea,fb",                    -1.0,   5, { 5,14,14,22,22}},                    //  -1.0 AO[abfe] D[abcd] D[badc] delta[ea] delta[fb] 
    {"abfe,acdg,cadh,ea,fb,gd,hd",              -1.0,   7, { 5,14,14,22,22,21,21}},              //  -1.0 AO[abfe] D[acdg] D[cadh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"abgf,acde,caed,fa,gb",                     2.0,   5, { 5,14,14,22,22}},                    //   2.0 AO[abgf] D[acde] D[caed] delta[fa] delta[gb] 
    {"abed,bacf,abcg,da,eb,fc,gc",               2.0,   7, { 5,14,14,22,22,21,21}},              //   2.0 AO[abed] D[bacf] D[abcg] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abfe,bacd,abdc,ea,fb",                    -1.0,   5, { 5,14,14,22,22}},                    //  -1.0 AO[abfe] D[bacd] D[abdc] delta[ea] delta[fb] 
    {"abed,bfcg,bhci,da,eb,fb,gc,hb,ic",         4.0,   9, { 5,14,14,22,22,22,21,22,21}},        //   4.0 AO[abed] D[bfcg] D[bhci] delta[da] delta[eb] delta[fb] delta[gc] delta[hb] delta[ic] 
    {"abfe,bgcd,bhdc,ea,fb,gb,hb",              -2.0,   7, { 5,14,14,22,22,22,22}},              //  -2.0 AO[abfe] D[bgcd] D[bhdc] delta[ea] delta[fb] delta[gb] delta[hb] 
    {"abfe,bcdg,cbdh,ea,fb,gd,hd",              -1.0,   7, { 5,14,14,22,22,21,21}},              //  -1.0 AO[abfe] D[bcdg] D[cbdh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"abgf,bcde,cbed,fa,gb",                     2.0,   5, { 5,14,14,22,22}},                    //   2.0 AO[abgf] D[bcde] D[cbed] delta[fa] delta[gb] 
    {"abfe,cadg,acdh,ea,fb,gd,hd",              -1.0,   7, { 5,14,14,22,22,21,21}},              //  -1.0 AO[abfe] D[cadg] D[acdh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"abgf,cade,aced,fa,gb",                     2.0,   5, { 5,14,14,22,22}},                    //   2.0 AO[abgf] D[cade] D[aced] delta[fa] delta[gb] 
    {"abfe,cbdg,bcdh,ea,fb,gd,hd",              -1.0,   7, { 5,14,14,22,22,21,21}},              //  -1.0 AO[abfe] D[cbdg] D[bcdh] delta[ea] delta[fb] delta[gd] delta[hd] 
    {"abgf,cbde,bced,fa,gb",                     2.0,   5, { 5,14,14,22,22}},                    //   2.0 AO[abgf] D[cbde] D[bced] delta[fa] delta[gb] 
    {"abfe,cgdh,cidj,ea,fb,gc,hd,ic,jd",        -4.0,   9, { 5,14,14,22,22,22,21,22,21}},        //  -4.0 AO[abfe] D[cgdh] D[cidj] delta[ea] delta[fb] delta[gc] delta[hd] delta[ic] delta[jd] 
    {"abgf,chde,cied,fa,gb,hc,ic",               2.0,   7, { 5,14,14,22,22,22,22}},              //   2.0 AO[abgf] D[chde] D[cied] delta[fa] delta[gb] delta[hc] delta[ic] 
    {"abgf,cdeh,dcei,fa,gb,he,ie",               2.0,   7, { 5,14,14,22,22,21,21}},              //   2.0 AO[abgf] D[cdeh] D[dcei] delta[fa] delta[gb] delta[he] delta[ie] 
    {"abhg,cdef,dcfe,ga,hb",                    -4.0,   5, { 5,14,14,22,22}},                    //  -4.0 AO[abhg] D[cdef] D[dcfe] delta[ga] delta[hb] 
    {"abde,afcg,ahci,cj,da,eb,fa,gc,ha,ic,jc",   8.0,  11, { 5,14,14,23,22,22,22,21,22,21,21}},  //   8.0 AO[abde] D[afcg] D[ahci] E1[cj] delta[da] delta[eb] delta[fa] delta[gc] delta[ha] delta[ic] delta[jc] 
    {"abef,agcd,ahdc,di,ea,fb,ga,ha,id",        -4.0,   9, { 5,14,14,23,22,22,22,22,21}},        //  -4.0 AO[abef] D[agcd] D[ahdc] E1[di] delta[ea] delta[fb] delta[ga] delta[ha] delta[id] 
    {"abde,abcf,bacg,ch,da,eb,fc,gc,hc",         1.0,   9, { 5,14,14,23,22,22,21,21,21}},        //   1.0 AO[abde] D[abcf] D[bacg] E1[ch] delta[da] delta[eb] delta[fc] delta[gc] delta[hc] 
    {"abef,abcd,badc,dg,ea,fb,gd",              -2.0,   7, { 5,14,14,23,22,22,21}},              //  -2.0 AO[abef] D[abcd] D[badc] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abef,acdg,cadh,di,ea,fb,gd,hd,id",        -2.0,   9, { 5,14,14,23,22,22,21,21,21}},        //  -2.0 AO[abef] D[acdg] D[cadh] E1[di] delta[ea] delta[fb] delta[gd] delta[hd] delta[id] 
    {"abfg,acde,caed,eh,fa,gb,he",               4.0,   7, { 5,14,14,23,22,22,21}},              //   4.0 AO[abfg] D[acde] D[caed] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abde,bacf,abcg,ch,da,eb,fc,gc,hc",         1.0,   9, { 5,14,14,23,22,22,21,21,21}},        //   1.0 AO[abde] D[bacf] D[abcg] E1[ch] delta[da] delta[eb] delta[fc] delta[gc] delta[hc] 
    {"abef,bacd,abdc,dg,ea,fb,gd",              -2.0,   7, { 5,14,14,23,22,22,21}},              //  -2.0 AO[abef] D[bacd] D[abdc] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abde,bfcg,bhci,cj,da,eb,fb,gc,hb,ic,jc",   8.0,  11, { 5,14,14,23,22,22,22,21,22,21,21}},  //   8.0 AO[abde] D[bfcg] D[bhci] E1[cj] delta[da] delta[eb] delta[fb] delta[gc] delta[hb] delta[ic] delta[jc] 
    {"abef,bgcd,bhdc,di,ea,fb,gb,hb,id",        -4.0,   9, { 5,14,14,23,22,22,22,22,21}},        //  -4.0 AO[abef] D[bgcd] D[bhdc] E1[di] delta[ea] delta[fb] delta[gb] delta[hb] delta[id] 
    {"abef,bcdg,cbdh,di,ea,fb,gd,hd,id",        -2.0,   9, { 5,14,14,23,22,22,21,21,21}},        //  -2.0 AO[abef] D[bcdg] D[cbdh] E1[di] delta[ea] delta[fb] delta[gd] delta[hd] delta[id] 
    {"abfg,bcde,cbed,eh,fa,gb,he",               4.0,   7, { 5,14,14,23,22,22,21}},              //   4.0 AO[abfg] D[bcde] D[cbed] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abef,cadg,acdh,di,ea,fb,gd,hd,id",        -2.0,   9, { 5,14,14,23,22,22,21,21,21}},        //  -2.0 AO[abef] D[cadg] D[acdh] E1[di] delta[ea] delta[fb] delta[gd] delta[hd] delta[id] 
    {"abfg,cade,aced,eh,fa,gb,he",               4.0,   7, { 5,14,14,23,22,22,21}},              //   4.0 AO[abfg] D[cade] D[aced] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abef,cbdg,bcdh,di,ea,fb,gd,hd,id",        -2.0,   9, { 5,14,14,23,22,22,21,21,21}},        //  -2.0 AO[abef] D[cbdg] D[bcdh] E1[di] delta[ea] delta[fb] delta[gd] delta[hd] delta[id] 
    {"abfg,cbde,bced,eh,fa,gb,he",               4.0,   7, { 5,14,14,23,22,22,21}},              //   4.0 AO[abfg] D[cbde] D[bced] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abef,cgdh,cidj,dk,ea,fb,gc,hd,ic,jd,kd",  -8.0,  11, { 5,14,14,23,22,22,22,21,22,21,21}},  //  -8.0 AO[abef] D[cgdh] D[cidj] E1[dk] delta[ea] delta[fb] delta[gc] delta[hd] delta[ic] delta[jd] delta[kd] 
    {"abfg,chde,cied,ej,fa,gb,hc,ic,je",         4.0,   9, { 5,14,14,23,22,22,22,22,21}},        //   4.0 AO[abfg] D[chde] D[cied] E1[ej] delta[fa] delta[gb] delta[hc] delta[ic] delta[je] 
    {"abfg,cdeh,dcei,ej,fa,gb,he,ie,je",         4.0,   9, { 5,14,14,23,22,22,21,21,21}},        //   4.0 AO[abfg] D[cdeh] D[dcei] E1[ej] delta[fa] delta[gb] delta[he] delta[ie] delta[je] 
    {"abgh,cdef,dcfe,fi,ga,hb,if",              -8.0,   7, { 5,14,14,23,22,22,21}},              //  -8.0 AO[abgh] D[cdef] D[dcfe] E1[fi] delta[ga] delta[hb] delta[if] 
    {"abed,afcg,ahci,cj,da,eb,fa,gc,ha,ic,jc",  -4.0,  11, { 5,14,14,23,22,22,22,21,22,21,21}},  //  -4.0 AO[abed] D[afcg] D[ahci] E1[cj] delta[da] delta[eb] delta[fa] delta[gc] delta[ha] delta[ic] delta[jc] 
    {"abfe,agcd,ahdc,di,ea,fb,ga,ha,id",         2.0,   9, { 5,14,14,23,22,22,22,22,21}},        //   2.0 AO[abfe] D[agcd] D[ahdc] E1[di] delta[ea] delta[fb] delta[ga] delta[ha] delta[id] 
    {"abed,abcf,bacg,ch,da,eb,fc,gc,hc",        -2.0,   9, { 5,14,14,23,22,22,21,21,21}},        //  -2.0 AO[abed] D[abcf] D[bacg] E1[ch] delta[da] delta[eb] delta[fc] delta[gc] delta[hc] 
    {"abfe,abcd,badc,dg,ea,fb,gd",               1.0,   7, { 5,14,14,23,22,22,21}},              //   1.0 AO[abfe] D[abcd] D[badc] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abfe,acdg,cadh,di,ea,fb,gd,hd,id",         1.0,   9, { 5,14,14,23,22,22,21,21,21}},        //   1.0 AO[abfe] D[acdg] D[cadh] E1[di] delta[ea] delta[fb] delta[gd] delta[hd] delta[id] 
    {"abgf,acde,caed,eh,fa,gb,he",              -2.0,   7, { 5,14,14,23,22,22,21}},              //  -2.0 AO[abgf] D[acde] D[caed] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abed,bacf,abcg,ch,da,eb,fc,gc,hc",        -2.0,   9, { 5,14,14,23,22,22,21,21,21}},        //  -2.0 AO[abed] D[bacf] D[abcg] E1[ch] delta[da] delta[eb] delta[fc] delta[gc] delta[hc] 
    {"abfe,bacd,abdc,dg,ea,fb,gd",               1.0,   7, { 5,14,14,23,22,22,21}},              //   1.0 AO[abfe] D[bacd] D[abdc] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abed,bfcg,bhci,cj,da,eb,fb,gc,hb,ic,jc",  -4.0,  11, { 5,14,14,23,22,22,22,21,22,21,21}},  //  -4.0 AO[abed] D[bfcg] D[bhci] E1[cj] delta[da] delta[eb] delta[fb] delta[gc] delta[hb] delta[ic] delta[jc] 
    {"abfe,bgcd,bhdc,di,ea,fb,gb,hb,id",         2.0,   9, { 5,14,14,23,22,22,22,22,21}},        //   2.0 AO[abfe] D[bgcd] D[bhdc] E1[di] delta[ea] delta[fb] delta[gb] delta[hb] delta[id] 
    {"abfe,bcdg,cbdh,di,ea,fb,gd,hd,id",         1.0,   9, { 5,14,14,23,22,22,21,21,21}},        //   1.0 AO[abfe] D[bcdg] D[cbdh] E1[di] delta[ea] delta[fb] delta[gd] delta[hd] delta[id] 
    {"abgf,bcde,cbed,eh,fa,gb,he",              -2.0,   7, { 5,14,14,23,22,22,21}},              //  -2.0 AO[abgf] D[bcde] D[cbed] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abfe,cadg,acdh,di,ea,fb,gd,hd,id",         1.0,   9, { 5,14,14,23,22,22,21,21,21}},        //   1.0 AO[abfe] D[cadg] D[acdh] E1[di] delta[ea] delta[fb] delta[gd] delta[hd] delta[id] 
    {"abgf,cade,aced,eh,fa,gb,he",              -2.0,   7, { 5,14,14,23,22,22,21}},              //  -2.0 AO[abgf] D[cade] D[aced] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abfe,cbdg,bcdh,di,ea,fb,gd,hd,id",         1.0,   9, { 5,14,14,23,22,22,21,21,21}},        //   1.0 AO[abfe] D[cbdg] D[bcdh] E1[di] delta[ea] delta[fb] delta[gd] delta[hd] delta[id] 
    {"abgf,cbde,bced,eh,fa,gb,he",              -2.0,   7, { 5,14,14,23,22,22,21}},              //  -2.0 AO[abgf] D[cbde] D[bced] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abfe,cgdh,cidj,dk,ea,fb,gc,hd,ic,jd,kd",   4.0,  11, { 5,14,14,23,22,22,22,21,22,21,21}},  //   4.0 AO[abfe] D[cgdh] D[cidj] E1[dk] delta[ea] delta[fb] delta[gc] delta[hd] delta[ic] delta[jd] delta[kd] 
    {"abgf,chde,cied,ej,fa,gb,hc,ic,je",        -2.0,   9, { 5,14,14,23,22,22,22,22,21}},        //  -2.0 AO[abgf] D[chde] D[cied] E1[ej] delta[fa] delta[gb] delta[hc] delta[ic] delta[je] 
    {"abgf,cdeh,dcei,ej,fa,gb,he,ie,je",        -2.0,   9, { 5,14,14,23,22,22,21,21,21}},        //  -2.0 AO[abgf] D[cdeh] D[dcei] E1[ej] delta[fa] delta[gb] delta[he] delta[ie] delta[je] 
    {"abhg,cdef,dcfe,fi,ga,hb,if",               4.0,   7, { 5,14,14,23,22,22,21}},              //   4.0 AO[abhg] D[cdef] D[dcfe] E1[fi] delta[ga] delta[hb] delta[if] 
    {"abef,agcd,ahdc,cdji,ea,fb,ga,ha,ic,jd",   -2.0,  10, { 5,14,14,24,22,22,22,22,21,21}},     //  -2.0 AO[abef] D[agcd] D[ahdc] E2[cdji] delta[ea] delta[fb] delta[ga] delta[ha] delta[ic] delta[jd] 
    {"abef,abcd,badc,cdgh,ea,fb,gc,hd",          0.5,   8, { 5,14,14,24,22,22,21,21}},           //   0.5 AO[abef] D[abcd] D[badc] E2[cdgh] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"abfg,acde,caed,dehi,fa,gb,hd,ie",         -1.0,   8, { 5,14,14,24,22,22,21,21}},           //  -1.0 AO[abfg] D[acde] D[caed] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abef,bacd,abdc,cdgh,ea,fb,gc,hd",          0.5,   8, { 5,14,14,24,22,22,21,21}},           //   0.5 AO[abef] D[bacd] D[abdc] E2[cdgh] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"abef,bgcd,bhdc,cdji,ea,fb,gb,hb,ic,jd",   -2.0,  10, { 5,14,14,24,22,22,22,22,21,21}},     //  -2.0 AO[abef] D[bgcd] D[bhdc] E2[cdji] delta[ea] delta[fb] delta[gb] delta[hb] delta[ic] delta[jd] 
    {"abfg,bcde,cbed,dehi,fa,gb,hd,ie",         -1.0,   8, { 5,14,14,24,22,22,21,21}},           //  -1.0 AO[abfg] D[bcde] D[cbed] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abfg,cade,aced,dehi,fa,gb,hd,ie",         -1.0,   8, { 5,14,14,24,22,22,21,21}},           //  -1.0 AO[abfg] D[cade] D[aced] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abfg,cbde,bced,dehi,fa,gb,hd,ie",         -1.0,   8, { 5,14,14,24,22,22,21,21}},           //  -1.0 AO[abfg] D[cbde] D[bced] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abfg,chde,cied,dekj,fa,gb,hc,ic,jd,ke",    2.0,  10, { 5,14,14,24,22,22,22,22,21,21}},     //   2.0 AO[abfg] D[chde] D[cied] E2[dekj] delta[fa] delta[gb] delta[hc] delta[ic] delta[jd] delta[ke] 
    {"abgh,cdef,dcfe,efij,ga,hb,ie,jf",          2.0,   8, { 5,14,14,24,22,22,21,21}},           //   2.0 AO[abgh] D[cdef] D[dcfe] E2[efij] delta[ga] delta[hb] delta[ie] delta[jf] 
    {"abfe,agcd,ahdc,cdji,ea,fb,ga,ha,ic,jd",    1.0,  10, { 5,14,14,24,22,22,22,22,21,21}},     //   1.0 AO[abfe] D[agcd] D[ahdc] E2[cdji] delta[ea] delta[fb] delta[ga] delta[ha] delta[ic] delta[jd] 
    {"abfe,abcd,badc,cdhg,ea,fb,gc,hd",          0.5,   8, { 5,14,14,24,22,22,21,21}},           //   0.5 AO[abfe] D[abcd] D[badc] E2[cdhg] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"abgf,acde,caed,dehi,fa,gb,hd,ie",          0.5,   8, { 5,14,14,24,22,22,21,21}},           //   0.5 AO[abgf] D[acde] D[caed] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abfe,bacd,abdc,cdhg,ea,fb,gc,hd",          0.5,   8, { 5,14,14,24,22,22,21,21}},           //   0.5 AO[abfe] D[bacd] D[abdc] E2[cdhg] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"abfe,bgcd,bhdc,cdji,ea,fb,gb,hb,ic,jd",    1.0,  10, { 5,14,14,24,22,22,22,22,21,21}},     //   1.0 AO[abfe] D[bgcd] D[bhdc] E2[cdji] delta[ea] delta[fb] delta[gb] delta[hb] delta[ic] delta[jd] 
    {"abgf,bcde,cbed,dehi,fa,gb,hd,ie",          0.5,   8, { 5,14,14,24,22,22,21,21}},           //   0.5 AO[abgf] D[bcde] D[cbed] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abgf,cade,aced,dehi,fa,gb,hd,ie",          0.5,   8, { 5,14,14,24,22,22,21,21}},           //   0.5 AO[abgf] D[cade] D[aced] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abgf,cbde,bced,dehi,fa,gb,hd,ie",          0.5,   8, { 5,14,14,24,22,22,21,21}},           //   0.5 AO[abgf] D[cbde] D[bced] E2[dehi] delta[fa] delta[gb] delta[hd] delta[ie] 
    {"abgf,chde,cied,dekj,fa,gb,hc,ic,jd,ke",   -1.0,  10, { 5,14,14,24,22,22,22,22,21,21}},     //  -1.0 AO[abgf] D[chde] D[cied] E2[dekj] delta[fa] delta[gb] delta[hc] delta[ic] delta[jd] delta[ke] 
    {"abhg,cdef,dcfe,efij,ga,hb,ie,jf",         -1.0,   8, { 5,14,14,24,22,22,21,21}},           //  -1.0 AO[abhg] D[cdef] D[dcfe] E2[efij] delta[ga] delta[hb] delta[ie] delta[jf] 
    {"ac,adbe,afbg,ca,da,eb,fa,gb",             -8.0,   8, { 3,14,14,22,22,21,22,21}},           //  -8.0 AO[ac] D[adbe] D[afbg] delta[ca] delta[da] delta[eb] delta[fa] delta[gb] 
    {"ad,aebc,afcb,da,ea,fa",                    4.0,   6, { 3,14,14,22,22,22}},                 //   4.0 AO[ad] D[aebc] D[afcb] delta[da] delta[ea] delta[fa] 
    {"ad,abce,bacf,da,ec,fc",                    2.0,   6, { 3,14,14,22,21,21}},                 //   2.0 AO[ad] D[abce] D[bacf] delta[da] delta[ec] delta[fc] 
    {"ae,abcd,badc,ea",                         -4.0,   4, { 3,14,14,22}},                       //  -4.0 AO[ae] D[abcd] D[badc] delta[ea] 
    {"ad,bace,abcf,da,ec,fc",                    2.0,   6, { 3,14,14,22,21,21}},                 //   2.0 AO[ad] D[bace] D[abcf] delta[da] delta[ec] delta[fc] 
    {"ae,bacd,abdc,ea",                         -4.0,   4, { 3,14,14,22}},                       //  -4.0 AO[ae] D[bacd] D[abdc] delta[ea] 
    {"ad,becf,bgch,da,eb,fc,gb,hc",              8.0,   8, { 3,14,14,22,22,21,22,21}},           //   8.0 AO[ad] D[becf] D[bgch] delta[da] delta[eb] delta[fc] delta[gb] delta[hc] 
    {"ae,bfcd,bgdc,ea,fb,gb",                   -4.0,   6, { 3,14,14,22,22,22}},                 //  -4.0 AO[ae] D[bfcd] D[bgdc] delta[ea] delta[fb] delta[gb] 
    {"ae,bcdf,cbdg,ea,fd,gd",                   -4.0,   6, { 3,14,14,22,21,21}},                 //  -4.0 AO[ae] D[bcdf] D[cbdg] delta[ea] delta[fd] delta[gd] 
    {"af,bcde,cbed,fa",                          8.0,   4, { 3,14,14,22}},                       //   8.0 AO[af] D[bcde] D[cbed] delta[fa] 
    {"ac,adbe,afbg,bh,ca,da,eb,fa,gb,hb",        8.0,  10, { 3,14,14,23,22,22,21,22,21,21}},     //   8.0 AO[ac] D[adbe] D[afbg] E1[bh] delta[ca] delta[da] delta[eb] delta[fa] delta[gb] delta[hb] 
    {"ad,aebc,afcb,cg,da,ea,fa,gc",             -4.0,   8, { 3,14,14,23,22,22,22,21}},           //  -4.0 AO[ad] D[aebc] D[afcb] E1[cg] delta[da] delta[ea] delta[fa] delta[gc] 
    {"ad,abce,bacf,cg,da,ec,fc,gc",             -2.0,   8, { 3,14,14,23,22,21,21,21}},           //  -2.0 AO[ad] D[abce] D[bacf] E1[cg] delta[da] delta[ec] delta[fc] delta[gc] 
    {"ae,abcd,badc,df,ea,fd",                    4.0,   6, { 3,14,14,23,22,21}},                 //   4.0 AO[ae] D[abcd] D[badc] E1[df] delta[ea] delta[fd] 
    {"ad,bace,abcf,cg,da,ec,fc,gc",             -2.0,   8, { 3,14,14,23,22,21,21,21}},           //  -2.0 AO[ad] D[bace] D[abcf] E1[cg] delta[da] delta[ec] delta[fc] delta[gc] 
    {"ae,bacd,abdc,df,ea,fd",                    4.0,   6, { 3,14,14,23,22,21}},                 //   4.0 AO[ae] D[bacd] D[abdc] E1[df] delta[ea] delta[fd] 
    {"ad,becf,bgch,ci,da,eb,fc,gb,hc,ic",       -8.0,  10, { 3,14,14,23,22,22,21,22,21,21}},     //  -8.0 AO[ad] D[becf] D[bgch] E1[ci] delta[da] delta[eb] delta[fc] delta[gb] delta[hc] delta[ic] 
    {"ae,bfcd,bgdc,dh,ea,fb,gb,hd",              4.0,   8, { 3,14,14,23,22,22,22,21}},           //   4.0 AO[ae] D[bfcd] D[bgdc] E1[dh] delta[ea] delta[fb] delta[gb] delta[hd] 
    {"ae,bcdf,cbdg,dh,ea,fd,gd,hd",              4.0,   8, { 3,14,14,23,22,21,21,21}},           //   4.0 AO[ae] D[bcdf] D[cbdg] E1[dh] delta[ea] delta[fd] delta[gd] delta[hd] 
    {"af,bcde,cbed,eg,fa,ge",                   -8.0,   6, { 3,14,14,23,22,21}},                 //  -8.0 AO[af] D[bcde] D[cbed] E1[eg] delta[fa] delta[ge] 
    {"ad,aebc,afcb,bchg,da,ea,fa,gb,hc",        -2.0,   9, { 3,14,14,24,22,22,22,21,21}},        //  -2.0 AO[ad] D[aebc] D[afcb] E2[bchg] delta[da] delta[ea] delta[fa] delta[gb] delta[hc] 
    {"ae,abcd,badc,cdfg,ea,fc,gd",              -1.0,   7, { 3,14,14,24,22,21,21}},              //  -1.0 AO[ae] D[abcd] D[badc] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ae,bacd,abdc,cdfg,ea,fc,gd",              -1.0,   7, { 3,14,14,24,22,21,21}},              //  -1.0 AO[ae] D[bacd] D[abdc] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ae,bfcd,bgdc,cdih,ea,fb,gb,hc,id",         2.0,   9, { 3,14,14,24,22,22,22,21,21}},        //   2.0 AO[ae] D[bfcd] D[bgdc] E2[cdih] delta[ea] delta[fb] delta[gb] delta[hc] delta[id] 
    {"af,bcde,cbed,degh,fa,gd,he",               2.0,   7, { 3,14,14,24,22,21,21}},              //   2.0 AO[af] D[bcde] D[cbed] E2[degh] delta[fa] delta[gd] delta[he] 
    {"acbd,aebf,agbh,ca,db,ea,fb,ga,hb",        20.0,   9, { 4,14,14,22,21,22,21,22,21}},        //  20.0 AO[acbd] D[aebf] D[agbh] delta[ca] delta[db] delta[ea] delta[fb] delta[ga] delta[hb] 
    {"adbe,afbc,agcb,da,eb,fa,ga",              -8.0,   7, { 4,14,14,22,21,22,22}},              //  -8.0 AO[adbe] D[afbc] D[agcb] delta[da] delta[eb] delta[fa] delta[ga] 
    {"adbe,afcb,agbc,da,eb,fa,ga",              -8.0,   7, { 4,14,14,22,21,22,22}},              //  -8.0 AO[adbe] D[afcb] D[agbc] delta[da] delta[eb] delta[fa] delta[ga] 
    {"adbe,acbf,cabg,da,eb,fb,gb",              -8.0,   7, { 4,14,14,22,21,21,21}},              //  -8.0 AO[adbe] D[acbf] D[cabg] delta[da] delta[eb] delta[fb] delta[gb] 
    {"aebf,acbd,cadb,ea,fb",                     8.0,   5, { 4,14,14,22,21}},                    //   8.0 AO[aebf] D[acbd] D[cadb] delta[ea] delta[fb] 
    {"aebf,acdb,cabd,ea,fb",                     2.0,   5, { 4,14,14,22,21}},                    //   2.0 AO[aebf] D[acdb] D[cabd] delta[ea] delta[fb] 
    {"adbe,cabf,acbg,da,eb,fb,gb",              -8.0,   7, { 4,14,14,22,21,21,21}},              //  -8.0 AO[adbe] D[cabf] D[acbg] delta[da] delta[eb] delta[fb] delta[gb] 
    {"aebf,cabd,acdb,ea,fb",                     2.0,   5, { 4,14,14,22,21}},                    //   2.0 AO[aebf] D[cabd] D[acdb] delta[ea] delta[fb] 
    {"aebf,cadb,acbd,ea,fb",                     8.0,   5, { 4,14,14,22,21}},                    //   8.0 AO[aebf] D[cadb] D[acbd] delta[ea] delta[fb] 
    {"adbe,cgbf,cibh,da,eb,fb,gc,hb,ic",        -8.0,   9, { 4,14,14,22,21,21,22,21,22}},        //  -8.0 AO[adbe] D[cgbf] D[cibh] delta[da] delta[eb] delta[fb] delta[gc] delta[hb] delta[ic] 
    {"aebf,cgbd,chdb,ea,fb,gc,hc",               2.0,   7, { 4,14,14,22,21,22,22}},              //   2.0 AO[aebf] D[cgbd] D[chdb] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"aebf,cgdb,chbd,ea,fb,gc,hc",               2.0,   7, { 4,14,14,22,21,22,22}},              //   2.0 AO[aebf] D[cgdb] D[chbd] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"aebf,cdbg,dcbh,ea,fb,gb,hb",               4.0,   7, { 4,14,14,22,21,21,21}},              //   4.0 AO[aebf] D[cdbg] D[dcbh] delta[ea] delta[fb] delta[gb] delta[hb] 
    {"afbg,cdbe,dceb,fa,gb",                    -4.0,   5, { 4,14,14,22,21}},                    //  -4.0 AO[afbg] D[cdbe] D[dceb] delta[fa] delta[gb] 
    {"afbg,cdeb,dcbe,fa,gb",                    -4.0,   5, { 4,14,14,22,21}},                    //  -4.0 AO[afbg] D[cdeb] D[dcbe] delta[fa] delta[gb] 
    {"adbe,afbc,agcb,ch,da,eb,fa,ga,hc",         4.0,   9, { 4,14,14,23,22,21,22,22,21}},        //   4.0 AO[adbe] D[afbc] D[agcb] E1[ch] delta[da] delta[eb] delta[fa] delta[ga] delta[hc] 
    {"adbe,afcb,agbc,ch,da,eb,fa,ga,hc",         4.0,   9, { 4,14,14,23,22,21,22,22,21}},        //   4.0 AO[adbe] D[afcb] D[agbc] E1[ch] delta[da] delta[eb] delta[fa] delta[ga] delta[hc] 
    {"aebf,acbd,cadb,dg,ea,fb,gd",              -4.0,   7, { 4,14,14,23,22,21,21}},              //  -4.0 AO[aebf] D[acbd] D[cadb] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"aebf,acdb,cabd,dg,ea,fb,gd",              -1.0,   7, { 4,14,14,23,22,21,21}},              //  -1.0 AO[aebf] D[acdb] D[cabd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"aebf,cabd,acdb,dg,ea,fb,gd",              -1.0,   7, { 4,14,14,23,22,21,21}},              //  -1.0 AO[aebf] D[cabd] D[acdb] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"aebf,cadb,acbd,dg,ea,fb,gd",              -4.0,   7, { 4,14,14,23,22,21,21}},              //  -4.0 AO[aebf] D[cadb] D[acbd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"aebf,cgbd,chdb,di,ea,fb,gc,hc,id",        -1.0,   9, { 4,14,14,23,22,21,22,22,21}},        //  -1.0 AO[aebf] D[cgbd] D[chdb] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"aebf,cgdb,chbd,di,ea,fb,gc,hc,id",        -1.0,   9, { 4,14,14,23,22,21,22,22,21}},        //  -1.0 AO[aebf] D[cgdb] D[chbd] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"afbg,cdbe,dceb,eh,fa,gb,he",               2.0,   7, { 4,14,14,23,22,21,21}},              //   2.0 AO[afbg] D[cdbe] D[dceb] E1[eh] delta[fa] delta[gb] delta[he] 
    {"afbg,cdeb,dcbe,eh,fa,gb,he",               2.0,   7, { 4,14,14,23,22,21,21}},              //   2.0 AO[afbg] D[cdeb] D[dcbe] E1[eh] delta[fa] delta[gb] delta[he] 
    {"adbc,aebf,agbh,bc,da,ea,fb,ga,hb",       -10.0,   9, { 4,14,14,23,22,22,21,22,21}},        // -10.0 AO[adbc] D[aebf] D[agbh] E1[bc] delta[da] delta[ea] delta[fb] delta[ga] delta[hb] 
    {"adbc,aebc,afcb,bc,da,ea,fa",              -5.0,   7, { 4,14,14,23,22,22,22}},              //  -5.0 AO[adbc] D[aebc] D[afcb] E1[bc] delta[da] delta[ea] delta[fa] 
    {"aebc,afbd,agdb,bc,ea,fa,ga",               4.0,   7, { 4,14,14,23,22,22,22}},              //   4.0 AO[aebc] D[afbd] D[agdb] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"adbc,aecb,afbc,bc,da,ea,fa",              -5.0,   7, { 4,14,14,23,22,22,22}},              //  -5.0 AO[adbc] D[aecb] D[afbc] E1[bc] delta[da] delta[ea] delta[fa] 
    {"adbc,aecf,agch,bc,da,ea,fc,ga,hc",       -10.0,   9, { 4,14,14,23,22,22,21,22,21}},        // -10.0 AO[adbc] D[aecf] D[agch] E1[bc] delta[da] delta[ea] delta[fc] delta[ga] delta[hc] 
    {"aebc,afcd,agdc,bc,ea,fa,ga",               4.0,   7, { 4,14,14,23,22,22,22}},              //   4.0 AO[aebc] D[afcd] D[agdc] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"aebc,afdb,agbd,bc,ea,fa,ga",               4.0,   7, { 4,14,14,23,22,22,22}},              //   4.0 AO[aebc] D[afdb] D[agbd] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"aebc,afdc,agcd,bc,ea,fa,ga",               4.0,   7, { 4,14,14,23,22,22,22}},              //   4.0 AO[aebc] D[afdc] D[agcd] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"aebc,afdg,ahdi,bc,ea,fa,gd,ha,id",         4.0,   9, { 4,14,14,23,22,22,21,22,21}},        //   4.0 AO[aebc] D[afdg] D[ahdi] E1[bc] delta[ea] delta[fa] delta[gd] delta[ha] delta[id] 
    {"afbc,agde,ahed,bc,fa,ga,ha",              -2.0,   7, { 4,14,14,23,22,22,22}},              //  -2.0 AO[afbc] D[agde] D[ahed] E1[bc] delta[fa] delta[ga] delta[ha] 
    {"aebc,adbf,dabg,bc,ea,fb,gb",               4.0,   7, { 4,14,14,23,22,21,21}},              //   4.0 AO[aebc] D[adbf] D[dabg] E1[bc] delta[ea] delta[fb] delta[gb] 
    {"aebc,adbc,dacb,bc,ea",                     2.0,   5, { 4,14,14,23,22}},                    //   2.0 AO[aebc] D[adbc] D[dacb] E1[bc] delta[ea] 
    {"afbc,adbe,daeb,bc,fa",                    -4.0,   5, { 4,14,14,23,22}},                    //  -4.0 AO[afbc] D[adbe] D[daeb] E1[bc] delta[fa] 
    {"aebc,adcb,dabc,bc,ea",                     2.0,   5, { 4,14,14,23,22}},                    //   2.0 AO[aebc] D[adcb] D[dabc] E1[bc] delta[ea] 
    {"aebc,adcf,dacg,bc,ea,fc,gc",               4.0,   7, { 4,14,14,23,22,21,21}},              //   4.0 AO[aebc] D[adcf] D[dacg] E1[bc] delta[ea] delta[fc] delta[gc] 
    {"afbc,adce,daec,bc,fa",                    -4.0,   5, { 4,14,14,23,22}},                    //  -4.0 AO[afbc] D[adce] D[daec] E1[bc] delta[fa] 
    {"afbc,adeb,dabe,bc,fa",                    -1.0,   5, { 4,14,14,23,22}},                    //  -1.0 AO[afbc] D[adeb] D[dabe] E1[bc] delta[fa] 
    {"afbc,adec,dace,bc,fa",                    -1.0,   5, { 4,14,14,23,22}},                    //  -1.0 AO[afbc] D[adec] D[dace] E1[bc] delta[fa] 
    {"afbc,adeg,daeh,bc,fa,ge,he",              -1.0,   7, { 4,14,14,23,22,21,21}},              //  -1.0 AO[afbc] D[adeg] D[daeh] E1[bc] delta[fa] delta[ge] delta[he] 
    {"agbc,adef,dafe,bc,ga",                     2.0,   5, { 4,14,14,23,22}},                    //   2.0 AO[agbc] D[adef] D[dafe] E1[bc] delta[ga] 
    {"aebc,dabf,adbg,bc,ea,fb,gb",               4.0,   7, { 4,14,14,23,22,21,21}},              //   4.0 AO[aebc] D[dabf] D[adbg] E1[bc] delta[ea] delta[fb] delta[gb] 
    {"aebc,dabc,adcb,bc,ea",                     2.0,   5, { 4,14,14,23,22}},                    //   2.0 AO[aebc] D[dabc] D[adcb] E1[bc] delta[ea] 
    {"afbc,dabe,adeb,bc,fa",                    -1.0,   5, { 4,14,14,23,22}},                    //  -1.0 AO[afbc] D[dabe] D[adeb] E1[bc] delta[fa] 
    {"aebc,dacb,adbc,bc,ea",                     2.0,   5, { 4,14,14,23,22}},                    //   2.0 AO[aebc] D[dacb] D[adbc] E1[bc] delta[ea] 
    {"aebc,dacf,adcg,bc,ea,fc,gc",               4.0,   7, { 4,14,14,23,22,21,21}},              //   4.0 AO[aebc] D[dacf] D[adcg] E1[bc] delta[ea] delta[fc] delta[gc] 
    {"afbc,dace,adec,bc,fa",                    -1.0,   5, { 4,14,14,23,22}},                    //  -1.0 AO[afbc] D[dace] D[adec] E1[bc] delta[fa] 
    {"afbc,daeb,adbe,bc,fa",                    -4.0,   5, { 4,14,14,23,22}},                    //  -4.0 AO[afbc] D[daeb] D[adbe] E1[bc] delta[fa] 
    {"afbc,daec,adce,bc,fa",                    -4.0,   5, { 4,14,14,23,22}},                    //  -4.0 AO[afbc] D[daec] D[adce] E1[bc] delta[fa] 
    {"afbc,daeg,adeh,bc,fa,ge,he",              -1.0,   7, { 4,14,14,23,22,21,21}},              //  -1.0 AO[afbc] D[daeg] D[adeh] E1[bc] delta[fa] delta[ge] delta[he] 
    {"agbc,daef,adfe,bc,ga",                     2.0,   5, { 4,14,14,23,22}},                    //   2.0 AO[agbc] D[daef] D[adfe] E1[bc] delta[ga] 
    {"aebc,dgbf,dibh,bc,ea,fb,gd,hb,id",         4.0,   9, { 4,14,14,23,22,21,22,21,22}},        //   4.0 AO[aebc] D[dgbf] D[dibh] E1[bc] delta[ea] delta[fb] delta[gd] delta[hb] delta[id] 
    {"aebc,dfbc,dgcb,bc,ea,fd,gd",               2.0,   7, { 4,14,14,23,22,22,22}},              //   2.0 AO[aebc] D[dfbc] D[dgcb] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"afbc,dgbe,dheb,bc,fa,gd,hd",              -1.0,   7, { 4,14,14,23,22,22,22}},              //  -1.0 AO[afbc] D[dgbe] D[dheb] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"aebc,dfcb,dgbc,bc,ea,fd,gd",               2.0,   7, { 4,14,14,23,22,22,22}},              //   2.0 AO[aebc] D[dfcb] D[dgbc] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"aebc,dgcf,dich,bc,ea,fc,gd,hc,id",         4.0,   9, { 4,14,14,23,22,21,22,21,22}},        //   4.0 AO[aebc] D[dgcf] D[dich] E1[bc] delta[ea] delta[fc] delta[gd] delta[hc] delta[id] 
    {"afbc,dgce,dhec,bc,fa,gd,hd",              -1.0,   7, { 4,14,14,23,22,22,22}},              //  -1.0 AO[afbc] D[dgce] D[dhec] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"afbc,dgeb,dhbe,bc,fa,gd,hd",              -1.0,   7, { 4,14,14,23,22,22,22}},              //  -1.0 AO[afbc] D[dgeb] D[dhbe] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"afbc,dgec,dhce,bc,fa,gd,hd",              -1.0,   7, { 4,14,14,23,22,22,22}},              //  -1.0 AO[afbc] D[dgec] D[dhce] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"afbc,dgeh,diej,bc,fa,gd,he,id,je",        -4.0,   9, { 4,14,14,23,22,22,21,22,21}},        //  -4.0 AO[afbc] D[dgeh] D[diej] E1[bc] delta[fa] delta[gd] delta[he] delta[id] delta[je] 
    {"agbc,dhef,dife,bc,ga,hd,id",               2.0,   7, { 4,14,14,23,22,22,22}},              //   2.0 AO[agbc] D[dhef] D[dife] E1[bc] delta[ga] delta[hd] delta[id] 
    {"afbc,debg,edbh,bc,fa,gb,hb",              -2.0,   7, { 4,14,14,23,22,21,21}},              //  -2.0 AO[afbc] D[debg] D[edbh] E1[bc] delta[fa] delta[gb] delta[hb] 
    {"afbc,debc,edcb,bc,fa",                    -1.0,   5, { 4,14,14,23,22}},                    //  -1.0 AO[afbc] D[debc] D[edcb] E1[bc] delta[fa] 
    {"agbc,debf,edfb,bc,ga",                     2.0,   5, { 4,14,14,23,22}},                    //   2.0 AO[agbc] D[debf] D[edfb] E1[bc] delta[ga] 
    {"afbc,decb,edbc,bc,fa",                    -1.0,   5, { 4,14,14,23,22}},                    //  -1.0 AO[afbc] D[decb] D[edbc] E1[bc] delta[fa] 
    {"afbc,decg,edch,bc,fa,gc,hc",              -2.0,   7, { 4,14,14,23,22,21,21}},              //  -2.0 AO[afbc] D[decg] D[edch] E1[bc] delta[fa] delta[gc] delta[hc] 
    {"agbc,decf,edfc,bc,ga",                     2.0,   5, { 4,14,14,23,22}},                    //   2.0 AO[agbc] D[decf] D[edfc] E1[bc] delta[ga] 
    {"agbc,defb,edbf,bc,ga",                     2.0,   5, { 4,14,14,23,22}},                    //   2.0 AO[agbc] D[defb] D[edbf] E1[bc] delta[ga] 
    {"agbc,defc,edcf,bc,ga",                     2.0,   5, { 4,14,14,23,22}},                    //   2.0 AO[agbc] D[defc] D[edcf] E1[bc] delta[ga] 
    {"agbc,defh,edfi,bc,ga,hf,if",               2.0,   7, { 4,14,14,23,22,21,21}},              //   2.0 AO[agbc] D[defh] D[edfi] E1[bc] delta[ga] delta[hf] delta[if] 
    {"ahbc,defg,edgf,bc,ha",                    -4.0,   5, { 4,14,14,23,22}},                    //  -4.0 AO[ahbc] D[defg] D[edgf] E1[bc] delta[ha] 
    {"aebc,afbd,agdb,bdch,ea,fa,ga,hd",         -1.0,   8, { 4,14,14,24,22,22,22,21}},           //  -1.0 AO[aebc] D[afbd] D[agdb] E2[bdch] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"aebc,afbd,agdb,bdhc,ea,fa,ga,hd",          2.0,   8, { 4,14,14,24,22,22,22,21}},           //   2.0 AO[aebc] D[afbd] D[agdb] E2[bdhc] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"aebc,afcd,agdc,bdch,ea,fa,ga,hd",         -1.0,   8, { 4,14,14,24,22,22,22,21}},           //  -1.0 AO[aebc] D[afcd] D[agdc] E2[bdch] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"aebc,afcd,agdc,bdhc,ea,fa,ga,hd",          2.0,   8, { 4,14,14,24,22,22,22,21}},           //   2.0 AO[aebc] D[afcd] D[agdc] E2[bdhc] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"aebc,afdb,agbd,bdch,ea,fa,ga,hd",         -1.0,   8, { 4,14,14,24,22,22,22,21}},           //  -1.0 AO[aebc] D[afdb] D[agbd] E2[bdch] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"aebc,afdb,agbd,bdhc,ea,fa,ga,hd",          2.0,   8, { 4,14,14,24,22,22,22,21}},           //   2.0 AO[aebc] D[afdb] D[agbd] E2[bdhc] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"aebc,afdc,agcd,bdch,ea,fa,ga,hd",         -1.0,   8, { 4,14,14,24,22,22,22,21}},           //  -1.0 AO[aebc] D[afdc] D[agcd] E2[bdch] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"aebc,afdc,agcd,bdhc,ea,fa,ga,hd",          2.0,   8, { 4,14,14,24,22,22,22,21}},           //   2.0 AO[aebc] D[afdc] D[agcd] E2[bdhc] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"aebc,afdg,ahdi,bdcj,ea,fa,gd,ha,id,jd",   -2.0,  10, { 4,14,14,24,22,22,21,22,21,21}},     //  -2.0 AO[aebc] D[afdg] D[ahdi] E2[bdcj] delta[ea] delta[fa] delta[gd] delta[ha] delta[id] delta[jd] 
    {"aebc,afdg,ahdi,bdjc,ea,fa,gd,ha,id,jd",    4.0,  10, { 4,14,14,24,22,22,21,22,21,21}},     //   4.0 AO[aebc] D[afdg] D[ahdi] E2[bdjc] delta[ea] delta[fa] delta[gd] delta[ha] delta[id] delta[jd] 
    {"afbc,agde,ahed,beic,fa,ga,ha,ie",         -4.0,   8, { 4,14,14,24,22,22,22,21}},           //  -4.0 AO[afbc] D[agde] D[ahed] E2[beic] delta[fa] delta[ga] delta[ha] delta[ie] 
    {"afbc,adbe,daeb,becg,fa,ge",                2.0,   6, { 4,14,14,24,22,21}},                 //   2.0 AO[afbc] D[adbe] D[daeb] E2[becg] delta[fa] delta[ge] 
    {"afbc,adce,daec,becg,fa,ge",                2.0,   6, { 4,14,14,24,22,21}},                 //   2.0 AO[afbc] D[adce] D[daec] E2[becg] delta[fa] delta[ge] 
    {"afbc,adeb,dabe,begc,fa,ge",               -1.0,   6, { 4,14,14,24,22,21}},                 //  -1.0 AO[afbc] D[adeb] D[dabe] E2[begc] delta[fa] delta[ge] 
    {"afbc,adec,dace,begc,fa,ge",               -1.0,   6, { 4,14,14,24,22,21}},                 //  -1.0 AO[afbc] D[adec] D[dace] E2[begc] delta[fa] delta[ge] 
    {"afbc,adeg,daeh,beic,fa,ge,he,ie",         -2.0,   8, { 4,14,14,24,22,21,21,21}},           //  -2.0 AO[afbc] D[adeg] D[daeh] E2[beic] delta[fa] delta[ge] delta[he] delta[ie] 
    {"agbc,adef,dafe,bfch,ga,hf",               -2.0,   6, { 4,14,14,24,22,21}},                 //  -2.0 AO[agbc] D[adef] D[dafe] E2[bfch] delta[ga] delta[hf] 
    {"afbc,dabe,adeb,begc,fa,ge",               -1.0,   6, { 4,14,14,24,22,21}},                 //  -1.0 AO[afbc] D[dabe] D[adeb] E2[begc] delta[fa] delta[ge] 
    {"afbc,dace,adec,begc,fa,ge",               -1.0,   6, { 4,14,14,24,22,21}},                 //  -1.0 AO[afbc] D[dace] D[adec] E2[begc] delta[fa] delta[ge] 
    {"afbc,daeb,adbe,becg,fa,ge",                2.0,   6, { 4,14,14,24,22,21}},                 //   2.0 AO[afbc] D[daeb] D[adbe] E2[becg] delta[fa] delta[ge] 
    {"afbc,daec,adce,becg,fa,ge",                2.0,   6, { 4,14,14,24,22,21}},                 //   2.0 AO[afbc] D[daec] D[adce] E2[becg] delta[fa] delta[ge] 
    {"afbc,daeg,adeh,beic,fa,ge,he,ie",         -2.0,   8, { 4,14,14,24,22,21,21,21}},           //  -2.0 AO[afbc] D[daeg] D[adeh] E2[beic] delta[fa] delta[ge] delta[he] delta[ie] 
    {"agbc,daef,adfe,bfhc,ga,hf",                4.0,   6, { 4,14,14,24,22,21}},                 //   4.0 AO[agbc] D[daef] D[adfe] E2[bfhc] delta[ga] delta[hf] 
    {"afbc,dgbe,dheb,beic,fa,gd,hd,ie",         -1.0,   8, { 4,14,14,24,22,22,22,21}},           //  -1.0 AO[afbc] D[dgbe] D[dheb] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"afbc,dgce,dhec,beic,fa,gd,hd,ie",         -1.0,   8, { 4,14,14,24,22,22,22,21}},           //  -1.0 AO[afbc] D[dgce] D[dhec] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"afbc,dgeb,dhbe,beic,fa,gd,hd,ie",         -1.0,   8, { 4,14,14,24,22,22,22,21}},           //  -1.0 AO[afbc] D[dgeb] D[dhbe] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"afbc,dgec,dhce,beic,fa,gd,hd,ie",         -1.0,   8, { 4,14,14,24,22,22,22,21}},           //  -1.0 AO[afbc] D[dgec] D[dhce] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"afbc,dgeh,diej,beck,fa,gd,he,id,je,ke",    4.0,  10, { 4,14,14,24,22,22,21,22,21,21}},     //   4.0 AO[afbc] D[dgeh] D[diej] E2[beck] delta[fa] delta[gd] delta[he] delta[id] delta[je] delta[ke] 
    {"agbc,dhef,dife,bfcj,ga,hd,id,jf",         -2.0,   8, { 4,14,14,24,22,22,22,21}},           //  -2.0 AO[agbc] D[dhef] D[dife] E2[bfcj] delta[ga] delta[hd] delta[id] delta[jf] 
    {"agbc,debf,edfb,bfch,ga,hf",               -1.0,   6, { 4,14,14,24,22,21}},                 //  -1.0 AO[agbc] D[debf] D[edfb] E2[bfch] delta[ga] delta[hf] 
    {"agbc,decf,edfc,bfch,ga,hf",               -1.0,   6, { 4,14,14,24,22,21}},                 //  -1.0 AO[agbc] D[decf] D[edfc] E2[bfch] delta[ga] delta[hf] 
    {"agbc,defb,edbf,bfch,ga,hf",               -1.0,   6, { 4,14,14,24,22,21}},                 //  -1.0 AO[agbc] D[defb] D[edbf] E2[bfch] delta[ga] delta[hf] 
    {"agbc,defc,edcf,bfch,ga,hf",               -1.0,   6, { 4,14,14,24,22,21}},                 //  -1.0 AO[agbc] D[defc] D[edcf] E2[bfch] delta[ga] delta[hf] 
    {"agbc,defh,edfi,bfcj,ga,hf,if,jf",         -2.0,   8, { 4,14,14,24,22,21,21,21}},           //  -2.0 AO[agbc] D[defh] D[edfi] E2[bfcj] delta[ga] delta[hf] delta[if] delta[jf] 
    {"ahbc,defg,edgf,bgci,ha,ig",                4.0,   6, { 4,14,14,24,22,21}},                 //   4.0 AO[ahbc] D[defg] D[edgf] E2[bgci] delta[ha] delta[ig] 
    {"afbc,agde,ahed,bdeijc,fa,ga,ha,id,je",    -1.0,   9, { 4,14,14,25,22,22,22,21,21}},        //  -1.0 AO[afbc] D[agde] D[ahed] E3[bdeijc] delta[fa] delta[ga] delta[ha] delta[id] delta[je] 
    {"afbc,agde,ahed,bdejci,fa,ga,ha,id,je",    -1.0,   9, { 4,14,14,25,22,22,22,21,21}},        //  -1.0 AO[afbc] D[agde] D[ahed] E3[bdejci] delta[fa] delta[ga] delta[ha] delta[id] delta[je] 
    {"agbc,adef,dafe,befhci,ga,he,if",          -1.0,   7, { 4,14,14,25,22,21,21}},              //  -1.0 AO[agbc] D[adef] D[dafe] E3[befhci] delta[ga] delta[he] delta[if] 
    {"agbc,daef,adfe,befihc,ga,he,if",          -1.0,   7, { 4,14,14,25,22,21,21}},              //  -1.0 AO[agbc] D[daef] D[adfe] E3[befihc] delta[ga] delta[he] delta[if] 
    {"agbc,dhef,dife,befckj,ga,hd,id,je,kf",    -1.0,   9, { 4,14,14,25,22,22,22,21,21}},        //  -1.0 AO[agbc] D[dhef] D[dife] E3[befckj] delta[ga] delta[hd] delta[id] delta[je] delta[kf] 
    {"ahbc,defg,edgf,bfgcij,ha,if,jg",          -1.0,   7, { 4,14,14,25,22,21,21}},              //  -1.0 AO[ahbc] D[defg] D[edgf] E3[bfgcij] delta[ha] delta[if] delta[jg] 
    {"abcd,aebf,agbh,ca,db,ea,fb,ga,hb",       -16.0,   9, { 2,14,14,22,21,22,21,22,21}},        // -16.0 AO[abcd] D[aebf] D[agbh] delta[ca] delta[db] delta[ea] delta[fb] delta[ga] delta[hb] 
    {"abde,afbc,agcb,da,eb,fa,ga",               4.0,   7, { 2,14,14,22,21,22,22}},              //   4.0 AO[abde] D[afbc] D[agcb] delta[da] delta[eb] delta[fa] delta[ga] 
    {"abde,afcb,agbc,da,eb,fa,ga",               4.0,   7, { 2,14,14,22,21,22,22}},              //   4.0 AO[abde] D[afcb] D[agbc] delta[da] delta[eb] delta[fa] delta[ga] 
    {"abde,acbf,cabg,da,eb,fb,gb",               4.0,   7, { 2,14,14,22,21,21,21}},              //   4.0 AO[abde] D[acbf] D[cabg] delta[da] delta[eb] delta[fb] delta[gb] 
    {"abef,acbd,cadb,ea,fb",                    -4.0,   5, { 2,14,14,22,21}},                    //  -4.0 AO[abef] D[acbd] D[cadb] delta[ea] delta[fb] 
    {"abef,acdb,cabd,ea,fb",                    -4.0,   5, { 2,14,14,22,21}},                    //  -4.0 AO[abef] D[acdb] D[cabd] delta[ea] delta[fb] 
    {"abde,cabf,acbg,da,eb,fb,gb",               4.0,   7, { 2,14,14,22,21,21,21}},              //   4.0 AO[abde] D[cabf] D[acbg] delta[da] delta[eb] delta[fb] delta[gb] 
    {"abef,cabd,acdb,ea,fb",                    -4.0,   5, { 2,14,14,22,21}},                    //  -4.0 AO[abef] D[cabd] D[acdb] delta[ea] delta[fb] 
    {"abef,cadb,acbd,ea,fb",                    -4.0,   5, { 2,14,14,22,21}},                    //  -4.0 AO[abef] D[cadb] D[acbd] delta[ea] delta[fb] 
    {"abde,cgbf,cibh,da,eb,fb,gc,hb,ic",        16.0,   9, { 2,14,14,22,21,21,22,21,22}},        //  16.0 AO[abde] D[cgbf] D[cibh] delta[da] delta[eb] delta[fb] delta[gc] delta[hb] delta[ic] 
    {"abef,cgbd,chdb,ea,fb,gc,hc",              -4.0,   7, { 2,14,14,22,21,22,22}},              //  -4.0 AO[abef] D[cgbd] D[chdb] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abef,cgdb,chbd,ea,fb,gc,hc",              -4.0,   7, { 2,14,14,22,21,22,22}},              //  -4.0 AO[abef] D[cgdb] D[chbd] delta[ea] delta[fb] delta[gc] delta[hc] 
    {"abef,cdbg,dcbh,ea,fb,gb,hb",              -8.0,   7, { 2,14,14,22,21,21,21}},              //  -8.0 AO[abef] D[cdbg] D[dcbh] delta[ea] delta[fb] delta[gb] delta[hb] 
    {"abfg,cdbe,dceb,fa,gb",                     8.0,   5, { 2,14,14,22,21}},                    //   8.0 AO[abfg] D[cdbe] D[dceb] delta[fa] delta[gb] 
    {"abfg,cdeb,dcbe,fa,gb",                     8.0,   5, { 2,14,14,22,21}},                    //   8.0 AO[abfg] D[cdeb] D[dcbe] delta[fa] delta[gb] 
    {"abde,afbc,agcb,ch,da,eb,fa,ga,hc",        -2.0,   9, { 2,14,14,23,22,21,22,22,21}},        //  -2.0 AO[abde] D[afbc] D[agcb] E1[ch] delta[da] delta[eb] delta[fa] delta[ga] delta[hc] 
    {"abde,afcb,agbc,ch,da,eb,fa,ga,hc",        -2.0,   9, { 2,14,14,23,22,21,22,22,21}},        //  -2.0 AO[abde] D[afcb] D[agbc] E1[ch] delta[da] delta[eb] delta[fa] delta[ga] delta[hc] 
    {"abef,acbd,cadb,dg,ea,fb,gd",               2.0,   7, { 2,14,14,23,22,21,21}},              //   2.0 AO[abef] D[acbd] D[cadb] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abef,acdb,cabd,dg,ea,fb,gd",               2.0,   7, { 2,14,14,23,22,21,21}},              //   2.0 AO[abef] D[acdb] D[cabd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abef,cabd,acdb,dg,ea,fb,gd",               2.0,   7, { 2,14,14,23,22,21,21}},              //   2.0 AO[abef] D[cabd] D[acdb] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abef,cadb,acbd,dg,ea,fb,gd",               2.0,   7, { 2,14,14,23,22,21,21}},              //   2.0 AO[abef] D[cadb] D[acbd] E1[dg] delta[ea] delta[fb] delta[gd] 
    {"abef,cgbd,chdb,di,ea,fb,gc,hc,id",         2.0,   9, { 2,14,14,23,22,21,22,22,21}},        //   2.0 AO[abef] D[cgbd] D[chdb] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"abef,cgdb,chbd,di,ea,fb,gc,hc,id",         2.0,   9, { 2,14,14,23,22,21,22,22,21}},        //   2.0 AO[abef] D[cgdb] D[chbd] E1[di] delta[ea] delta[fb] delta[gc] delta[hc] delta[id] 
    {"abfg,cdbe,dceb,eh,fa,gb,he",              -4.0,   7, { 2,14,14,23,22,21,21}},              //  -4.0 AO[abfg] D[cdbe] D[dceb] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abfg,cdeb,dcbe,eh,fa,gb,he",              -4.0,   7, { 2,14,14,23,22,21,21}},              //  -4.0 AO[abfg] D[cdeb] D[dcbe] E1[eh] delta[fa] delta[gb] delta[he] 
    {"abdc,aebf,agbh,bc,da,ea,fb,ga,hb",         8.0,   9, { 2,14,14,23,22,22,21,22,21}},        //   8.0 AO[abdc] D[aebf] D[agbh] E1[bc] delta[da] delta[ea] delta[fb] delta[ga] delta[hb] 
    {"abdc,aebc,afcb,bc,da,ea,fa",               4.0,   7, { 2,14,14,23,22,22,22}},              //   4.0 AO[abdc] D[aebc] D[afcb] E1[bc] delta[da] delta[ea] delta[fa] 
    {"abec,afbd,agdb,bc,ea,fa,ga",              -2.0,   7, { 2,14,14,23,22,22,22}},              //  -2.0 AO[abec] D[afbd] D[agdb] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"abdc,aecb,afbc,bc,da,ea,fa",               4.0,   7, { 2,14,14,23,22,22,22}},              //   4.0 AO[abdc] D[aecb] D[afbc] E1[bc] delta[da] delta[ea] delta[fa] 
    {"abdc,aecf,agch,bc,da,ea,fc,ga,hc",         8.0,   9, { 2,14,14,23,22,22,21,22,21}},        //   8.0 AO[abdc] D[aecf] D[agch] E1[bc] delta[da] delta[ea] delta[fc] delta[ga] delta[hc] 
    {"abec,afcd,agdc,bc,ea,fa,ga",              -2.0,   7, { 2,14,14,23,22,22,22}},              //  -2.0 AO[abec] D[afcd] D[agdc] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"abec,afdb,agbd,bc,ea,fa,ga",              -2.0,   7, { 2,14,14,23,22,22,22}},              //  -2.0 AO[abec] D[afdb] D[agbd] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"abec,afdc,agcd,bc,ea,fa,ga",              -2.0,   7, { 2,14,14,23,22,22,22}},              //  -2.0 AO[abec] D[afdc] D[agcd] E1[bc] delta[ea] delta[fa] delta[ga] 
    {"abec,afdg,ahdi,bc,ea,fa,gd,ha,id",        -8.0,   9, { 2,14,14,23,22,22,21,22,21}},        //  -8.0 AO[abec] D[afdg] D[ahdi] E1[bc] delta[ea] delta[fa] delta[gd] delta[ha] delta[id] 
    {"abfc,agde,ahed,bc,fa,ga,ha",               4.0,   7, { 2,14,14,23,22,22,22}},              //   4.0 AO[abfc] D[agde] D[ahed] E1[bc] delta[fa] delta[ga] delta[ha] 
    {"abec,adbf,dabg,bc,ea,fb,gb",              -2.0,   7, { 2,14,14,23,22,21,21}},              //  -2.0 AO[abec] D[adbf] D[dabg] E1[bc] delta[ea] delta[fb] delta[gb] 
    {"abec,adbc,dacb,bc,ea",                    -1.0,   5, { 2,14,14,23,22}},                    //  -1.0 AO[abec] D[adbc] D[dacb] E1[bc] delta[ea] 
    {"abfc,adbe,daeb,bc,fa",                     2.0,   5, { 2,14,14,23,22}},                    //   2.0 AO[abfc] D[adbe] D[daeb] E1[bc] delta[fa] 
    {"abec,adcb,dabc,bc,ea",                    -1.0,   5, { 2,14,14,23,22}},                    //  -1.0 AO[abec] D[adcb] D[dabc] E1[bc] delta[ea] 
    {"abec,adcf,dacg,bc,ea,fc,gc",              -2.0,   7, { 2,14,14,23,22,21,21}},              //  -2.0 AO[abec] D[adcf] D[dacg] E1[bc] delta[ea] delta[fc] delta[gc] 
    {"abfc,adce,daec,bc,fa",                     2.0,   5, { 2,14,14,23,22}},                    //   2.0 AO[abfc] D[adce] D[daec] E1[bc] delta[fa] 
    {"abfc,adeb,dabe,bc,fa",                     2.0,   5, { 2,14,14,23,22}},                    //   2.0 AO[abfc] D[adeb] D[dabe] E1[bc] delta[fa] 
    {"abfc,adec,dace,bc,fa",                     2.0,   5, { 2,14,14,23,22}},                    //   2.0 AO[abfc] D[adec] D[dace] E1[bc] delta[fa] 
    {"abfc,adeg,daeh,bc,fa,ge,he",               2.0,   7, { 2,14,14,23,22,21,21}},              //   2.0 AO[abfc] D[adeg] D[daeh] E1[bc] delta[fa] delta[ge] delta[he] 
    {"abgc,adef,dafe,bc,ga",                    -4.0,   5, { 2,14,14,23,22}},                    //  -4.0 AO[abgc] D[adef] D[dafe] E1[bc] delta[ga] 
    {"abec,dabf,adbg,bc,ea,fb,gb",              -2.0,   7, { 2,14,14,23,22,21,21}},              //  -2.0 AO[abec] D[dabf] D[adbg] E1[bc] delta[ea] delta[fb] delta[gb] 
    {"abec,dabc,adcb,bc,ea",                    -1.0,   5, { 2,14,14,23,22}},                    //  -1.0 AO[abec] D[dabc] D[adcb] E1[bc] delta[ea] 
    {"abfc,dabe,adeb,bc,fa",                     2.0,   5, { 2,14,14,23,22}},                    //   2.0 AO[abfc] D[dabe] D[adeb] E1[bc] delta[fa] 
    {"abec,dacb,adbc,bc,ea",                    -1.0,   5, { 2,14,14,23,22}},                    //  -1.0 AO[abec] D[dacb] D[adbc] E1[bc] delta[ea] 
    {"abec,dacf,adcg,bc,ea,fc,gc",              -2.0,   7, { 2,14,14,23,22,21,21}},              //  -2.0 AO[abec] D[dacf] D[adcg] E1[bc] delta[ea] delta[fc] delta[gc] 
    {"abfc,dace,adec,bc,fa",                     2.0,   5, { 2,14,14,23,22}},                    //   2.0 AO[abfc] D[dace] D[adec] E1[bc] delta[fa] 
    {"abfc,daeb,adbe,bc,fa",                     2.0,   5, { 2,14,14,23,22}},                    //   2.0 AO[abfc] D[daeb] D[adbe] E1[bc] delta[fa] 
    {"abfc,daec,adce,bc,fa",                     2.0,   5, { 2,14,14,23,22}},                    //   2.0 AO[abfc] D[daec] D[adce] E1[bc] delta[fa] 
    {"abfc,daeg,adeh,bc,fa,ge,he",               2.0,   7, { 2,14,14,23,22,21,21}},              //   2.0 AO[abfc] D[daeg] D[adeh] E1[bc] delta[fa] delta[ge] delta[he] 
    {"abgc,daef,adfe,bc,ga",                    -4.0,   5, { 2,14,14,23,22}},                    //  -4.0 AO[abgc] D[daef] D[adfe] E1[bc] delta[ga] 
    {"abec,dgbf,dibh,bc,ea,fb,gd,hb,id",        -8.0,   9, { 2,14,14,23,22,21,22,21,22}},        //  -8.0 AO[abec] D[dgbf] D[dibh] E1[bc] delta[ea] delta[fb] delta[gd] delta[hb] delta[id] 
    {"abec,dfbc,dgcb,bc,ea,fd,gd",              -4.0,   7, { 2,14,14,23,22,22,22}},              //  -4.0 AO[abec] D[dfbc] D[dgcb] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"abfc,dgbe,dheb,bc,fa,gd,hd",               2.0,   7, { 2,14,14,23,22,22,22}},              //   2.0 AO[abfc] D[dgbe] D[dheb] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abec,dfcb,dgbc,bc,ea,fd,gd",              -4.0,   7, { 2,14,14,23,22,22,22}},              //  -4.0 AO[abec] D[dfcb] D[dgbc] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"abec,dgcf,dich,bc,ea,fc,gd,hc,id",        -8.0,   9, { 2,14,14,23,22,21,22,21,22}},        //  -8.0 AO[abec] D[dgcf] D[dich] E1[bc] delta[ea] delta[fc] delta[gd] delta[hc] delta[id] 
    {"abfc,dgce,dhec,bc,fa,gd,hd",               2.0,   7, { 2,14,14,23,22,22,22}},              //   2.0 AO[abfc] D[dgce] D[dhec] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abfc,dgeb,dhbe,bc,fa,gd,hd",               2.0,   7, { 2,14,14,23,22,22,22}},              //   2.0 AO[abfc] D[dgeb] D[dhbe] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abfc,dgec,dhce,bc,fa,gd,hd",               2.0,   7, { 2,14,14,23,22,22,22}},              //   2.0 AO[abfc] D[dgec] D[dhce] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abfc,dgeh,diej,bc,fa,gd,he,id,je",         8.0,   9, { 2,14,14,23,22,22,21,22,21}},        //   8.0 AO[abfc] D[dgeh] D[diej] E1[bc] delta[fa] delta[gd] delta[he] delta[id] delta[je] 
    {"abgc,dhef,dife,bc,ga,hd,id",              -4.0,   7, { 2,14,14,23,22,22,22}},              //  -4.0 AO[abgc] D[dhef] D[dife] E1[bc] delta[ga] delta[hd] delta[id] 
    {"abfc,debg,edbh,bc,fa,gb,hb",               4.0,   7, { 2,14,14,23,22,21,21}},              //   4.0 AO[abfc] D[debg] D[edbh] E1[bc] delta[fa] delta[gb] delta[hb] 
    {"abfc,debc,edcb,bc,fa",                     2.0,   5, { 2,14,14,23,22}},                    //   2.0 AO[abfc] D[debc] D[edcb] E1[bc] delta[fa] 
    {"abgc,debf,edfb,bc,ga",                    -4.0,   5, { 2,14,14,23,22}},                    //  -4.0 AO[abgc] D[debf] D[edfb] E1[bc] delta[ga] 
    {"abfc,decb,edbc,bc,fa",                     2.0,   5, { 2,14,14,23,22}},                    //   2.0 AO[abfc] D[decb] D[edbc] E1[bc] delta[fa] 
    {"abfc,decg,edch,bc,fa,gc,hc",               4.0,   7, { 2,14,14,23,22,21,21}},              //   4.0 AO[abfc] D[decg] D[edch] E1[bc] delta[fa] delta[gc] delta[hc] 
    {"abgc,decf,edfc,bc,ga",                    -4.0,   5, { 2,14,14,23,22}},                    //  -4.0 AO[abgc] D[decf] D[edfc] E1[bc] delta[ga] 
    {"abgc,defb,edbf,bc,ga",                    -4.0,   5, { 2,14,14,23,22}},                    //  -4.0 AO[abgc] D[defb] D[edbf] E1[bc] delta[ga] 
    {"abgc,defc,edcf,bc,ga",                    -4.0,   5, { 2,14,14,23,22}},                    //  -4.0 AO[abgc] D[defc] D[edcf] E1[bc] delta[ga] 
    {"abgc,defh,edfi,bc,ga,hf,if",              -4.0,   7, { 2,14,14,23,22,21,21}},              //  -4.0 AO[abgc] D[defh] D[edfi] E1[bc] delta[ga] delta[hf] delta[if] 
    {"abhc,defg,edgf,bc,ha",                     8.0,   5, { 2,14,14,23,22}},                    //   8.0 AO[abhc] D[defg] D[edgf] E1[bc] delta[ha] 
    {"abec,afbd,agdb,bdhc,ea,fa,ga,hd",         -2.0,   8, { 2,14,14,24,22,22,22,21}},           //  -2.0 AO[abec] D[afbd] D[agdb] E2[bdhc] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"abec,afcd,agdc,bdhc,ea,fa,ga,hd",         -2.0,   8, { 2,14,14,24,22,22,22,21}},           //  -2.0 AO[abec] D[afcd] D[agdc] E2[bdhc] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"abec,afdb,agbd,bdhc,ea,fa,ga,hd",         -2.0,   8, { 2,14,14,24,22,22,22,21}},           //  -2.0 AO[abec] D[afdb] D[agbd] E2[bdhc] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"abec,afdc,agcd,bdhc,ea,fa,ga,hd",         -2.0,   8, { 2,14,14,24,22,22,22,21}},           //  -2.0 AO[abec] D[afdc] D[agcd] E2[bdhc] delta[ea] delta[fa] delta[ga] delta[hd] 
    {"abec,afdg,ahdi,bdcj,ea,fa,gd,ha,id,jd",    8.0,  10, { 2,14,14,24,22,22,21,22,21,21}},     //   8.0 AO[abec] D[afdg] D[ahdi] E2[bdcj] delta[ea] delta[fa] delta[gd] delta[ha] delta[id] delta[jd] 
    {"abfc,agde,ahed,beci,fa,ga,ha,ie",         -4.0,   8, { 2,14,14,24,22,22,22,21}},           //  -4.0 AO[abfc] D[agde] D[ahed] E2[beci] delta[fa] delta[ga] delta[ha] delta[ie] 
    {"abfc,adbe,daeb,becg,fa,ge",               -1.0,   6, { 2,14,14,24,22,21}},                 //  -1.0 AO[abfc] D[adbe] D[daeb] E2[becg] delta[fa] delta[ge] 
    {"abfc,adce,daec,becg,fa,ge",               -1.0,   6, { 2,14,14,24,22,21}},                 //  -1.0 AO[abfc] D[adce] D[daec] E2[becg] delta[fa] delta[ge] 
    {"abfc,adeb,dabe,becg,fa,ge",               -1.0,   6, { 2,14,14,24,22,21}},                 //  -1.0 AO[abfc] D[adeb] D[dabe] E2[becg] delta[fa] delta[ge] 
    {"abfc,adec,dace,becg,fa,ge",               -1.0,   6, { 2,14,14,24,22,21}},                 //  -1.0 AO[abfc] D[adec] D[dace] E2[becg] delta[fa] delta[ge] 
    {"abfc,adeg,daeh,beci,fa,ge,he,ie",         -2.0,   8, { 2,14,14,24,22,21,21,21}},           //  -2.0 AO[abfc] D[adeg] D[daeh] E2[beci] delta[fa] delta[ge] delta[he] delta[ie] 
    {"abgc,adef,dafe,bfch,ga,hf",                4.0,   6, { 2,14,14,24,22,21}},                 //   4.0 AO[abgc] D[adef] D[dafe] E2[bfch] delta[ga] delta[hf] 
    {"abfc,dabe,adeb,becg,fa,ge",               -1.0,   6, { 2,14,14,24,22,21}},                 //  -1.0 AO[abfc] D[dabe] D[adeb] E2[becg] delta[fa] delta[ge] 
    {"abfc,dace,adec,becg,fa,ge",               -1.0,   6, { 2,14,14,24,22,21}},                 //  -1.0 AO[abfc] D[dace] D[adec] E2[becg] delta[fa] delta[ge] 
    {"abfc,daeb,adbe,becg,fa,ge",               -1.0,   6, { 2,14,14,24,22,21}},                 //  -1.0 AO[abfc] D[daeb] D[adbe] E2[becg] delta[fa] delta[ge] 
    {"abfc,daec,adce,becg,fa,ge",               -1.0,   6, { 2,14,14,24,22,21}},                 //  -1.0 AO[abfc] D[daec] D[adce] E2[becg] delta[fa] delta[ge] 
    {"abfc,daeg,adeh,beci,fa,ge,he,ie",         -2.0,   8, { 2,14,14,24,22,21,21,21}},           //  -2.0 AO[abfc] D[daeg] D[adeh] E2[beci] delta[fa] delta[ge] delta[he] delta[ie] 
    {"abgc,daef,adfe,bfch,ga,hf",                4.0,   6, { 2,14,14,24,22,21}},                 //   4.0 AO[abgc] D[daef] D[adfe] E2[bfch] delta[ga] delta[hf] 
    {"abfc,dgbe,dheb,beic,fa,gd,hd,ie",          2.0,   8, { 2,14,14,24,22,22,22,21}},           //   2.0 AO[abfc] D[dgbe] D[dheb] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"abfc,dgce,dhec,beic,fa,gd,hd,ie",          2.0,   8, { 2,14,14,24,22,22,22,21}},           //   2.0 AO[abfc] D[dgce] D[dhec] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"abfc,dgeb,dhbe,beic,fa,gd,hd,ie",          2.0,   8, { 2,14,14,24,22,22,22,21}},           //   2.0 AO[abfc] D[dgeb] D[dhbe] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"abfc,dgec,dhce,beic,fa,gd,hd,ie",          2.0,   8, { 2,14,14,24,22,22,22,21}},           //   2.0 AO[abfc] D[dgec] D[dhce] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"abfc,dgeh,diej,beck,fa,gd,he,id,je,ke",   -8.0,  10, { 2,14,14,24,22,22,21,22,21,21}},     //  -8.0 AO[abfc] D[dgeh] D[diej] E2[beck] delta[fa] delta[gd] delta[he] delta[id] delta[je] delta[ke] 
    {"abgc,dhef,dife,bfcj,ga,hd,id,jf",          4.0,   8, { 2,14,14,24,22,22,22,21}},           //   4.0 AO[abgc] D[dhef] D[dife] E2[bfcj] delta[ga] delta[hd] delta[id] delta[jf] 
    {"abgc,debf,edfb,bfch,ga,hf",                2.0,   6, { 2,14,14,24,22,21}},                 //   2.0 AO[abgc] D[debf] D[edfb] E2[bfch] delta[ga] delta[hf] 
    {"abgc,decf,edfc,bfch,ga,hf",                2.0,   6, { 2,14,14,24,22,21}},                 //   2.0 AO[abgc] D[decf] D[edfc] E2[bfch] delta[ga] delta[hf] 
    {"abgc,defb,edbf,bfch,ga,hf",                2.0,   6, { 2,14,14,24,22,21}},                 //   2.0 AO[abgc] D[defb] D[edbf] E2[bfch] delta[ga] delta[hf] 
    {"abgc,defc,edcf,bfch,ga,hf",                2.0,   6, { 2,14,14,24,22,21}},                 //   2.0 AO[abgc] D[defc] D[edcf] E2[bfch] delta[ga] delta[hf] 
    {"abgc,defh,edfi,bfcj,ga,hf,if,jf",          4.0,   8, { 2,14,14,24,22,21,21,21}},           //   4.0 AO[abgc] D[defh] D[edfi] E2[bfcj] delta[ga] delta[hf] delta[if] delta[jf] 
    {"abhc,defg,edgf,bgci,ha,ig",               -8.0,   6, { 2,14,14,24,22,21}},                 //  -8.0 AO[abhc] D[defg] D[edgf] E2[bgci] delta[ha] delta[ig] 
    {"abfc,agde,ahed,bdecji,fa,ga,ha,id,je",    -2.0,   9, { 2,14,14,25,22,22,22,21,21}},        //  -2.0 AO[abfc] D[agde] D[ahed] E3[bdecji] delta[fa] delta[ga] delta[ha] delta[id] delta[je] 
    {"abgc,adef,dafe,befchi,ga,he,if",          -1.0,   7, { 2,14,14,25,22,21,21}},              //  -1.0 AO[abgc] D[adef] D[dafe] E3[befchi] delta[ga] delta[he] delta[if] 
    {"abgc,daef,adfe,befchi,ga,he,if",          -1.0,   7, { 2,14,14,25,22,21,21}},              //  -1.0 AO[abgc] D[daef] D[adfe] E3[befchi] delta[ga] delta[he] delta[if] 
    {"abgc,dhef,dife,befckj,ga,hd,id,je,kf",     2.0,   9, { 2,14,14,25,22,22,22,21,21}},        //   2.0 AO[abgc] D[dhef] D[dife] E3[befckj] delta[ga] delta[hd] delta[id] delta[je] delta[kf] 
    {"abhc,defg,edgf,bfgcij,ha,if,jg",           2.0,   7, { 2,14,14,25,22,21,21}},              //   2.0 AO[abhc] D[defg] D[edgf] E3[bfgcij] delta[ha] delta[if] delta[jg] 
    {"abde,cfab,cgba,da,eb,fc,gc",              -1.0,   7, { 1,14,14,21,21,22,22}},              //  -1.0 AO[abde] D[cfab] D[cgba] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abde,cfba,cgab,da,eb,fc,gc",              -1.0,   7, { 1,14,14,21,21,22,22}},              //  -1.0 AO[abde] D[cfba] D[cgab] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abef,cdab,dcba,ea,fb",                     2.0,   5, { 1,14,14,21,21}},                    //   2.0 AO[abef] D[cdab] D[dcba] delta[ea] delta[fb] 
    {"abef,cdba,dcab,ea,fb",                     2.0,   5, { 1,14,14,21,21}},                    //   2.0 AO[abef] D[cdba] D[dcab] delta[ea] delta[fb] 
    {"abed,cfab,cgba,da,eb,fc,gc",               2.0,   7, { 1,14,14,21,21,22,22}},              //   2.0 AO[abed] D[cfab] D[cgba] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abed,cfba,cgab,da,eb,fc,gc",               2.0,   7, { 1,14,14,21,21,22,22}},              //   2.0 AO[abed] D[cfba] D[cgab] delta[da] delta[eb] delta[fc] delta[gc] 
    {"abfe,cdab,dcba,ea,fb",                    -1.0,   5, { 1,14,14,21,21}},                    //  -1.0 AO[abfe] D[cdab] D[dcba] delta[ea] delta[fb] 
    {"abfe,cdba,dcab,ea,fb",                    -1.0,   5, { 1,14,14,21,21}},                    //  -1.0 AO[abfe] D[cdba] D[dcab] delta[ea] delta[fb] 
    {"abec,dgaf,diah,bc,ea,fa,gd,ha,id",         4.0,   9, { 1,14,14,23,21,21,22,21,22}},        //   4.0 AO[abec] D[dgaf] D[diah] E1[bc] delta[ea] delta[fa] delta[gd] delta[ha] delta[id] 
    {"abec,dfab,dgba,bc,ea,fd,gd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abec] D[dfab] D[dgba] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"abec,dfac,dgca,bc,ea,fd,gd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abec] D[dfac] D[dgca] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"abfc,dgae,dhea,bc,fa,gd,hd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abfc] D[dgae] D[dhea] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abec,dfba,dgab,bc,ea,fd,gd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abec] D[dfba] D[dgab] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"abec,dfca,dgac,bc,ea,fd,gd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abec] D[dfca] D[dgac] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"abfc,dgea,dhae,bc,fa,gd,hd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abfc] D[dgea] D[dhae] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abfc,deag,edah,bc,fa,ga,ha",              -2.0,   7, { 1,14,14,23,21,21,21}},              //  -2.0 AO[abfc] D[deag] D[edah] E1[bc] delta[fa] delta[ga] delta[ha] 
    {"abfc,deab,edba,bc,fa",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abfc] D[deab] D[edba] E1[bc] delta[fa] 
    {"abfc,deac,edca,bc,fa",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abfc] D[deac] D[edca] E1[bc] delta[fa] 
    {"abgc,deaf,edfa,bc,ga",                     2.0,   5, { 1,14,14,23,21}},                    //   2.0 AO[abgc] D[deaf] D[edfa] E1[bc] delta[ga] 
    {"abfc,deba,edab,bc,fa",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abfc] D[deba] D[edab] E1[bc] delta[fa] 
    {"abfc,deca,edac,bc,fa",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abfc] D[deca] D[edac] E1[bc] delta[fa] 
    {"abgc,defa,edaf,bc,ga",                     2.0,   5, { 1,14,14,23,21}},                    //   2.0 AO[abgc] D[defa] D[edaf] E1[bc] delta[ga] 
    {"abec,dfab,dgba,ac,eb,fd,gd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abec] D[dfab] D[dgba] E1[ac] delta[eb] delta[fd] delta[gd] 
    {"abec,dfba,dgab,ac,eb,fd,gd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abec] D[dfba] D[dgab] E1[ac] delta[eb] delta[fd] delta[gd] 
    {"abec,dgbf,dibh,ac,eb,fb,gd,hb,id",        -2.0,   9, { 1,14,14,23,21,21,22,21,22}},        //  -2.0 AO[abec] D[dgbf] D[dibh] E1[ac] delta[eb] delta[fb] delta[gd] delta[hb] delta[id] 
    {"abec,dfbc,dgcb,ac,eb,fd,gd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abec] D[dfbc] D[dgcb] E1[ac] delta[eb] delta[fd] delta[gd] 
    {"abfc,dgbe,dheb,ac,fb,gd,hd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abfc] D[dgbe] D[dheb] E1[ac] delta[fb] delta[gd] delta[hd] 
    {"abec,dfcb,dgbc,ac,eb,fd,gd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abec] D[dfcb] D[dgbc] E1[ac] delta[eb] delta[fd] delta[gd] 
    {"abfc,dgeb,dhbe,ac,fb,gd,hd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abfc] D[dgeb] D[dhbe] E1[ac] delta[fb] delta[gd] delta[hd] 
    {"abfc,deab,edba,ac,fb",                     0.5,   5, { 1,14,14,23,21}},                    //   0.5 AO[abfc] D[deab] D[edba] E1[ac] delta[fb] 
    {"abfc,deba,edab,ac,fb",                     0.5,   5, { 1,14,14,23,21}},                    //   0.5 AO[abfc] D[deba] D[edab] E1[ac] delta[fb] 
    {"abfc,debg,edbh,ac,fb,gb,hb",               1.0,   7, { 1,14,14,23,21,21,21}},              //   1.0 AO[abfc] D[debg] D[edbh] E1[ac] delta[fb] delta[gb] delta[hb] 
    {"abfc,debc,edcb,ac,fb",                     0.5,   5, { 1,14,14,23,21}},                    //   0.5 AO[abfc] D[debc] D[edcb] E1[ac] delta[fb] 
    {"abgc,debf,edfb,ac,gb",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abgc] D[debf] D[edfb] E1[ac] delta[gb] 
    {"abfc,decb,edbc,ac,fb",                     0.5,   5, { 1,14,14,23,21}},                    //   0.5 AO[abfc] D[decb] D[edbc] E1[ac] delta[fb] 
    {"abgc,defb,edbf,ac,gb",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abgc] D[defb] D[edbf] E1[ac] delta[gb] 
    {"abce,dgaf,diah,bc,ea,fa,gd,ha,id",        -2.0,   9, { 1,14,14,23,21,21,22,21,22}},        //  -2.0 AO[abce] D[dgaf] D[diah] E1[bc] delta[ea] delta[fa] delta[gd] delta[ha] delta[id] 
    {"abce,dfab,dgba,bc,ea,fd,gd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abce] D[dfab] D[dgba] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"abce,dfac,dgca,bc,ea,fd,gd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abce] D[dfac] D[dgca] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"abcf,dgae,dhea,bc,fa,gd,hd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abcf] D[dgae] D[dhea] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abce,dfba,dgab,bc,ea,fd,gd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abce] D[dfba] D[dgab] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"abce,dfca,dgac,bc,ea,fd,gd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abce] D[dfca] D[dgac] E1[bc] delta[ea] delta[fd] delta[gd] 
    {"abcf,dgea,dhae,bc,fa,gd,hd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abcf] D[dgea] D[dhae] E1[bc] delta[fa] delta[gd] delta[hd] 
    {"abcf,deag,edah,bc,fa,ga,ha",               1.0,   7, { 1,14,14,23,21,21,21}},              //   1.0 AO[abcf] D[deag] D[edah] E1[bc] delta[fa] delta[ga] delta[ha] 
    {"abcf,deab,edba,bc,fa",                     0.5,   5, { 1,14,14,23,21}},                    //   0.5 AO[abcf] D[deab] D[edba] E1[bc] delta[fa] 
    {"abcf,deac,edca,bc,fa",                     0.5,   5, { 1,14,14,23,21}},                    //   0.5 AO[abcf] D[deac] D[edca] E1[bc] delta[fa] 
    {"abcg,deaf,edfa,bc,ga",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abcg] D[deaf] D[edfa] E1[bc] delta[ga] 
    {"abcf,deba,edab,bc,fa",                     0.5,   5, { 1,14,14,23,21}},                    //   0.5 AO[abcf] D[deba] D[edab] E1[bc] delta[fa] 
    {"abcf,deca,edac,bc,fa",                     0.5,   5, { 1,14,14,23,21}},                    //   0.5 AO[abcf] D[deca] D[edac] E1[bc] delta[fa] 
    {"abcg,defa,edaf,bc,ga",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abcg] D[defa] D[edaf] E1[bc] delta[ga] 
    {"abce,dfab,dgba,ac,eb,fd,gd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abce] D[dfab] D[dgba] E1[ac] delta[eb] delta[fd] delta[gd] 
    {"abce,dfba,dgab,ac,eb,fd,gd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abce] D[dfba] D[dgab] E1[ac] delta[eb] delta[fd] delta[gd] 
    {"abce,dgbf,dibh,ac,eb,fb,gd,hb,id",         4.0,   9, { 1,14,14,23,21,21,22,21,22}},        //   4.0 AO[abce] D[dgbf] D[dibh] E1[ac] delta[eb] delta[fb] delta[gd] delta[hb] delta[id] 
    {"abce,dfbc,dgcb,ac,eb,fd,gd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abce] D[dfbc] D[dgcb] E1[ac] delta[eb] delta[fd] delta[gd] 
    {"abcf,dgbe,dheb,ac,fb,gd,hd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abcf] D[dgbe] D[dheb] E1[ac] delta[fb] delta[gd] delta[hd] 
    {"abce,dfcb,dgbc,ac,eb,fd,gd",               0.5,   7, { 1,14,14,23,21,22,22}},              //   0.5 AO[abce] D[dfcb] D[dgbc] E1[ac] delta[eb] delta[fd] delta[gd] 
    {"abcf,dgeb,dhbe,ac,fb,gd,hd",              -1.0,   7, { 1,14,14,23,21,22,22}},              //  -1.0 AO[abcf] D[dgeb] D[dhbe] E1[ac] delta[fb] delta[gd] delta[hd] 
    {"abcf,deab,edba,ac,fb",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abcf] D[deab] D[edba] E1[ac] delta[fb] 
    {"abcf,deba,edab,ac,fb",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abcf] D[deba] D[edab] E1[ac] delta[fb] 
    {"abcf,debg,edbh,ac,fb,gb,hb",              -2.0,   7, { 1,14,14,23,21,21,21}},              //  -2.0 AO[abcf] D[debg] D[edbh] E1[ac] delta[fb] delta[gb] delta[hb] 
    {"abcf,debc,edcb,ac,fb",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abcf] D[debc] D[edcb] E1[ac] delta[fb] 
    {"abcg,debf,edfb,ac,gb",                     2.0,   5, { 1,14,14,23,21}},                    //   2.0 AO[abcg] D[debf] D[edfb] E1[ac] delta[gb] 
    {"abcf,decb,edbc,ac,fb",                    -1.0,   5, { 1,14,14,23,21}},                    //  -1.0 AO[abcf] D[decb] D[edbc] E1[ac] delta[fb] 
    {"abcg,defb,edbf,ac,gb",                     2.0,   5, { 1,14,14,23,21}},                    //   2.0 AO[abcg] D[defb] D[edbf] E1[ac] delta[gb] 
    {"abfc,dgae,dhea,beci,fa,gd,hd,ie",          0.5,   8, { 1,14,14,24,21,22,22,21}},           //   0.5 AO[abfc] D[dgae] D[dhea] E2[beci] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"abfc,dgea,dhae,beci,fa,gd,hd,ie",          0.5,   8, { 1,14,14,24,21,22,22,21}},           //   0.5 AO[abfc] D[dgea] D[dhae] E2[beci] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"abgc,deaf,edfa,bfch,ga,hf",               -1.0,   6, { 1,14,14,24,21,21}},                 //  -1.0 AO[abgc] D[deaf] D[edfa] E2[bfch] delta[ga] delta[hf] 
    {"abgc,defa,edaf,bfch,ga,hf",               -1.0,   6, { 1,14,14,24,21,21}},                 //  -1.0 AO[abgc] D[defa] D[edaf] E2[bfch] delta[ga] delta[hf] 
    {"abfc,dgbe,dheb,aeic,fb,gd,hd,ie",          0.5,   8, { 1,14,14,24,21,22,22,21}},           //   0.5 AO[abfc] D[dgbe] D[dheb] E2[aeic] delta[fb] delta[gd] delta[hd] delta[ie] 
    {"abfc,dgeb,dhbe,aeic,fb,gd,hd,ie",          0.5,   8, { 1,14,14,24,21,22,22,21}},           //   0.5 AO[abfc] D[dgeb] D[dhbe] E2[aeic] delta[fb] delta[gd] delta[hd] delta[ie] 
    {"abgc,debf,edfb,afch,gb,hf",                0.5,   6, { 1,14,14,24,21,21}},                 //   0.5 AO[abgc] D[debf] D[edfb] E2[afch] delta[gb] delta[hf] 
    {"abgc,defb,edbf,afch,gb,hf",                0.5,   6, { 1,14,14,24,21,21}},                 //   0.5 AO[abgc] D[defb] D[edbf] E2[afch] delta[gb] delta[hf] 
    {"abcf,dgae,dhea,beic,fa,gd,hd,ie",          0.5,   8, { 1,14,14,24,21,22,22,21}},           //   0.5 AO[abcf] D[dgae] D[dhea] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"abcf,dgea,dhae,beic,fa,gd,hd,ie",          0.5,   8, { 1,14,14,24,21,22,22,21}},           //   0.5 AO[abcf] D[dgea] D[dhae] E2[beic] delta[fa] delta[gd] delta[hd] delta[ie] 
    {"abcg,deaf,edfa,bfch,ga,hf",                0.5,   6, { 1,14,14,24,21,21}},                 //   0.5 AO[abcg] D[deaf] D[edfa] E2[bfch] delta[ga] delta[hf] 
    {"abcg,defa,edaf,bfch,ga,hf",                0.5,   6, { 1,14,14,24,21,21}},                 //   0.5 AO[abcg] D[defa] D[edaf] E2[bfch] delta[ga] delta[hf] 
    {"abcf,dgbe,dheb,aeci,fb,gd,hd,ie",          0.5,   8, { 1,14,14,24,21,22,22,21}},           //   0.5 AO[abcf] D[dgbe] D[dheb] E2[aeci] delta[fb] delta[gd] delta[hd] delta[ie] 
    {"abcf,dgeb,dhbe,aeci,fb,gd,hd,ie",          0.5,   8, { 1,14,14,24,21,22,22,21}},           //   0.5 AO[abcf] D[dgeb] D[dhbe] E2[aeci] delta[fb] delta[gd] delta[hd] delta[ie] 
    {"abcg,debf,edfb,afch,gb,hf",               -1.0,   6, { 1,14,14,24,21,21}},                 //  -1.0 AO[abcg] D[debf] D[edfb] E2[afch] delta[gb] delta[hf] 
    {"abcg,defb,edbf,afch,gb,hf",               -1.0,   6, { 1,14,14,24,21,21}},                 //  -1.0 AO[abcg] D[defb] D[edbf] E2[afch] delta[gb] delta[hf] 
    {"abcd,egaf,eiah,abcd,fa,ge,ha,ie",         -2.0,   8, { 1,14,14,24,21,22,21,22}},           //  -2.0 AO[abcd] D[egaf] D[eiah] E2[abcd] delta[fa] delta[ge] delta[ha] delta[ie] 
    {"abcd,efab,egba,abdc,fe,ge",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[efab] D[egba] E2[abdc] delta[fe] delta[ge] 
    {"abcd,efac,egca,abcd,fe,ge",               -1.0,   6, { 1,14,14,24,22,22}},                 //  -1.0 AO[abcd] D[efac] D[egca] E2[abcd] delta[fe] delta[ge] 
    {"abcd,efad,egda,abdc,fe,ge",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[efad] D[egda] E2[abdc] delta[fe] delta[ge] 
    {"abcd,egaf,ehfa,abcd,ge,he",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[egaf] D[ehfa] E2[abcd] delta[ge] delta[he] 
    {"abcd,efba,egab,abdc,fe,ge",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[efba] D[egab] E2[abdc] delta[fe] delta[ge] 
    {"abcd,egbf,eibh,abcd,fb,ge,hb,ie",         -2.0,   8, { 1,14,14,24,21,22,21,22}},           //  -2.0 AO[abcd] D[egbf] D[eibh] E2[abcd] delta[fb] delta[ge] delta[hb] delta[ie] 
    {"abcd,efbc,egcb,abdc,fe,ge",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[efbc] D[egcb] E2[abdc] delta[fe] delta[ge] 
    {"abcd,efbd,egdb,abcd,fe,ge",               -1.0,   6, { 1,14,14,24,22,22}},                 //  -1.0 AO[abcd] D[efbd] D[egdb] E2[abcd] delta[fe] delta[ge] 
    {"abcd,egbf,ehfb,abcd,ge,he",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[egbf] D[ehfb] E2[abcd] delta[ge] delta[he] 
    {"abcd,efca,egac,abcd,fe,ge",               -1.0,   6, { 1,14,14,24,22,22}},                 //  -1.0 AO[abcd] D[efca] D[egac] E2[abcd] delta[fe] delta[ge] 
    {"abcd,efcb,egbc,abdc,fe,ge",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[efcb] D[egbc] E2[abdc] delta[fe] delta[ge] 
    {"abcd,egcf,eich,abcd,fc,ge,hc,ie",         -2.0,   8, { 1,14,14,24,21,22,21,22}},           //  -2.0 AO[abcd] D[egcf] D[eich] E2[abcd] delta[fc] delta[ge] delta[hc] delta[ie] 
    {"abcd,efcd,egdc,abdc,fe,ge",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[efcd] D[egdc] E2[abdc] delta[fe] delta[ge] 
    {"abcd,egcf,ehfc,abcd,ge,he",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[egcf] D[ehfc] E2[abcd] delta[ge] delta[he] 
    {"abcd,efda,egad,abdc,fe,ge",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[efda] D[egad] E2[abdc] delta[fe] delta[ge] 
    {"abcd,efdb,egbd,abcd,fe,ge",               -1.0,   6, { 1,14,14,24,22,22}},                 //  -1.0 AO[abcd] D[efdb] D[egbd] E2[abcd] delta[fe] delta[ge] 
    {"abcd,efdc,egcd,abdc,fe,ge",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[efdc] D[egcd] E2[abdc] delta[fe] delta[ge] 
    {"abcd,egdf,eidh,abcd,fd,ge,hd,ie",         -2.0,   8, { 1,14,14,24,21,22,21,22}},           //  -2.0 AO[abcd] D[egdf] D[eidh] E2[abcd] delta[fd] delta[ge] delta[hd] delta[ie] 
    {"abcd,egdf,ehfd,abcd,ge,he",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[egdf] D[ehfd] E2[abcd] delta[ge] delta[he] 
    {"abcd,egfa,ehaf,abcd,ge,he",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[egfa] D[ehaf] E2[abcd] delta[ge] delta[he] 
    {"abcd,egfb,ehbf,abcd,ge,he",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[egfb] D[ehbf] E2[abcd] delta[ge] delta[he] 
    {"abcd,egfc,ehcf,abcd,ge,he",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[egfc] D[ehcf] E2[abcd] delta[ge] delta[he] 
    {"abcd,egfd,ehdf,abcd,ge,he",                0.5,   6, { 1,14,14,24,22,22}},                 //   0.5 AO[abcd] D[egfd] D[ehdf] E2[abcd] delta[ge] delta[he] 
    {"abcd,egfh,eifj,abcd,ge,hf,ie,jf",          2.0,   8, { 1,14,14,24,22,21,22,21}},           //   2.0 AO[abcd] D[egfh] D[eifj] E2[abcd] delta[ge] delta[hf] delta[ie] delta[jf] 
    {"abcd,ehfg,eigf,abcd,he,ie",               -1.0,   6, { 1,14,14,24,22,22}},                 //  -1.0 AO[abcd] D[ehfg] D[eigf] E2[abcd] delta[he] delta[ie] 
    {"abcd,efag,feah,abcd,ga,ha",                1.0,   6, { 1,14,14,24,21,21}},                 //   1.0 AO[abcd] D[efag] D[feah] E2[abcd] delta[ga] delta[ha] 
    {"abcd,efab,feba,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efab] D[feba] E2[abcd] 
    {"abcd,efac,feca,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efac] D[feca] E2[abcd] 
    {"abcd,efad,feda,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efad] D[feda] E2[abcd] 
    {"abcd,efag,fega,abcd",                     -1.0,   4, { 1,14,14,24}},                       //  -1.0 AO[abcd] D[efag] D[fega] E2[abcd] 
    {"abcd,efba,feab,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efba] D[feab] E2[abcd] 
    {"abcd,efbg,febh,abcd,gb,hb",                1.0,   6, { 1,14,14,24,21,21}},                 //   1.0 AO[abcd] D[efbg] D[febh] E2[abcd] delta[gb] delta[hb] 
    {"abcd,efbc,fecb,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efbc] D[fecb] E2[abcd] 
    {"abcd,efbd,fedb,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efbd] D[fedb] E2[abcd] 
    {"abcd,efbg,fegb,abcd",                     -1.0,   4, { 1,14,14,24}},                       //  -1.0 AO[abcd] D[efbg] D[fegb] E2[abcd] 
    {"abcd,efca,feac,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efca] D[feac] E2[abcd] 
    {"abcd,efcb,febc,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efcb] D[febc] E2[abcd] 
    {"abcd,efcg,fech,abcd,gc,hc",                1.0,   6, { 1,14,14,24,21,21}},                 //   1.0 AO[abcd] D[efcg] D[fech] E2[abcd] delta[gc] delta[hc] 
    {"abcd,efcd,fedc,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efcd] D[fedc] E2[abcd] 
    {"abcd,efcg,fegc,abcd",                     -1.0,   4, { 1,14,14,24}},                       //  -1.0 AO[abcd] D[efcg] D[fegc] E2[abcd] 
    {"abcd,efda,fead,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efda] D[fead] E2[abcd] 
    {"abcd,efdb,febd,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efdb] D[febd] E2[abcd] 
    {"abcd,efdc,fecd,abcd",                      0.5,   4, { 1,14,14,24}},                       //   0.5 AO[abcd] D[efdc] D[fecd] E2[abcd] 
    {"abcd,efdg,fedh,abcd,gd,hd",                1.0,   6, { 1,14,14,24,21,21}},                 //   1.0 AO[abcd] D[efdg] D[fedh] E2[abcd] delta[gd] delta[hd] 
    {"abcd,efdg,fegd,abcd",                     -1.0,   4, { 1,14,14,24}},                       //  -1.0 AO[abcd] D[efdg] D[fegd] E2[abcd] 
    {"abcd,efga,feag,abcd",                     -1.0,   4, { 1,14,14,24}},                       //  -1.0 AO[abcd] D[efga] D[feag] E2[abcd] 
    {"abcd,efgb,febg,abcd",                     -1.0,   4, { 1,14,14,24}},                       //  -1.0 AO[abcd] D[efgb] D[febg] E2[abcd] 
    {"abcd,efgc,fecg,abcd",                     -1.0,   4, { 1,14,14,24}},                       //  -1.0 AO[abcd] D[efgc] D[fecg] E2[abcd] 
    {"abcd,efgd,fedg,abcd",                     -1.0,   4, { 1,14,14,24}},                       //  -1.0 AO[abcd] D[efgd] D[fedg] E2[abcd] 
    {"abcd,efgh,fegi,abcd,hg,ig",               -1.0,   6, { 1,14,14,24,21,21}},                 //  -1.0 AO[abcd] D[efgh] D[fegi] E2[abcd] delta[hg] delta[ig] 
    {"abcd,efgh,fehg,abcd",                      2.0,   4, { 1,14,14,24}},                       //   2.0 AO[abcd] D[efgh] D[fehg] E2[abcd] 
    {"abcd,egaf,ehfa,abfidc,ge,he,if",           0.5,   7, { 1,14,14,25,22,22,21}},              //   0.5 AO[abcd] D[egaf] D[ehfa] E3[abfidc] delta[ge] delta[he] delta[if] 
    {"abcd,egbf,ehfb,abfcid,ge,he,if",           0.5,   7, { 1,14,14,25,22,22,21}},              //   0.5 AO[abcd] D[egbf] D[ehfb] E3[abfcid] delta[ge] delta[he] delta[if] 
    {"abcd,egcf,ehfc,abfidc,ge,he,if",           0.5,   7, { 1,14,14,25,22,22,21}},              //   0.5 AO[abcd] D[egcf] D[ehfc] E3[abfidc] delta[ge] delta[he] delta[if] 
    {"abcd,egdf,ehfd,abfcid,ge,he,if",           0.5,   7, { 1,14,14,25,22,22,21}},              //   0.5 AO[abcd] D[egdf] D[ehfd] E3[abfcid] delta[ge] delta[he] delta[if] 
    {"abcd,egfa,ehaf,abfidc,ge,he,if",           0.5,   7, { 1,14,14,25,22,22,21}},              //   0.5 AO[abcd] D[egfa] D[ehaf] E3[abfidc] delta[ge] delta[he] delta[if] 
    {"abcd,egfb,ehbf,abfcid,ge,he,if",           0.5,   7, { 1,14,14,25,22,22,21}},              //   0.5 AO[abcd] D[egfb] D[ehbf] E3[abfcid] delta[ge] delta[he] delta[if] 
    {"abcd,egfc,ehcf,abfidc,ge,he,if",           0.5,   7, { 1,14,14,25,22,22,21}},              //   0.5 AO[abcd] D[egfc] D[ehcf] E3[abfidc] delta[ge] delta[he] delta[if] 
    {"abcd,egfd,ehdf,abfcid,ge,he,if",           0.5,   7, { 1,14,14,25,22,22,21}},              //   0.5 AO[abcd] D[egfd] D[ehdf] E3[abfcid] delta[ge] delta[he] delta[if] 
    {"abcd,egfh,eifj,abfcdk,ge,hf,ie,jf,kf",    -2.0,   9, { 1,14,14,25,22,21,22,21,21}},        //  -2.0 AO[abcd] D[egfh] D[eifj] E3[abfcdk] delta[ge] delta[hf] delta[ie] delta[jf] delta[kf] 
    {"abcd,ehfg,eigf,abgcdj,he,ie,jg",           1.0,   7, { 1,14,14,25,22,22,21}},              //   1.0 AO[abcd] D[ehfg] D[eigf] E3[abgcdj] delta[he] delta[ie] delta[jg] 
    {"abcd,efag,fega,abgcdh,hg",                 0.5,   5, { 1,14,14,25,21}},                    //   0.5 AO[abcd] D[efag] D[fega] E3[abgcdh] delta[hg] 
    {"abcd,efbg,fegb,abgcdh,hg",                 0.5,   5, { 1,14,14,25,21}},                    //   0.5 AO[abcd] D[efbg] D[fegb] E3[abgcdh] delta[hg] 
    {"abcd,efcg,fegc,abgcdh,hg",                 0.5,   5, { 1,14,14,25,21}},                    //   0.5 AO[abcd] D[efcg] D[fegc] E3[abgcdh] delta[hg] 
    {"abcd,efdg,fegd,abgcdh,hg",                 0.5,   5, { 1,14,14,25,21}},                    //   0.5 AO[abcd] D[efdg] D[fegd] E3[abgcdh] delta[hg] 
    {"abcd,efga,feag,abgcdh,hg",                 0.5,   5, { 1,14,14,25,21}},                    //   0.5 AO[abcd] D[efga] D[feag] E3[abgcdh] delta[hg] 
    {"abcd,efgb,febg,abgcdh,hg",                 0.5,   5, { 1,14,14,25,21}},                    //   0.5 AO[abcd] D[efgb] D[febg] E3[abgcdh] delta[hg] 
    {"abcd,efgc,fecg,abgcdh,hg",                 0.5,   5, { 1,14,14,25,21}},                    //   0.5 AO[abcd] D[efgc] D[fecg] E3[abgcdh] delta[hg] 
    {"abcd,efgd,fedg,abgcdh,hg",                 0.5,   5, { 1,14,14,25,21}},                    //   0.5 AO[abcd] D[efgd] D[fedg] E3[abgcdh] delta[hg] 
    {"abcd,efgh,fegi,abgcdj,hg,ig,jg",           1.0,   7, { 1,14,14,25,21,21,21}},              //   1.0 AO[abcd] D[efgh] D[fegi] E3[abgcdj] delta[hg] delta[ig] delta[jg] 
    {"abcd,efgh,fehg,abhcdi,ih",                -2.0,   5, { 1,14,14,25,21}},                    //  -2.0 AO[abcd] D[efgh] D[fehg] E3[abhcdi] delta[ih] 
    {"abcd,ehfg,eigf,abfgcdkj,he,ie,jf,kg",      0.5,   8, { 1,14,14,26,22,22,21,21}},           //   0.5 AO[abcd] D[ehfg] D[eigf] E4[abfgcdkj] delta[he] delta[ie] delta[jf] delta[kg] 
    {"abcd,efgh,fehg,abghcdij,ig,jh",            0.5,   6, { 1,14,14,26,21,21}},                 //   0.5 AO[abcd] D[efgh] D[fehg] E4[abghcdij] delta[ig] delta[jh] 
    {"ac,bead,bgaf,ca,da,eb,fa,gb",              8.0,   8, { 0,14,14,21,21,22,21,22}},           //   8.0 AO[ac] D[bead] D[bgaf] delta[ca] delta[da] delta[eb] delta[fa] delta[gb] 
    {"ad,beac,bfca,da,eb,fb",                   -2.0,   6, { 0,14,14,21,22,22}},                 //  -2.0 AO[ad] D[beac] D[bfca] delta[da] delta[eb] delta[fb] 
    {"ad,beca,bfac,da,eb,fb",                   -2.0,   6, { 0,14,14,21,22,22}},                 //  -2.0 AO[ad] D[beca] D[bfac] delta[da] delta[eb] delta[fb] 
    {"ad,bcae,cbaf,da,ea,fa",                   -4.0,   6, { 0,14,14,21,21,21}},                 //  -4.0 AO[ad] D[bcae] D[cbaf] delta[da] delta[ea] delta[fa] 
    {"ae,bcad,cbda,ea",                          4.0,   4, { 0,14,14,21}},                       //   4.0 AO[ae] D[bcad] D[cbda] delta[ea] 
    {"ae,bcda,cbad,ea",                          4.0,   4, { 0,14,14,21}},                       //   4.0 AO[ae] D[bcda] D[cbad] delta[ea] 
    {"ad,beac,bfca,cg,da,eb,fb,gc",              1.0,   8, { 0,14,14,23,21,22,22,21}},           //   1.0 AO[ad] D[beac] D[bfca] E1[cg] delta[da] delta[eb] delta[fb] delta[gc] 
    {"ad,beca,bfac,cg,da,eb,fb,gc",              1.0,   8, { 0,14,14,23,21,22,22,21}},           //   1.0 AO[ad] D[beca] D[bfac] E1[cg] delta[da] delta[eb] delta[fb] delta[gc] 
    {"ae,bcad,cbda,df,ea,fd",                   -2.0,   6, { 0,14,14,23,21,21}},                 //  -2.0 AO[ae] D[bcad] D[cbda] E1[df] delta[ea] delta[fd] 
    {"ae,bcda,cbad,df,ea,fd",                   -2.0,   6, { 0,14,14,23,21,21}},                 //  -2.0 AO[ae] D[bcda] D[cbad] E1[df] delta[ea] delta[fd] 
    {"ab,cead,cgaf,ba,da,ec,fa,gc",             -4.0,   8, { 0,14,14,23,21,22,21,22}},           //  -4.0 AO[ab] D[cead] D[cgaf] E1[ba] delta[da] delta[ec] delta[fa] delta[gc] 
    {"ab,cdab,ceba,ba,dc,ec",                   -2.0,   6, { 0,14,14,23,22,22}},                 //  -2.0 AO[ab] D[cdab] D[ceba] E1[ba] delta[dc] delta[ec] 
    {"ab,cead,cfda,ba,ec,fc",                    1.0,   6, { 0,14,14,23,22,22}},                 //   1.0 AO[ab] D[cead] D[cfda] E1[ba] delta[ec] delta[fc] 
    {"ab,cdba,ceab,ba,dc,ec",                   -2.0,   6, { 0,14,14,23,22,22}},                 //  -2.0 AO[ab] D[cdba] D[ceab] E1[ba] delta[dc] delta[ec] 
    {"ab,cebd,cgbf,ba,db,ec,fb,gc",             -4.0,   8, { 0,14,14,23,21,22,21,22}},           //  -4.0 AO[ab] D[cebd] D[cgbf] E1[ba] delta[db] delta[ec] delta[fb] delta[gc] 
    {"ab,cebd,cfdb,ba,ec,fc",                    1.0,   6, { 0,14,14,23,22,22}},                 //   1.0 AO[ab] D[cebd] D[cfdb] E1[ba] delta[ec] delta[fc] 
    {"ab,ceda,cfad,ba,ec,fc",                    1.0,   6, { 0,14,14,23,22,22}},                 //   1.0 AO[ab] D[ceda] D[cfad] E1[ba] delta[ec] delta[fc] 
    {"ab,cedb,cfbd,ba,ec,fc",                    1.0,   6, { 0,14,14,23,22,22}},                 //   1.0 AO[ab] D[cedb] D[cfbd] E1[ba] delta[ec] delta[fc] 
    {"ab,cedf,cgdh,ba,ec,fd,gc,hd",              4.0,   8, { 0,14,14,23,22,21,22,21}},           //   4.0 AO[ab] D[cedf] D[cgdh] E1[ba] delta[ec] delta[fd] delta[gc] delta[hd] 
    {"ab,cfde,cged,ba,fc,gc",                   -2.0,   6, { 0,14,14,23,22,22}},                 //  -2.0 AO[ab] D[cfde] D[cged] E1[ba] delta[fc] delta[gc] 
    {"ab,cdae,dcaf,ba,ea,fa",                    2.0,   6, { 0,14,14,23,21,21}},                 //   2.0 AO[ab] D[cdae] D[dcaf] E1[ba] delta[ea] delta[fa] 
    {"ab,cdab,dcba,ba",                          1.0,   4, { 0,14,14,23}},                       //   1.0 AO[ab] D[cdab] D[dcba] E1[ba] 
    {"ab,cdae,dcea,ba",                         -2.0,   4, { 0,14,14,23}},                       //  -2.0 AO[ab] D[cdae] D[dcea] E1[ba] 
    {"ab,cdba,dcab,ba",                          1.0,   4, { 0,14,14,23}},                       //   1.0 AO[ab] D[cdba] D[dcab] E1[ba] 
    {"ab,cdbe,dcbf,ba,eb,fb",                    2.0,   6, { 0,14,14,23,21,21}},                 //   2.0 AO[ab] D[cdbe] D[dcbf] E1[ba] delta[eb] delta[fb] 
    {"ab,cdbe,dceb,ba",                         -2.0,   4, { 0,14,14,23}},                       //  -2.0 AO[ab] D[cdbe] D[dceb] E1[ba] 
    {"ab,cdea,dcae,ba",                         -2.0,   4, { 0,14,14,23}},                       //  -2.0 AO[ab] D[cdea] D[dcae] E1[ba] 
    {"ab,cdeb,dcbe,ba",                         -2.0,   4, { 0,14,14,23}},                       //  -2.0 AO[ab] D[cdeb] D[dcbe] E1[ba] 
    {"ab,cdef,dceg,ba,fe,ge",                   -2.0,   6, { 0,14,14,23,21,21}},                 //  -2.0 AO[ab] D[cdef] D[dceg] E1[ba] delta[fe] delta[ge] 
    {"ab,cdef,dcfe,ba",                          4.0,   4, { 0,14,14,23}},                       //   4.0 AO[ab] D[cdef] D[dcfe] E1[ba] 
    {"ab,cead,cfda,bdga,ec,fc,gd",               1.0,   7, { 0,14,14,24,22,22,21}},              //   1.0 AO[ab] D[cead] D[cfda] E2[bdga] delta[ec] delta[fc] delta[gd] 
    {"ab,cebd,cfdb,bdga,ec,fc,gd",               1.0,   7, { 0,14,14,24,22,22,21}},              //   1.0 AO[ab] D[cebd] D[cfdb] E2[bdga] delta[ec] delta[fc] delta[gd] 
    {"ab,ceda,cfad,bdga,ec,fc,gd",               1.0,   7, { 0,14,14,24,22,22,21}},              //   1.0 AO[ab] D[ceda] D[cfad] E2[bdga] delta[ec] delta[fc] delta[gd] 
    {"ab,cedb,cfbd,bdga,ec,fc,gd",               1.0,   7, { 0,14,14,24,22,22,21}},              //   1.0 AO[ab] D[cedb] D[cfbd] E2[bdga] delta[ec] delta[fc] delta[gd] 
    {"ab,cedf,cgdh,bdai,ec,fd,gc,hd,id",        -4.0,   9, { 0,14,14,24,22,21,22,21,21}},        //  -4.0 AO[ab] D[cedf] D[cgdh] E2[bdai] delta[ec] delta[fd] delta[gc] delta[hd] delta[id] 
    {"ab,cfde,cged,beah,fc,gc,he",               2.0,   7, { 0,14,14,24,22,22,21}},              //   2.0 AO[ab] D[cfde] D[cged] E2[beah] delta[fc] delta[gc] delta[he] 
    {"ab,cdae,dcea,beaf,fe",                     1.0,   5, { 0,14,14,24,21}},                    //   1.0 AO[ab] D[cdae] D[dcea] E2[beaf] delta[fe] 
    {"ab,cdbe,dceb,beaf,fe",                     1.0,   5, { 0,14,14,24,21}},                    //   1.0 AO[ab] D[cdbe] D[dceb] E2[beaf] delta[fe] 
    {"ab,cdea,dcae,beaf,fe",                     1.0,   5, { 0,14,14,24,21}},                    //   1.0 AO[ab] D[cdea] D[dcae] E2[beaf] delta[fe] 
    {"ab,cdeb,dcbe,beaf,fe",                     1.0,   5, { 0,14,14,24,21}},                    //   1.0 AO[ab] D[cdeb] D[dcbe] E2[beaf] delta[fe] 
    {"ab,cdef,dceg,beah,fe,ge,he",               2.0,   7, { 0,14,14,24,21,21,21}},              //   2.0 AO[ab] D[cdef] D[dceg] E2[beah] delta[fe] delta[ge] delta[he] 
    {"ab,cdef,dcfe,bfag,gf",                    -4.0,   5, { 0,14,14,24,21}},                    //  -4.0 AO[ab] D[cdef] D[dcfe] E2[bfag] delta[gf] 
    {"ab,cfde,cged,bdeaih,fc,gc,hd,ie",          1.0,   8, { 0,14,14,25,22,22,21,21}},           //   1.0 AO[ab] D[cfde] D[cged] E3[bdeaih] delta[fc] delta[gc] delta[hd] delta[ie] 
    {"ab,cdef,dcfe,befagh,ge,hf",                1.0,   6, { 0,14,14,25,21,21}},                 //   1.0 AO[ab] D[cdef] D[dcfe] E3[befagh] delta[ge] delta[hf] 
	};

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC3";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 27;
    Out.EqsRes = FEqSet(&EqsRes[0], 549, "MRLCC3/Res");
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

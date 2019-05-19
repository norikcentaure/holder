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
//  "cccc" included as  cccc
//  "ccca" skipped (see ccac)
//  "cccv" included as  cccv
//  "ccac" included as  ccac
//  "ccaa" included as  ccaa
//  "ccav" included as  ccav
//  "ccvc" skipped (see cccv)
//  "ccva" skipped (see ccav)
//  "ccvv" included as  ccvv
//  "cc  " included as  cc  
//  "cacc" skipped (see accc)
//  "caca" skipped (see acac)
//  "cacv" skipped (see acvc)
//  "caac" skipped (see acca)
//  "caaa" skipped (see acaa)
//  "caav" skipped (see acva)
//  "cavc" skipped (see accv)
//  "cava" skipped (see acav)
//  "cavv" skipped (see acvv)
//  "ca  " included as  ca  
//  "cvcc" included as  cvcc
//  "cvca" included as  cvca
//  "cvcv" included as  cvcv
//  "cvac" included as  cvac
//  "cvaa" included as  cvaa
//  "cvav" included as  cvav
//  "cvvc" included as  cvvc
//  "cvva" included as  cvva
//  "cvvv" included as  cvvv
//  "cv  " included as  cv  
//  "accc" included as  accc
//  "acca" included as  acca
//  "accv" included as  accv
//  "acac" included as  acac
//  "acaa" included as  acaa
//  "acav" included as  acav
//  "acvc" included as  acvc
//  "acva" included as  acva
//  "acvv" included as  acvv
//  "ac  " included as  ac  
//  "aacc" included as  aacc
//  "aaca" skipped (see aaac)
//  "aacv" included as  aacv
//  "aaac" included as  aaac
//  "aaaa" included as  aaaa
//  "aaav" included as  aaav
//  "aavc" skipped (see aacv)
//  "aava" skipped (see aaav)
//  "aavv" included as  aavv
//  "aa  " included as  aa  
//  "avcc" included as  avcc
//  "avca" included as  avca
//  "avcv" included as  avcv
//  "avac" included as  avac
//  "avaa" included as  avaa
//  "avav" included as  avav
//  "avvc" included as  avvc
//  "avva" included as  avva
//  "avvv" included as  avvv
//  "av  " included as  av  
//  "vccc" skipped (see cvcc)
//  "vcca" skipped (see cvac)
//  "vccv" skipped (see cvvc)
//  "vcac" skipped (see cvca)
//  "vcaa" skipped (see cvaa)
//  "vcav" skipped (see cvva)
//  "vcvc" skipped (see cvcv)
//  "vcva" skipped (see cvav)
//  "vcvv" skipped (see cvvv)
//  "vc  " included as  vc  
//  "vacc" skipped (see avcc)
//  "vaca" skipped (see avac)
//  "vacv" skipped (see avvc)
//  "vaac" skipped (see avca)
//  "vaaa" skipped (see avaa)
//  "vaav" skipped (see avva)
//  "vavc" skipped (see avcv)
//  "vava" skipped (see avav)
//  "vavv" skipped (see avvv)
//  "va  " included as  va  
//  "vvcc" included as  vvcc
//  "vvca" skipped (see vvac)
//  "vvcv" included as  vvcv
//  "vvac" included as  vvac
//  "vvaa" included as  vvaa
//  "vvav" included as  vvav
//  "vvvc" skipped (see vvcv)
//  "vvva" skipped (see vvav)
//  "vvvv" included as  vvvv
//  "vv  " included as  vv  
// Sum of factors: 90
//
//
//
// With the unique tensors found, the Hamiltonian is:
//   (   0.50000)  ACvvcc[a11,a12,i13,i14] E2[a11,a12,i13,i14] 
// w_vvcc  E_vvcc    (1)    Class:vvcc   OccPattern: -2  0  2
//   (   1.00000)  ACvvca[a12,a11,i14,p19] E2[a11,a12,p19,i14] 
// w_vvca  E_vvac    (2)    Class:vvca   OccPattern: -1 -1  2
//   (   1.00000)  ACccav[i13,i14,p17,a12] E2[p17,a12,i13,i14] 
// w_ccav  E_avcc    (2)    Class:ccav   OccPattern: -2  1  1
//   (   0.50000)  ACvvaa[a11,a12,p19,p20] E2[a11,a12,p19,p20] 
// w_vvaa  E_vvaa    (1)    Class:vvaa   OccPattern:  0 -2  2
//   (   0.50000)  ACccaa[i13,i14,p17,p18] E2[p17,p18,i13,i14] 
// w_ccaa  E_aacc    (1)    Class:ccaa   OccPattern: -2  2  0
//   (   1.00000)  AEcccv[i11,i14,i13,a12] E2[i11,a12,i13,i14] 
// w_cccv  E_cvcc    (2)    Class:vaca   OccPattern: -1  0  1
//   (   1.00000)  ACavca[p17,a12,i13,p20] E2[p17,a12,i13,p20] 
// w_avca  E_avca    (2)    Class:vaca   OccPattern: -1  0  1
//   (   1.00000)  ACvaca[a12,p17,i14,p19] E2[p17,a12,p19,i14] 
// w_vaca  E_avac    (2)    Class:vaca   OccPattern: -1  0  1
//   (   1.00000)  AEvc[a11,i12] E1[a11,i12] 
// w_vc    E_vc      (1)    Class:vaca   OccPattern: -1  0  1
//   (   1.00000)  AEvvvc[a12,a11,a14,i13] E2[a11,a12,i13,a14] 
// w_vvvc  E_vvcv    (2)    Class:vaca   OccPattern: -1  0  1
//   (   1.00000)  AEcacv[i11,p20,i13,a12] E2[i11,a12,i13,p20] 
// w_cacv  E_cvca    (2)    Class:vaaa   OccPattern:  0 -1  1
//   (   1.00000)  AEccav[i11,i14,p19,a12] E2[i11,a12,p19,i14] 
// w_ccav  E_cvac    (2)    Class:vaaa   OccPattern:  0 -1  1
//   (   1.00000)  ACvaaa[a12,p17,p20,p19] E2[p17,a12,p19,p20] 
// w_vaaa  E_avaa    (2)    Class:vaaa   OccPattern:  0 -1  1
//   (   1.00000)  AEva[a11,p18] E1[a11,p18] 
// w_va    E_va      (1)    Class:vaaa   OccPattern:  0 -1  1
//   (   1.00000)  AEvvva[a12,a11,a14,p19] E2[a11,a12,p19,a14] 
// w_vvva  E_vvav    (2)    Class:vaaa   OccPattern:  0 -1  1
//   (   1.00000)  AEccca[i12,i13,i14,p17] E2[p17,i12,i13,i14] 
// w_ccca  E_accc    (2)    Class:caaa   OccPattern: -1  1  0
//   (   1.00000)  AEca[i12,p17] E1[p17,i12] 
// w_ca    E_ac      (1)    Class:caaa   OccPattern: -1  1  0
//   (   1.00000)  ACcaaa[i14,p17,p18,p19] E2[p17,p18,p19,i14] 
// w_caaa  E_aaac    (2)    Class:caaa   OccPattern: -1  1  0
//   (   1.00000)  AEavcv[p17,a12,i13,a14] E2[p17,a12,i13,a14] 
// w_avcv  E_avcv    (2)    Class:caaa   OccPattern: -1  1  0
//   (   1.00000)  AEvvca[a12,a13,i14,p17] E2[p17,a12,a13,i14] 
// w_vvca  E_avvc    (2)    Class:caaa   OccPattern: -1  1  0
//   (   0.50000)  A0cccc[i11,i12,i13,i14] E2[i11,i12,i13,i14] 
// w_cccc  E_cccc    (1)    Class:h0     OccPattern:  0  0  0
//   (   1.00000)  A0cc[i12,i11] E1[i11,i12] 
// w_cc    E_cc      (1)    Class:h0     OccPattern:  0  0  0
//   (   1.00000)  A0cvcv[i11,a12,i13,a14] E2[i11,a12,i13,a14] 
// w_cvcv  E_cvcv    (2)    Class:h0     OccPattern:  0  0  0
//   (   1.00000)  A0vvcc[a13,a12,i11,i14] E2[i11,a12,a13,i14] 
// w_vvcc  E_cvvc    (2)    Class:h0     OccPattern:  0  0  0
//   (   1.00000)  A0ccaa[i13,i12,p17,p20] E2[p17,i12,i13,p20] 
// w_ccaa  E_acca    (2)    Class:h0     OccPattern:  0  0  0
//   (   1.00000)  A0caca[i12,p17,i14,p19] E2[p17,i12,p19,i14] 
// w_caca  E_acac    (2)    Class:h0     OccPattern:  0  0  0
//   (   0.50000)  A0aaaa[p17,p18,p19,p20] E2[p17,p18,p19,p20] 
// w_aaaa  E_aaaa    (1)    Class:h0     OccPattern:  0  0  0
//   (   1.00000)  A0aa[p18,p17] E1[p17,p18] 
// w_aa    E_aa      (1)    Class:h0     OccPattern:  0  0  0
//   (   1.00000)  A0avav[p17,a12,p19,a14] E2[p17,a12,p19,a14] 
// w_avav  E_avav    (2)    Class:h0     OccPattern:  0  0  0
//   (   1.00000)  A0vvaa[a13,a12,p17,p20] E2[p17,a12,a13,p20] 
// w_vvaa  E_avva    (2)    Class:h0     OccPattern:  0  0  0
//   (   0.50000)  A0vvvv[a11,a12,a13,a14] E2[a11,a12,a13,a14] 
// w_vvvv  E_vvvv    (1)    Class:h0     OccPattern:  0  0  0
//   (   1.00000)  A0vv[a12,a11] E1[a11,a12] 
// w_vv    E_vv      (1)    Class:h0     OccPattern:  0  0  0
//   (   1.00000)  AOcccv[i11,i12,i13,a14] E2[i11,i12,i13,a14] 
// w_cccv  E_cccv    (2)    Class:other  OccPattern:  1  0 -1
//   (   1.00000)  AOccca[i12,i11,i14,p19] E2[i11,i12,p19,i14] 
// w_ccca  E_ccac    (2)    Class:other  OccPattern:  1 -1  0
//   (   0.50000)  AOccaa[i11,i12,p19,p20] E2[i11,i12,p19,p20] 
// w_ccaa  E_ccaa    (1)    Class:other  OccPattern:  2 -2  0
//   (   1.00000)  AOccav[i11,i12,p19,a14] E2[i11,i12,p19,a14] 
// w_ccav  E_ccav    (2)    Class:other  OccPattern:  2 -1 -1
//   (   0.50000)  AOvvcc[a13,a14,i11,i12] E2[i11,i12,a13,a14] 
// w_vvcc  E_ccvv    (1)    Class:other  OccPattern:  2  0 -2
//   (   1.00000)  AOca[i11,p18] E1[i11,p18] 
// w_ca    E_ca      (1)    Class:other  OccPattern:  1 -1  0
//   (   1.00000)  AOavca[p19,a12,i11,p20] E2[i11,a12,p19,p20] 
// w_avca  E_cvaa    (2)    Class:other  OccPattern:  1 -2  1
//   (   1.00000)  AOavcv[p19,a12,i11,a14] E2[i11,a12,p19,a14] 
// w_avcv  E_cvav    (2)    Class:other  OccPattern:  1 -1  0
//   (   1.00000)  AOvvca[a13,a12,i11,p20] E2[i11,a12,a13,p20] 
// w_vvca  E_cvva    (2)    Class:other  OccPattern:  1 -1  0
//   (   1.00000)  AOvvvc[a12,a13,a14,i11] E2[i11,a12,a13,a14] 
// w_vvvc  E_cvvv    (2)    Class:other  OccPattern:  1  0 -1
//   (   1.00000)  AOvc[a12,i11] E1[i11,a12] 
// w_vc    E_cv      (1)    Class:other  OccPattern:  1  0 -1
//   (   1.00000)  AOccav[i13,i12,p17,a14] E2[p17,i12,i13,a14] 
// w_ccav  E_accv    (2)    Class:other  OccPattern:  0  1 -1
//   (   1.00000)  AOcaaa[i12,p17,p20,p19] E2[p17,i12,p19,p20] 
// w_caaa  E_acaa    (2)    Class:other  OccPattern:  1 -1  0
//   (   1.00000)  AOvaca[a14,p17,i12,p19] E2[p17,i12,p19,a14] 
// w_vaca  E_acav    (2)    Class:other  OccPattern:  1  0 -1
//   (   1.00000)  AOcacv[i12,p17,i14,a13] E2[p17,i12,a13,i14] 
// w_cacv  E_acvc    (2)    Class:other  OccPattern:  0  1 -1
//   (   1.00000)  AOavca[p20,a13,i12,p17] E2[p17,i12,a13,p20] 
// w_avca  E_acva    (2)    Class:other  OccPattern:  1  0 -1
//   (   1.00000)  AOvvca[a14,a13,i12,p17] E2[p17,i12,a13,a14] 
// w_vvca  E_acvv    (2)    Class:other  OccPattern:  1  1 -2
//   (   1.00000)  AOavca[p17,a14,i13,p18] E2[p17,p18,i13,a14] 
// w_avca  E_aacv    (2)    Class:other  OccPattern: -1  2 -1
//   (   1.00000)  AOvaaa[a14,p17,p18,p19] E2[p17,p18,p19,a14] 
// w_vaaa  E_aaav    (2)    Class:other  OccPattern:  0  1 -1
//   (   0.50000)  AOvvaa[a13,a14,p17,p18] E2[p17,p18,a13,a14] 
// w_vvaa  E_aavv    (1)    Class:other  OccPattern:  0  2 -2
//   (   1.00000)  AOvvva[a12,a13,a14,p17] E2[p17,a12,a13,a14] 
// w_vvva  E_avvv    (2)    Class:other  OccPattern:  0  1 -1
//   (   1.00000)  AOva[a12,p17] E1[p17,a12] 
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
// <E_cv E_cv  | E_cc    | E_vc E_vc > =   10    Class:other 
// <E_av E_cv  | E_cc    | E_vc E_va > =    4    Class:other 
// <E_cv E_ca  | E_cc    | E_ac E_vc > =   10    Class:other 
// <E_av E_av  | E_cc    | E_va E_va > =    2    Class:other 
// <E_ca E_ca  | E_cc    | E_ac E_ac > =   25    Class:other 
// <E_aa E_cv  | E_cc    | E_vc E_aa > =    4    Class:other 
// <E_aa E_cv  | E_cc    | E_ac E_va > =    4    Class:other 
// <E_av E_ca  | E_cc    | E_vc E_aa > =    4    Class:other 
// <E_av E_ca  | E_cc    | E_ac E_va > =    4    Class:other 
// <E_aa E_av  | E_cc    | E_va E_aa > =    4    Class:other 
// <E_aa E_ca  | E_cc    | E_ac E_aa > =   12    Class:other 
// <E_cv E_cv  | E_aa    | E_vc E_vc > =    4    Class:other 
// <E_av E_cv  | E_aa    | E_vc E_va > =    2    Class:other 
// <E_cv E_ca  | E_aa    | E_ac E_vc > =   10    Class:other 
// <E_av E_av  | E_aa    | E_va E_va > =    2    Class:other 
// <E_ca E_ca  | E_aa    | E_ac E_ac > =   44    Class:other 
// <E_aa E_cv  | E_aa    | E_vc E_aa > =    5    Class:other 
// <E_aa E_cv  | E_aa    | E_ac E_va > =    5    Class:other 
// <E_av E_ca  | E_aa    | E_vc E_aa > =    5    Class:other 
// <E_av E_ca  | E_aa    | E_ac E_va > =    5    Class:other 
// <E_aa E_av  | E_aa    | E_va E_aa > =    9    Class:other 
// <E_aa E_ca  | E_aa    | E_ac E_aa > =   23    Class:other 
// <E_cv E_cv  | E_vv    | E_vc E_vc > =    6    Class:other 
// <E_av E_cv  | E_vv    | E_vc E_va > =    3    Class:other 
// <E_cv E_ca  | E_vv    | E_ac E_vc > =    4    Class:other 
// <E_av E_av  | E_vv    | E_va E_va > =    3    Class:other 
// <E_ca E_ca  | E_vv    | E_ac E_ac > =    0    Class:other 
// <E_aa E_cv  | E_vv    | E_vc E_aa > =    2    Class:other 
// <E_aa E_cv  | E_vv    | E_ac E_va > =    2    Class:other 
// <E_av E_ca  | E_vv    | E_vc E_aa > =    2    Class:other 
// <E_av E_ca  | E_vv    | E_ac E_va > =    2    Class:other 
// <E_aa E_av  | E_vv    | E_va E_aa > =    4    Class:other 
// <E_aa E_ca  | E_vv    | E_ac E_aa > =    0    Class:other 
namespace NEVPT3_H0 {

  FTensorDecl TensorDecls[22] = {
    /*  0*/{"A0"     , "aa"       , "", USAGE_Amplitude   },
    /*  1*/{"A0"     , "cc"       , "", USAGE_Amplitude   },
    /*  2*/{"A0"     , "ee"       , "", USAGE_Amplitude   },
    /*  3*/{"f"      , "aa"       , "", USAGE_Hamiltonian },
    /*  4*/{"f"      , "cc"       , "", USAGE_Hamiltonian },
    /*  5*/{"f"      , "ee"       , "", USAGE_Hamiltonian },
    /*  6*/{"D"      , "aeca"     , "", USAGE_Hamiltonian },
    /*  7*/{"D"      , "caaa"     , "", USAGE_Hamiltonian },
    /*  8*/{"D"      , "ccaa"     , "", USAGE_Hamiltonian },
    /*  9*/{"D"      , "ccae"     , "", USAGE_Hamiltonian },
    /* 10*/{"D"      , "eaaa"     , "", USAGE_Hamiltonian },
    /* 11*/{"D"      , "eaca"     , "", USAGE_Hamiltonian },
    /* 12*/{"D"      , "eeaa"     , "", USAGE_Hamiltonian },
    /* 13*/{"D"      , "eeca"     , "", USAGE_Hamiltonian },
    /* 14*/{"D"      , "eecc"     , "", USAGE_Hamiltonian },
    /* 15*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 16*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 17*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 18*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
    /* 19*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 20*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 21*/{"delta"  , "ee"       , "", USAGE_Density     },
  };

  FEqInfo EqsRes[225] = {
    {"ac,bead,bgaf,ca,da,eb,fa,gb",        -8.0,   8, { 1,14,14,20,20,21,20,21}},        //  -8.0 A0[ac] D[bead] D[bgaf] delta[ca] delta[da] delta[eb] delta[fa] delta[gb] 
    {"ad,beac,bfca,da,eb,fb",               2.0,   6, { 1,14,14,20,21,21}},              //   2.0 A0[ad] D[beac] D[bfca] delta[da] delta[eb] delta[fb] 
    {"ad,beca,bfac,da,eb,fb",               2.0,   6, { 1,14,14,20,21,21}},              //   2.0 A0[ad] D[beca] D[bfac] delta[da] delta[eb] delta[fb] 
    {"ad,becf,bgch,da,eb,fc,gb,hc",         8.0,   8, { 1,14,14,20,21,20,21,20}},        //   8.0 A0[ad] D[becf] D[bgch] delta[da] delta[eb] delta[fc] delta[gb] delta[hc] 
    {"ae,bfcd,bgdc,ea,fb,gb",              -4.0,   6, { 1,14,14,20,21,21}},              //  -4.0 A0[ae] D[bfcd] D[bgdc] delta[ea] delta[fb] delta[gb] 
    {"ad,bcae,cbaf,da,ea,fa",               4.0,   6, { 1,14,14,20,20,20}},              //   4.0 A0[ad] D[bcae] D[cbaf] delta[da] delta[ea] delta[fa] 
    {"ae,bcad,cbda,ea",                    -4.0,   4, { 1,14,14,20}},                    //  -4.0 A0[ae] D[bcad] D[cbda] delta[ea] 
    {"ae,bcda,cbad,ea",                    -4.0,   4, { 1,14,14,20}},                    //  -4.0 A0[ae] D[bcda] D[cbad] delta[ea] 
    {"ae,bcdf,cbdg,ea,fd,gd",              -4.0,   6, { 1,14,14,20,20,20}},              //  -4.0 A0[ae] D[bcdf] D[cbdg] delta[ea] delta[fd] delta[gd] 
    {"af,bcde,cbed,fa",                     8.0,   4, { 1,14,14,20}},                    //   8.0 A0[af] D[bcde] D[cbed] delta[fa] 
    {"ad,beac,bfac,cg,da,eb,fb,gc",         1.0,   8, { 1,13,13,15,20,21,21,19}},        //   1.0 A0[ad] D[beac] D[bfac] E1[cg] delta[da] delta[eb] delta[fb] delta[gc] 
    {"ae,bfcd,bgcd,dh,ea,fb,gb,hd",        -2.0,   8, { 1,13,13,15,20,21,21,19}},        //  -2.0 A0[ae] D[bfcd] D[bgcd] E1[dh] delta[ea] delta[fb] delta[gb] delta[hd] 
    {"ae,bcad,bcad,df,ea,fd",              -2.0,   6, { 1,13,13,15,20,19}},              //  -2.0 A0[ae] D[bcad] D[bcad] E1[df] delta[ea] delta[fd] 
    {"af,bcde,bcde,eg,fa,ge",               4.0,   6, { 1,13,13,15,20,19}},              //   4.0 A0[af] D[bcde] D[bcde] E1[eg] delta[fa] delta[ge] 
    {"ad,aebc,afbc,da,ea,fa",               4.0,   6, { 1, 9, 9,20,20,20}},              //   4.0 A0[ad] D[aebc] D[afbc] delta[da] delta[ea] delta[fa] 
    {"ae,abcd,abcd,ea",                    -4.0,   4, { 1, 9, 9,20}},                    //  -4.0 A0[ae] D[abcd] D[abcd] delta[ea] 
    {"ae,bacd,bacd,ea",                    -4.0,   4, { 1, 9, 9,20}},                    //  -4.0 A0[ae] D[bacd] D[bacd] delta[ea] 
    {"ae,bfcd,bgcd,ea,fb,gb",              -4.0,   6, { 1, 9, 9,20,20,20}},              //  -4.0 A0[ae] D[bfcd] D[bgcd] delta[ea] delta[fb] delta[gb] 
    {"af,bcde,bcde,fa",                     8.0,   4, { 1, 9, 9,20}},                    //   8.0 A0[af] D[bcde] D[bcde] delta[fa] 
    {"ad,aebc,afbc,bg,da,ea,fa,gb",        -2.0,   8, { 1, 9, 9,15,20,20,20,19}},        //  -2.0 A0[ad] D[aebc] D[afbc] E1[bg] delta[da] delta[ea] delta[fa] delta[gb] 
    {"ae,abcd,abcd,cf,ea,fc",               2.0,   6, { 1, 9, 9,15,20,19}},              //   2.0 A0[ae] D[abcd] D[abcd] E1[cf] delta[ea] delta[fc] 
    {"ae,bacd,bacd,cf,ea,fc",               2.0,   6, { 1, 9, 9,15,20,19}},              //   2.0 A0[ae] D[bacd] D[bacd] E1[cf] delta[ea] delta[fc] 
    {"ae,bfcd,bgcd,ch,ea,fb,gb,hc",         2.0,   8, { 1, 9, 9,15,20,20,20,19}},        //   2.0 A0[ae] D[bfcd] D[bgcd] E1[ch] delta[ea] delta[fb] delta[gb] delta[hc] 
    {"af,bcde,bcde,dg,fa,gd",              -4.0,   6, { 1, 9, 9,15,20,19}},              //  -4.0 A0[af] D[bcde] D[bcde] E1[dg] delta[fa] delta[gd] 
    {"ae,bfcd,bgdc,cdih,ea,fb,gb,hc,id",    2.0,   9, { 1,12,12,16,20,21,21,19,19}},     //   2.0 A0[ae] D[bfcd] D[bgdc] E2[cdih] delta[ea] delta[fb] delta[gb] delta[hc] delta[id] 
    {"af,bcde,cbed,degh,fa,gd,he",          2.0,   7, { 1,12,12,16,20,19,19}},           //   2.0 A0[af] D[bcde] D[cbed] E2[degh] delta[fa] delta[gd] delta[he] 
    {"ac,adbe,afbg,ca,da,eb,fa,gb",        -8.0,   8, { 1, 8, 8,20,20,19,20,19}},        //  -8.0 A0[ac] D[adbe] D[afbg] delta[ca] delta[da] delta[eb] delta[fa] delta[gb] 
    {"ad,aebc,afcb,da,ea,fa",               4.0,   6, { 1, 8, 8,20,20,20}},              //   4.0 A0[ad] D[aebc] D[afcb] delta[da] delta[ea] delta[fa] 
    {"ad,abce,bacf,da,ec,fc",               2.0,   6, { 1, 8, 8,20,19,19}},              //   2.0 A0[ad] D[abce] D[bacf] delta[da] delta[ec] delta[fc] 
    {"ae,abcd,badc,ea",                    -4.0,   4, { 1, 8, 8,20}},                    //  -4.0 A0[ae] D[abcd] D[badc] delta[ea] 
    {"ad,bace,abcf,da,ec,fc",               2.0,   6, { 1, 8, 8,20,19,19}},              //   2.0 A0[ad] D[bace] D[abcf] delta[da] delta[ec] delta[fc] 
    {"ae,bacd,abdc,ea",                    -4.0,   4, { 1, 8, 8,20}},                    //  -4.0 A0[ae] D[bacd] D[abdc] delta[ea] 
    {"ad,becf,bgch,da,eb,fc,gb,hc",         8.0,   8, { 1, 8, 8,20,20,19,20,19}},        //   8.0 A0[ad] D[becf] D[bgch] delta[da] delta[eb] delta[fc] delta[gb] delta[hc] 
    {"ae,bfcd,bgdc,ea,fb,gb",              -4.0,   6, { 1, 8, 8,20,20,20}},              //  -4.0 A0[ae] D[bfcd] D[bgdc] delta[ea] delta[fb] delta[gb] 
    {"ae,bcdf,cbdg,ea,fd,gd",              -4.0,   6, { 1, 8, 8,20,19,19}},              //  -4.0 A0[ae] D[bcdf] D[cbdg] delta[ea] delta[fd] delta[gd] 
    {"af,bcde,cbed,fa",                     8.0,   4, { 1, 8, 8,20}},                    //   8.0 A0[af] D[bcde] D[cbed] delta[fa] 
    {"ac,adbe,afbg,bh,ca,da,eb,fa,gb,hb",   8.0,  10, { 1, 8, 8,15,20,20,19,20,19,19}},  //   8.0 A0[ac] D[adbe] D[afbg] E1[bh] delta[ca] delta[da] delta[eb] delta[fa] delta[gb] delta[hb] 
    {"ad,aebc,afcb,cg,da,ea,fa,gc",        -4.0,   8, { 1, 8, 8,15,20,20,20,19}},        //  -4.0 A0[ad] D[aebc] D[afcb] E1[cg] delta[da] delta[ea] delta[fa] delta[gc] 
    {"ad,abce,bacf,cg,da,ec,fc,gc",        -2.0,   8, { 1, 8, 8,15,20,19,19,19}},        //  -2.0 A0[ad] D[abce] D[bacf] E1[cg] delta[da] delta[ec] delta[fc] delta[gc] 
    {"ae,abcd,badc,df,ea,fd",               4.0,   6, { 1, 8, 8,15,20,19}},              //   4.0 A0[ae] D[abcd] D[badc] E1[df] delta[ea] delta[fd] 
    {"ad,bace,abcf,cg,da,ec,fc,gc",        -2.0,   8, { 1, 8, 8,15,20,19,19,19}},        //  -2.0 A0[ad] D[bace] D[abcf] E1[cg] delta[da] delta[ec] delta[fc] delta[gc] 
    {"ae,bacd,abdc,df,ea,fd",               4.0,   6, { 1, 8, 8,15,20,19}},              //   4.0 A0[ae] D[bacd] D[abdc] E1[df] delta[ea] delta[fd] 
    {"ad,becf,bgch,ci,da,eb,fc,gb,hc,ic",  -8.0,  10, { 1, 8, 8,15,20,20,19,20,19,19}},  //  -8.0 A0[ad] D[becf] D[bgch] E1[ci] delta[da] delta[eb] delta[fc] delta[gb] delta[hc] delta[ic] 
    {"ae,bfcd,bgdc,dh,ea,fb,gb,hd",         4.0,   8, { 1, 8, 8,15,20,20,20,19}},        //   4.0 A0[ae] D[bfcd] D[bgdc] E1[dh] delta[ea] delta[fb] delta[gb] delta[hd] 
    {"ae,bcdf,cbdg,dh,ea,fd,gd,hd",         4.0,   8, { 1, 8, 8,15,20,19,19,19}},        //   4.0 A0[ae] D[bcdf] D[cbdg] E1[dh] delta[ea] delta[fd] delta[gd] delta[hd] 
    {"af,bcde,cbed,eg,fa,ge",              -8.0,   6, { 1, 8, 8,15,20,19}},              //  -8.0 A0[af] D[bcde] D[cbed] E1[eg] delta[fa] delta[ge] 
    {"ad,aebc,afcb,bchg,da,ea,fa,gb,hc",   -2.0,   9, { 1, 8, 8,16,20,20,20,19,19}},     //  -2.0 A0[ad] D[aebc] D[afcb] E2[bchg] delta[da] delta[ea] delta[fa] delta[gb] delta[hc] 
    {"ae,abcd,badc,cdfg,ea,fc,gd",         -1.0,   7, { 1, 8, 8,16,20,19,19}},           //  -1.0 A0[ae] D[abcd] D[badc] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ae,bacd,abdc,cdfg,ea,fc,gd",         -1.0,   7, { 1, 8, 8,16,20,19,19}},           //  -1.0 A0[ae] D[bacd] D[abdc] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ae,bfcd,bgdc,cdih,ea,fb,gb,hc,id",    2.0,   9, { 1, 8, 8,16,20,20,20,19,19}},     //   2.0 A0[ae] D[bfcd] D[bgdc] E2[cdih] delta[ea] delta[fb] delta[gb] delta[hc] delta[id] 
    {"af,bcde,cbed,degh,fa,gd,he",          2.0,   7, { 1, 8, 8,16,20,19,19}},           //   2.0 A0[af] D[bcde] D[cbed] E2[degh] delta[fa] delta[gd] delta[he] 
    {"ae,bcad,bdac,df,ea,fd",              -2.0,   6, { 1,11,11,15,20,19}},              //  -2.0 A0[ae] D[bcad] D[bdac] E1[df] delta[ea] delta[fd] 
    {"af,bcde,bedc,eg,fa,ge",               4.0,   6, { 1,11,11,15,20,19}},              //   4.0 A0[af] D[bcde] D[bedc] E1[eg] delta[fa] delta[ge] 
    {"ae,bcad,bdac,cdgf,ea,fc,gd",         -2.0,   7, { 1,11,11,16,20,19,19}},           //  -2.0 A0[ae] D[bcad] D[bdac] E2[cdgf] delta[ea] delta[fc] delta[gd] 
    {"af,bcde,bedc,cehg,fa,gc,he",          4.0,   7, { 1,11,11,16,20,19,19}},           //   4.0 A0[af] D[bcde] D[bedc] E2[cehg] delta[fa] delta[gc] delta[he] 
    {"ag,bcde,cfdb,fe,ga",                 -2.0,   5, { 1, 6,11,15,20}},                 //  -2.0 A0[ag] D[bcde] D[cfdb] E1[fe] delta[ga] 
    {"ab,cdae,dfbc,fe",                     1.0,   4, { 1, 6,11,15}},                    //   1.0 A0[ab] D[cdae] D[dfbc] E1[fe] 
    {"ah,bcde,cfdg,bfeg,ha",               -2.0,   5, { 1, 6,11,16,20}},                 //  -2.0 A0[ah] D[bcde] D[cfdg] E2[bfeg] delta[ha] 
    {"ab,cdae,dfbg,cfeg",                   1.0,   4, { 1, 6,11,16}},                    //   1.0 A0[ab] D[cdae] D[dfbg] E2[cfeg] 
    {"ag,bcde,cbdf,ef,ga",                 -2.0,   5, { 1, 6,11,15,20}},                 //  -2.0 A0[ag] D[bcde] D[cbdf] E1[ef] delta[ga] 
    {"ab,cdae,dcbf,ef",                     1.0,   4, { 1, 6,11,15}},                    //   1.0 A0[ab] D[cdae] D[dcbf] E1[ef] 
    {"ah,bcde,cfdg,efbg,ha",               -2.0,   5, { 1, 6,11,16,20}},                 //  -2.0 A0[ah] D[bcde] D[cfdg] E2[efbg] delta[ha] 
    {"ab,cdae,dfbg,efcg",                   1.0,   4, { 1, 6,11,16}},                    //   1.0 A0[ab] D[cdae] D[dfbg] E2[efcg] 
    {"ae,bcad,bcad,df,ea,fd",              -2.0,   6, { 1, 6, 6,15,20,19}},              //  -2.0 A0[ae] D[bcad] D[bcad] E1[df] delta[ea] delta[fd] 
    {"af,bcde,bcde,eg,fa,ge",               4.0,   6, { 1, 6, 6,15,20,19}},              //   4.0 A0[af] D[bcde] D[bcde] E1[eg] delta[fa] delta[ge] 
    {"ae,bcad,bcad,bdfg,ea,fb,gd",          1.0,   7, { 1, 6, 6,16,20,19,19}},           //   1.0 A0[ae] D[bcad] D[bcad] E2[bdfg] delta[ea] delta[fb] delta[gd] 
    {"af,bcde,bcde,begh,fa,gb,he",         -2.0,   7, { 1, 6, 6,16,20,19,19}},           //  -2.0 A0[af] D[bcde] D[bcde] E2[begh] delta[fa] delta[gb] delta[he] 
    {"ae,bcfd,bdcg,dh,ea,fc,gc,hd",         2.0,   8, { 1,10,10,15,20,19,19,19}},        //   2.0 A0[ae] D[bcfd] D[bdcg] E1[dh] delta[ea] delta[fc] delta[gc] delta[hd] 
    {"ae,bcdf,bdgc,cdih,ea,fd,gd,hc,id",    4.0,   9, { 1,10,10,16,20,19,19,19,19}},     //   4.0 A0[ae] D[bcdf] D[bdgc] E2[cdih] delta[ea] delta[fd] delta[gd] delta[hc] delta[id] 
    {"af,bcde,bedc,degh,fa,gd,he",          2.0,   7, { 1,10,10,16,20,19,19}},           //   2.0 A0[af] D[bcde] D[bedc] E2[degh] delta[fa] delta[gd] delta[he] 
    {"af,bcde,bedc,cdeihg,fa,gc,hd,ie",     2.0,   8, { 1,10,10,17,20,19,19,19}},        //   2.0 A0[af] D[bcde] D[bedc] E3[cdeihg] delta[fa] delta[gc] delta[hd] delta[ie] 
    {"ad,abec,acbf,cg,da,eb,fb,gc",         1.0,   8, { 1, 7, 7,15,20,19,19,19}},        //   1.0 A0[ad] D[abec] D[acbf] E1[cg] delta[da] delta[eb] delta[fb] delta[gc] 
    {"ae,abcd,adcb,df,ea,fd",              -2.0,   6, { 1, 7, 7,15,20,19}},              //  -2.0 A0[ae] D[abcd] D[adcb] E1[df] delta[ea] delta[fd] 
    {"ae,bcfd,bdcg,dh,ea,fc,gc,hd",        -2.0,   8, { 1, 7, 7,15,20,19,19,19}},        //  -2.0 A0[ae] D[bcfd] D[bdcg] E1[dh] delta[ea] delta[fc] delta[gc] delta[hd] 
    {"af,bcde,bedc,eg,fa,ge",               4.0,   6, { 1, 7, 7,15,20,19}},              //   4.0 A0[af] D[bcde] D[bedc] E1[eg] delta[fa] delta[ge] 
    {"ad,abce,acfb,bchg,da,ec,fc,gb,hc",    2.0,   9, { 1, 7, 7,16,20,19,19,19,19}},     //   2.0 A0[ad] D[abce] D[acfb] E2[bchg] delta[da] delta[ec] delta[fc] delta[gb] delta[hc] 
    {"ae,abcd,adcb,bdgf,ea,fb,gd",         -2.0,   7, { 1, 7, 7,16,20,19,19}},           //  -2.0 A0[ae] D[abcd] D[adcb] E2[bdgf] delta[ea] delta[fb] delta[gd] 
    {"ae,abcd,adcb,cdfg,ea,fc,gd",          1.0,   7, { 1, 7, 7,16,20,19,19}},           //   1.0 A0[ae] D[abcd] D[adcb] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ae,bcdf,bdgc,cdih,ea,fd,gd,hc,id",   -4.0,   9, { 1, 7, 7,16,20,19,19,19,19}},     //  -4.0 A0[ae] D[bcdf] D[bdgc] E2[cdih] delta[ea] delta[fd] delta[gd] delta[hc] delta[id] 
    {"af,bcde,bedc,cehg,fa,gc,he",          4.0,   7, { 1, 7, 7,16,20,19,19}},           //   4.0 A0[af] D[bcde] D[bedc] E2[cehg] delta[fa] delta[gc] delta[he] 
    {"af,bcde,bedc,degh,fa,gd,he",         -2.0,   7, { 1, 7, 7,16,20,19,19}},           //  -2.0 A0[af] D[bcde] D[bedc] E2[degh] delta[fa] delta[gd] delta[he] 
    {"ae,abcd,adcb,bcdhgf,ea,fb,gc,hd",     1.0,   8, { 1, 7, 7,17,20,19,19,19}},        //   1.0 A0[ae] D[abcd] D[adcb] E3[bcdhgf] delta[ea] delta[fb] delta[gc] delta[hd] 
    {"af,bcde,bedc,cdeihg,fa,gc,hd,ie",    -2.0,   8, { 1, 7, 7,17,20,19,19,19}},        //  -2.0 A0[af] D[bcde] D[bedc] E3[cdeihg] delta[fa] delta[gc] delta[hd] delta[ie] 
    {"ab,cedf,cgdh,ab,ec,fd,gc,hd",         4.0,   8, { 0,14,14,15,21,20,21,20}},        //   4.0 A0[ab] D[cedf] D[cgdh] E1[ab] delta[ec] delta[fd] delta[gc] delta[hd] 
    {"ab,cfde,cged,ab,fc,gc",              -2.0,   6, { 0,14,14,15,21,21}},              //  -2.0 A0[ab] D[cfde] D[cged] E1[ab] delta[fc] delta[gc] 
    {"ab,cdef,dceg,ab,fe,ge",              -2.0,   6, { 0,14,14,15,20,20}},              //  -2.0 A0[ab] D[cdef] D[dceg] E1[ab] delta[fe] delta[ge] 
    {"ab,cdef,dcfe,ab",                     4.0,   4, { 0,14,14,15}},                    //   4.0 A0[ab] D[cdef] D[dcfe] E1[ab] 
    {"ab,cfde,cgde,aebh,fc,gc,he",         -1.0,   7, { 0,13,13,16,21,21,19}},           //  -1.0 A0[ab] D[cfde] D[cgde] E2[aebh] delta[fc] delta[gc] delta[he] 
    {"ab,cdef,cdef,afbg,gf",                2.0,   5, { 0,13,13,16,19}},                 //   2.0 A0[ab] D[cdef] D[cdef] E2[afbg] delta[gf] 
    {"ad,beac,bfac,da,eb,fb",              -2.0,   6, { 0, 9, 9,19,20,20}},              //  -2.0 A0[ad] D[beac] D[bfac] delta[da] delta[eb] delta[fb] 
    {"ae,bcad,bcad,ea",                     4.0,   4, { 0, 9, 9,19}},                    //   4.0 A0[ae] D[bcad] D[bcad] delta[ea] 
    {"ab,cebd,cfbd,ab,ec,fc",               1.0,   6, { 0, 9, 9,15,20,20}},              //   1.0 A0[ab] D[cebd] D[cfbd] E1[ab] delta[ec] delta[fc] 
    {"ab,cebd,cfbd,ba,ec,fc",               1.0,   6, { 0, 9, 9,15,20,20}},              //   1.0 A0[ab] D[cebd] D[cfbd] E1[ba] delta[ec] delta[fc] 
    {"ab,cfde,cgde,ab,fc,gc",              -2.0,   6, { 0, 9, 9,15,20,20}},              //  -2.0 A0[ab] D[cfde] D[cgde] E1[ab] delta[fc] delta[gc] 
    {"ab,cdbe,cdbe,ab",                    -2.0,   4, { 0, 9, 9,15}},                    //  -2.0 A0[ab] D[cdbe] D[cdbe] E1[ab] 
    {"ab,cdbe,cdbe,ba",                    -2.0,   4, { 0, 9, 9,15}},                    //  -2.0 A0[ab] D[cdbe] D[cdbe] E1[ba] 
    {"ab,cdef,cdef,ab",                     4.0,   4, { 0, 9, 9,15}},                    //   4.0 A0[ab] D[cdef] D[cdef] E1[ab] 
    {"ab,cfde,cgde,adbh,fc,gc,hd",          1.0,   7, { 0, 9, 9,16,20,20,19}},           //   1.0 A0[ab] D[cfde] D[cgde] E2[adbh] delta[fc] delta[gc] delta[hd] 
    {"ab,cdef,cdef,aebg,ge",               -2.0,   5, { 0, 9, 9,16,19}},                 //  -2.0 A0[ab] D[cdef] D[cdef] E2[aebg] delta[ge] 
    {"ab,cfde,cged,adebih,fc,gc,hd,ie",     1.0,   8, { 0,12,12,17,21,21,19,19}},        //   1.0 A0[ab] D[cfde] D[cged] E3[adebih] delta[fc] delta[gc] delta[hd] delta[ie] 
    {"ab,cdef,dcfe,aefbgh,ge,hf",           1.0,   6, { 0,12,12,17,19,19}},              //   1.0 A0[ab] D[cdef] D[dcfe] E3[aefbgh] delta[ge] delta[hf] 
    {"ac,bead,bgaf,ca,da,eb,fa,gb",         8.0,   8, { 0, 8, 8,19,19,20,19,20}},        //   8.0 A0[ac] D[bead] D[bgaf] delta[ca] delta[da] delta[eb] delta[fa] delta[gb] 
    {"ad,beac,bfca,da,eb,fb",              -2.0,   6, { 0, 8, 8,19,20,20}},              //  -2.0 A0[ad] D[beac] D[bfca] delta[da] delta[eb] delta[fb] 
    {"ad,beca,bfac,da,eb,fb",              -2.0,   6, { 0, 8, 8,19,20,20}},              //  -2.0 A0[ad] D[beca] D[bfac] delta[da] delta[eb] delta[fb] 
    {"ad,bcae,cbaf,da,ea,fa",              -4.0,   6, { 0, 8, 8,19,19,19}},              //  -4.0 A0[ad] D[bcae] D[cbaf] delta[da] delta[ea] delta[fa] 
    {"ae,bcad,cbda,ea",                     4.0,   4, { 0, 8, 8,19}},                    //   4.0 A0[ae] D[bcad] D[cbda] delta[ea] 
    {"ae,bcda,cbad,ea",                     4.0,   4, { 0, 8, 8,19}},                    //   4.0 A0[ae] D[bcda] D[cbad] delta[ea] 
    {"ad,beac,bfca,cg,da,eb,fb,gc",         1.0,   8, { 0, 8, 8,15,19,20,20,19}},        //   1.0 A0[ad] D[beac] D[bfca] E1[cg] delta[da] delta[eb] delta[fb] delta[gc] 
    {"ad,beca,bfac,cg,da,eb,fb,gc",         1.0,   8, { 0, 8, 8,15,19,20,20,19}},        //   1.0 A0[ad] D[beca] D[bfac] E1[cg] delta[da] delta[eb] delta[fb] delta[gc] 
    {"ae,bcad,cbda,df,ea,fd",              -2.0,   6, { 0, 8, 8,15,19,19}},              //  -2.0 A0[ae] D[bcad] D[cbda] E1[df] delta[ea] delta[fd] 
    {"ae,bcda,cbad,df,ea,fd",              -2.0,   6, { 0, 8, 8,15,19,19}},              //  -2.0 A0[ae] D[bcda] D[cbad] E1[df] delta[ea] delta[fd] 
    {"ab,cdab,ceba,ab,dc,ec",              -2.0,   6, { 0, 8, 8,15,20,20}},              //  -2.0 A0[ab] D[cdab] D[ceba] E1[ab] delta[dc] delta[ec] 
    {"ab,cdab,ceba,ba,dc,ec",              -2.0,   6, { 0, 8, 8,15,20,20}},              //  -2.0 A0[ab] D[cdab] D[ceba] E1[ba] delta[dc] delta[ec] 
    {"ab,cebd,cgbf,ab,db,ec,fb,gc",        -4.0,   8, { 0, 8, 8,15,19,20,19,20}},        //  -4.0 A0[ab] D[cebd] D[cgbf] E1[ab] delta[db] delta[ec] delta[fb] delta[gc] 
    {"ab,cebd,cgbf,ba,db,ec,fb,gc",        -4.0,   8, { 0, 8, 8,15,19,20,19,20}},        //  -4.0 A0[ab] D[cebd] D[cgbf] E1[ba] delta[db] delta[ec] delta[fb] delta[gc] 
    {"ab,cebd,cfdb,ab,ec,fc",               1.0,   6, { 0, 8, 8,15,20,20}},              //   1.0 A0[ab] D[cebd] D[cfdb] E1[ab] delta[ec] delta[fc] 
    {"ab,cebd,cfdb,ba,ec,fc",               1.0,   6, { 0, 8, 8,15,20,20}},              //   1.0 A0[ab] D[cebd] D[cfdb] E1[ba] delta[ec] delta[fc] 
    {"ab,cedb,cfbd,ab,ec,fc",               1.0,   6, { 0, 8, 8,15,20,20}},              //   1.0 A0[ab] D[cedb] D[cfbd] E1[ab] delta[ec] delta[fc] 
    {"ab,cedb,cfbd,ba,ec,fc",               1.0,   6, { 0, 8, 8,15,20,20}},              //   1.0 A0[ab] D[cedb] D[cfbd] E1[ba] delta[ec] delta[fc] 
    {"ab,cedf,cgdh,ab,ec,fd,gc,hd",         4.0,   8, { 0, 8, 8,15,20,19,20,19}},        //   4.0 A0[ab] D[cedf] D[cgdh] E1[ab] delta[ec] delta[fd] delta[gc] delta[hd] 
    {"ab,cfde,cged,ab,fc,gc",              -2.0,   6, { 0, 8, 8,15,20,20}},              //  -2.0 A0[ab] D[cfde] D[cged] E1[ab] delta[fc] delta[gc] 
    {"ab,cdab,dcba,ab",                     1.0,   4, { 0, 8, 8,15}},                    //   1.0 A0[ab] D[cdab] D[dcba] E1[ab] 
    {"ab,cdab,dcba,ba",                     1.0,   4, { 0, 8, 8,15}},                    //   1.0 A0[ab] D[cdab] D[dcba] E1[ba] 
    {"ab,cdbe,dcbf,ab,eb,fb",               2.0,   6, { 0, 8, 8,15,19,19}},              //   2.0 A0[ab] D[cdbe] D[dcbf] E1[ab] delta[eb] delta[fb] 
    {"ab,cdbe,dcbf,ba,eb,fb",               2.0,   6, { 0, 8, 8,15,19,19}},              //   2.0 A0[ab] D[cdbe] D[dcbf] E1[ba] delta[eb] delta[fb] 
    {"ab,cdbe,dceb,ab",                    -2.0,   4, { 0, 8, 8,15}},                    //  -2.0 A0[ab] D[cdbe] D[dceb] E1[ab] 
    {"ab,cdbe,dceb,ba",                    -2.0,   4, { 0, 8, 8,15}},                    //  -2.0 A0[ab] D[cdbe] D[dceb] E1[ba] 
    {"ab,cdeb,dcbe,ab",                    -2.0,   4, { 0, 8, 8,15}},                    //  -2.0 A0[ab] D[cdeb] D[dcbe] E1[ab] 
    {"ab,cdeb,dcbe,ba",                    -2.0,   4, { 0, 8, 8,15}},                    //  -2.0 A0[ab] D[cdeb] D[dcbe] E1[ba] 
    {"ab,cdef,dceg,ab,fe,ge",              -2.0,   6, { 0, 8, 8,15,19,19}},              //  -2.0 A0[ab] D[cdef] D[dceg] E1[ab] delta[fe] delta[ge] 
    {"ab,cdef,dcfe,ab",                     4.0,   4, { 0, 8, 8,15}},                    //   4.0 A0[ab] D[cdef] D[dcfe] E1[ab] 
    {"ab,cebd,cfdb,adgb,ec,fc,gd",          1.0,   7, { 0, 8, 8,16,20,20,19}},           //   1.0 A0[ab] D[cebd] D[cfdb] E2[adgb] delta[ec] delta[fc] delta[gd] 
    {"ab,cebd,cfdb,bdga,ec,fc,gd",          1.0,   7, { 0, 8, 8,16,20,20,19}},           //   1.0 A0[ab] D[cebd] D[cfdb] E2[bdga] delta[ec] delta[fc] delta[gd] 
    {"ab,cedb,cfbd,adgb,ec,fc,gd",          1.0,   7, { 0, 8, 8,16,20,20,19}},           //   1.0 A0[ab] D[cedb] D[cfbd] E2[adgb] delta[ec] delta[fc] delta[gd] 
    {"ab,cedb,cfbd,bdga,ec,fc,gd",          1.0,   7, { 0, 8, 8,16,20,20,19}},           //   1.0 A0[ab] D[cedb] D[cfbd] E2[bdga] delta[ec] delta[fc] delta[gd] 
    {"ab,cedf,cgdh,adbi,ec,fd,gc,hd,id",   -4.0,   9, { 0, 8, 8,16,20,19,20,19,19}},     //  -4.0 A0[ab] D[cedf] D[cgdh] E2[adbi] delta[ec] delta[fd] delta[gc] delta[hd] delta[id] 
    {"ab,cfde,cged,aebh,fc,gc,he",          2.0,   7, { 0, 8, 8,16,20,20,19}},           //   2.0 A0[ab] D[cfde] D[cged] E2[aebh] delta[fc] delta[gc] delta[he] 
    {"ab,cdbe,dceb,aebf,fe",                1.0,   5, { 0, 8, 8,16,19}},                 //   1.0 A0[ab] D[cdbe] D[dceb] E2[aebf] delta[fe] 
    {"ab,cdbe,dceb,beaf,fe",                1.0,   5, { 0, 8, 8,16,19}},                 //   1.0 A0[ab] D[cdbe] D[dceb] E2[beaf] delta[fe] 
    {"ab,cdeb,dcbe,aebf,fe",                1.0,   5, { 0, 8, 8,16,19}},                 //   1.0 A0[ab] D[cdeb] D[dcbe] E2[aebf] delta[fe] 
    {"ab,cdeb,dcbe,beaf,fe",                1.0,   5, { 0, 8, 8,16,19}},                 //   1.0 A0[ab] D[cdeb] D[dcbe] E2[beaf] delta[fe] 
    {"ab,cdef,dceg,aebh,fe,ge,he",          2.0,   7, { 0, 8, 8,16,19,19,19}},           //   2.0 A0[ab] D[cdef] D[dceg] E2[aebh] delta[fe] delta[ge] delta[he] 
    {"ab,cdef,dcfe,afbg,gf",               -4.0,   5, { 0, 8, 8,16,19}},                 //  -4.0 A0[ab] D[cdef] D[dcfe] E2[afbg] delta[gf] 
    {"ab,cfde,cged,adebih,fc,gc,hd,ie",     1.0,   8, { 0, 8, 8,17,20,20,19,19}},        //   1.0 A0[ab] D[cfde] D[cged] E3[adebih] delta[fc] delta[gc] delta[hd] delta[ie] 
    {"ab,cdef,dcfe,aefbgh,ge,hf",           1.0,   6, { 0, 8, 8,17,19,19}},              //   1.0 A0[ab] D[cdef] D[dcfe] E3[aefbgh] delta[ge] delta[hf] 
    {"ae,bcda,badc,cf,ea,fc",               2.0,   6, { 0,11,11,15,19,19}},              //   2.0 A0[ae] D[bcda] D[badc] E1[cf] delta[ea] delta[fc] 
    {"ab,cdeb,cbed,adfb,fd",                2.0,   5, { 0,11,11,16,19}},                 //   2.0 A0[ab] D[cdeb] D[cbed] E2[adfb] delta[fd] 
    {"ab,cdeb,cbed,bdfa,fd",                2.0,   5, { 0,11,11,16,19}},                 //   2.0 A0[ab] D[cdeb] D[cbed] E2[bdfa] delta[fd] 
    {"ab,cdef,cfed,afbg,gf",                2.0,   5, { 0,11,11,16,19}},                 //   2.0 A0[ab] D[cdef] D[cfed] E2[afbg] delta[gf] 
    {"ab,cdef,cfed,adfbhg,gd,hf",           2.0,   6, { 0,11,11,17,19,19}},              //   2.0 A0[ab] D[cdef] D[cfed] E3[adfbhg] delta[gd] delta[hf] 
    {"ab,acde,cfdb,fe",                    -1.0,   4, { 0, 6,11,15}},                    //  -1.0 A0[ab] D[acde] D[cfdb] E1[fe] 
    {"ab,acde,cfdg,bfeg",                  -1.0,   4, { 0, 6,11,16}},                    //  -1.0 A0[ab] D[acde] D[cfdg] E2[bfeg] 
    {"ab,cdef,dgea,cgfb",                  -1.0,   4, { 0, 6,11,16}},                    //  -1.0 A0[ab] D[cdef] D[dgea] E2[cgfb] 
    {"ab,cdef,dgec,agbf",                  -1.0,   4, { 0, 6,11,16}},                    //  -1.0 A0[ab] D[cdef] D[dgec] E2[agbf] 
    {"ab,cdef,dgeh,acgbfh",                -1.0,   4, { 0, 6,11,17}},                    //  -1.0 A0[ab] D[cdef] D[dgeh] E3[acgbfh] 
    {"ab,acde,cbdf,ef",                    -1.0,   4, { 0, 6,11,15}},                    //  -1.0 A0[ab] D[acde] D[cbdf] E1[ef] 
    {"ab,acde,cfdg,efbg",                  -1.0,   4, { 0, 6,11,16}},                    //  -1.0 A0[ab] D[acde] D[cfdg] E2[efbg] 
    {"ab,cdef,daeg,bfgc",                  -1.0,   4, { 0, 6,11,16}},                    //  -1.0 A0[ab] D[cdef] D[daeg] E2[bfgc] 
    {"ab,cdef,dceg,afbg",                  -1.0,   4, { 0, 6,11,16}},                    //  -1.0 A0[ab] D[cdef] D[dceg] E2[afbg] 
    {"ab,cdef,dgeh,afgbch",                -1.0,   4, { 0, 6,11,17}},                    //  -1.0 A0[ab] D[cdef] D[dgeh] E3[afgbch] 
    {"ae,abcd,abcd,df,ea,fd",               2.0,   6, { 0, 6, 6,15,19,19}},              //   2.0 A0[ae] D[abcd] D[abcd] E1[df] delta[ea] delta[fd] 
    {"ab,bcde,bcde,aebf,fe",               -1.0,   5, { 0, 6, 6,16,19}},                 //  -1.0 A0[ab] D[bcde] D[bcde] E2[aebf] delta[fe] 
    {"ab,bcde,bcde,beaf,fe",               -1.0,   5, { 0, 6, 6,16,19}},                 //  -1.0 A0[ab] D[bcde] D[bcde] E2[beaf] delta[fe] 
    {"ab,cdef,cdef,afbg,gf",                2.0,   5, { 0, 6, 6,16,19}},                 //   2.0 A0[ab] D[cdef] D[cdef] E2[afbg] delta[gf] 
    {"ab,cdef,cdef,acfbgh,gc,hf",          -1.0,   6, { 0, 6, 6,17,19,19}},              //  -1.0 A0[ab] D[cdef] D[cdef] E3[acfbgh] delta[gc] delta[hf] 
    {"ae,bcda,badc,cdfg,ea,fc,gd",          1.0,   7, { 0,10,10,16,19,19,19}},           //   1.0 A0[ae] D[bcda] D[badc] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ab,cdbe,cbfd,adgb,eb,fb,gd",          1.0,   7, { 0,10,10,16,19,19,19}},           //   1.0 A0[ab] D[cdbe] D[cbfd] E2[adgb] delta[eb] delta[fb] delta[gd] 
    {"ab,cdbe,cbfd,bdga,eb,fb,gd",          1.0,   7, { 0,10,10,16,19,19,19}},           //   1.0 A0[ab] D[cdbe] D[cbfd] E2[bdga] delta[eb] delta[fb] delta[gd] 
    {"ab,cdfe,cedg,aebh,fd,gd,he",          1.0,   7, { 0,10,10,16,19,19,19}},           //   1.0 A0[ab] D[cdfe] D[cedg] E2[aebh] delta[fd] delta[gd] delta[he] 
    {"ab,cdeb,cbed,adefbg,fd,ge",           1.0,   6, { 0,10,10,17,19,19}},              //   1.0 A0[ab] D[cdeb] D[cbed] E3[adefbg] delta[fd] delta[ge] 
    {"ab,cdeb,cbed,bdefag,fd,ge",           1.0,   6, { 0,10,10,17,19,19}},              //   1.0 A0[ab] D[cdeb] D[cbed] E3[bdefag] delta[fd] delta[ge] 
    {"ab,cdef,cegd,adebih,fe,ge,hd,ie",     2.0,   8, { 0,10,10,17,19,19,19,19}},        //   2.0 A0[ab] D[cdef] D[cegd] E3[adebih] delta[fe] delta[ge] delta[hd] delta[ie] 
    {"ab,cdef,cfed,aefbgh,ge,hf",           1.0,   6, { 0,10,10,17,19,19}},              //   1.0 A0[ab] D[cdef] D[cfed] E3[aefbgh] delta[ge] delta[hf] 
    {"ab,cdef,cfed,adefbihg,gd,he,if",      1.0,   7, { 0,10,10,18,19,19,19}},           //   1.0 A0[ab] D[cdef] D[cfed] E4[adefbihg] delta[gd] delta[he] delta[if] 
    {"ad,bcae,bafc,cg,da,ea,fa,gc",        -2.0,   8, { 0, 7, 7,15,19,19,19,19}},        //  -2.0 A0[ad] D[bcae] D[bafc] E1[cg] delta[da] delta[ea] delta[fa] delta[gc] 
    {"ae,bcad,bdac,cf,ea,fc",               2.0,   6, { 0, 7, 7,15,19,19}},              //   2.0 A0[ae] D[bcad] D[bdac] E1[cf] delta[ea] delta[fc] 
    {"ae,bcda,badc,cf,ea,fc",               2.0,   6, { 0, 7, 7,15,19,19}},              //   2.0 A0[ae] D[bcda] D[badc] E1[cf] delta[ea] delta[fc] 
    {"ae,bcad,bdac,cdgf,ea,fc,gd",          2.0,   7, { 0, 7, 7,16,19,19,19}},           //   2.0 A0[ae] D[bcad] D[bdac] E2[cdgf] delta[ea] delta[fc] delta[gd] 
    {"ae,bcda,badc,cdfg,ea,fc,gd",         -1.0,   7, { 0, 7, 7,16,19,19,19}},           //  -1.0 A0[ae] D[bcda] D[badc] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ab,cdab,cbad,adeb,ed",               -1.0,   5, { 0, 7, 7,16,19}},                 //  -1.0 A0[ab] D[cdab] D[cbad] E2[adeb] delta[ed] 
    {"ab,cdab,cbad,bdea,ed",               -1.0,   5, { 0, 7, 7,16,19}},                 //  -1.0 A0[ab] D[cdab] D[cbad] E2[bdea] delta[ed] 
    {"ab,cdbe,cbfd,adgb,eb,fb,gd",         -2.0,   7, { 0, 7, 7,16,19,19,19}},           //  -2.0 A0[ab] D[cdbe] D[cbfd] E2[adgb] delta[eb] delta[fb] delta[gd] 
    {"ab,cdbe,cbfd,bdga,eb,fb,gd",         -2.0,   7, { 0, 7, 7,16,19,19,19}},           //  -2.0 A0[ab] D[cdbe] D[cbfd] E2[bdga] delta[eb] delta[fb] delta[gd] 
    {"ab,cdbe,cebd,adbf,fd",               -1.0,   5, { 0, 7, 7,16,19}},                 //  -1.0 A0[ab] D[cdbe] D[cebd] E2[adbf] delta[fd] 
    {"ab,cdbe,cebd,bdaf,fd",               -1.0,   5, { 0, 7, 7,16,19}},                 //  -1.0 A0[ab] D[cdbe] D[cebd] E2[bdaf] delta[fd] 
    {"ab,cdfe,cedg,aebh,fd,gd,he",         -1.0,   7, { 0, 7, 7,16,19,19,19}},           //  -1.0 A0[ab] D[cdfe] D[cedg] E2[aebh] delta[fd] delta[gd] delta[he] 
    {"ab,cdeb,cbed,adfb,fd",                2.0,   5, { 0, 7, 7,16,19}},                 //   2.0 A0[ab] D[cdeb] D[cbed] E2[adfb] delta[fd] 
    {"ab,cdeb,cbed,bdfa,fd",                2.0,   5, { 0, 7, 7,16,19}},                 //   2.0 A0[ab] D[cdeb] D[cbed] E2[bdfa] delta[fd] 
    {"ab,cdef,cfed,afbg,gf",                2.0,   5, { 0, 7, 7,16,19}},                 //   2.0 A0[ab] D[cdef] D[cfed] E2[afbg] delta[gf] 
    {"ab,cdbe,cebd,adebgf,fd,ge",          -1.0,   6, { 0, 7, 7,17,19,19}},              //  -1.0 A0[ab] D[cdbe] D[cebd] E3[adebgf] delta[fd] delta[ge] 
    {"ab,cdbe,cebd,bdeagf,fd,ge",          -1.0,   6, { 0, 7, 7,17,19,19}},              //  -1.0 A0[ab] D[cdbe] D[cebd] E3[bdeagf] delta[fd] delta[ge] 
    {"ab,cdeb,cbed,adefbg,fd,ge",          -1.0,   6, { 0, 7, 7,17,19,19}},              //  -1.0 A0[ab] D[cdeb] D[cbed] E3[adefbg] delta[fd] delta[ge] 
    {"ab,cdeb,cbed,bdefag,fd,ge",          -1.0,   6, { 0, 7, 7,17,19,19}},              //  -1.0 A0[ab] D[cdeb] D[cbed] E3[bdefag] delta[fd] delta[ge] 
    {"ab,cdef,cegd,adebih,fe,ge,hd,ie",    -2.0,   8, { 0, 7, 7,17,19,19,19,19}},        //  -2.0 A0[ab] D[cdef] D[cegd] E3[adebih] delta[fe] delta[ge] delta[hd] delta[ie] 
    {"ab,cdef,cfed,adfbhg,gd,hf",           2.0,   6, { 0, 7, 7,17,19,19}},              //   2.0 A0[ab] D[cdef] D[cfed] E3[adfbhg] delta[gd] delta[hf] 
    {"ab,cdef,cfed,aefbgh,ge,hf",          -1.0,   6, { 0, 7, 7,17,19,19}},              //  -1.0 A0[ab] D[cdef] D[cfed] E3[aefbgh] delta[ge] delta[hf] 
    {"ab,cdef,cfed,adefbihg,gd,he,if",     -1.0,   7, { 0, 7, 7,18,19,19,19}},           //  -1.0 A0[ab] D[cdef] D[cfed] E4[adefbihg] delta[gd] delta[he] delta[if] 
    {"ac,adbe,afbg,ca,da,eb,fa,gb",         8.0,   8, { 2,14,14,21,21,20,21,20}},        //   8.0 A0[ac] D[adbe] D[afbg] delta[ca] delta[da] delta[eb] delta[fa] delta[gb] 
    {"ad,aebc,afcb,da,ea,fa",              -4.0,   6, { 2,14,14,21,21,21}},              //  -4.0 A0[ad] D[aebc] D[afcb] delta[da] delta[ea] delta[fa] 
    {"ad,abce,bacf,da,ec,fc",              -2.0,   6, { 2,14,14,21,20,20}},              //  -2.0 A0[ad] D[abce] D[bacf] delta[da] delta[ec] delta[fc] 
    {"ae,abcd,badc,ea",                     4.0,   4, { 2,14,14,21}},                    //   4.0 A0[ae] D[abcd] D[badc] delta[ea] 
    {"ad,bace,abcf,da,ec,fc",              -2.0,   6, { 2,14,14,21,20,20}},              //  -2.0 A0[ad] D[bace] D[abcf] delta[da] delta[ec] delta[fc] 
    {"ae,bacd,abdc,ea",                     4.0,   4, { 2,14,14,21}},                    //   4.0 A0[ae] D[bacd] D[abdc] delta[ea] 
    {"ad,aebc,afbc,cg,da,ea,fa,gc",        -2.0,   8, { 2,13,13,15,21,21,21,19}},        //  -2.0 A0[ad] D[aebc] D[afbc] E1[cg] delta[da] delta[ea] delta[fa] delta[gc] 
    {"ae,abcd,abcd,df,ea,fd",               2.0,   6, { 2,13,13,15,21,19}},              //   2.0 A0[ae] D[abcd] D[abcd] E1[df] delta[ea] delta[fd] 
    {"ae,bacd,bacd,df,ea,fd",               2.0,   6, { 2,13,13,15,21,19}},              //   2.0 A0[ae] D[bacd] D[bacd] E1[df] delta[ea] delta[fd] 
    {"ad,beca,bfca,da,eb,fb",              -2.0,   6, { 2, 9, 9,21,20,20}},              //  -2.0 A0[ad] D[beca] D[bfca] delta[da] delta[eb] delta[fb] 
    {"ae,bcda,bcda,ea",                     4.0,   4, { 2, 9, 9,21}},                    //   4.0 A0[ae] D[bcda] D[bcda] delta[ea] 
    {"ad,beca,bfca,cg,da,eb,fb,gc",         1.0,   8, { 2, 9, 9,15,21,20,20,19}},        //   1.0 A0[ad] D[beca] D[bfca] E1[cg] delta[da] delta[eb] delta[fb] delta[gc] 
    {"ae,bcda,bcda,df,ea,fd",              -2.0,   6, { 2, 9, 9,15,21,19}},              //  -2.0 A0[ae] D[bcda] D[bcda] E1[df] delta[ea] delta[fd] 
    {"ad,aebc,afcb,bchg,da,ea,fa,gb,hc",    2.0,   9, { 2,12,12,16,21,21,21,19,19}},     //   2.0 A0[ad] D[aebc] D[afcb] E2[bchg] delta[da] delta[ea] delta[fa] delta[gb] delta[hc] 
    {"ae,abcd,badc,cdfg,ea,fc,gd",          1.0,   7, { 2,12,12,16,21,19,19}},           //   1.0 A0[ae] D[abcd] D[badc] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ae,bacd,abdc,cdfg,ea,fc,gd",          1.0,   7, { 2,12,12,16,21,19,19}},           //   1.0 A0[ae] D[bacd] D[abdc] E2[cdfg] delta[ea] delta[fc] delta[gd] 
    {"ae,abcd,adcb,bf,ea,fb",               2.0,   6, { 2,11,11,15,21,19}},              //   2.0 A0[ae] D[abcd] D[adcb] E1[bf] delta[ea] delta[fb] 
    {"ae,abcd,adcb,bdgf,ea,fb,gd",          2.0,   7, { 2,11,11,16,21,19,19}},           //   2.0 A0[ae] D[abcd] D[adcb] E2[bdgf] delta[ea] delta[fb] delta[gd] 
    {"ab,cade,bfdc,fe",                    -1.0,   4, { 2, 6,11,15}},                    //  -1.0 A0[ab] D[cade] D[bfdc] E1[fe] 
    {"ab,cade,bfdg,cfeg",                  -1.0,   4, { 2, 6,11,16}},                    //  -1.0 A0[ab] D[cade] D[bfdg] E2[cfeg] 
    {"ab,cade,bcdf,ef",                    -1.0,   4, { 2, 6,11,15}},                    //  -1.0 A0[ab] D[cade] D[bcdf] E1[ef] 
    {"ab,cade,bfdg,efcg",                  -1.0,   4, { 2, 6,11,16}},                    //  -1.0 A0[ab] D[cade] D[bfdg] E2[efcg] 
    {"ae,bacd,bacd,df,ea,fd",               2.0,   6, { 2, 6, 6,15,21,19}},              //   2.0 A0[ae] D[bacd] D[bacd] E1[df] delta[ea] delta[fd] 
    {"ae,bacd,bacd,bdfg,ea,fb,gd",         -1.0,   7, { 2, 6, 6,16,21,19,19}},           //  -1.0 A0[ae] D[bacd] D[bacd] E2[bdfg] delta[ea] delta[fb] delta[gd] 
    {"ad,abce,acfb,bg,da,ec,fc,gb",         1.0,   8, { 2,10,10,15,21,19,19,19}},        //   1.0 A0[ad] D[abce] D[acfb] E1[bg] delta[da] delta[ec] delta[fc] delta[gb] 
    {"ad,abce,acfb,bchg,da,ec,fc,gb,hc",    2.0,   9, { 2,10,10,16,21,19,19,19,19}},     //   2.0 A0[ad] D[abce] D[acfb] E2[bchg] delta[da] delta[ec] delta[fc] delta[gb] delta[hc] 
    {"ae,abcd,adcb,bcfg,ea,fb,gc",          1.0,   7, { 2,10,10,16,21,19,19}},           //   1.0 A0[ae] D[abcd] D[adcb] E2[bcfg] delta[ea] delta[fb] delta[gc] 
    {"ae,abcd,adcb,bcdhgf,ea,fb,gc,hd",     1.0,   8, { 2,10,10,17,21,19,19,19}},        //   1.0 A0[ae] D[abcd] D[adcb] E3[bcdhgf] delta[ea] delta[fb] delta[gc] delta[hd] 
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT3_H0";
    Out.Whandcoded_if_zero = 0;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 22;
    Out.EqsRes = FEqSet(&EqsRes[0], 225, "NEVPT3_H0/Res");
  };
};

// Log:
//    0 cccc     passed
//    1 cccv     passed
//    2 ccac     passed
//    3 ccaa     passed
//    4 ccav     passed
//    5 ccvv     passed
//    6 cc       evaluated
//    7 ca       passed
//    8 cvcc     passed
//    9 cvca     passed
//   10 cvcv     passed
//   11 cvac     passed
//   12 cvaa     passed
//   13 cvav     passed
//   14 cvvc     passed
//   15 cvva     passed
//   16 cvvv     passed
//   17 cv       passed
//   18 accc     passed
//   19 acca     passed
//   20 accv     passed
//   21 acac     passed
//   22 acaa     passed
//   23 acav     passed
//   24 acvc     passed
//   25 acva     passed
//   26 acvv     passed
//   27 ac       passed
//   28 aacc     passed
//   29 aacv     passed
//   30 aaac     passed
//   31 aaaa     passed
//   32 aaav     passed
//   33 aavv     passed
//   34 aa       evaluated
//   35 avcc     passed
//   36 avca     passed
//   37 avcv     passed
//   38 avac     passed
//   39 avaa     passed
//   40 avav     passed
//   41 avvc     passed
//   42 avva     passed
//   43 avvv     passed
//   44 av       passed
//   45 vc       passed
//   46 va       passed
//   47 vvcc     passed
//   48 vvcv     passed
//   49 vvac     passed
//   50 vvaa     passed
//   51 vvav     passed
//   52 vvvv     passed
//   53 vv       evaluated

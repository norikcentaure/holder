namespace NEVPT_AAAC {

  FTensorDecl TensorDecls[20] = {
    /*  0*/{"R"      , "caaa"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "caaa"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "caaa"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "caaa"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "caaa"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "caaa"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "caaa"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "caaa"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "caaa"     , "", USAGE_Amplitude   },
    /*  9*/{"f"      , "ca"       , "", USAGE_Hamiltonian },
    /* 10*/{"W"      , "caaa"     , "", USAGE_Hamiltonian },
    /* 11*/{"f"      , "aa"       , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "aaaa"     , "", USAGE_Hamiltonian },
    /* 13*/{"f"      , "cc"       , "", USAGE_Hamiltonian },
    /* 14*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 15*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 16*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 17*/{"S1"     , "aaaaaa"   , "", USAGE_Density     },
    /* 18*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 19*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

  FEqInfo EqsRes[74] = {
    {"abcd,be,acef,df",          -1.0,   4, { 6,11, 5,15}},  //  -1.0 Ap[abcd] f[be] p[acef] E1[df] 
    {"abcd,be,aecf,df",           2.0,   4, { 6,11, 5,15}},  //   2.0 Ap[abcd] f[be] p[aecf] E1[df] 
    {"abcd,ce,abef,df",           2.0,   4, { 6,11, 5,15}},  //   2.0 Ap[abcd] f[ce] p[abef] E1[df] 
    {"abcd,ce,aebf,df",          -1.0,   4, { 6,11, 5,15}},  //  -1.0 Ap[abcd] f[ce] p[aebf] E1[df] 
    {"abcd,ef,abce,df",          -2.0,   4, { 6,11, 5,15}},  //  -2.0 Ap[abcd] f[ef] p[abce] E1[df] 
    {"abcd,ef,acbe,df",           1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] f[ef] p[acbe] E1[df] 
    {"abcd,bcef,aefg,dg",         2.0,   4, { 6,12, 5,15}},  //   2.0 Ap[abcd] W[bcef] p[aefg] E1[dg] 
    {"abcd,bcef,afeg,dg",        -1.0,   4, { 6,12, 5,15}},  //  -1.0 Ap[abcd] W[bcef] p[afeg] E1[dg] 
    {"abcd,ae,ebcf,df",          -2.0,   4, { 6,13, 5,15}},  //  -2.0 Ap[abcd] f[ae] p[ebcf] E1[df] 
    {"abcd,ae,ecbf,df",           1.0,   4, { 6,13, 5,15}},  //   1.0 Ap[abcd] f[ae] p[ecbf] E1[df] 
    {"abcd,be,aefg,dfgc",        -1.0,   4, { 6,11, 5,16}},  //  -1.0 Ap[abcd] f[be] p[aefg] E2[dfgc] 
    {"abcd,be,afeg,dfcg",        -1.0,   4, { 6,11, 5,16}},  //  -1.0 Ap[abcd] f[be] p[afeg] E2[dfcg] 
    {"abcd,ce,aefg,dfbg",        -1.0,   4, { 6,11, 5,16}},  //  -1.0 Ap[abcd] f[ce] p[aefg] E2[dfbg] 
    {"abcd,ce,afeg,dfbg",         2.0,   4, { 6,11, 5,16}},  //   2.0 Ap[abcd] f[ce] p[afeg] E2[dfbg] 
    {"abcd,ef,abeg,dfgc",        -1.0,   4, { 6,11, 5,16}},  //  -1.0 Ap[abcd] f[ef] p[abeg] E2[dfgc] 
    {"abcd,ef,abge,dgfc",         1.0,   4, { 6,11, 5,16}},  //   1.0 Ap[abcd] f[ef] p[abge] E2[dgfc] 
    {"abcd,ef,aceg,dfbg",        -1.0,   4, { 6,11, 5,16}},  //  -1.0 Ap[abcd] f[ef] p[aceg] E2[dfbg] 
    {"abcd,ef,acge,dgbf",         1.0,   4, { 6,11, 5,16}},  //   1.0 Ap[abcd] f[ef] p[acge] E2[dgbf] 
    {"abcd,ef,aebg,dfcg",        -1.0,   4, { 6,11, 5,16}},  //  -1.0 Ap[abcd] f[ef] p[aebg] E2[dfcg] 
    {"abcd,ef,aecg,dfbg",         2.0,   4, { 6,11, 5,16}},  //   2.0 Ap[abcd] f[ef] p[aecg] E2[dfbg] 
    {"abcd,ef,agbe,dgcf",         1.0,   4, { 6,11, 5,16}},  //   1.0 Ap[abcd] f[ef] p[agbe] E2[dgcf] 
    {"abcd,ef,agce,dgbf",        -2.0,   4, { 6,11, 5,16}},  //  -2.0 Ap[abcd] f[ef] p[agce] E2[dgbf] 
    {"abcd,bcef,aegh,dghf",      -1.0,   4, { 6,12, 5,16}},  //  -1.0 Ap[abcd] W[bcef] p[aegh] E2[dghf] 
    {"abcd,bcef,afgh,dgeh",      -1.0,   4, { 6,12, 5,16}},  //  -1.0 Ap[abcd] W[bcef] p[afgh] E2[dgeh] 
    {"abcd,bcef,ageh,dgfh",      -1.0,   4, { 6,12, 5,16}},  //  -1.0 Ap[abcd] W[bcef] p[ageh] E2[dgfh] 
    {"abcd,bcef,agfh,dgeh",       2.0,   4, { 6,12, 5,16}},  //   2.0 Ap[abcd] W[bcef] p[agfh] E2[dgeh] 
    {"abcd,befg,aceh,dgfh",      -1.0,   4, { 6,12, 5,16}},  //  -1.0 Ap[abcd] W[befg] p[aceh] E2[dgfh] 
    {"abcd,befg,acfh,dehg",      -1.0,   4, { 6,12, 5,16}},  //  -1.0 Ap[abcd] W[befg] p[acfh] E2[dehg] 
    {"abcd,befg,ache,dhfg",       1.0,   4, { 6,12, 5,16}},  //   1.0 Ap[abcd] W[befg] p[ache] E2[dhfg] 
    {"abcd,befg,aech,dgfh",       2.0,   4, { 6,12, 5,16}},  //   2.0 Ap[abcd] W[befg] p[aech] E2[dgfh] 
    {"abcd,befg,aefh,dgch",      -1.0,   4, { 6,12, 5,16}},  //  -1.0 Ap[abcd] W[befg] p[aefh] E2[dgch] 
    {"abcd,befg,afch,dehg",       2.0,   4, { 6,12, 5,16}},  //   2.0 Ap[abcd] W[befg] p[afch] E2[dehg] 
    {"abcd,befg,afeh,dghc",      -1.0,   4, { 6,12, 5,16}},  //  -1.0 Ap[abcd] W[befg] p[afeh] E2[dghc] 
    {"abcd,befg,ahce,dhfg",      -2.0,   4, { 6,12, 5,16}},  //  -2.0 Ap[abcd] W[befg] p[ahce] E2[dhfg] 
    {"abcd,cefg,abeh,dghf",      -1.0,   4, { 6,12, 5,16}},  //  -1.0 Ap[abcd] W[cefg] p[abeh] E2[dghf] 
    {"abcd,cefg,abfh,dehg",       2.0,   4, { 6,12, 5,16}},  //   2.0 Ap[abcd] W[cefg] p[abfh] E2[dehg] 
    {"abcd,cefg,abhe,dhgf",       1.0,   4, { 6,12, 5,16}},  //   1.0 Ap[abcd] W[cefg] p[abhe] E2[dhgf] 
    {"abcd,cefg,aebh,dgfh",      -1.0,   4, { 6,12, 5,16}},  //  -1.0 Ap[abcd] W[cefg] p[aebh] E2[dgfh] 
    {"abcd,cefg,aefh,dgbh",       2.0,   4, { 6,12, 5,16}},  //   2.0 Ap[abcd] W[cefg] p[aefh] E2[dgbh] 
    {"abcd,cefg,afbh,dehg",      -1.0,   4, { 6,12, 5,16}},  //  -1.0 Ap[abcd] W[cefg] p[afbh] E2[dehg] 
    {"abcd,cefg,afeh,dgbh",      -1.0,   4, { 6,12, 5,16}},  //  -1.0 Ap[abcd] W[cefg] p[afeh] E2[dgbh] 
    {"abcd,cefg,ahbe,dhfg",       1.0,   4, { 6,12, 5,16}},  //   1.0 Ap[abcd] W[cefg] p[ahbe] E2[dhfg] 
    {"abcd,efgh,abce,dfgh",      -2.0,   4, { 6,12, 5,16}},  //  -2.0 Ap[abcd] W[efgh] p[abce] E2[dfgh] 
    {"abcd,efgh,acbe,dfgh",       1.0,   4, { 6,12, 5,16}},  //   1.0 Ap[abcd] W[efgh] p[acbe] E2[dfgh] 
    {"abcd,ae,ebfg,dfgc",         1.0,   4, { 6,13, 5,16}},  //   1.0 Ap[abcd] f[ae] p[ebfg] E2[dfgc] 
    {"abcd,ae,ecfg,dfbg",         1.0,   4, { 6,13, 5,16}},  //   1.0 Ap[abcd] f[ae] p[ecfg] E2[dfbg] 
    {"abcd,ae,efbg,dfcg",         1.0,   4, { 6,13, 5,16}},  //   1.0 Ap[abcd] f[ae] p[efbg] E2[dfcg] 
    {"abcd,ae,efcg,dfbg",        -2.0,   4, { 6,13, 5,16}},  //  -2.0 Ap[abcd] f[ae] p[efcg] E2[dfbg] 
    {"abcd,ef,aegh,dfgbhc",      -1.0,   4, { 6,11, 5,18}},  //  -1.0 Ap[abcd] f[ef] p[aegh] E3[dfgbhc] 
    {"abcd,ef,ageh,dfgbch",      -1.0,   4, { 6,11, 5,18}},  //  -1.0 Ap[abcd] f[ef] p[ageh] E3[dfgbch] 
    {"abcd,ef,aghe,dghbfc",       1.0,   4, { 6,11, 5,18}},  //   1.0 Ap[abcd] f[ef] p[aghe] E3[dghbfc] 
    {"abcd,befg,aehi,dghfic",    -1.0,   4, { 6,12, 5,18}},  //  -1.0 Ap[abcd] W[befg] p[aehi] E3[dghfic] 
    {"abcd,befg,afhi,dehigc",    -1.0,   4, { 6,12, 5,18}},  //  -1.0 Ap[abcd] W[befg] p[afhi] E3[dehigc] 
    {"abcd,befg,ahei,dghfci",    -1.0,   4, { 6,12, 5,18}},  //  -1.0 Ap[abcd] W[befg] p[ahei] E3[dghfci] 
    {"abcd,befg,ahfi,dehcgi",    -1.0,   4, { 6,12, 5,18}},  //  -1.0 Ap[abcd] W[befg] p[ahfi] E3[dehcgi] 
    {"abcd,befg,ahie,dhifgc",     1.0,   4, { 6,12, 5,18}},  //   1.0 Ap[abcd] W[befg] p[ahie] E3[dhifgc] 
    {"abcd,cefg,aehi,dghbif",    -1.0,   4, { 6,12, 5,18}},  //  -1.0 Ap[abcd] W[cefg] p[aehi] E3[dghbif] 
    {"abcd,cefg,afhi,dehbgi",    -1.0,   4, { 6,12, 5,18}},  //  -1.0 Ap[abcd] W[cefg] p[afhi] E3[dehbgi] 
    {"abcd,cefg,ahei,dghbfi",    -1.0,   4, { 6,12, 5,18}},  //  -1.0 Ap[abcd] W[cefg] p[ahei] E3[dghbfi] 
    {"abcd,cefg,ahfi,dehbgi",     2.0,   4, { 6,12, 5,18}},  //   2.0 Ap[abcd] W[cefg] p[ahfi] E3[dehbgi] 
    {"abcd,cefg,ahie,dhibgf",     1.0,   4, { 6,12, 5,18}},  //   1.0 Ap[abcd] W[cefg] p[ahie] E3[dhibgf] 
    {"abcd,efgh,abei,dfgihc",    -1.0,   4, { 6,12, 5,18}},  //  -1.0 Ap[abcd] W[efgh] p[abei] E3[dfgihc] 
    {"abcd,efgh,abie,dfighc",     1.0,   4, { 6,12, 5,18}},  //   1.0 Ap[abcd] W[efgh] p[abie] E3[dfighc] 
    {"abcd,efgh,acei,dfgbhi",    -1.0,   4, { 6,12, 5,18}},  //  -1.0 Ap[abcd] W[efgh] p[acei] E3[dfgbhi] 
    {"abcd,efgh,acie,dfibhg",     1.0,   4, { 6,12, 5,18}},  //   1.0 Ap[abcd] W[efgh] p[acie] E3[dfibhg] 
    {"abcd,efgh,aebi,dfgchi",    -1.0,   4, { 6,12, 5,18}},  //  -1.0 Ap[abcd] W[efgh] p[aebi] E3[dfgchi] 
    {"abcd,efgh,aeci,dfgbhi",     2.0,   4, { 6,12, 5,18}},  //   2.0 Ap[abcd] W[efgh] p[aeci] E3[dfgbhi] 
    {"abcd,efgh,aefi,dghbic",    -1.0,   4, { 6,12, 5,18}},  //  -1.0 Ap[abcd] W[efgh] p[aefi] E3[dghbic] 
    {"abcd,efgh,aibe,dfichg",     1.0,   4, { 6,12, 5,18}},  //   1.0 Ap[abcd] W[efgh] p[aibe] E3[dfichg] 
    {"abcd,efgh,aice,dfibhg",    -2.0,   4, { 6,12, 5,18}},  //  -2.0 Ap[abcd] W[efgh] p[aice] E3[dfibhg] 
    {"abcd,ae,efgh,dfgbhc",       1.0,   4, { 6,13, 5,18}},  //   1.0 Ap[abcd] f[ae] p[efgh] E3[dfgbhc] 
    {"abcd,efgh,aeij,dfgibhjc",  -1.0,   4, { 6,12, 5,19}},  //  -1.0 Ap[abcd] W[efgh] p[aeij] E4[dfgibhjc] 
    {"abcd,efgh,aiej,dfgibhcj",  -1.0,   4, { 6,12, 5,19}},  //  -1.0 Ap[abcd] W[efgh] p[aiej] E4[dfgibhcj] 
    {"abcd,efgh,aije,dfijbhgc",   1.0,   4, { 6,12, 5,19}},  //   1.0 Ap[abcd] W[efgh] p[aije] E4[dfijbhgc] 
  };

  FEqInfo bVec[7] = {
    {"ABCE,ABCD,ED"    ,   2.0,   3, { 3,10,15}}, //  2.0 b[abce] W[abcd] E1[ed]
    {"ACBE,ABCD,ED"    ,  -1.0,   3, { 3,10,15}}, // -1.0 b[acbe] W[abcd] E1[ed]
    {"ABEF,ABCD,CFED"  ,  -1.0,   3, { 3,10,16}}, // -1.0 b[abef] W[abcd] E2[cfed]
    {"ACEF,ABCD,BFDE"  ,  -1.0,   3, { 3,10,16}}, // -1.0 b[acef] W[abcd] E2[bfde]
    {"AEBF,ABCD,CFDE"  ,  -1.0,   3, { 3,10,16}}, // -1.0 b[aebf] W[abcd] E2[cfde]
    {"AECF,ABCD,BFDE"  ,   2.0,   3, { 3,10,16}}, //  2.0 b[aecf] W[abcd] E2[bfde]
    {"AEFG,ABCD,BCGDFE",  -1.0,   3, { 3,10,18}}, // -1.0 b[aefg] W[abcd] E3[bcgdfe]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT_AAAC";
    Out.perturberClass = "AAAC";
    Out.Whandcoded_if_zero = 2;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 20;
    Out.EqsRes = FEqSet(&EqsRes[0], 74, "NEVPT_AAAC/Res");
    Out.bVec = FEqSet(&bVec[0], 7, "NEVPT_AAAC/bVec");
  };
};

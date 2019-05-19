namespace NEVPT_CAAV {

  FTensorDecl TensorDecls[28] = {
    /*  0*/{"R"      , "cAae"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "cAae"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "cAae"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "cAae"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "cAae"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "cAae"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "cAae"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "cAae"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "cAae"     , "", USAGE_Amplitude   },
    /*  9*/{"p1"     , "caae"     , "", USAGE_Amplitude   },
    /* 10*/{"p2"     , "caae"     , "", USAGE_Amplitude   },
    /* 11*/{"Ap1"    , "caae"     , "", USAGE_Amplitude   },
    /* 12*/{"Ap2"    , "caae"     , "", USAGE_Amplitude   },
    /* 13*/{"b1"     , "caae"     , "", USAGE_Amplitude   },
    /* 14*/{"b2"     , "caae"     , "", USAGE_Amplitude   },
    /* 15*/{"B1"     , "caae"     , "", USAGE_Amplitude   },
    /* 16*/{"B2"     , "caae"     , "", USAGE_Amplitude   },
    /* 17*/{"f"      , "ec"       , "", USAGE_Hamiltonian },
    /* 18*/{"f"      , "aa"       , "", USAGE_Hamiltonian },
    /* 19*/{"f"      , "cc"       , "", USAGE_Hamiltonian },
    /* 20*/{"f"      , "ee"       , "", USAGE_Hamiltonian },
    /* 21*/{"W"      , "aaaa"     , "", USAGE_Hamiltonian },
    /* 22*/{"W"      , "eaca"     , "", USAGE_Hamiltonian },
    /* 23*/{"W"      , "aeca"     , "", USAGE_Hamiltonian },
    /* 24*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 25*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 26*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 27*/{"S1"     , "AaAa"     , "", USAGE_Density     },
//  /* 28*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

  FEqInfo EqsRes[48] = {
    {"abcd,be,aefd,cf",         2.0,   4, {11,18, 9,25}},  //   2.0 Ap1[abcd] f[be] p1[aefd] E1[cf] 
    {"abcd,ef,abed,cf",        -2.0,   4, {11,18, 9,25}},  //  -2.0 Ap1[abcd] f[ef] p1[abed] E1[cf] 
    {"abcd,be,aefd,cf",        -1.0,   4, {11,18,10,25}},  //  -1.0 Ap1[abcd] f[be] p2[aefd] E1[cf] 
    {"abcd,ef,abed,cf",         1.0,   4, {11,18,10,25}},  //   1.0 Ap1[abcd] f[ef] p2[abed] E1[cf] 
    {"abcd,ae,ebfd,cf",        -2.0,   4, {11,19, 9,25}},  //  -2.0 Ap1[abcd] f[ae] p1[ebfd] E1[cf] 
    {"abcd,ae,ebfd,cf",         1.0,   4, {11,19,10,25}},  //   1.0 Ap1[abcd] f[ae] p2[ebfd] E1[cf] 
    {"abcd,de,abfe,cf",         2.0,   4, {11,20, 9,25}},  //   2.0 Ap1[abcd] f[de] p1[abfe] E1[cf] 
    {"abcd,de,abfe,cf",        -1.0,   4, {11,20,10,25}},  //  -1.0 Ap1[abcd] f[de] p2[abfe] E1[cf] 
    {"abcd,be,aefd,cf",        -1.0,   4, {12,18, 9,25}},  //  -1.0 Ap2[abcd] f[be] p1[aefd] E1[cf] 
    {"abcd,ef,abed,cf",         1.0,   4, {12,18, 9,25}},  //   1.0 Ap2[abcd] f[ef] p1[abed] E1[cf] 
    {"abcd,be,aefd,cf",         2.0,   4, {12,18,10,25}},  //   2.0 Ap2[abcd] f[be] p2[aefd] E1[cf] 
    {"abcd,ef,abed,cf",        -2.0,   4, {12,18,10,25}},  //  -2.0 Ap2[abcd] f[ef] p2[abed] E1[cf] 
    {"abcd,ae,ebfd,cf",         1.0,   4, {12,19, 9,25}},  //   1.0 Ap2[abcd] f[ae] p1[ebfd] E1[cf] 
    {"abcd,ae,ebfd,cf",        -2.0,   4, {12,19,10,25}},  //  -2.0 Ap2[abcd] f[ae] p2[ebfd] E1[cf] 
    {"abcd,de,abfe,cf",        -1.0,   4, {12,20, 9,25}},  //  -1.0 Ap2[abcd] f[de] p1[abfe] E1[cf] 
    {"abcd,de,abfe,cf",         2.0,   4, {12,20,10,25}},  //   2.0 Ap2[abcd] f[de] p2[abfe] E1[cf] 
    {"abcd,ef,aegd,cfbg",       2.0,   4, {11,18, 9,26}},  //   2.0 Ap1[abcd] f[ef] p1[aegd] E2[cfbg] 
    {"abcd,ef,aged,cgbf",      -2.0,   4, {11,18, 9,26}},  //  -2.0 Ap1[abcd] f[ef] p1[aged] E2[cgbf] 
    {"abcd,ef,aegd,cfbg",      -1.0,   4, {11,18,10,26}},  //  -1.0 Ap1[abcd] f[ef] p2[aegd] E2[cfbg] 
    {"abcd,ef,aged,cgbf",       1.0,   4, {11,18,10,26}},  //   1.0 Ap1[abcd] f[ef] p2[aged] E2[cgbf] 
    {"abcd,ae,efgd,cfbg",      -2.0,   4, {11,19, 9,26}},  //  -2.0 Ap1[abcd] f[ae] p1[efgd] E2[cfbg] 
    {"abcd,ae,efgd,cfbg",       1.0,   4, {11,19,10,26}},  //   1.0 Ap1[abcd] f[ae] p2[efgd] E2[cfbg] 
    {"abcd,de,afge,cfbg",       2.0,   4, {11,20, 9,26}},  //   2.0 Ap1[abcd] f[de] p1[afge] E2[cfbg] 
    {"abcd,de,afge,cfbg",      -1.0,   4, {11,20,10,26}},  //  -1.0 Ap1[abcd] f[de] p2[afge] E2[cfbg] 
    {"abcd,befg,aehd,cgfh",     2.0,   4, {11,21, 9,26}},  //   2.0 Ap1[abcd] W[befg] p1[aehd] E2[cgfh] 
    {"abcd,befg,afhd,cehg",     2.0,   4, {11,21, 9,26}},  //   2.0 Ap1[abcd] W[befg] p1[afhd] E2[cehg] 
    {"abcd,befg,ahed,chfg",    -2.0,   4, {11,21, 9,26}},  //  -2.0 Ap1[abcd] W[befg] p1[ahed] E2[chfg] 
    {"abcd,efgh,abed,cfgh",    -2.0,   4, {11,21, 9,26}},  //  -2.0 Ap1[abcd] W[efgh] p1[abed] E2[cfgh] 
    {"abcd,befg,aehd,cgfh",    -1.0,   4, {11,21,10,26}},  //  -1.0 Ap1[abcd] W[befg] p2[aehd] E2[cgfh] 
    {"abcd,befg,afhd,cehg",    -1.0,   4, {11,21,10,26}},  //  -1.0 Ap1[abcd] W[befg] p2[afhd] E2[cehg] 
    {"abcd,befg,ahed,chfg",     1.0,   4, {11,21,10,26}},  //   1.0 Ap1[abcd] W[befg] p2[ahed] E2[chfg] 
    {"abcd,efgh,abed,cfgh",     1.0,   4, {11,21,10,26}},  //   1.0 Ap1[abcd] W[efgh] p2[abed] E2[cfgh] 
    {"abcd,ef,aegd,cfbg",      -1.0,   4, {12,18, 9,26}},  //  -1.0 Ap2[abcd] f[ef] p1[aegd] E2[cfbg] 
    {"abcd,ef,aged,cgbf",       1.0,   4, {12,18, 9,26}},  //   1.0 Ap2[abcd] f[ef] p1[aged] E2[cgbf] 
    {"abcd,ef,aegd,cfgb",      -1.0,   4, {12,18,10,26}},  //  -1.0 Ap2[abcd] f[ef] p2[aegd] E2[cfgb] 
    {"abcd,ef,aged,cgfb",       1.0,   4, {12,18,10,26}},  //   1.0 Ap2[abcd] f[ef] p2[aged] E2[cgfb] 
    {"abcd,ae,efgd,cfbg",       1.0,   4, {12,19, 9,26}},  //   1.0 Ap2[abcd] f[ae] p1[efgd] E2[cfbg] 
    {"abcd,ae,efgd,cfgb",       1.0,   4, {12,19,10,26}},  //   1.0 Ap2[abcd] f[ae] p2[efgd] E2[cfgb] 
    {"abcd,de,afge,cfbg",      -1.0,   4, {12,20, 9,26}},  //  -1.0 Ap2[abcd] f[de] p1[afge] E2[cfbg] 
    {"abcd,de,afge,cfgb",      -1.0,   4, {12,20,10,26}},  //  -1.0 Ap2[abcd] f[de] p2[afge] E2[cfgb] 
    {"abcd,befg,aehd,cgfh",    -1.0,   4, {12,21, 9,26}},  //  -1.0 Ap2[abcd] W[befg] p1[aehd] E2[cgfh] 
    {"abcd,befg,afhd,cehg",    -1.0,   4, {12,21, 9,26}},  //  -1.0 Ap2[abcd] W[befg] p1[afhd] E2[cehg] 
    {"abcd,befg,ahed,chfg",     1.0,   4, {12,21, 9,26}},  //   1.0 Ap2[abcd] W[befg] p1[ahed] E2[chfg] 
    {"abcd,efgh,abed,cfgh",     1.0,   4, {12,21, 9,26}},  //   1.0 Ap2[abcd] W[efgh] p1[abed] E2[cfgh] 
    {"abcd,befg,aehd,cghf",    -1.0,   4, {12,21,10,26}},  //  -1.0 Ap2[abcd] W[befg] p2[aehd] E2[cghf] 
    {"abcd,befg,afhd,cehg",     2.0,   4, {12,21,10,26}},  //   2.0 Ap2[abcd] W[befg] p2[afhd] E2[cehg] 
    {"abcd,befg,ahed,chgf",     1.0,   4, {12,21,10,26}},  //   1.0 Ap2[abcd] W[befg] p2[ahed] E2[chgf] 
    {"abcd,efgh,abed,cfgh",    -2.0,   4, {12,21,10,26}},  //  -2.0 Ap2[abcd] W[efgh] p2[abed] E2[cfgh] 
//  {"abcd,efgh,aeid,cfgbhi",   2.0,   4, {11,21, 9,28}},  //   2.0 Ap1[abcd] W[efgh] p1[aeid] E3[cfgbhi] 
//  {"abcd,efgh,aied,cfibhg",  -2.0,   4, {11,21, 9,28}},  //  -2.0 Ap1[abcd] W[efgh] p1[aied] E3[cfibhg] 
//  {"abcd,efgh,aeid,cfgbhi",  -1.0,   4, {11,21,10,28}},  //  -1.0 Ap1[abcd] W[efgh] p2[aeid] E3[cfgbhi] 
//  {"abcd,efgh,aied,cfibhg",   1.0,   4, {11,21,10,28}},  //   1.0 Ap1[abcd] W[efgh] p2[aied] E3[cfibhg] 
//  {"abcd,efgh,aeid,cfgbhi",  -1.0,   4, {12,21, 9,28}},  //  -1.0 Ap2[abcd] W[efgh] p1[aeid] E3[cfgbhi] 
//  {"abcd,efgh,aied,cfibhg",   1.0,   4, {12,21, 9,28}},  //   1.0 Ap2[abcd] W[efgh] p1[aied] E3[cfibhg] 
//  {"abcd,efgh,aeid,cfgihb",  -1.0,   4, {12,21,10,28}},  //  -1.0 Ap2[abcd] W[efgh] p2[aeid] E3[cfgihb] 
//  {"abcd,efgh,aied,cfighb",   1.0,   4, {12,21,10,28}},  //   1.0 Ap2[abcd] W[efgh] p2[aied] E3[cfighb] 
  };

  FEqInfo bVec[8] = {
    {"IPQA,RQSP,ARIS",   2.0,   3, {13,26,22}}, //  2.0 b1[IPQA] E2[RQSP]           V1[ARIS]
    {"IPQA,SQ,APIS"  ,   2.0,   3, {13,25,22}}, //  2.0 b1[IPQA] E1[SQ]   delta[PR] V1[ARIS]
    {"IPQA,RQSP,RAIS",  -1.0,   3, {13,26,23}}, // -1.0 b1[IPQA] E2[RQSP]           V2[RAIS]
    {"IPQA,SQ,PAIS"  ,  -1.0,   3, {13,25,23}}, // -1.0 b1[IPQA] E1[SQ]   delta[PR] V2[RAIS]
    {"IPQA,RQSP,ARIS",  -1.0,   3, {14,26,22}}, // -1.0 b2[IPQA] E2[RQSP]           V1[ARIS]
    {"IPQA,SQ,APIS"  ,  -1.0,   3, {14,25,22}}, // -1.0 b2[IPQA] E1[SQ]   delta[PR] V1[ARIS]
    {"IPQA,RQPS,RAIS",  -1.0,   3, {14,26,23}}, // -1.0 b2[IPQA] E2[RQPS]           V2[RAIS]
    {"IPQA,SQ,PAIS"  ,   2.0,   3, {14,25,23}}, //  2.0 b2[IPQA] E1[SQ]   delta[PR] V2[RAIS]
  };

  int f(int i) {
    return 2*i;
  }
  FDomainDecl DomainDecls[1] = {
    {"A", "a", f}
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT_CAAV";
    Out.perturberClass = "CAAV";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 28;
    Out.pDomainDecls = &DomainDecls[0];
    Out.nDomainDecls = 1;
    Out.EqsRes = FEqSet(&EqsRes[0], 48, "NEVPT_CAAV/Res");
    Out.bVec = FEqSet(&bVec[0], 8, "NEVPT_CAAV/bVec");
  };
};

namespace NEVPT_CAAV {

  FTensorDecl TensorDecls[30] = {
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
    /* 21*/{"W"      , "Laa"      , "", USAGE_Hamiltonian },
    /* 22*/{"W"      , "Lac"      , "", USAGE_Hamiltonian },
    /* 23*/{"W"      , "Lea"      , "", USAGE_Hamiltonian },
    /* 24*/{"W"      , "Lec"      , "", USAGE_Hamiltonian },
    /* 25*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 26*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 27*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 28*/{"S1"     , "AaAa"     , "", USAGE_Density     },
    /* 29*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

  FEqInfo EqsRes[56] = {
    {"abcd,be,aefd,cf",            2.0,   4, {11,18, 9,26}},     //   2.0 Ap1[abcd] f[be] p1[aefd] E1[cf] 
    {"abcd,ef,abed,cf",           -2.0,   4, {11,18, 9,26}},     //  -2.0 Ap1[abcd] f[ef] p1[abed] E1[cf] 
    {"abcd,be,aefd,cf",           -1.0,   4, {11,18,10,26}},     //  -1.0 Ap1[abcd] f[be] p2[aefd] E1[cf] 
    {"abcd,ef,abed,cf",            1.0,   4, {11,18,10,26}},     //   1.0 Ap1[abcd] f[ef] p2[abed] E1[cf] 
    {"abcd,ae,ebfd,cf",           -2.0,   4, {11,19, 9,26}},     //  -2.0 Ap1[abcd] f[ae] p1[ebfd] E1[cf] 
    {"abcd,ae,ebfd,cf",            1.0,   4, {11,19,10,26}},     //   1.0 Ap1[abcd] f[ae] p2[ebfd] E1[cf] 
    {"abcd,de,abfe,cf",            2.0,   4, {11,20, 9,26}},     //   2.0 Ap1[abcd] f[de] p1[abfe] E1[cf] 
    {"abcd,de,abfe,cf",           -1.0,   4, {11,20,10,26}},     //  -1.0 Ap1[abcd] f[de] p2[abfe] E1[cf] 
    {"abcd,be,aefd,cf",           -1.0,   4, {12,18, 9,26}},     //  -1.0 Ap2[abcd] f[be] p1[aefd] E1[cf] 
    {"abcd,ef,abed,cf",            1.0,   4, {12,18, 9,26}},     //   1.0 Ap2[abcd] f[ef] p1[abed] E1[cf] 
    {"abcd,be,aefd,cf",            2.0,   4, {12,18,10,26}},     //   2.0 Ap2[abcd] f[be] p2[aefd] E1[cf] 
    {"abcd,ef,abed,cf",           -2.0,   4, {12,18,10,26}},     //  -2.0 Ap2[abcd] f[ef] p2[abed] E1[cf] 
    {"abcd,ae,ebfd,cf",            1.0,   4, {12,19, 9,26}},     //   1.0 Ap2[abcd] f[ae] p1[ebfd] E1[cf] 
    {"abcd,ae,ebfd,cf",           -2.0,   4, {12,19,10,26}},     //  -2.0 Ap2[abcd] f[ae] p2[ebfd] E1[cf] 
    {"abcd,de,abfe,cf",           -1.0,   4, {12,20, 9,26}},     //  -1.0 Ap2[abcd] f[de] p1[abfe] E1[cf] 
    {"abcd,de,abfe,cf",            2.0,   4, {12,20,10,26}},     //   2.0 Ap2[abcd] f[de] p2[abfe] E1[cf] 
    {"abcd,ef,aegd,cfbg",          2.0,   4, {11,18, 9,27}},     //   2.0 Ap1[abcd] f[ef] p1[aegd] E2[cfbg] 
    {"abcd,ef,aged,cgbf",         -2.0,   4, {11,18, 9,27}},     //  -2.0 Ap1[abcd] f[ef] p1[aged] E2[cgbf] 
    {"abcd,ef,aegd,cfbg",         -1.0,   4, {11,18,10,27}},     //  -1.0 Ap1[abcd] f[ef] p2[aegd] E2[cfbg] 
    {"abcd,ef,aged,cgbf",          1.0,   4, {11,18,10,27}},     //   1.0 Ap1[abcd] f[ef] p2[aged] E2[cgbf] 
    {"abcd,ae,efgd,cfbg",         -2.0,   4, {11,19, 9,27}},     //  -2.0 Ap1[abcd] f[ae] p1[efgd] E2[cfbg] 
    {"abcd,ae,efgd,cfbg",          1.0,   4, {11,19,10,27}},     //   1.0 Ap1[abcd] f[ae] p2[efgd] E2[cfbg] 
    {"abcd,de,afge,cfbg",          2.0,   4, {11,20, 9,27}},     //   2.0 Ap1[abcd] f[de] p1[afge] E2[cfbg] 
    {"abcd,de,afge,cfbg",         -1.0,   4, {11,20,10,27}},     //  -1.0 Ap1[abcd] f[de] p2[afge] E2[cfbg] 
    {"abcd,ef,aegd,cfbg",         -1.0,   4, {12,18, 9,27}},     //  -1.0 Ap2[abcd] f[ef] p1[aegd] E2[cfbg] 
    {"abcd,ef,aged,cgbf",          1.0,   4, {12,18, 9,27}},     //   1.0 Ap2[abcd] f[ef] p1[aged] E2[cgbf] 
    {"abcd,ef,aegd,cfgb",         -1.0,   4, {12,18,10,27}},     //  -1.0 Ap2[abcd] f[ef] p2[aegd] E2[cfgb] 
    {"abcd,ef,aged,cgfb",          1.0,   4, {12,18,10,27}},     //   1.0 Ap2[abcd] f[ef] p2[aged] E2[cgfb] 
    {"abcd,ae,efgd,cfbg",          1.0,   4, {12,19, 9,27}},     //   1.0 Ap2[abcd] f[ae] p1[efgd] E2[cfbg] 
    {"abcd,ae,efgd,cfgb",          1.0,   4, {12,19,10,27}},     //   1.0 Ap2[abcd] f[ae] p2[efgd] E2[cfgb] 
    {"abcd,de,afge,cfbg",         -1.0,   4, {12,20, 9,27}},     //  -1.0 Ap2[abcd] f[de] p1[afge] E2[cfbg] 
    {"abcd,de,afge,cfgb",         -1.0,   4, {12,20,10,27}},     //  -1.0 Ap2[abcd] f[de] p2[afge] E2[cfgb] 
    {"abcd,abed,feg,fhi,chgi",    -2.0,   5, {11, 9,21,21,27}},  //  -2.0 Ap1[abcd] p1[abed] W[feg] W[fhi] E2[chgi] 
    {"abcd,aefd,gbe,ghi,chfi",     2.0,   5, {11, 9,21,21,27}},  //   2.0 Ap1[abcd] p1[aefd] W[gbe] W[ghi] E2[chfi] 
    {"abcd,aefd,gbh,gfi,cehi",    -2.0,   5, {11, 9,21,21,27}},  //  -2.0 Ap1[abcd] p1[aefd] W[gbh] W[gfi] E2[cehi] 
    {"abcd,aefd,gbh,gie,cihf",     2.0,   5, {11, 9,21,21,27}},  //   2.0 Ap1[abcd] p1[aefd] W[gbh] W[gie] E2[cihf] 
    {"abcd,abed,feg,fhi,chgi",     1.0,   5, {11,10,21,21,27}},  //   1.0 Ap1[abcd] p2[abed] W[feg] W[fhi] E2[chgi] 
    {"abcd,aefd,gbe,ghi,chfi",    -1.0,   5, {11,10,21,21,27}},  //  -1.0 Ap1[abcd] p2[aefd] W[gbe] W[ghi] E2[chfi] 
    {"abcd,aefd,gbh,gfi,cehi",     1.0,   5, {11,10,21,21,27}},  //   1.0 Ap1[abcd] p2[aefd] W[gbh] W[gfi] E2[cehi] 
    {"abcd,aefd,gbh,gie,cihf",    -1.0,   5, {11,10,21,21,27}},  //  -1.0 Ap1[abcd] p2[aefd] W[gbh] W[gie] E2[cihf] 
    {"abcd,abed,feg,fhi,chgi",     1.0,   5, {12, 9,21,21,27}},  //   1.0 Ap2[abcd] p1[abed] W[feg] W[fhi] E2[chgi] 
    {"abcd,aefd,gbe,ghi,chfi",    -1.0,   5, {12, 9,21,21,27}},  //  -1.0 Ap2[abcd] p1[aefd] W[gbe] W[ghi] E2[chfi] 
    {"abcd,aefd,gbh,gfi,cehi",     1.0,   5, {12, 9,21,21,27}},  //   1.0 Ap2[abcd] p1[aefd] W[gbh] W[gfi] E2[cehi] 
    {"abcd,aefd,gbh,gie,cihf",    -1.0,   5, {12, 9,21,21,27}},  //  -1.0 Ap2[abcd] p1[aefd] W[gbh] W[gie] E2[cihf] 
    {"abcd,abed,feg,fhi,chgi",    -2.0,   5, {12,10,21,21,27}},  //  -2.0 Ap2[abcd] p2[abed] W[feg] W[fhi] E2[chgi] 
    {"abcd,aefd,gbe,ghi,chfi",     2.0,   5, {12,10,21,21,27}},  //   2.0 Ap2[abcd] p2[aefd] W[gbe] W[ghi] E2[chfi] 
    {"abcd,aefd,gbh,gfi,ceih",     1.0,   5, {12,10,21,21,27}},  //   1.0 Ap2[abcd] p2[aefd] W[gbh] W[gfi] E2[ceih] 
    {"abcd,aefd,gbh,gie,cifh",    -1.0,   5, {12,10,21,21,27}},  //  -1.0 Ap2[abcd] p2[aefd] W[gbh] W[gie] E2[cifh] 
    {"abcd,aefd,gfh,gij,ceibhj",  -2.0,   5, {11, 9,21,21,29}},  //  -2.0 Ap1[abcd] p1[aefd] W[gfh] W[gij] E3[ceibhj] 
    {"abcd,aefd,ghe,gij,chibfj",   2.0,   5, {11, 9,21,21,29}},  //   2.0 Ap1[abcd] p1[aefd] W[ghe] W[gij] E3[chibfj] 
    {"abcd,aefd,gfh,gij,ceibhj",   1.0,   5, {11,10,21,21,29}},  //   1.0 Ap1[abcd] p2[aefd] W[gfh] W[gij] E3[ceibhj] 
    {"abcd,aefd,ghe,gij,chibfj",  -1.0,   5, {11,10,21,21,29}},  //  -1.0 Ap1[abcd] p2[aefd] W[ghe] W[gij] E3[chibfj] 
    {"abcd,aefd,gfh,gij,ceibhj",   1.0,   5, {12, 9,21,21,29}},  //   1.0 Ap2[abcd] p1[aefd] W[gfh] W[gij] E3[ceibhj] 
    {"abcd,aefd,ghe,gij,chibfj",  -1.0,   5, {12, 9,21,21,29}},  //  -1.0 Ap2[abcd] p1[aefd] W[ghe] W[gij] E3[chibfj] 
    {"abcd,aefd,gfh,gij,ceihbj",   1.0,   5, {12,10,21,21,29}},  //   1.0 Ap2[abcd] p2[aefd] W[gfh] W[gij] E3[ceihbj] 
    {"abcd,aefd,ghe,gij,chifbj",  -1.0,   5, {12,10,21,21,29}},  //  -1.0 Ap2[abcd] p2[aefd] W[ghe] W[gij] E3[chifbj] 
  };

  FEqInfo bVec[8] = {
    {"IPQA,RQSP,lAI,lRS",   2.0,   4, {13,27,24,21}}, //  2.0 b1[IPQA] E2[RQSP]           V1[ARIS]
    {"IPQA,SQ,lAI,lPS"  ,   2.0,   4, {13,26,24,21}}, //  2.0 b1[IPQA] E1[SQ]   delta[PR] V1[ARIS]
    {"IPQA,RQSP,lRI,lAS",  -1.0,   4, {13,27,22,23}}, // -1.0 b1[IPQA] E2[RQSP]           V2[RAIS]
    {"IPQA,SQ,lPI,lAS"  ,  -1.0,   4, {13,26,22,23}}, // -1.0 b1[IPQA] E1[SQ]   delta[PR] V2[RAIS]
    {"IPQA,RQSP,lAI,lRS",  -1.0,   4, {14,27,24,21}}, // -1.0 b2[IPQA] E2[RQSP]           V1[ARIS]
    {"IPQA,SQ,lAI,lPS"  ,  -1.0,   4, {14,26,24,21}}, // -1.0 b2[IPQA] E1[SQ]   delta[PR] V1[ARIS]
    {"IPQA,RQPS,lRI,lAS",  -1.0,   4, {14,27,22,23}}, // -1.0 b2[IPQA] E2[RQPS]           V2[RAIS]
    {"IPQA,SQ,lPI,lAS"  ,   2.0,   4, {14,26,22,23}}, //  2.0 b2[IPQA] E1[SQ]   delta[PR] V2[RAIS]
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
    Out.nTensorDecls = 30;
    Out.pDomainDecls = &DomainDecls[0];
    Out.nDomainDecls = 1;
    Out.EqsRes = FEqSet(&EqsRes[0], 56, "NEVPT_CAAV/Res");
    Out.bVec = FEqSet(&bVec[0], 8, "NEVPT_CAAV/bVec");
  };
};

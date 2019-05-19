namespace NEVPT_AAVV {

  FTensorDecl TensorDecls[17] = {
    /*  0*/{"R"      , "eeaa"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "eeaa"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "eeaa"     , "", USAGE_Amplitude   },
    /*  9*/{"f"      , "aa"       , "", USAGE_Hamiltonian },
    /* 10*/{"f"      , "ee"       , "", USAGE_Hamiltonian },
    /* 11*/{"W"      , "Laa"      , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "Lea"      , "", USAGE_Hamiltonian },
    /* 13*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 14*/{"S1"     , "aaaa"     , "", USAGE_Density     },
    /* 15*/{"S2"     , "aaaa"     , "", USAGE_Density     },
    /* 16*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

  FEqInfo EqsRes[4] = {
    {"abcd,ef,abeg,cdfg",         -4.0,   4, { 6, 9, 5,13}},     //  -4.0 Ap[abcd] f[ef] p[abeg] E2[cdfg] 
    {"abcd,ae,befg,cdgf",          4.0,   4, { 6,10, 5,13}},     //   4.0 Ap[abcd] f[ae] p[befg] E2[cdgf] 
    {"abcd,abef,geh,gfi,cdhi",    -2.0,   5, { 6, 5,11,11,13}},  //  -2.0 Ap[abcd] p[abef] W[geh] W[gfi] E2[cdhi] 
    {"abcd,abef,geh,gij,cdihfj",  -4.0,   5, { 6, 5,11,11,16}},  //  -4.0 Ap[abcd] p[abef] W[geh] W[gij] E3[cdihfj] 
  };

  FEqInfo bVec[4] = {
    {"ABRS,lAP,lBQ,RSPQ",  0.25,   4, { 3,12,12,13}}, // 0.5 b[ABRS] V[ABPQ] E2[RSPQ]
    {"BARS,lAP,lBQ,RSQP",  0.25,   4, { 3,12,12,13}}, // 0.5 b[BARS] V[ABPQ] E2[RSQP]
    {"ABRS,lBP,lAQ,RSQP",  0.25,   4, { 3,12,12,13}}, // 0.5 b[ABRS] V[BAPQ] E2[RSQP]
    {"BARS,lBP,lAQ,RSPQ",  0.25,   4, { 3,12,12,13}}, // 0.5 b[BARS] V[BAPQ] E2[RSPQ]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT_AAVV";
    Out.perturberClass = "AAVV";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 17;
    Out.EqsRes = FEqSet(&EqsRes[0], 4, "NEVPT_AAVV/Res");
    Out.bVec = FEqSet(&bVec[0], 4, "NEVPT_AAVV/bVec");
  };
};

namespace NEVPT_AAVV {

  FTensorDecl TensorDecls[16] = {
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
    /* 11*/{"W"      , "aaaa"     , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "eeaa"     , "", USAGE_Hamiltonian },
    /* 13*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 14*/{"S1"     , "aaaa"     , "", USAGE_Density     },
    /* 15*/{"S2"     , "aaaa"     , "", USAGE_Density     },
//  /* 16*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

  FEqInfo EqsRes[3] = {
    {"abcd,ef,abeg,cdfg",      -4.0,   4, { 6, 9, 5,13}},  //  -4.0 Ap[abcd] f[ef] p[abeg] E2[cdfg] 
    {"abcd,ae,befg,cdgf",       4.0,   4, { 6,10, 5,13}},  //   4.0 Ap[abcd] f[ae] p[befg] E2[cdgf] 
    {"abcd,efgh,abef,cdgh",    -2.0,   4, { 6,11, 5,13}},  //  -2.0 Ap[abcd] W[efgh] p[abef] E2[cdgh] 
//  {"abcd,efgh,abei,cdfgih",  -4.0,   4, { 6,11, 5,16}},  //  -4.0 Ap[abcd] W[efgh] p[abei] E3[cdfgih] 
  };

  FEqInfo bVec[4] = {
    {"ABRS,ABPQ,RSPQ",  0.25,   3, { 3,12,13}}, // 0.5 b[ABRS] V[ABPQ] E2[RSPQ]
    {"BARS,ABPQ,RSQP",  0.25,   3, { 3,12,13}}, // 0.5 b[BARS] V[ABPQ] E2[RSQP]
    {"ABRS,BAPQ,RSQP",  0.25,   3, { 3,12,13}}, // 0.5 b[ABRS] V[BAPQ] E2[RSQP]
    {"BARS,BAPQ,RSPQ",  0.25,   3, { 3,12,13}}, // 0.5 b[BARS] V[BAPQ] E2[RSPQ]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT_AAVV";
    Out.perturberClass = "AAVV";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 16;
    Out.EqsRes = FEqSet(&EqsRes[0], 3, "NEVPT_AAVV/Res");
    Out.bVec = FEqSet(&bVec[0], 4, "NEVPT_AAVV/bVec");
  };
};

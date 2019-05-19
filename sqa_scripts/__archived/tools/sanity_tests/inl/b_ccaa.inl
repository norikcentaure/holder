namespace MRLCC_CCAA {

  FTensorDecl TensorDecls[23] = {
    /*  0*/{"R"      , "ccaa"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "ccaa"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "ccaa"     , "", USAGE_Amplitude   },
    /*  9*/{"k"      , "aa"       , "", USAGE_Hamiltonian },
    /* 10*/{"k"      , "cc"       , "", USAGE_Hamiltonian },
    /* 11*/{"W"      , "aaaa"     , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "cccc"     , "", USAGE_Hamiltonian },
    /* 13*/{"W"      , "caca"     , "", USAGE_Hamiltonian },
    /* 14*/{"W"      , "caac"     , "", USAGE_Hamiltonian },
    /* 15*/{"W"      , "ccaa"     , "", USAGE_Hamiltonian },
    /* 16*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 17*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 18*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 19*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 20*/{"S1"     , "aaaa"     , "", USAGE_Density     },
    /* 21*/{"S2"     , "aaaa"     , "", USAGE_Density     },
    /* 22*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

  FEqInfo EqsRes[14] = {
    {"KLRS,PR,KLPS"  ,   2.0,   3, { 3,16,15}}, //  2.0 b[KLRS] delta[PR] delta[QS] V[KLPQ]
    {"KLRS,PS,KLPR"  ,  -1.0,   3, { 3,16,15}}, // -1.0 b[KLRS] delta[PS] delta[QR] V[KLPQ]
    {"KLRS,QS,KLRQ"  ,  -1.0,   3, { 3,18,15}}, // -1.0 b[KLRS] E1[QS]    delta[PR] V[KLPQ]
    {"KLRS,QR,KLSQ"  ,   0.5,   3, { 3,18,15}}, //  0.5 b[KLRS] E1[QR]    delta[PS] V[KLPQ]
    {"KLRS,PS,KLPR"  ,   0.5,   3, { 3,18,15}}, //  0.5 b[KLRS] E1[PS]    delta[QR] V[KLPQ]
    {"KLRS,PR,KLPS"  ,  -1.0,   3, { 3,18,15}}, // -1.0 b[KLRS] E1[PR]    delta[QS] V[KLPQ]
    {"KLRS,PQRS,KLPQ",   0.5,   3, { 3,19,15}}, //  0.5 b[KLRS] E2[PQRS]            V[KLPQ]
    {"KLRS,PS,LKPR"  ,   2.0,   3, { 3,16,15}}, //  2.0 b[KLRS] delta[PS] delta[QR] V[LKPQ]
    {"KLRS,PR,LKPS"  ,  -1.0,   3, { 3,16,15}}, // -1.0 b[KLRS] delta[PR] delta[QS] V[LKPQ]
    {"KLRS,QR,LKSQ"  ,  -1.0,   3, { 3,18,15}}, // -1.0 b[KLRS] E1[QR]    delta[PS] V[LKPQ]
    {"KLRS,QS,LKRQ"  ,   0.5,   3, { 3,18,15}}, //  0.5 b[KLRS] E1[QS]    delta[PR] V[LKPQ]
    {"KLRS,PR,LKPS"  ,   0.5,   3, { 3,18,15}}, //  0.5 b[KLRS] E1[PR]    delta[QS] V[LKPQ]
    {"KLRS,PS,LKPR"  ,  -1.0,   3, { 3,18,15}}, // -1.0 b[KLRS] E1[PS]    delta[QR] V[LKPQ]
    {"KLRS,PQSR,LKPQ",   0.5,   3, { 3,19,15}}, //  0.5 b[KLRS] E2[PQSR]            V[LKPQ]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC_CCAA";
    Out.perturberClass = "CCAA";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 23;
    Out.EqsRes = FEqSet(&EqsRes[0], 464, "MRLCC_CCAA/Res");
    Out.bVec = FEqSet(&bVec[0], 14, "MRLCC_CCAA/bVec");
  };
};

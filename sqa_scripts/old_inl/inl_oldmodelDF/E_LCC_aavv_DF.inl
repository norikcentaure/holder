namespace MRLCC_AAVV {

  FTensorDecl TensorDecls[25] = {
    /*  0*/{"R"      , "eeaa"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "eeaa"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "eeaa"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "eeaa"     , "", USAGE_Amplitude   },
    /*  9*/{"k"      , "aa"       , "", USAGE_Hamiltonian },
    /* 10*/{"k"      , "ee"       , "", USAGE_Hamiltonian },
    /* 11*/{"W"      , "Laa"      , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "Lac"      , "", USAGE_Hamiltonian },
    /* 13*/{"W"      , "Lae"      , "", USAGE_Hamiltonian },
    /* 14*/{"W"      , "Lca"      , "", USAGE_Hamiltonian },
    /* 15*/{"W"      , "Lcc"      , "", USAGE_Hamiltonian },
    /* 16*/{"W"      , "Lce"      , "", USAGE_Hamiltonian },
    /* 17*/{"W"      , "Lea"      , "", USAGE_Hamiltonian },
    /* 18*/{"W"      , "Lec"      , "", USAGE_Hamiltonian },
    /* 19*/{"W"      , "Lee"      , "", USAGE_Hamiltonian },
    /* 20*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 21*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 22*/{"S1"     , "aaaa"     , "", USAGE_Density     },
    /* 23*/{"S2"     , "aaaa"     , "", USAGE_Density     },
    /* 24*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

	FEqInfo EqsRes[11] = {
    {"abcd,ef,abeg,cdfg",          -4.0,   4, { 6, 9, 5,21}},        //  -4.0 Ap[abcd] k[ef] p[abeg] E2[cdfg] 
    {"abcd,ae,befg,cdgf",           4.0,   4, { 6,10, 5,21}},        //   4.0 Ap[abcd] k[ae] p[befg] E2[cdgf] 
    {"abcd,efg,ehj,abfi,cdgi,jh",  -8.0,   6, { 6,11,15, 5,21,20}},  //  -8.0 Ap[abcd] W[efg] W[ehj] p[abfi] E2[cdgi] delta[jh] 
    {"abcd,efg,egh,abfi,cdhi",      4.0,   5, { 6,12,14, 5,21}},     //   4.0 Ap[abcd] W[efg] W[egh] p[abfi] E2[cdhi] 
    {"abcd,efj,eag,bghi,cdih,jf",   8.0,   6, { 6,15,19, 5,21,20}},  //   8.0 Ap[abcd] W[efj] W[eag] p[bghi] E2[cdih] delta[jf] 
    {"abcd,efg,eaf,bghi,cdih",     -4.0,   5, { 6,16,18, 5,21}},     //  -4.0 Ap[abcd] W[efg] W[eaf] p[bghi] E2[cdih] 
    {"abcd,abef,geh,gfi,cdhi",     -2.0,   5, { 6, 5,11,11,21}},     //  -2.0 Ap[abcd] p[abef] W[geh] W[gfi] E2[cdhi] 
    {"abcd,efgh,iae,ibf,cdgh",      2.0,   5, { 6, 5,19,19,21}},     //   2.0 Ap[abcd] p[efgh] W[iae] W[ibf] E2[cdgh] 
    {"abcd,efg,eah,bhij,cdfjig",    4.0,   5, { 6,11,19, 5,24}},     //   4.0 Ap[abcd] W[efg] W[eah] p[bhij] E3[cdfjig] 
    {"abcd,efg,eah,bgij,cdfhij",    4.0,   5, { 6,13,17, 5,24}},     //   4.0 Ap[abcd] W[efg] W[eah] p[bgij] E3[cdfhij] 
    {"abcd,abef,geh,gij,cdihfj",   -4.0,   5, { 6, 5,11,11,24}},     //  -4.0 Ap[abcd] p[abef] W[geh] W[gij] E3[cdihfj] 
	};

  FEqInfo bVec[4] = {
    {"ABRS,lAP,lBQ,RSPQ",  0.25,   4, { 3,17,17,21}}, // 0.5 b[ABRS] W[ABPQ] E2[RSPQ]
    {"BARS,lAP,lBQ,RSQP",  0.25,   4, { 3,17,17,21}}, // 0.5 b[BARS] W[ABPQ] E2[RSQP]
    {"ABRS,lBP,lAQ,RSQP",  0.25,   4, { 3,17,17,21}}, // 0.5 b[ABRS] W[BAPQ] E2[RSQP]
    {"BARS,lBP,lAQ,RSPQ",  0.25,   4, { 3,17,17,21}}, // 0.5 b[BARS] W[BAPQ] E2[RSPQ]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC_AAVV";
    Out.perturberClass = "AAVV";
    Out.Whandcoded_if_zero = 1;
    Out.E3handcoded_if_zero = 1;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 25;
    Out.EqsRes = FEqSet(&EqsRes[0], 11, "MRLCC_AAVV/Res");
    Out.bVec = FEqSet(&bVec[0], 4, "MRLCC_AAVV/bVec");
  };
};

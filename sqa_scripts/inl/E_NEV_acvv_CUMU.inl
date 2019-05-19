namespace NEVPT_ACVV_CUMU {

  FTensorDecl TensorDecls[18] = {
    /*  0*/{"R"      , "eeca"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "eeca"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "eeca"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "eeca"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "eeca"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "eeca"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "eeca"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "eeca"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "eeca"     , "", USAGE_Amplitude   },
    /*  9*/{"W"      , "eeca"     , "", USAGE_Hamiltonian },
    /* 10*/{"f"      , "aa"       , "", USAGE_Hamiltonian },
    /* 11*/{"W"      , "aaaa"     , "", USAGE_Hamiltonian },
    /* 12*/{"f"      , "cc"       , "", USAGE_Hamiltonian },
    /* 13*/{"f"      , "ee"       , "", USAGE_Hamiltonian },
    /* 14*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 15*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 16*/{"S1"     , "AA"       , "", USAGE_Density     },
    /* 17*/{"S2"     , "aa"       , "", USAGE_Density     },
  };

  FEqInfo EqsRes[10] = {
    {"abcd,ef,abce,df",      -2.0,   4, { 6,10, 5,14}},  //  -2.0 Ap[abcd] f[ef] p[abce] E1[df] 
    {"abcd,ef,bace,df",       1.0,   4, { 6,10, 5,14}},  //   1.0 Ap[abcd] f[ef] p[bace] E1[df] 
    {"abcd,ce,abef,df",      -2.0,   4, { 6,12, 5,14}},  //  -2.0 Ap[abcd] f[ce] p[abef] E1[df] 
    {"abcd,ce,baef,df",       1.0,   4, { 6,12, 5,14}},  //   1.0 Ap[abcd] f[ce] p[baef] E1[df] 
    {"abcd,ae,becf,df",      -1.0,   4, { 6,13, 5,14}},  //  -1.0 Ap[abcd] f[ae] p[becf] E1[df] 
    {"abcd,ae,ebcf,df",       2.0,   4, { 6,13, 5,14}},  //   2.0 Ap[abcd] f[ae] p[ebcf] E1[df] 
    {"abcd,be,aecf,df",       2.0,   4, { 6,13, 5,14}},  //   2.0 Ap[abcd] f[be] p[aecf] E1[df] 
    {"abcd,be,eacf,df",      -1.0,   4, { 6,13, 5,14}},  //  -1.0 Ap[abcd] f[be] p[eacf] E1[df] 
    {"abcd,efgh,abce,dfgh",  -2.0,   4, { 6,11, 5,15}},  //  -2.0 Ap[abcd] W[efgh] p[abce] E2[dfgh] 
    {"abcd,efgh,bace,dfgh",   1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[efgh] p[bace] E2[dfgh] 
  };

  FEqInfo bVec[2] = {
    {"ABIP,RP,ABIR",   2.0,   3, { 3,14, 9}}, //  2.0 b[ABIP] E1[RP] W[ABIR]
    {"ABIP,RP,BAIR",  -1.0,   3, { 3,14, 9}}, // -1.0 b[ABIP] E1[RP] W[BAIR]
  };

  int f(int i) {
    return 2*i;
  }
  FDomainDecl DomainDecls[1] = {
    {"A", "a", f}
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT_ACVV";
    Out.perturberClass = "ACVV";
    Out.Whandcoded_if_zero = 2;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 18;
    Out.pDomainDecls = &DomainDecls[0];
    Out.nDomainDecls = 1;
    Out.EqsRes = FEqSet(&EqsRes[0], 10, "NEVPT_ACVV/Res");
    Out.bVec = FEqSet(&bVec[0], 2, "NEVPT_ACVV/bVec");
  };
};

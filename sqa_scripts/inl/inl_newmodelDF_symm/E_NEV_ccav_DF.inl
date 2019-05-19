namespace NEVPT_CCAV_DF {

  FTensorDecl TensorDecls[20] = {
    /*  0*/{"R"      , "ccae"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "ccae"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "ccae"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "ccae"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "ccae"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "ccae"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "ccae"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "ccae"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "ccae"     , "", USAGE_Amplitude   },
    /*  9*/{"f"      , "aa"       , "", USAGE_Hamiltonian },
    /* 10*/{"f"      , "cc"       , "", USAGE_Hamiltonian },
    /* 11*/{"W"      , "Laa"      , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "Lca"      , "", USAGE_Hamiltonian },
    /* 13*/{"W"      , "Lce"      , "", USAGE_Hamiltonian },
    /* 14*/{"f"      , "ee"       , "", USAGE_Hamiltonian },
    /* 15*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 16*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 17*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 18*/{"S1"     , "AA"       , "", USAGE_Density     },
    /* 19*/{"S2"     , "aa"       , "", USAGE_Density     },
  };

  FEqInfo EqsRes[22] = {
    {"abcd,ce,abed",             4.0,   3, { 6, 9, 5}},        //   4.0 Ap[abcd] f[ce] p[abed] 
    {"abcd,ce,baed",            -2.0,   3, { 6, 9, 5}},        //  -2.0 Ap[abcd] f[ce] p[baed] 
    {"abcd,ae,becd",             2.0,   3, { 6,10, 5}},        //   2.0 Ap[abcd] f[ae] p[becd] 
    {"abcd,ae,ebcd",            -4.0,   3, { 6,10, 5}},        //  -4.0 Ap[abcd] f[ae] p[ebcd] 
    {"abcd,be,aecd",            -4.0,   3, { 6,10, 5}},        //  -4.0 Ap[abcd] f[be] p[aecd] 
    {"abcd,be,eacd",             2.0,   3, { 6,10, 5}},        //   2.0 Ap[abcd] f[be] p[eacd] 
    {"abcd,de,abce",             4.0,   3, { 6,14, 5}},        //   4.0 Ap[abcd] f[de] p[abce] 
    {"abcd,de,bace",            -2.0,   3, { 6,14, 5}},        //  -2.0 Ap[abcd] f[de] p[bace] 
    {"abcd,ef,abed,fc",         -2.0,   4, { 6, 9, 5,16}},     //  -2.0 Ap[abcd] f[ef] p[abed] E1[fc] 
    {"abcd,ef,baed,fc",          1.0,   4, { 6, 9, 5,16}},     //   1.0 Ap[abcd] f[ef] p[baed] E1[fc] 
    {"abcd,ae,befd,fc",         -1.0,   4, { 6,10, 5,16}},     //  -1.0 Ap[abcd] f[ae] p[befd] E1[fc] 
    {"abcd,ae,ebfd,fc",          2.0,   4, { 6,10, 5,16}},     //   2.0 Ap[abcd] f[ae] p[ebfd] E1[fc] 
    {"abcd,be,aefd,fc",          2.0,   4, { 6,10, 5,16}},     //   2.0 Ap[abcd] f[be] p[aefd] E1[fc] 
    {"abcd,be,eafd,fc",         -1.0,   4, { 6,10, 5,16}},     //  -1.0 Ap[abcd] f[be] p[eafd] E1[fc] 
    {"abcd,de,abfe,fc",         -2.0,   4, { 6,14, 5,16}},     //  -2.0 Ap[abcd] f[de] p[abfe] E1[fc] 
    {"abcd,de,bafe,fc",          1.0,   4, { 6,14, 5,16}},     //   1.0 Ap[abcd] f[de] p[bafe] E1[fc] 
    {"abcd,abed,fce,fgh,gh",     4.0,   5, { 6, 5,11,11,16}},  //   4.0 Ap[abcd] p[abed] W[fce] W[fgh] E1[gh] 
    {"abcd,abed,fcg,feh,hg",    -2.0,   5, { 6, 5,11,11,16}},  //  -2.0 Ap[abcd] p[abed] W[fcg] W[feh] E1[hg] 
    {"abcd,baed,fce,fgh,gh",    -2.0,   5, { 6, 5,11,11,16}},  //  -2.0 Ap[abcd] p[baed] W[fce] W[fgh] E1[gh] 
    {"abcd,baed,fcg,feh,hg",     1.0,   5, { 6, 5,11,11,16}},  //   1.0 Ap[abcd] p[baed] W[fcg] W[feh] E1[hg] 
    {"abcd,abed,feg,fhi,ghci",  -2.0,   5, { 6, 5,11,11,17}},  //  -2.0 Ap[abcd] p[abed] W[feg] W[fhi] E2[ghci] 
    {"abcd,baed,feg,fhi,ghci",   1.0,   5, { 6, 5,11,11,17}},  //   1.0 Ap[abcd] p[baed] W[feg] W[fhi] E2[ghci] 
  };

  FEqInfo bVec[4] = {
    {"IJPA,RP,lIR,lJA",   4.0,   4, { 3,15,12,13}}, //  4.0 b[IJPA] delta[RP] W[IJRA]
    {"IJPA,RP,lIR,lJA",  -2.0,   4, { 3,16,12,13}}, // -2.0 b[IJPA] E1[RP]    W[IJRA]
    {"IJPA,RP,lJR,lIA",  -2.0,   4, { 3,15,12,13}}, // -2.0 b[IJPA] delta[RP] W[JIRA]
    {"IJPA,RP,lJR,lIA",   1.0,   4, { 3,16,12,13}}, //  1.0 b[IJPA] E1[RP]    W[JIRA]
  };

  int f(int i) {
    return 2*i;
  }
  FDomainDecl DomainDecls[1] = {
    {"A", "a", f}
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT_CCAV";
    Out.perturberClass = "CCAV";
    Out.Whandcoded_if_zero = 2;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 20;
    Out.pDomainDecls = &DomainDecls[0];
    Out.nDomainDecls = 1;
    Out.EqsRes = FEqSet(&EqsRes[0], 22, "NEVPT_CCAV/Res");
    Out.bVec = FEqSet(&bVec[0], 4, "NEVPT_CCAV/bVec");
  };
};

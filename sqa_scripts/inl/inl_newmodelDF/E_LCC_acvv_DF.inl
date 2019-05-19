namespace MRLCC_ACVV_DF {

  FTensorDecl TensorDecls[26] = {
    /*  0*/{"R"      , "eeca"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "eeca"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "eeca"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "eeca"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "eeca"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "eeca"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "eeca"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "eeca"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "eeca"     , "", USAGE_Amplitude   },
    /*  9*/{"k"      , "aa"       , "", USAGE_Hamiltonian },
    /* 10*/{"k"      , "cc"       , "", USAGE_Hamiltonian },
    /* 11*/{"W"      , "Laa"      , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "Lac"      , "", USAGE_Hamiltonian },
    /* 13*/{"W"      , "Lae"      , "", USAGE_Hamiltonian },
    /* 14*/{"W"      , "Lca"      , "", USAGE_Hamiltonian },
    /* 15*/{"W"      , "Lcc"      , "", USAGE_Hamiltonian },
    /* 16*/{"W"      , "Lce"      , "", USAGE_Hamiltonian },
    /* 17*/{"W"      , "Lea"      , "", USAGE_Hamiltonian },
    /* 18*/{"W"      , "Lec"      , "", USAGE_Hamiltonian },
    /* 19*/{"W"      , "Lee"      , "", USAGE_Hamiltonian },
    /* 20*/{"k"      , "ee"       , "", USAGE_Hamiltonian },
    /* 21*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 22*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 23*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 24*/{"S1"     , "AA"       , "", USAGE_Density     },
    /* 25*/{"S2"     , "aa"       , "", USAGE_Density     },
  };

  FEqInfo EqsRes[48] = {
    {"abcd,ef,abce,df",          -2.0,   4, { 6, 9, 5,22}},        //  -2.0 Ap[abcd] k[ef] p[abce] E1[df] 
    {"abcd,ef,bace,df",           1.0,   4, { 6, 9, 5,22}},        //   1.0 Ap[abcd] k[ef] p[bace] E1[df] 
    {"abcd,ce,abef,df",          -2.0,   4, { 6,10, 5,22}},        //  -2.0 Ap[abcd] k[ce] p[abef] E1[df] 
    {"abcd,ce,baef,df",           1.0,   4, { 6,10, 5,22}},        //   1.0 Ap[abcd] k[ce] p[baef] E1[df] 
    {"abcd,ae,becf,df",          -1.0,   4, { 6,20, 5,22}},        //  -1.0 Ap[abcd] k[ae] p[becf] E1[df] 
    {"abcd,ae,ebcf,df",           2.0,   4, { 6,20, 5,22}},        //   2.0 Ap[abcd] k[ae] p[ebcf] E1[df] 
    {"abcd,be,aecf,df",           2.0,   4, { 6,20, 5,22}},        //   2.0 Ap[abcd] k[be] p[aecf] E1[df] 
    {"abcd,be,eacf,df",          -1.0,   4, { 6,20, 5,22}},        //  -1.0 Ap[abcd] k[be] p[eacf] E1[df] 
    {"abcd,efg,ehi,abcf,dg,ih",  -4.0,   6, { 6,11,15, 5,22,21}},  //  -4.0 Ap[abcd] W[efg] W[ehi] p[abcf] E1[dg] delta[ih] 
    {"abcd,efg,ehi,bacf,dg,ih",   2.0,   6, { 6,11,15, 5,22,21}},  //   2.0 Ap[abcd] W[efg] W[ehi] p[bacf] E1[dg] delta[ih] 
    {"abcd,efg,egh,abcf,dh",      2.0,   5, { 6,12,14, 5,22}},     //   2.0 Ap[abcd] W[efg] W[egh] p[abcf] E1[dh] 
    {"abcd,efg,egh,bacf,dh",     -1.0,   5, { 6,12,14, 5,22}},     //  -1.0 Ap[abcd] W[efg] W[egh] p[bacf] E1[dh] 
    {"abcd,efc,eag,bgfh,dh",      1.0,   5, { 6,15,19, 5,22}},     //   1.0 Ap[abcd] W[efc] W[eag] p[bgfh] E1[dh] 
    {"abcd,efc,eag,gbfh,dh",     -2.0,   5, { 6,15,19, 5,22}},     //  -2.0 Ap[abcd] W[efc] W[eag] p[gbfh] E1[dh] 
    {"abcd,efc,ebg,agfh,dh",     -2.0,   5, { 6,15,19, 5,22}},     //  -2.0 Ap[abcd] W[efc] W[ebg] p[agfh] E1[dh] 
    {"abcd,efc,ebg,gafh,dh",      1.0,   5, { 6,15,19, 5,22}},     //   1.0 Ap[abcd] W[efc] W[ebg] p[gafh] E1[dh] 
    {"abcd,efi,eag,bgch,dh,if",  -2.0,   6, { 6,15,19, 5,22,21}},  //  -2.0 Ap[abcd] W[efi] W[eag] p[bgch] E1[dh] delta[if] 
    {"abcd,efi,eag,gbch,dh,if",   4.0,   6, { 6,15,19, 5,22,21}},  //   4.0 Ap[abcd] W[efi] W[eag] p[gbch] E1[dh] delta[if] 
    {"abcd,efi,ebg,agch,dh,if",   4.0,   6, { 6,15,19, 5,22,21}},  //   4.0 Ap[abcd] W[efi] W[ebg] p[agch] E1[dh] delta[if] 
    {"abcd,efi,ebg,gach,dh,if",  -2.0,   6, { 6,15,19, 5,22,21}},  //  -2.0 Ap[abcd] W[efi] W[ebg] p[gach] E1[dh] delta[if] 
    {"abcd,efg,eac,bgfh,dh",     -2.0,   5, { 6,16,18, 5,22}},     //  -2.0 Ap[abcd] W[efg] W[eac] p[bgfh] E1[dh] 
    {"abcd,efg,eac,gbfh,dh",      4.0,   5, { 6,16,18, 5,22}},     //   4.0 Ap[abcd] W[efg] W[eac] p[gbfh] E1[dh] 
    {"abcd,efg,eaf,bgch,dh",      1.0,   5, { 6,16,18, 5,22}},     //   1.0 Ap[abcd] W[efg] W[eaf] p[bgch] E1[dh] 
    {"abcd,efg,eaf,gbch,dh",     -2.0,   5, { 6,16,18, 5,22}},     //  -2.0 Ap[abcd] W[efg] W[eaf] p[gbch] E1[dh] 
    {"abcd,efg,ebc,agfh,dh",      1.0,   5, { 6,16,18, 5,22}},     //   1.0 Ap[abcd] W[efg] W[ebc] p[agfh] E1[dh] 
    {"abcd,efg,ebc,gafh,dh",     -2.0,   5, { 6,16,18, 5,22}},     //  -2.0 Ap[abcd] W[efg] W[ebc] p[gafh] E1[dh] 
    {"abcd,efg,ebf,agch,dh",     -2.0,   5, { 6,16,18, 5,22}},     //  -2.0 Ap[abcd] W[efg] W[ebf] p[agch] E1[dh] 
    {"abcd,efg,ebf,gach,dh",      1.0,   5, { 6,16,18, 5,22}},     //   1.0 Ap[abcd] W[efg] W[ebf] p[gach] E1[dh] 
    {"abcd,abef,gec,ghi,df,ih",  -4.0,   6, { 6, 5,15,15,22,21}},  //  -4.0 Ap[abcd] p[abef] W[gec] W[ghi] E1[df] delta[ih] 
    {"abcd,abef,ghc,geh,df",      2.0,   5, { 6, 5,15,15,22}},     //   2.0 Ap[abcd] p[abef] W[ghc] W[geh] E1[df] 
    {"abcd,baef,gec,ghi,df,ih",   2.0,   6, { 6, 5,15,15,22,21}},  //   2.0 Ap[abcd] p[baef] W[gec] W[ghi] E1[df] delta[ih] 
    {"abcd,baef,ghc,geh,df",     -1.0,   5, { 6, 5,15,15,22}},     //  -1.0 Ap[abcd] p[baef] W[ghc] W[geh] E1[df] 
    {"abcd,efcg,hae,hbf,dg",      2.0,   5, { 6, 5,19,19,22}},     //   2.0 Ap[abcd] p[efcg] W[hae] W[hbf] E1[dg] 
    {"abcd,efcg,haf,hbe,dg",     -1.0,   5, { 6, 5,19,19,22}},     //  -1.0 Ap[abcd] p[efcg] W[haf] W[hbe] E1[dg] 
    {"abcd,efg,ehc,abhi,dfig",   -2.0,   5, { 6,11,15, 5,23}},     //  -2.0 Ap[abcd] W[efg] W[ehc] p[abhi] E2[dfig] 
    {"abcd,efg,ehc,bahi,dfig",    1.0,   5, { 6,11,15, 5,23}},     //   1.0 Ap[abcd] W[efg] W[ehc] p[bahi] E2[dfig] 
    {"abcd,efg,eah,bhci,dfig",   -1.0,   5, { 6,11,19, 5,23}},     //  -1.0 Ap[abcd] W[efg] W[eah] p[bhci] E2[dfig] 
    {"abcd,efg,eah,hbci,dfig",    2.0,   5, { 6,11,19, 5,23}},     //   2.0 Ap[abcd] W[efg] W[eah] p[hbci] E2[dfig] 
    {"abcd,efg,ebh,ahci,dfig",    2.0,   5, { 6,11,19, 5,23}},     //   2.0 Ap[abcd] W[efg] W[ebh] p[ahci] E2[dfig] 
    {"abcd,efg,ebh,haci,dfig",   -1.0,   5, { 6,11,19, 5,23}},     //  -1.0 Ap[abcd] W[efg] W[ebh] p[haci] E2[dfig] 
    {"abcd,efc,egh,abgi,dfih",    1.0,   5, { 6,12,14, 5,23}},     //   1.0 Ap[abcd] W[efc] W[egh] p[abgi] E2[dfih] 
    {"abcd,efc,egh,bagi,dfhi",    1.0,   5, { 6,12,14, 5,23}},     //   1.0 Ap[abcd] W[efc] W[egh] p[bagi] E2[dfhi] 
    {"abcd,efg,eah,bgci,dfhi",   -1.0,   5, { 6,13,17, 5,23}},     //  -1.0 Ap[abcd] W[efg] W[eah] p[bgci] E2[dfhi] 
    {"abcd,efg,eah,gbci,dfih",   -1.0,   5, { 6,13,17, 5,23}},     //  -1.0 Ap[abcd] W[efg] W[eah] p[gbci] E2[dfih] 
    {"abcd,efg,ebh,agci,dfhi",    2.0,   5, { 6,13,17, 5,23}},     //   2.0 Ap[abcd] W[efg] W[ebh] p[agci] E2[dfhi] 
    {"abcd,efg,ebh,gaci,dfhi",   -1.0,   5, { 6,13,17, 5,23}},     //  -1.0 Ap[abcd] W[efg] W[ebh] p[gaci] E2[dfhi] 
    {"abcd,abce,feg,fhi,dhgi",   -2.0,   5, { 6, 5,11,11,23}},     //  -2.0 Ap[abcd] p[abce] W[feg] W[fhi] E2[dhgi] 
    {"abcd,bace,feg,fhi,dhgi",    1.0,   5, { 6, 5,11,11,23}},     //   1.0 Ap[abcd] p[bace] W[feg] W[fhi] E2[dhgi] 
  };

  FEqInfo bVec[2] = {
    {"ABIP,RP,lAI,lBR",   2.0,   4, { 3,22,18,17}}, //  2.0 b[ABIP] E1[RP] W[ABIR]
    {"ABIP,RP,lBI,lAR",  -1.0,   4, { 3,22,18,17}}, // -1.0 b[ABIP] E1[RP] W[BAIR]
  };

  int f(int i) {
    return 2*i;
  }
  FDomainDecl DomainDecls[1] = {
    {"A", "a", f}
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC_ACVV";
    Out.perturberClass = "ACVV";
    Out.Whandcoded_if_zero = 1;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 26;
    Out.pDomainDecls = &DomainDecls[0];
    Out.nDomainDecls = 1;
    Out.EqsRes = FEqSet(&EqsRes[0], 48, "MRLCC_ACVV/Res");
    Out.bVec = FEqSet(&bVec[0], 2, "MRLCC_ACVV/bVec");
  };
};

namespace NEVPT_AAAV {

  FTensorDecl TensorDecls[20] = {
    /*  0*/{"R"      , "eaaa"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "eaaa"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "eaaa"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "eaaa"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "eaaa"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "eaaa"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "eaaa"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "eaaa"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "eaaa"     , "", USAGE_Amplitude   },
    /*  9*/{"f"      , "ea"       , "", USAGE_Hamiltonian },
    /* 10*/{"f"      , "aa"       , "", USAGE_Hamiltonian },
    /* 11*/{"f"      , "ee"       , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "Laa"      , "", USAGE_Hamiltonian },
    /* 13*/{"W"      , "Lea"      , "", USAGE_Hamiltonian },
    /* 14*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 15*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 16*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 17*/{"S1"     , "aaaaaa"   , "", USAGE_Density     },
    /* 18*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 19*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

  FEqInfo EqsRes[34] = {
    {"abgc,de,afhd,ce,gb,hf",         -1.0,   6, { 6,10, 5,15,14,14}},     //  -1.0 Ap[abgc] f[de] p[afhd] E1[ce] delta[gb] delta[hf] 
    {"abgc,ad,dehf,cf,gb,he",          1.0,   6, { 6,11, 5,15,14,14}},     //   1.0 Ap[abgc] f[ad] p[dehf] E1[cf] delta[gb] delta[he] 
    {"abhc,de,adfg,cefg,hb",           1.0,   5, { 6,10, 5,16,14}},        //   1.0 Ap[abhc] f[de] p[adfg] E2[cefg] delta[hb] 
    {"abhc,de,afdg,cfeg,hb",          -1.0,   5, { 6,10, 5,16,14}},        //  -1.0 Ap[abhc] f[de] p[afdg] E2[cfeg] delta[hb] 
    {"abhc,de,afgd,cfge,hb",          -1.0,   5, { 6,10, 5,16,14}},        //  -1.0 Ap[abhc] f[de] p[afgd] E2[cfge] delta[hb] 
    {"abcd,be,aefg,cdfg",              1.0,   4, { 6,10, 5,16}},           //   1.0 Ap[abcd] f[be] p[aefg] E2[cdfg] 
    {"abcd,ef,abeg,cdfg",             -1.0,   4, { 6,10, 5,16}},           //  -1.0 Ap[abcd] f[ef] p[abeg] E2[cdfg] 
    {"abcd,ef,abge,cdgf",             -1.0,   4, { 6,10, 5,16}},           //  -1.0 Ap[abcd] f[ef] p[abge] E2[cdgf] 
    {"abcd,ef,aghe,cdfb,hg",          -1.0,   5, { 6,10, 5,16,14}},        //  -1.0 Ap[abcd] f[ef] p[aghe] E2[cdfb] delta[hg] 
    {"abhc,ad,defg,cefg,hb",           1.0,   5, { 6,11, 5,16,14}},        //   1.0 Ap[abhc] f[ad] p[defg] E2[cefg] delta[hb] 
    {"abcd,ae,ebfg,cdfg",              1.0,   4, { 6,11, 5,16}},           //   1.0 Ap[abcd] f[ae] p[ebfg] E2[cdfg] 
    {"abcd,ae,efhg,cdgb,hf",           1.0,   5, { 6,11, 5,16,14}},        //   1.0 Ap[abcd] f[ae] p[efhg] E2[cdgb] delta[hf] 
    {"abjc,adke,feg,fhi,chgi,jb,kd",  -1.0,   7, { 6, 5,12,12,16,14,14}},  //  -1.0 Ap[abjc] p[adke] W[feg] W[fhi] E2[chgi] delta[jb] delta[kd] 
    {"abjc,adef,geh,gfi,cdhi,jb",     -1.0,   6, { 6, 5,12,12,16,14}},     //  -1.0 Ap[abjc] p[adef] W[geh] W[gfi] E2[cdhi] delta[jb] 
    {"abcd,abef,geh,gfi,cdhi",        -1.0,   5, { 6, 5,12,12,16}},        //  -1.0 Ap[abcd] p[abef] W[geh] W[gfi] E2[cdhi] 
    {"abcd,aejf,gbh,gfi,cdih,je",     -1.0,   6, { 6, 5,12,12,16,14}},     //  -1.0 Ap[abcd] p[aejf] W[gbh] W[gfi] E2[cdih] delta[je] 
    {"abcd,ef,aegh,cdfgbh",            1.0,   4, { 6,10, 5,18}},           //   1.0 Ap[abcd] f[ef] p[aegh] E3[cdfgbh] 
    {"abcd,ef,ageh,cdgfbh",           -1.0,   4, { 6,10, 5,18}},           //  -1.0 Ap[abcd] f[ef] p[ageh] E3[cdgfbh] 
    {"abcd,ef,aghe,cdghbf",           -1.0,   4, { 6,10, 5,18}},           //  -1.0 Ap[abcd] f[ef] p[aghe] E3[cdghbf] 
    {"abcd,ae,efgh,cdfgbh",            1.0,   4, { 6,11, 5,18}},           //   1.0 Ap[abcd] f[ae] p[efgh] E3[cdfgbh] 
    {"abkc,adef,geh,gij,cdihfj,kb",   -1.0,   6, { 6, 5,12,12,18,14}},     //  -1.0 Ap[abkc] p[adef] W[geh] W[gij] E3[cdihfj] delta[kb] 
    {"abkc,adef,gfh,gij,cdiehj,kb",   -1.0,   6, { 6, 5,12,12,18,14}},     //  -1.0 Ap[abkc] p[adef] W[gfh] W[gij] E3[cdiehj] delta[kb] 
    {"abkc,adef,ghd,gij,chiefj,kb",    1.0,   6, { 6, 5,12,12,18,14}},     //   1.0 Ap[abkc] p[adef] W[ghd] W[gij] E3[chiefj] delta[kb] 
    {"abcd,abef,geh,gij,cdihfj",      -1.0,   5, { 6, 5,12,12,18}},        //  -1.0 Ap[abcd] p[abef] W[geh] W[gij] E3[cdihfj] 
    {"abcd,abef,gfh,gij,cdiehj",      -1.0,   5, { 6, 5,12,12,18}},        //  -1.0 Ap[abcd] p[abef] W[gfh] W[gij] E3[cdiehj] 
    {"abcd,aekf,gfh,gij,cdihbj,ke",   -1.0,   6, { 6, 5,12,12,18,14}},     //  -1.0 Ap[abcd] p[aekf] W[gfh] W[gij] E3[cdihbj] delta[ke] 
    {"abcd,aefg,hbe,hij,cdifgj",       1.0,   5, { 6, 5,12,12,18}},        //   1.0 Ap[abcd] p[aefg] W[hbe] W[hij] E3[cdifgj] 
    {"abcd,aefg,hbi,hfj,cdejig",      -1.0,   5, { 6, 5,12,12,18}},        //  -1.0 Ap[abcd] p[aefg] W[hbi] W[hfj] E3[cdejig] 
    {"abcd,aefg,hbi,hgj,cdefij",      -1.0,   5, { 6, 5,12,12,18}},        //  -1.0 Ap[abcd] p[aefg] W[hbi] W[hgj] E3[cdefij] 
    {"abcd,aefg,hbi,hje,cdjfig",       1.0,   5, { 6, 5,12,12,18}},        //   1.0 Ap[abcd] p[aefg] W[hbi] W[hje] E3[cdjfig] 
    {"abcd,aefg,hfi,hgj,cdeibj",      -1.0,   5, { 6, 5,12,12,18}},        //  -1.0 Ap[abcd] p[aefg] W[hfi] W[hgj] E3[cdeibj] 
    {"abde,afgh,igj,ikc,defkjbhc",    -1.0,   5, { 6, 5,12,12,19}},        //  -1.0 Ap[abde] p[afgh] W[igj] W[ikc] E4[defkjbhc] 
    {"abde,afgh,ihj,ikc,defkgbjc",    -1.0,   5, { 6, 5,12,12,19}},        //  -1.0 Ap[abde] p[afgh] W[ihj] W[ikc] E4[defkgbjc] 
    {"abde,afgh,ijf,ikc,dejkgbhc",     1.0,   5, { 6, 5,12,12,19}},        //   1.0 Ap[abde] p[afgh] W[ijf] W[ikc] E4[dejkgbhc] 
  };

  FEqInfo bVec[5] = {
    {"AUVW,lAQ,lPR,WR,QP,VU",   1.0,   6, { 3,13,12,15,14,14}}, // 1.0 b[auvw] V[apqr] E1[wr] delta[qp] delta[vu]
    {"AUVW,lAQ,lPR,VWRU,QP" ,   1.0,   5, { 3,13,12,16,14}   }, // 1.0 b[auvw] V[apqr] E2[vwru] delta[qp]
    {"AUVW,lAQ,lPR,VWQR,PU" ,   1.0,   5, { 3,13,12,16,14}   }, // 1.0 b[auvw] V[apqr] E2[vwqr] delta[pu]
    {"AUVW,lAQ,lPR,PWRQ,VU" ,   1.0,   5, { 3,13,12,16,14}   }, // 1.0 b[auvw] V[apqr] E2[pwrq] delta[vu]
    {"AUVW,lAQ,lPR,PVWRQU"  ,   1.0,   4, { 3,13,12,18}      }, // 1.0 b[auvw] V[apqr] E3[pvwrqu]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT_AAAV";
    Out.perturberClass = "AAAV";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 20;
    Out.EqsRes = FEqSet(&EqsRes[0], 34, "NEVPT_AAAV/Res");
    Out.bVec = FEqSet(&bVec[0], 5, "NEVPT_AAAV/bVec");
  };
};

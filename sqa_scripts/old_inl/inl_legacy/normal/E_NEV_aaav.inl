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
    /* 12*/{"W"      , "aaaa"     , "", USAGE_Hamiltonian },
    /* 13*/{"W"      , "eaaa"     , "", USAGE_Hamiltonian },
    /* 14*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 15*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 16*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 17*/{"S1"     , "aaaaaa"   , "", USAGE_Density     },
    /* 18*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 19*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

  FEqInfo EqsRes[34] = {
    {"abgc,de,afhd,ce,gb,hf",      -1.0,   6, { 6,10, 5,15,14,14}},  //  -1.0 Ap[abgc] f[de] p[afhd] E1[ce] delta[gb] delta[hf] 
    {"abgc,ad,dehf,cf,gb,he",       1.0,   6, { 6,11, 5,15,14,14}},  //   1.0 Ap[abgc] f[ad] p[dehf] E1[cf] delta[gb] delta[he] 
    {"abhc,de,adfg,cefg,hb",        1.0,   5, { 6,10, 5,16,14}},     //   1.0 Ap[abhc] f[de] p[adfg] E2[cefg] delta[hb] 
    {"abhc,de,afdg,cfeg,hb",       -1.0,   5, { 6,10, 5,16,14}},     //  -1.0 Ap[abhc] f[de] p[afdg] E2[cfeg] delta[hb] 
    {"abhc,de,afgd,cfge,hb",       -1.0,   5, { 6,10, 5,16,14}},     //  -1.0 Ap[abhc] f[de] p[afgd] E2[cfge] delta[hb] 
    {"abcd,be,aefg,cdfg",           1.0,   4, { 6,10, 5,16}},        //   1.0 Ap[abcd] f[be] p[aefg] E2[cdfg] 
    {"abcd,ef,abeg,cdfg",          -1.0,   4, { 6,10, 5,16}},        //  -1.0 Ap[abcd] f[ef] p[abeg] E2[cdfg] 
    {"abcd,ef,abge,cdgf",          -1.0,   4, { 6,10, 5,16}},        //  -1.0 Ap[abcd] f[ef] p[abge] E2[cdgf] 
    {"abcd,ef,aghe,cdfb,hg",       -1.0,   5, { 6,10, 5,16,14}},     //  -1.0 Ap[abcd] f[ef] p[aghe] E2[cdfb] delta[hg] 
    {"abhc,ad,defg,cefg,hb",        1.0,   5, { 6,11, 5,16,14}},     //   1.0 Ap[abhc] f[ad] p[defg] E2[cefg] delta[hb] 
    {"abcd,ae,ebfg,cdfg",           1.0,   4, { 6,11, 5,16}},        //   1.0 Ap[abcd] f[ae] p[ebfg] E2[cdfg] 
    {"abcd,ae,efhg,cdgb,hf",        1.0,   5, { 6,11, 5,16,14}},     //   1.0 Ap[abcd] f[ae] p[efhg] E2[cdgb] delta[hf] 
    {"abic,defg,ahde,chfg,ib",     -1.0,   5, { 6,12, 5,16,14}},     //  -1.0 Ap[abic] W[defg] p[ahde] E2[chfg] delta[ib] 
    {"abic,defg,ahjd,cefg,ib,jh",  -1.0,   6, { 6,12, 5,16,14,14}},  //  -1.0 Ap[abic] W[defg] p[ahjd] E2[cefg] delta[ib] delta[jh] 
    {"abcd,befg,ahie,cdgf,ih",     -1.0,   5, { 6,12, 5,16,14}},     //  -1.0 Ap[abcd] W[befg] p[ahie] E2[cdgf] delta[ih] 
    {"abcd,efgh,abef,cdgh",        -1.0,   4, { 6,12, 5,16}},        //  -1.0 Ap[abcd] W[efgh] p[abef] E2[cdgh] 
    {"abcd,ef,aegh,cdfgbh",         1.0,   4, { 6,10, 5,18}},        //   1.0 Ap[abcd] f[ef] p[aegh] E3[cdfgbh] 
    {"abcd,ef,ageh,cdgfbh",        -1.0,   4, { 6,10, 5,18}},        //  -1.0 Ap[abcd] f[ef] p[ageh] E3[cdgfbh] 
    {"abcd,ef,aghe,cdghbf",        -1.0,   4, { 6,10, 5,18}},        //  -1.0 Ap[abcd] f[ef] p[aghe] E3[cdghbf] 
    {"abcd,ae,efgh,cdfgbh",         1.0,   4, { 6,11, 5,18}},        //   1.0 Ap[abcd] f[ae] p[efgh] E3[cdfgbh] 
    {"abjc,defg,adhi,cefhgi,jb",    1.0,   5, { 6,12, 5,18,14}},     //   1.0 Ap[abjc] W[defg] p[adhi] E3[cefhgi] delta[jb] 
    {"abjc,defg,ahdi,cehfgi,jb",   -1.0,   5, { 6,12, 5,18,14}},     //  -1.0 Ap[abjc] W[defg] p[ahdi] E3[cehfgi] delta[jb] 
    {"abjc,defg,ahid,cehigf,jb",   -1.0,   5, { 6,12, 5,18,14}},     //  -1.0 Ap[abjc] W[defg] p[ahid] E3[cehigf] delta[jb] 
    {"abcd,befg,aehi,cdghfi",       1.0,   4, { 6,12, 5,18}},        //   1.0 Ap[abcd] W[befg] p[aehi] E3[cdghfi] 
    {"abcd,befg,afhi,cdehig",       1.0,   4, { 6,12, 5,18}},        //   1.0 Ap[abcd] W[befg] p[afhi] E3[cdehig] 
    {"abcd,befg,ahei,cdhgfi",      -1.0,   4, { 6,12, 5,18}},        //  -1.0 Ap[abcd] W[befg] p[ahei] E3[cdhgfi] 
    {"abcd,befg,ahie,cdhifg",      -1.0,   4, { 6,12, 5,18}},        //  -1.0 Ap[abcd] W[befg] p[ahie] E3[cdhifg] 
    {"abcd,efgh,abei,cdfgih",      -1.0,   4, { 6,12, 5,18}},        //  -1.0 Ap[abcd] W[efgh] p[abei] E3[cdfgih] 
    {"abcd,efgh,abie,cdfigh",      -1.0,   4, { 6,12, 5,18}},        //  -1.0 Ap[abcd] W[efgh] p[abie] E3[cdfigh] 
    {"abcd,efgh,aief,cdigbh",      -1.0,   4, { 6,12, 5,18}},        //  -1.0 Ap[abcd] W[efgh] p[aief] E3[cdigbh] 
    {"abcd,efgh,aije,cdfgbh,ji",   -1.0,   5, { 6,12, 5,18,14}},     //  -1.0 Ap[abcd] W[efgh] p[aije] E3[cdfgbh] delta[ji] 
    {"abcd,efgh,aeij,cdfgibhj",     1.0,   4, { 6,12, 5,19}},        //   1.0 Ap[abcd] W[efgh] p[aeij] E4[cdfgibhj] 
    {"abcd,efgh,aiej,cdfigbhj",    -1.0,   4, { 6,12, 5,19}},        //  -1.0 Ap[abcd] W[efgh] p[aiej] E4[cdfigbhj] 
    {"abcd,efgh,aije,cdfijbhg",    -1.0,   4, { 6,12, 5,19}},        //  -1.0 Ap[abcd] W[efgh] p[aije] E4[cdfijbhg] 
  };

  FEqInfo bVec[5] = {
    {"AUVW,APQR,WR,QP,VU",   1.0,   5, { 3,13,15,14,14}}, // 1.0 b[auvw] W[apqr] E1[wr] delta[qp] delta[vu]
    {"AUVW,APQR,VWRU,QP" ,   1.0,   4, { 3,13,16,14}   }, // 1.0 b[auvw] W[apqr] E2[vwru] delta[qp]
    {"AUVW,APQR,VWQR,PU" ,   1.0,   4, { 3,13,16,14}   }, // 1.0 b[auvw] W[apqr] E2[vwqr] delta[pu]
    {"AUVW,APQR,PWRQ,VU" ,   1.0,   4, { 3,13,16,14}   }, // 1.0 b[auvw] W[apqr] E2[pwrq] delta[vu]
    {"AUVW,APQR,PVWRQU"  ,   1.0,   3, { 3,13,18}      }, // 1.0 b[auvw] W[apqr] E3[pvwrqu]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT_AAAV";
    Out.perturberClass = "AAAV";
    Out.Whandcoded_if_zero = 0;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 20;
    Out.EqsRes = FEqSet(&EqsRes[0], 34, "NEVPT_AAAV/Res");
    Out.bVec = FEqSet(&bVec[0], 5, "NEVPT_AAAV/bVec");
  };
};

namespace MRLCC_CCVV {

  FTensorDecl TensorDecls[22] = {
    /*  0*/{"R"      , "eecc"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "eecc"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "eecc"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "eecc"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "eecc"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "eecc"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "eecc"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "eecc"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "eecc"     , "", USAGE_Amplitude   },
    /*  9*/{"k"      , "cc"       , "", USAGE_Hamiltonian },
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
    /* 21*/{"E1"     , "aa"       , "", USAGE_Density     },
  };

  FEqInfo EqsRes[32] = {
    {"abcd,ce,abde",           8.0,   3, { 6, 9, 5}},        //   8.0 Ap[abcd] k[ce] p[abde] 
    {"abcd,ce,abed",         -16.0,   3, { 6, 9, 5}},        // -16.0 Ap[abcd] k[ce] p[abed] 
    {"abcd,ae,becd",          -8.0,   3, { 6,10, 5}},        //  -8.0 Ap[abcd] k[ae] p[becd] 
    {"abcd,ae,bedc",          16.0,   3, { 6,10, 5}},        //  16.0 Ap[abcd] k[ae] p[bedc] 
    {"abcd,efc,eag,bgdf",    -16.0,   4, { 6,15,19, 5}},     // -16.0 Ap[abcd] W[efc] W[eag] p[bgdf] 
    {"abcd,efc,eag,bgfd",      8.0,   4, { 6,15,19, 5}},     //   8.0 Ap[abcd] W[efc] W[eag] p[bgfd] 
    {"abcd,efc,ebg,agdf",      8.0,   4, { 6,15,19, 5}},     //   8.0 Ap[abcd] W[efc] W[ebg] p[agdf] 
    {"abcd,efc,ebg,agfd",    -16.0,   4, { 6,15,19, 5}},     // -16.0 Ap[abcd] W[efc] W[ebg] p[agfd] 
    {"abcd,efh,eag,bgcd,hf", -16.0,   5, { 6,15,19, 5,20}},  // -16.0 Ap[abcd] W[efh] W[eag] p[bgcd] delta[hf] 
    {"abcd,efh,eag,bgdc,hf",  32.0,   5, { 6,15,19, 5,20}},  //  32.0 Ap[abcd] W[efh] W[eag] p[bgdc] delta[hf] 
    {"abcd,efg,eac,bgdf",     32.0,   4, { 6,16,18, 5}},     //  32.0 Ap[abcd] W[efg] W[eac] p[bgdf] 
    {"abcd,efg,eac,bgfd",    -16.0,   4, { 6,16,18, 5}},     // -16.0 Ap[abcd] W[efg] W[eac] p[bgfd] 
    {"abcd,efg,ead,bgcf",    -16.0,   4, { 6,16,18, 5}},     // -16.0 Ap[abcd] W[efg] W[ead] p[bgcf] 
    {"abcd,efg,ead,bgfc",      8.0,   4, { 6,16,18, 5}},     //   8.0 Ap[abcd] W[efg] W[ead] p[bgfc] 
    {"abcd,efg,eaf,bgcd",      8.0,   4, { 6,16,18, 5}},     //   8.0 Ap[abcd] W[efg] W[eaf] p[bgcd] 
    {"abcd,efg,eaf,bgdc",    -16.0,   4, { 6,16,18, 5}},     // -16.0 Ap[abcd] W[efg] W[eaf] p[bgdc] 
    {"abcd,abce,fed,fgh,hg", -32.0,   5, { 6, 5,15,15,20}},  // -32.0 Ap[abcd] p[abce] W[fed] W[fgh] delta[hg] 
    {"abcd,abce,fgd,feg",     16.0,   4, { 6, 5,15,15}},     //  16.0 Ap[abcd] p[abce] W[fgd] W[feg] 
    {"abcd,abde,fec,fgh,hg",  16.0,   5, { 6, 5,15,15,20}},  //  16.0 Ap[abcd] p[abde] W[fec] W[fgh] delta[hg] 
    {"abcd,abde,fgc,feg",     -8.0,   4, { 6, 5,15,15}},     //  -8.0 Ap[abcd] p[abde] W[fgc] W[feg] 
    {"abcd,abef,gec,gfd",      8.0,   4, { 6, 5,15,15}},     //   8.0 Ap[abcd] p[abef] W[gec] W[gfd] 
    {"abcd,abef,gfc,ged",     -4.0,   4, { 6, 5,15,15}},     //  -4.0 Ap[abcd] p[abef] W[gfc] W[ged] 
    {"abcd,efcd,gae,gbf",      8.0,   4, { 6, 5,19,19}},     //   8.0 Ap[abcd] p[efcd] W[gae] W[gbf] 
    {"abcd,efcd,gaf,gbe",     -4.0,   4, { 6, 5,19,19}},     //  -4.0 Ap[abcd] p[efcd] W[gaf] W[gbe] 
    {"abcd,efg,ehc,abdh,fg",   8.0,   5, { 6,11,15, 5,21}},  //   8.0 Ap[abcd] W[efg] W[ehc] p[abdh] E1[fg] 
    {"abcd,efg,ehc,abhd,fg", -16.0,   5, { 6,11,15, 5,21}},  // -16.0 Ap[abcd] W[efg] W[ehc] p[abhd] E1[fg] 
    {"abcd,efg,eah,bhcd,fg",  -8.0,   5, { 6,11,19, 5,21}},  //  -8.0 Ap[abcd] W[efg] W[eah] p[bhcd] E1[fg] 
    {"abcd,efg,eah,bhdc,fg",  16.0,   5, { 6,11,19, 5,21}},  //  16.0 Ap[abcd] W[efg] W[eah] p[bhdc] E1[fg] 
    {"abcd,efc,egh,abdg,fh",  -4.0,   5, { 6,12,14, 5,21}},  //  -4.0 Ap[abcd] W[efc] W[egh] p[abdg] E1[fh] 
    {"abcd,efc,egh,abgd,fh",   8.0,   5, { 6,12,14, 5,21}},  //   8.0 Ap[abcd] W[efc] W[egh] p[abgd] E1[fh] 
    {"abcd,efg,eah,bgcd,fh",   4.0,   5, { 6,13,17, 5,21}},  //   4.0 Ap[abcd] W[efg] W[eah] p[bgcd] E1[fh] 
    {"abcd,efg,eah,bgdc,fh",  -8.0,   5, { 6,13,17, 5,21}},  //  -8.0 Ap[abcd] W[efg] W[eah] p[bgdc] E1[fh] 
  };

  FEqInfo bVec[4] = {
    {"CDKL,LM,lCK,lDM",   2.0,   4, { 3,20,18,18}}, //  2.0 b[CDKL] deltac[LM] V[CDKM]
    {"CDKL,LM,lDK,lCM",  -1.0,   4, { 3,20,18,18}}, // -1.0 b[CDKL] deltac[LM] V[DCKM]
    {"CDKL,LM,lCM,lDK",  -1.0,   4, { 3,20,18,18}}, // -1.0 b[CDKL] deltac[LM] V[CDMK]
    {"CDKL,LM,lDM,lCK",   2.0,   4, { 3,20,18,18}}, //  2.0 b[CDKL] deltac[LM] V[DCMK]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC_CCVV";
    Out.perturberClass = "CCVV";
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 22;
    Out.EqsRes = FEqSet(&EqsRes[0], 32, "MRLCC_CCVV/Res");
    Out.bVec = FEqSet(&bVec[0], 4, "MRLCC_CCVV/bVec");
  };
};

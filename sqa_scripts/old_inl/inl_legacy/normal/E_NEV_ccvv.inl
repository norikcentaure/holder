namespace NEVPT_CCVV {

  FTensorDecl TensorDecls[13] = {
    /*  0*/{"R"      , "eecc"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "eecc"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "eecc"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "eecc"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "eecc"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "eecc"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "eecc"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "eecc"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "eecc"     , "", USAGE_Amplitude   },
    /*  9*/{"f"      , "cc"       , "", USAGE_Hamiltonian },
    /* 10*/{"f"      , "ee"       , "", USAGE_Hamiltonian },
    /* 11*/{"W"      , "eecc"     , "", USAGE_Hamiltonian },
    /* 12*/{"delta"  , "cc"       , "", USAGE_Density     },
  };

  FEqInfo EqsRes[4] = {
    {"abcd,ce,abde",   8.0,   3, { 6, 9, 5}},  //   8.0 Ap[abcd] f[ce] p[abde] 
    {"abcd,ce,abed", -16.0,   3, { 6, 9, 5}},  // -16.0 Ap[abcd] f[ce] p[abed] 
    {"abcd,ae,becd",  -8.0,   3, { 6,10, 5}},  //  -8.0 Ap[abcd] f[ae] p[becd] 
    {"abcd,ae,bedc",  16.0,   3, { 6,10, 5}},  //  16.0 Ap[abcd] f[ae] p[bedc] 
  };

  FEqInfo bVec[4] = {
    {"CDKL,LM,CDKM",   2.0,   3, { 3,12,11}}, //  2.0 b[CDKL] deltac[LM] W[CDKM]
    {"CDKL,LM,DCKM",  -1.0,   3, { 3,12,11}}, // -1.0 b[CDKL] deltac[LM] W[DCKM]
    {"CDKL,LM,CDMK",  -1.0,   3, { 3,12,11}}, // -1.0 b[CDKL] deltac[LM] W[CDMK]
    {"CDKL,LM,DCMK",   2.0,   3, { 3,12,11}}, //  2.0 b[CDKL] deltac[LM] W[DCMK]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT_CCVV";
    Out.perturberClass = "CCVV";
    Out.Whandcoded_if_zero = 0;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 13;
    Out.EqsRes = FEqSet(&EqsRes[0], 4, "NEVPT_CCVV/Res");
    Out.bVec = FEqSet(&bVec[0], 4, "NEVPT_CCVV/bVec");
  };
};

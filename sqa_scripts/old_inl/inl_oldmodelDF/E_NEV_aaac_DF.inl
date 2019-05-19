namespace NEVPT_AAAC {

  FTensorDecl TensorDecls[20] = {
    /*  0*/{"R"      , "caaa"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "caaa"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "caaa"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "caaa"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "caaa"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "caaa"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "caaa"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "caaa"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "caaa"     , "", USAGE_Amplitude   },
    /*  9*/{"f"      , "ca"       , "", USAGE_Hamiltonian },
    /* 10*/{"f"      , "aa"       , "", USAGE_Hamiltonian },
    /* 11*/{"f"      , "cc"       , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "Laa"      , "", USAGE_Hamiltonian },
    /* 13*/{"W"      , "Lca"      , "", USAGE_Hamiltonian },
    /* 14*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 15*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 16*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 17*/{"S1"     , "aaaaaa"   , "", USAGE_Density     },
    /* 18*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 19*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

	FEqInfo EqsRes[74] = {
    {"abcd,be,acef,df",             -1.0,   4, { 6,10, 5,15}},     //  -1.0 Ap[abcd] f[be] p[acef] E1[df] 
    {"abcd,be,aecf,df",              2.0,   4, { 6,10, 5,15}},     //   2.0 Ap[abcd] f[be] p[aecf] E1[df] 
    {"abcd,ce,abef,df",              2.0,   4, { 6,10, 5,15}},     //   2.0 Ap[abcd] f[ce] p[abef] E1[df] 
    {"abcd,ce,aebf,df",             -1.0,   4, { 6,10, 5,15}},     //  -1.0 Ap[abcd] f[ce] p[aebf] E1[df] 
    {"abcd,ef,abce,df",             -2.0,   4, { 6,10, 5,15}},     //  -2.0 Ap[abcd] f[ef] p[abce] E1[df] 
    {"abcd,ef,acbe,df",              1.0,   4, { 6,10, 5,15}},     //   1.0 Ap[abcd] f[ef] p[acbe] E1[df] 
    {"abcd,ae,ebcf,df",             -2.0,   4, { 6,11, 5,15}},     //  -2.0 Ap[abcd] f[ae] p[ebcf] E1[df] 
    {"abcd,ae,ecbf,df",              1.0,   4, { 6,11, 5,15}},     //   1.0 Ap[abcd] f[ae] p[ecbf] E1[df] 
    {"abcd,aefg,hbe,hcf,dg",         2.0,   5, { 6, 5,12,12,15}},  //   2.0 Ap[abcd] p[aefg] W[hbe] W[hcf] E1[dg] 
    {"abcd,aefg,hbf,hce,dg",        -1.0,   5, { 6, 5,12,12,15}},  //  -1.0 Ap[abcd] p[aefg] W[hbf] W[hce] E1[dg] 
    {"abcd,be,aefg,dfgc",           -1.0,   4, { 6,10, 5,16}},     //  -1.0 Ap[abcd] f[be] p[aefg] E2[dfgc] 
    {"abcd,be,afeg,dfcg",           -1.0,   4, { 6,10, 5,16}},     //  -1.0 Ap[abcd] f[be] p[afeg] E2[dfcg] 
    {"abcd,ce,aefg,dfbg",           -1.0,   4, { 6,10, 5,16}},     //  -1.0 Ap[abcd] f[ce] p[aefg] E2[dfbg] 
    {"abcd,ce,afeg,dfbg",            2.0,   4, { 6,10, 5,16}},     //   2.0 Ap[abcd] f[ce] p[afeg] E2[dfbg] 
    {"abcd,ef,abeg,dfgc",           -1.0,   4, { 6,10, 5,16}},     //  -1.0 Ap[abcd] f[ef] p[abeg] E2[dfgc] 
    {"abcd,ef,abge,dgfc",            1.0,   4, { 6,10, 5,16}},     //   1.0 Ap[abcd] f[ef] p[abge] E2[dgfc] 
    {"abcd,ef,aceg,dfbg",           -1.0,   4, { 6,10, 5,16}},     //  -1.0 Ap[abcd] f[ef] p[aceg] E2[dfbg] 
    {"abcd,ef,acge,dgbf",            1.0,   4, { 6,10, 5,16}},     //   1.0 Ap[abcd] f[ef] p[acge] E2[dgbf] 
    {"abcd,ef,aebg,dfcg",           -1.0,   4, { 6,10, 5,16}},     //  -1.0 Ap[abcd] f[ef] p[aebg] E2[dfcg] 
    {"abcd,ef,aecg,dfbg",            2.0,   4, { 6,10, 5,16}},     //   2.0 Ap[abcd] f[ef] p[aecg] E2[dfbg] 
    {"abcd,ef,agbe,dgcf",            1.0,   4, { 6,10, 5,16}},     //   1.0 Ap[abcd] f[ef] p[agbe] E2[dgcf] 
    {"abcd,ef,agce,dgbf",           -2.0,   4, { 6,10, 5,16}},     //  -2.0 Ap[abcd] f[ef] p[agce] E2[dgbf] 
    {"abcd,ae,ebfg,dfgc",            1.0,   4, { 6,11, 5,16}},     //   1.0 Ap[abcd] f[ae] p[ebfg] E2[dfgc] 
    {"abcd,ae,ecfg,dfbg",            1.0,   4, { 6,11, 5,16}},     //   1.0 Ap[abcd] f[ae] p[ecfg] E2[dfbg] 
    {"abcd,ae,efbg,dfcg",            1.0,   4, { 6,11, 5,16}},     //   1.0 Ap[abcd] f[ae] p[efbg] E2[dfcg] 
    {"abcd,ae,efcg,dfbg",           -2.0,   4, { 6,11, 5,16}},     //  -2.0 Ap[abcd] f[ae] p[efcg] E2[dfbg] 
    {"abcd,abce,feg,fhi,dhgi",      -2.0,   5, { 6, 5,12,12,16}},  //  -2.0 Ap[abcd] p[abce] W[feg] W[fhi] E2[dhgi] 
    {"abcd,abef,gce,ghi,dhfi",       2.0,   5, { 6, 5,12,12,16}},  //   2.0 Ap[abcd] p[abef] W[gce] W[ghi] E2[dhfi] 
    {"abcd,abef,gch,gfi,deih",       1.0,   5, { 6, 5,12,12,16}},  //   1.0 Ap[abcd] p[abef] W[gch] W[gfi] E2[deih] 
    {"abcd,abef,gch,gie,difh",      -1.0,   5, { 6, 5,12,12,16}},  //  -1.0 Ap[abcd] p[abef] W[gch] W[gie] E2[difh] 
    {"abcd,acbe,feg,fhi,dhgi",       1.0,   5, { 6, 5,12,12,16}},  //   1.0 Ap[abcd] p[acbe] W[feg] W[fhi] E2[dhgi] 
    {"abcd,acef,gbe,ghi,dhfi",      -1.0,   5, { 6, 5,12,12,16}},  //  -1.0 Ap[abcd] p[acef] W[gbe] W[ghi] E2[dhfi] 
    {"abcd,acef,gbh,gfi,dehi",       1.0,   5, { 6, 5,12,12,16}},  //   1.0 Ap[abcd] p[acef] W[gbh] W[gfi] E2[dehi] 
    {"abcd,acef,gbh,gie,dihf",      -1.0,   5, { 6, 5,12,12,16}},  //  -1.0 Ap[abcd] p[acef] W[gbh] W[gie] E2[dihf] 
    {"abcd,aebf,gce,ghi,dhfi",      -1.0,   5, { 6, 5,12,12,16}},  //  -1.0 Ap[abcd] p[aebf] W[gce] W[ghi] E2[dhfi] 
    {"abcd,aebf,gch,gfi,dehi",       1.0,   5, { 6, 5,12,12,16}},  //   1.0 Ap[abcd] p[aebf] W[gch] W[gfi] E2[dehi] 
    {"abcd,aebf,gch,gie,dihf",      -1.0,   5, { 6, 5,12,12,16}},  //  -1.0 Ap[abcd] p[aebf] W[gch] W[gie] E2[dihf] 
    {"abcd,aecf,gbe,ghi,dhfi",       2.0,   5, { 6, 5,12,12,16}},  //   2.0 Ap[abcd] p[aecf] W[gbe] W[ghi] E2[dhfi] 
    {"abcd,aecf,gbh,gfi,dehi",      -2.0,   5, { 6, 5,12,12,16}},  //  -2.0 Ap[abcd] p[aecf] W[gbh] W[gfi] E2[dehi] 
    {"abcd,aecf,gbh,gie,dihf",       2.0,   5, { 6, 5,12,12,16}},  //   2.0 Ap[abcd] p[aecf] W[gbh] W[gie] E2[dihf] 
    {"abcd,aefg,hbe,hci,dfgi",      -1.0,   5, { 6, 5,12,12,16}},  //  -1.0 Ap[abcd] p[aefg] W[hbe] W[hci] E2[dfgi] 
    {"abcd,aefg,hbe,hif,digc",      -1.0,   5, { 6, 5,12,12,16}},  //  -1.0 Ap[abcd] p[aefg] W[hbe] W[hif] E2[digc] 
    {"abcd,aefg,hbf,hci,deig",      -1.0,   5, { 6, 5,12,12,16}},  //  -1.0 Ap[abcd] p[aefg] W[hbf] W[hci] E2[deig] 
    {"abcd,aefg,hbf,hie,dicg",      -1.0,   5, { 6, 5,12,12,16}},  //  -1.0 Ap[abcd] p[aefg] W[hbf] W[hie] E2[dicg] 
    {"abcd,aefg,hbi,hce,dfig",      -1.0,   5, { 6, 5,12,12,16}},  //  -1.0 Ap[abcd] p[aefg] W[hbi] W[hce] E2[dfig] 
    {"abcd,aefg,hbi,hcf,deig",       2.0,   5, { 6, 5,12,12,16}},  //   2.0 Ap[abcd] p[aefg] W[hbi] W[hcf] E2[deig] 
    {"abcd,aefg,hce,hif,dibg",      -1.0,   5, { 6, 5,12,12,16}},  //  -1.0 Ap[abcd] p[aefg] W[hce] W[hif] E2[dibg] 
    {"abcd,aefg,hcf,hie,dibg",       2.0,   5, { 6, 5,12,12,16}},  //   2.0 Ap[abcd] p[aefg] W[hcf] W[hie] E2[dibg] 
    {"abcd,ef,aegh,dfgbhc",         -1.0,   4, { 6,10, 5,18}},     //  -1.0 Ap[abcd] f[ef] p[aegh] E3[dfgbhc] 
    {"abcd,ef,ageh,dfgbch",         -1.0,   4, { 6,10, 5,18}},     //  -1.0 Ap[abcd] f[ef] p[ageh] E3[dfgbch] 
    {"abcd,ef,aghe,dghbfc",          1.0,   4, { 6,10, 5,18}},     //   1.0 Ap[abcd] f[ef] p[aghe] E3[dghbfc] 
    {"abcd,ae,efgh,dfgbhc",          1.0,   4, { 6,11, 5,18}},     //   1.0 Ap[abcd] f[ae] p[efgh] E3[dfgbhc] 
    {"abcd,abef,gfh,gij,deihcj",     1.0,   5, { 6, 5,12,12,18}},  //   1.0 Ap[abcd] p[abef] W[gfh] W[gij] E3[deihcj] 
    {"abcd,abef,ghe,gij,dhifcj",    -1.0,   5, { 6, 5,12,12,18}},  //  -1.0 Ap[abcd] p[abef] W[ghe] W[gij] E3[dhifcj] 
    {"abcd,acef,gfh,gij,deibhj",     1.0,   5, { 6, 5,12,12,18}},  //   1.0 Ap[abcd] p[acef] W[gfh] W[gij] E3[deibhj] 
    {"abcd,acef,ghe,gij,dhibfj",    -1.0,   5, { 6, 5,12,12,18}},  //  -1.0 Ap[abcd] p[acef] W[ghe] W[gij] E3[dhibfj] 
    {"abcd,aebf,gfh,gij,deichj",     1.0,   5, { 6, 5,12,12,18}},  //   1.0 Ap[abcd] p[aebf] W[gfh] W[gij] E3[deichj] 
    {"abcd,aebf,ghe,gij,dhicfj",    -1.0,   5, { 6, 5,12,12,18}},  //  -1.0 Ap[abcd] p[aebf] W[ghe] W[gij] E3[dhicfj] 
    {"abcd,aecf,gfh,gij,deibhj",    -2.0,   5, { 6, 5,12,12,18}},  //  -2.0 Ap[abcd] p[aecf] W[gfh] W[gij] E3[deibhj] 
    {"abcd,aecf,ghe,gij,dhibfj",     2.0,   5, { 6, 5,12,12,18}},  //   2.0 Ap[abcd] p[aecf] W[ghe] W[gij] E3[dhibfj] 
    {"abcd,aefg,hbe,hij,dfigcj",    -1.0,   5, { 6, 5,12,12,18}},  //  -1.0 Ap[abcd] p[aefg] W[hbe] W[hij] E3[dfigcj] 
    {"abcd,aefg,hbf,hij,deicgj",    -1.0,   5, { 6, 5,12,12,18}},  //  -1.0 Ap[abcd] p[aefg] W[hbf] W[hij] E3[deicgj] 
    {"abcd,aefg,hbi,hgj,defijc",     1.0,   5, { 6, 5,12,12,18}},  //   1.0 Ap[abcd] p[aefg] W[hbi] W[hgj] E3[defijc] 
    {"abcd,aefg,hbi,hje,dfjicg",    -1.0,   5, { 6, 5,12,12,18}},  //  -1.0 Ap[abcd] p[aefg] W[hbi] W[hje] E3[dfjicg] 
    {"abcd,aefg,hbi,hjf,dejigc",    -1.0,   5, { 6, 5,12,12,18}},  //  -1.0 Ap[abcd] p[aefg] W[hbi] W[hjf] E3[dejigc] 
    {"abcd,aefg,hce,hij,dfibgj",    -1.0,   5, { 6, 5,12,12,18}},  //  -1.0 Ap[abcd] p[aefg] W[hce] W[hij] E3[dfibgj] 
    {"abcd,aefg,hcf,hij,deibgj",     2.0,   5, { 6, 5,12,12,18}},  //   2.0 Ap[abcd] p[aefg] W[hcf] W[hij] E3[deibgj] 
    {"abcd,aefg,hci,hgj,defbji",     1.0,   5, { 6, 5,12,12,18}},  //   1.0 Ap[abcd] p[aefg] W[hci] W[hgj] E3[defbji] 
    {"abcd,aefg,hci,hje,dfjbig",    -1.0,   5, { 6, 5,12,12,18}},  //  -1.0 Ap[abcd] p[aefg] W[hci] W[hje] E3[dfjbig] 
    {"abcd,aefg,hci,hjf,dejbgi",    -1.0,   5, { 6, 5,12,12,18}},  //  -1.0 Ap[abcd] p[aefg] W[hci] W[hjf] E3[dejbgi] 
    {"abcd,aefg,hie,hjf,dijbgc",    -1.0,   5, { 6, 5,12,12,18}},  //  -1.0 Ap[abcd] p[aefg] W[hie] W[hjf] E3[dijbgc] 
    {"abde,afgh,ihj,ikc,efgkbjdc",   1.0,   5, { 6, 5,12,12,19}},  //   1.0 Ap[abde] p[afgh] W[ihj] W[ikc] E4[efgkbjdc] 
    {"abde,afgh,ijf,ikc,egjkbdhc",  -1.0,   5, { 6, 5,12,12,19}},  //  -1.0 Ap[abde] p[afgh] W[ijf] W[ikc] E4[egjkbdhc] 
    {"abde,afgh,ijg,ikc,efjkbhdc",  -1.0,   5, { 6, 5,12,12,19}},  //  -1.0 Ap[abde] p[afgh] W[ijg] W[ikc] E4[efjkbhdc] 
	};

  FEqInfo bVec[7] = {
    {"ABCE,lAC,lBD,ED"    ,   2.0,   4, { 3,13,12,15}}, //  2.0 b[abce] W[abcd] E1[ed]
    {"ACBE,lAC,lBD,ED"    ,  -1.0,   4, { 3,13,12,15}}, // -1.0 b[acbe] W[abcd] E1[ed]
    {"ABEF,lAC,lBD,CFED"  ,  -1.0,   4, { 3,13,12,16}}, // -1.0 b[abef] W[abcd] E2[cfed]
    {"ACEF,lAC,lBD,BFDE"  ,  -1.0,   4, { 3,13,12,16}}, // -1.0 b[acef] W[abcd] E2[bfde]
    {"AEBF,lAC,lBD,CFDE"  ,  -1.0,   4, { 3,13,12,16}}, // -1.0 b[aebf] W[abcd] E2[cfde]
    {"AECF,lAC,lBD,BFDE"  ,   2.0,   4, { 3,13,12,16}}, //  2.0 b[aecf] W[abcd] E2[bfde]
    {"AEFG,lAC,lBD,BCGDFE",  -1.0,   4, { 3,13,12,18}}, // -1.0 b[aefg] W[abcd] E3[bcgdfe]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT_AAAC";
    Out.perturberClass = "AAAC";
    Out.Whandcoded_if_zero = 2;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 20;
    Out.EqsRes = FEqSet(&EqsRes[0], 74, "NEVPT_AAAC/Res");
    Out.bVec = FEqSet(&bVec[0], 7, "NEVPT_AAAC/bVec");
  };
};

namespace MRLCC_AAAC_DF {

  FTensorDecl TensorDecls[23] = {
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
    /* 10*/{"k"      , "aa"       , "", USAGE_Hamiltonian },
    /* 11*/{"k"      , "cc"       , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "Laa"      , "", USAGE_Hamiltonian },
    /* 13*/{"W"      , "Lac"      , "", USAGE_Hamiltonian },
    /* 14*/{"W"      , "Lca"      , "", USAGE_Hamiltonian },
    /* 15*/{"W"      , "Lcc"      , "", USAGE_Hamiltonian },
    /* 16*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 17*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 18*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 19*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 20*/{"S1"     , "aaaaaa"   , "", USAGE_Density     },
    /* 21*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 22*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

  FEqInfo EqsRes[184] = {
    {"abcd,be,acef,df",              -1.0,   4, { 6,10, 5,18}},        //  -1.0 Ap[abcd] k[be] p[acef] E1[df] 
    {"abcd,be,aecf,df",               2.0,   4, { 6,10, 5,18}},        //   2.0 Ap[abcd] k[be] p[aecf] E1[df] 
    {"abcd,ce,abef,df",               2.0,   4, { 6,10, 5,18}},        //   2.0 Ap[abcd] k[ce] p[abef] E1[df] 
    {"abcd,ce,aebf,df",              -1.0,   4, { 6,10, 5,18}},        //  -1.0 Ap[abcd] k[ce] p[aebf] E1[df] 
    {"abcd,ef,abce,df",              -2.0,   4, { 6,10, 5,18}},        //  -2.0 Ap[abcd] k[ef] p[abce] E1[df] 
    {"abcd,ef,acbe,df",               1.0,   4, { 6,10, 5,18}},        //   1.0 Ap[abcd] k[ef] p[acbe] E1[df] 
    {"abcd,ae,ebcf,df",              -2.0,   4, { 6,11, 5,18}},        //  -2.0 Ap[abcd] k[ae] p[ebcf] E1[df] 
    {"abcd,ae,ecbf,df",               1.0,   4, { 6,11, 5,18}},        //   1.0 Ap[abcd] k[ae] p[ecbf] E1[df] 
    {"abcd,ebf,ega,gcfh,dh",          1.0,   5, { 6,12,15, 5,18}},     //   1.0 Ap[abcd] W[ebf] W[ega] p[gcfh] E1[dh] 
    {"abcd,ebf,ega,gfch,dh",         -2.0,   5, { 6,12,15, 5,18}},     //  -2.0 Ap[abcd] W[ebf] W[ega] p[gfch] E1[dh] 
    {"abcd,ebf,egi,acfh,dh,ig",      -2.0,   6, { 6,12,15, 5,18,17}},  //  -2.0 Ap[abcd] W[ebf] W[egi] p[acfh] E1[dh] delta[ig] 
    {"abcd,ebf,egi,afch,dh,ig",       4.0,   6, { 6,12,15, 5,18,17}},  //   4.0 Ap[abcd] W[ebf] W[egi] p[afch] E1[dh] delta[ig] 
    {"abcd,ecf,ega,gbfh,dh",         -2.0,   5, { 6,12,15, 5,18}},     //  -2.0 Ap[abcd] W[ecf] W[ega] p[gbfh] E1[dh] 
    {"abcd,ecf,ega,gfbh,dh",          1.0,   5, { 6,12,15, 5,18}},     //   1.0 Ap[abcd] W[ecf] W[ega] p[gfbh] E1[dh] 
    {"abcd,ecf,egi,abfh,dh,ig",       4.0,   6, { 6,12,15, 5,18,17}},  //   4.0 Ap[abcd] W[ecf] W[egi] p[abfh] E1[dh] delta[ig] 
    {"abcd,ecf,egi,afbh,dh,ig",      -2.0,   6, { 6,12,15, 5,18,17}},  //  -2.0 Ap[abcd] W[ecf] W[egi] p[afbh] E1[dh] delta[ig] 
    {"abcd,efg,ehi,abcf,dg,ih",      -4.0,   6, { 6,12,15, 5,18,17}},  //  -4.0 Ap[abcd] W[efg] W[ehi] p[abcf] E1[dg] delta[ih] 
    {"abcd,efg,ehi,acbf,dg,ih",       2.0,   6, { 6,12,15, 5,18,17}},  //   2.0 Ap[abcd] W[efg] W[ehi] p[acbf] E1[dg] delta[ih] 
    {"abcd,eba,efg,fcgh,dh",         -2.0,   5, { 6,13,14, 5,18}},     //  -2.0 Ap[abcd] W[eba] W[efg] p[fcgh] E1[dh] 
    {"abcd,eba,efg,fgch,dh",          1.0,   5, { 6,13,14, 5,18}},     //   1.0 Ap[abcd] W[eba] W[efg] p[fgch] E1[dh] 
    {"abcd,ebf,efg,acgh,dh",          1.0,   5, { 6,13,14, 5,18}},     //   1.0 Ap[abcd] W[ebf] W[efg] p[acgh] E1[dh] 
    {"abcd,ebf,efg,agch,dh",         -2.0,   5, { 6,13,14, 5,18}},     //  -2.0 Ap[abcd] W[ebf] W[efg] p[agch] E1[dh] 
    {"abcd,eca,efg,fbgh,dh",          4.0,   5, { 6,13,14, 5,18}},     //   4.0 Ap[abcd] W[eca] W[efg] p[fbgh] E1[dh] 
    {"abcd,eca,efg,fgbh,dh",         -2.0,   5, { 6,13,14, 5,18}},     //  -2.0 Ap[abcd] W[eca] W[efg] p[fgbh] E1[dh] 
    {"abcd,ecf,efg,abgh,dh",         -2.0,   5, { 6,13,14, 5,18}},     //  -2.0 Ap[abcd] W[ecf] W[efg] p[abgh] E1[dh] 
    {"abcd,ecf,efg,agbh,dh",          1.0,   5, { 6,13,14, 5,18}},     //   1.0 Ap[abcd] W[ecf] W[efg] p[agbh] E1[dh] 
    {"abcd,efg,egh,abcf,dh",          2.0,   5, { 6,13,14, 5,18}},     //   2.0 Ap[abcd] W[efg] W[egh] p[abcf] E1[dh] 
    {"abcd,efg,egh,acbf,dh",         -1.0,   5, { 6,13,14, 5,18}},     //  -1.0 Ap[abcd] W[efg] W[egh] p[acbf] E1[dh] 
    {"abcd,aefg,hbe,hcf,dg",          2.0,   5, { 6, 5,12,12,18}},     //   2.0 Ap[abcd] p[aefg] W[hbe] W[hcf] E1[dg] 
    {"abcd,aefg,hbf,hce,dg",         -1.0,   5, { 6, 5,12,12,18}},     //  -1.0 Ap[abcd] p[aefg] W[hbf] W[hce] E1[dg] 
    {"abcd,ebcf,gea,ghi,df,ih",      -4.0,   6, { 6, 5,15,15,18,17}},  //  -4.0 Ap[abcd] p[ebcf] W[gea] W[ghi] E1[df] delta[ih] 
    {"abcd,ebcf,gha,geh,df",          2.0,   5, { 6, 5,15,15,18}},     //   2.0 Ap[abcd] p[ebcf] W[gha] W[geh] E1[df] 
    {"abcd,ecbf,gea,ghi,df,ih",       2.0,   6, { 6, 5,15,15,18,17}},  //   2.0 Ap[abcd] p[ecbf] W[gea] W[ghi] E1[df] delta[ih] 
    {"abcd,ecbf,gha,geh,df",         -1.0,   5, { 6, 5,15,15,18}},     //  -1.0 Ap[abcd] p[ecbf] W[gha] W[geh] E1[df] 
    {"abcd,be,aefg,dfgc",            -1.0,   4, { 6,10, 5,19}},        //  -1.0 Ap[abcd] k[be] p[aefg] E2[dfgc] 
    {"abcd,be,afeg,dfcg",            -1.0,   4, { 6,10, 5,19}},        //  -1.0 Ap[abcd] k[be] p[afeg] E2[dfcg] 
    {"abcd,ce,aefg,dfbg",            -1.0,   4, { 6,10, 5,19}},        //  -1.0 Ap[abcd] k[ce] p[aefg] E2[dfbg] 
    {"abcd,ce,afeg,dfbg",             2.0,   4, { 6,10, 5,19}},        //   2.0 Ap[abcd] k[ce] p[afeg] E2[dfbg] 
    {"abcd,ef,abeg,dfgc",            -1.0,   4, { 6,10, 5,19}},        //  -1.0 Ap[abcd] k[ef] p[abeg] E2[dfgc] 
    {"abcd,ef,abge,dgfc",             1.0,   4, { 6,10, 5,19}},        //   1.0 Ap[abcd] k[ef] p[abge] E2[dgfc] 
    {"abcd,ef,aceg,dfbg",            -1.0,   4, { 6,10, 5,19}},        //  -1.0 Ap[abcd] k[ef] p[aceg] E2[dfbg] 
    {"abcd,ef,acge,dgbf",             1.0,   4, { 6,10, 5,19}},        //   1.0 Ap[abcd] k[ef] p[acge] E2[dgbf] 
    {"abcd,ef,aebg,dfcg",            -1.0,   4, { 6,10, 5,19}},        //  -1.0 Ap[abcd] k[ef] p[aebg] E2[dfcg] 
    {"abcd,ef,aecg,dfbg",             2.0,   4, { 6,10, 5,19}},        //   2.0 Ap[abcd] k[ef] p[aecg] E2[dfbg] 
    {"abcd,ef,agbe,dgcf",             1.0,   4, { 6,10, 5,19}},        //   1.0 Ap[abcd] k[ef] p[agbe] E2[dgcf] 
    {"abcd,ef,agce,dgbf",            -2.0,   4, { 6,10, 5,19}},        //  -2.0 Ap[abcd] k[ef] p[agce] E2[dgbf] 
    {"abcd,ae,ebfg,dfgc",             1.0,   4, { 6,11, 5,19}},        //   1.0 Ap[abcd] k[ae] p[ebfg] E2[dfgc] 
    {"abcd,ae,ecfg,dfbg",             1.0,   4, { 6,11, 5,19}},        //   1.0 Ap[abcd] k[ae] p[ecfg] E2[dfbg] 
    {"abcd,ae,efbg,dfcg",             1.0,   4, { 6,11, 5,19}},        //   1.0 Ap[abcd] k[ae] p[efbg] E2[dfcg] 
    {"abcd,ae,efcg,dfbg",            -2.0,   4, { 6,11, 5,19}},        //  -2.0 Ap[abcd] k[ae] p[efcg] E2[dfbg] 
    {"abcd,ebf,ega,gchi,dhfi",        1.0,   5, { 6,12,15, 5,19}},     //   1.0 Ap[abcd] W[ebf] W[ega] p[gchi] E2[dhfi] 
    {"abcd,ebf,ega,gfhi,dhic",        1.0,   5, { 6,12,15, 5,19}},     //   1.0 Ap[abcd] W[ebf] W[ega] p[gfhi] E2[dhic] 
    {"abcd,ebf,ega,ghci,dhfi",       -2.0,   5, { 6,12,15, 5,19}},     //  -2.0 Ap[abcd] W[ebf] W[ega] p[ghci] E2[dhfi] 
    {"abcd,ebf,ega,ghfi,dhci",        1.0,   5, { 6,12,15, 5,19}},     //   1.0 Ap[abcd] W[ebf] W[ega] p[ghfi] E2[dhci] 
    {"abcd,ebf,egj,afhi,dhic,jg",    -2.0,   6, { 6,12,15, 5,19,17}},  //  -2.0 Ap[abcd] W[ebf] W[egj] p[afhi] E2[dhic] delta[jg] 
    {"abcd,ebf,egj,ahfi,dhci,jg",    -2.0,   6, { 6,12,15, 5,19,17}},  //  -2.0 Ap[abcd] W[ebf] W[egj] p[ahfi] E2[dhci] delta[jg] 
    {"abcd,ecf,ega,gbhi,dhif",        1.0,   5, { 6,12,15, 5,19}},     //   1.0 Ap[abcd] W[ecf] W[ega] p[gbhi] E2[dhif] 
    {"abcd,ecf,ega,gfhi,dhbi",        1.0,   5, { 6,12,15, 5,19}},     //   1.0 Ap[abcd] W[ecf] W[ega] p[gfhi] E2[dhbi] 
    {"abcd,ecf,ega,ghbi,dhfi",        1.0,   5, { 6,12,15, 5,19}},     //   1.0 Ap[abcd] W[ecf] W[ega] p[ghbi] E2[dhfi] 
    {"abcd,ecf,ega,ghfi,dhbi",       -2.0,   5, { 6,12,15, 5,19}},     //  -2.0 Ap[abcd] W[ecf] W[ega] p[ghfi] E2[dhbi] 
    {"abcd,ecf,egj,afhi,dhbi,jg",    -2.0,   6, { 6,12,15, 5,19,17}},  //  -2.0 Ap[abcd] W[ecf] W[egj] p[afhi] E2[dhbi] delta[jg] 
    {"abcd,ecf,egj,ahfi,dhbi,jg",     4.0,   6, { 6,12,15, 5,19,17}},  //   4.0 Ap[abcd] W[ecf] W[egj] p[ahfi] E2[dhbi] delta[jg] 
    {"abcd,efg,eha,hbci,dfig",       -2.0,   5, { 6,12,15, 5,19}},     //  -2.0 Ap[abcd] W[efg] W[eha] p[hbci] E2[dfig] 
    {"abcd,efg,eha,hbgi,dfic",        1.0,   5, { 6,12,15, 5,19}},     //   1.0 Ap[abcd] W[efg] W[eha] p[hbgi] E2[dfic] 
    {"abcd,efg,eha,hcbi,dfig",        1.0,   5, { 6,12,15, 5,19}},     //   1.0 Ap[abcd] W[efg] W[eha] p[hcbi] E2[dfig] 
    {"abcd,efg,eha,hcgi,dfbi",        1.0,   5, { 6,12,15, 5,19}},     //   1.0 Ap[abcd] W[efg] W[eha] p[hcgi] E2[dfbi] 
    {"abcd,efg,eha,hgbi,dfci",        1.0,   5, { 6,12,15, 5,19}},     //   1.0 Ap[abcd] W[efg] W[eha] p[hgbi] E2[dfci] 
    {"abcd,efg,eha,hgci,dfbi",       -2.0,   5, { 6,12,15, 5,19}},     //  -2.0 Ap[abcd] W[efg] W[eha] p[hgci] E2[dfbi] 
    {"abcd,efg,ehj,abgi,dfic,jh",    -2.0,   6, { 6,12,15, 5,19,17}},  //  -2.0 Ap[abcd] W[efg] W[ehj] p[abgi] E2[dfic] delta[jh] 
    {"abcd,efg,ehj,abif,digc,jh",     2.0,   6, { 6,12,15, 5,19,17}},  //   2.0 Ap[abcd] W[efg] W[ehj] p[abif] E2[digc] delta[jh] 
    {"abcd,efg,ehj,acgi,dfbi,jh",    -2.0,   6, { 6,12,15, 5,19,17}},  //  -2.0 Ap[abcd] W[efg] W[ehj] p[acgi] E2[dfbi] delta[jh] 
    {"abcd,efg,ehj,acif,dibg,jh",     2.0,   6, { 6,12,15, 5,19,17}},  //   2.0 Ap[abcd] W[efg] W[ehj] p[acif] E2[dibg] delta[jh] 
    {"abcd,efg,ehj,agbi,dfci,jh",    -2.0,   6, { 6,12,15, 5,19,17}},  //  -2.0 Ap[abcd] W[efg] W[ehj] p[agbi] E2[dfci] delta[jh] 
    {"abcd,efg,ehj,agci,dfbi,jh",     4.0,   6, { 6,12,15, 5,19,17}},  //   4.0 Ap[abcd] W[efg] W[ehj] p[agci] E2[dfbi] delta[jh] 
    {"abcd,efg,ehj,aibf,dicg,jh",     2.0,   6, { 6,12,15, 5,19,17}},  //   2.0 Ap[abcd] W[efg] W[ehj] p[aibf] E2[dicg] delta[jh] 
    {"abcd,efg,ehj,aicf,dibg,jh",    -4.0,   6, { 6,12,15, 5,19,17}},  //  -4.0 Ap[abcd] W[efg] W[ehj] p[aicf] E2[dibg] delta[jh] 
    {"abcd,eba,efg,fchi,dhig",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[eba] W[efg] p[fchi] E2[dhig] 
    {"abcd,eba,efg,fghi,dhci",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[eba] W[efg] p[fghi] E2[dhci] 
    {"abcd,eba,efg,fhci,dhgi",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[eba] W[efg] p[fhci] E2[dhgi] 
    {"abcd,eba,efg,fhgi,dhci",       -2.0,   5, { 6,13,14, 5,19}},     //  -2.0 Ap[abcd] W[eba] W[efg] p[fhgi] E2[dhci] 
    {"abcd,ebf,efg,aghi,dhic",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[ebf] W[efg] p[aghi] E2[dhic] 
    {"abcd,ebf,efg,ahgi,dhci",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[ebf] W[efg] p[ahgi] E2[dhci] 
    {"abcd,eca,efg,fbhi,dhig",       -2.0,   5, { 6,13,14, 5,19}},     //  -2.0 Ap[abcd] W[eca] W[efg] p[fbhi] E2[dhig] 
    {"abcd,eca,efg,fghi,dhbi",       -2.0,   5, { 6,13,14, 5,19}},     //  -2.0 Ap[abcd] W[eca] W[efg] p[fghi] E2[dhbi] 
    {"abcd,eca,efg,fhbi,dhgi",       -2.0,   5, { 6,13,14, 5,19}},     //  -2.0 Ap[abcd] W[eca] W[efg] p[fhbi] E2[dhgi] 
    {"abcd,eca,efg,fhgi,dhbi",        4.0,   5, { 6,13,14, 5,19}},     //   4.0 Ap[abcd] W[eca] W[efg] p[fhgi] E2[dhbi] 
    {"abcd,ecf,efg,aghi,dhbi",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[ecf] W[efg] p[aghi] E2[dhbi] 
    {"abcd,ecf,efg,ahgi,dhbi",       -2.0,   5, { 6,13,14, 5,19}},     //  -2.0 Ap[abcd] W[ecf] W[efg] p[ahgi] E2[dhbi] 
    {"abcd,efa,egh,gbci,dfih",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[efa] W[egh] p[gbci] E2[dfih] 
    {"abcd,efa,egh,gbhi,dfic",       -2.0,   5, { 6,13,14, 5,19}},     //  -2.0 Ap[abcd] W[efa] W[egh] p[gbhi] E2[dfic] 
    {"abcd,efa,egh,gcbi,dfhi",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[efa] W[egh] p[gcbi] E2[dfhi] 
    {"abcd,efa,egh,gchi,dfbi",       -2.0,   5, { 6,13,14, 5,19}},     //  -2.0 Ap[abcd] W[efa] W[egh] p[gchi] E2[dfbi] 
    {"abcd,efa,egh,ghbi,dfic",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[efa] W[egh] p[ghbi] E2[dfic] 
    {"abcd,efa,egh,ghci,dfbi",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[efa] W[egh] p[ghci] E2[dfbi] 
    {"abcd,efg,egh,abhi,dfic",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[efg] W[egh] p[abhi] E2[dfic] 
    {"abcd,efg,egh,abif,dihc",       -1.0,   5, { 6,13,14, 5,19}},     //  -1.0 Ap[abcd] W[efg] W[egh] p[abif] E2[dihc] 
    {"abcd,efg,egh,achi,dfbi",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[efg] W[egh] p[achi] E2[dfbi] 
    {"abcd,efg,egh,acif,dibh",       -1.0,   5, { 6,13,14, 5,19}},     //  -1.0 Ap[abcd] W[efg] W[egh] p[acif] E2[dibh] 
    {"abcd,efg,egh,ahbi,dfci",        1.0,   5, { 6,13,14, 5,19}},     //   1.0 Ap[abcd] W[efg] W[egh] p[ahbi] E2[dfci] 
    {"abcd,efg,egh,ahci,dfbi",       -2.0,   5, { 6,13,14, 5,19}},     //  -2.0 Ap[abcd] W[efg] W[egh] p[ahci] E2[dfbi] 
    {"abcd,efg,egh,aibf,dich",       -1.0,   5, { 6,13,14, 5,19}},     //  -1.0 Ap[abcd] W[efg] W[egh] p[aibf] E2[dich] 
    {"abcd,efg,egh,aicf,dibh",        2.0,   5, { 6,13,14, 5,19}},     //   2.0 Ap[abcd] W[efg] W[egh] p[aicf] E2[dibh] 
    {"abcd,abce,feg,fhi,dhgi",       -2.0,   5, { 6, 5,12,12,19}},     //  -2.0 Ap[abcd] p[abce] W[feg] W[fhi] E2[dhgi] 
    {"abcd,abef,gce,ghi,dhfi",        2.0,   5, { 6, 5,12,12,19}},     //   2.0 Ap[abcd] p[abef] W[gce] W[ghi] E2[dhfi] 
    {"abcd,abef,gch,gfi,deih",        1.0,   5, { 6, 5,12,12,19}},     //   1.0 Ap[abcd] p[abef] W[gch] W[gfi] E2[deih] 
    {"abcd,abef,gch,gie,difh",       -1.0,   5, { 6, 5,12,12,19}},     //  -1.0 Ap[abcd] p[abef] W[gch] W[gie] E2[difh] 
    {"abcd,acbe,feg,fhi,dhgi",        1.0,   5, { 6, 5,12,12,19}},     //   1.0 Ap[abcd] p[acbe] W[feg] W[fhi] E2[dhgi] 
    {"abcd,acef,gbe,ghi,dhfi",       -1.0,   5, { 6, 5,12,12,19}},     //  -1.0 Ap[abcd] p[acef] W[gbe] W[ghi] E2[dhfi] 
    {"abcd,acef,gbh,gfi,dehi",        1.0,   5, { 6, 5,12,12,19}},     //   1.0 Ap[abcd] p[acef] W[gbh] W[gfi] E2[dehi] 
    {"abcd,acef,gbh,gie,dihf",       -1.0,   5, { 6, 5,12,12,19}},     //  -1.0 Ap[abcd] p[acef] W[gbh] W[gie] E2[dihf] 
    {"abcd,aebf,gce,ghi,dhfi",       -1.0,   5, { 6, 5,12,12,19}},     //  -1.0 Ap[abcd] p[aebf] W[gce] W[ghi] E2[dhfi] 
    {"abcd,aebf,gch,gfi,dehi",        1.0,   5, { 6, 5,12,12,19}},     //   1.0 Ap[abcd] p[aebf] W[gch] W[gfi] E2[dehi] 
    {"abcd,aebf,gch,gie,dihf",       -1.0,   5, { 6, 5,12,12,19}},     //  -1.0 Ap[abcd] p[aebf] W[gch] W[gie] E2[dihf] 
    {"abcd,aecf,gbe,ghi,dhfi",        2.0,   5, { 6, 5,12,12,19}},     //   2.0 Ap[abcd] p[aecf] W[gbe] W[ghi] E2[dhfi] 
    {"abcd,aecf,gbh,gfi,dehi",       -2.0,   5, { 6, 5,12,12,19}},     //  -2.0 Ap[abcd] p[aecf] W[gbh] W[gfi] E2[dehi] 
    {"abcd,aecf,gbh,gie,dihf",        2.0,   5, { 6, 5,12,12,19}},     //   2.0 Ap[abcd] p[aecf] W[gbh] W[gie] E2[dihf] 
    {"abcd,aefg,hbe,hci,dfgi",       -1.0,   5, { 6, 5,12,12,19}},     //  -1.0 Ap[abcd] p[aefg] W[hbe] W[hci] E2[dfgi] 
    {"abcd,aefg,hbe,hif,digc",       -1.0,   5, { 6, 5,12,12,19}},     //  -1.0 Ap[abcd] p[aefg] W[hbe] W[hif] E2[digc] 
    {"abcd,aefg,hbf,hci,deig",       -1.0,   5, { 6, 5,12,12,19}},     //  -1.0 Ap[abcd] p[aefg] W[hbf] W[hci] E2[deig] 
    {"abcd,aefg,hbf,hie,dicg",       -1.0,   5, { 6, 5,12,12,19}},     //  -1.0 Ap[abcd] p[aefg] W[hbf] W[hie] E2[dicg] 
    {"abcd,aefg,hbi,hce,dfig",       -1.0,   5, { 6, 5,12,12,19}},     //  -1.0 Ap[abcd] p[aefg] W[hbi] W[hce] E2[dfig] 
    {"abcd,aefg,hbi,hcf,deig",        2.0,   5, { 6, 5,12,12,19}},     //   2.0 Ap[abcd] p[aefg] W[hbi] W[hcf] E2[deig] 
    {"abcd,aefg,hce,hif,dibg",       -1.0,   5, { 6, 5,12,12,19}},     //  -1.0 Ap[abcd] p[aefg] W[hce] W[hif] E2[dibg] 
    {"abcd,aefg,hcf,hie,dibg",        2.0,   5, { 6, 5,12,12,19}},     //   2.0 Ap[abcd] p[aefg] W[hcf] W[hie] E2[dibg] 
    {"abcd,ebfg,hea,hij,dfgc,ji",     2.0,   6, { 6, 5,15,15,19,17}},  //   2.0 Ap[abcd] p[ebfg] W[hea] W[hij] E2[dfgc] delta[ji] 
    {"abcd,ebfg,hia,hei,dfgc",       -1.0,   5, { 6, 5,15,15,19}},     //  -1.0 Ap[abcd] p[ebfg] W[hia] W[hei] E2[dfgc] 
    {"abcd,ecfg,hea,hij,dfbg,ji",     2.0,   6, { 6, 5,15,15,19,17}},  //   2.0 Ap[abcd] p[ecfg] W[hea] W[hij] E2[dfbg] delta[ji] 
    {"abcd,ecfg,hia,hei,dfbg",       -1.0,   5, { 6, 5,15,15,19}},     //  -1.0 Ap[abcd] p[ecfg] W[hia] W[hei] E2[dfbg] 
    {"abcd,efbg,hea,hij,dfcg,ji",     2.0,   6, { 6, 5,15,15,19,17}},  //   2.0 Ap[abcd] p[efbg] W[hea] W[hij] E2[dfcg] delta[ji] 
    {"abcd,efbg,hia,hei,dfcg",       -1.0,   5, { 6, 5,15,15,19}},     //  -1.0 Ap[abcd] p[efbg] W[hia] W[hei] E2[dfcg] 
    {"abcd,efcg,hea,hij,dfbg,ji",    -4.0,   6, { 6, 5,15,15,19,17}},  //  -4.0 Ap[abcd] p[efcg] W[hea] W[hij] E2[dfbg] delta[ji] 
    {"abcd,efcg,hia,hei,dfbg",        2.0,   5, { 6, 5,15,15,19}},     //   2.0 Ap[abcd] p[efcg] W[hia] W[hei] E2[dfbg] 
    {"abcd,ef,aegh,dfgbhc",          -1.0,   4, { 6,10, 5,21}},        //  -1.0 Ap[abcd] k[ef] p[aegh] E3[dfgbhc] 
    {"abcd,ef,ageh,dfgbch",          -1.0,   4, { 6,10, 5,21}},        //  -1.0 Ap[abcd] k[ef] p[ageh] E3[dfgbch] 
    {"abcd,ef,aghe,dghbfc",           1.0,   4, { 6,10, 5,21}},        //   1.0 Ap[abcd] k[ef] p[aghe] E3[dghbfc] 
    {"abcd,ae,efgh,dfgbhc",           1.0,   4, { 6,11, 5,21}},        //   1.0 Ap[abcd] k[ae] p[efgh] E3[dfgbhc] 
    {"abcd,ebf,ega,ghij,dhifjc",      1.0,   5, { 6,12,15, 5,21}},     //   1.0 Ap[abcd] W[ebf] W[ega] p[ghij] E3[dhifjc] 
    {"abcd,ecf,ega,ghij,dhibjf",      1.0,   5, { 6,12,15, 5,21}},     //   1.0 Ap[abcd] W[ecf] W[ega] p[ghij] E3[dhibjf] 
    {"abcd,efg,eha,hbij,dfijgc",      1.0,   5, { 6,12,15, 5,21}},     //   1.0 Ap[abcd] W[efg] W[eha] p[hbij] E3[dfijgc] 
    {"abcd,efg,eha,hcij,dfibgj",      1.0,   5, { 6,12,15, 5,21}},     //   1.0 Ap[abcd] W[efg] W[eha] p[hcij] E3[dfibgj] 
    {"abcd,efg,eha,hgij,dfibjc",      1.0,   5, { 6,12,15, 5,21}},     //   1.0 Ap[abcd] W[efg] W[eha] p[hgij] E3[dfibjc] 
    {"abcd,efg,eha,hibj,dficgj",      1.0,   5, { 6,12,15, 5,21}},     //   1.0 Ap[abcd] W[efg] W[eha] p[hibj] E3[dficgj] 
    {"abcd,efg,eha,hicj,dfibgj",     -2.0,   5, { 6,12,15, 5,21}},     //  -2.0 Ap[abcd] W[efg] W[eha] p[hicj] E3[dfibgj] 
    {"abcd,efg,eha,higj,dfibcj",      1.0,   5, { 6,12,15, 5,21}},     //   1.0 Ap[abcd] W[efg] W[eha] p[higj] E3[dfibcj] 
    {"abcd,efg,ehk,agij,dfibjc,kh",  -2.0,   6, { 6,12,15, 5,21,17}},  //  -2.0 Ap[abcd] W[efg] W[ehk] p[agij] E3[dfibjc] delta[kh] 
    {"abcd,efg,ehk,aigj,dfibcj,kh",  -2.0,   6, { 6,12,15, 5,21,17}},  //  -2.0 Ap[abcd] W[efg] W[ehk] p[aigj] E3[dfibcj] delta[kh] 
    {"abcd,efg,ehk,aijf,dijbgc,kh",   2.0,   6, { 6,12,15, 5,21,17}},  //   2.0 Ap[abcd] W[efg] W[ehk] p[aijf] E3[dijbgc] delta[kh] 
    {"abcd,eba,efg,fhij,dhicjg",      1.0,   5, { 6,13,14, 5,21}},     //   1.0 Ap[abcd] W[eba] W[efg] p[fhij] E3[dhicjg] 
    {"abcd,eca,efg,fhij,dhibjg",     -2.0,   5, { 6,13,14, 5,21}},     //  -2.0 Ap[abcd] W[eca] W[efg] p[fhij] E3[dhibjg] 
    {"abcd,efa,egh,gbij,dfijch",      1.0,   5, { 6,13,14, 5,21}},     //   1.0 Ap[abcd] W[efa] W[egh] p[gbij] E3[dfijch] 
    {"abcd,efa,egh,gcij,dfibjh",      1.0,   5, { 6,13,14, 5,21}},     //   1.0 Ap[abcd] W[efa] W[egh] p[gcij] E3[dfibjh] 
    {"abcd,efa,egh,ghij,dfibcj",      1.0,   5, { 6,13,14, 5,21}},     //   1.0 Ap[abcd] W[efa] W[egh] p[ghij] E3[dfibcj] 
    {"abcd,efa,egh,gibj,dfihcj",      1.0,   5, { 6,13,14, 5,21}},     //   1.0 Ap[abcd] W[efa] W[egh] p[gibj] E3[dfihcj] 
    {"abcd,efa,egh,gicj,dfibhj",      1.0,   5, { 6,13,14, 5,21}},     //   1.0 Ap[abcd] W[efa] W[egh] p[gicj] E3[dfibhj] 
    {"abcd,efa,egh,gihj,dfibcj",     -2.0,   5, { 6,13,14, 5,21}},     //  -2.0 Ap[abcd] W[efa] W[egh] p[gihj] E3[dfibcj] 
    {"abcd,efg,egh,ahij,dfibjc",      1.0,   5, { 6,13,14, 5,21}},     //   1.0 Ap[abcd] W[efg] W[egh] p[ahij] E3[dfibjc] 
    {"abcd,efg,egh,aihj,dfibcj",      1.0,   5, { 6,13,14, 5,21}},     //   1.0 Ap[abcd] W[efg] W[egh] p[aihj] E3[dfibcj] 
    {"abcd,efg,egh,aijf,dijbhc",     -1.0,   5, { 6,13,14, 5,21}},     //  -1.0 Ap[abcd] W[efg] W[egh] p[aijf] E3[dijbhc] 
    {"abcd,abef,gfh,gij,deihcj",      1.0,   5, { 6, 5,12,12,21}},     //   1.0 Ap[abcd] p[abef] W[gfh] W[gij] E3[deihcj] 
    {"abcd,abef,ghe,gij,dhifcj",     -1.0,   5, { 6, 5,12,12,21}},     //  -1.0 Ap[abcd] p[abef] W[ghe] W[gij] E3[dhifcj] 
    {"abcd,acef,gfh,gij,deibhj",      1.0,   5, { 6, 5,12,12,21}},     //   1.0 Ap[abcd] p[acef] W[gfh] W[gij] E3[deibhj] 
    {"abcd,acef,ghe,gij,dhibfj",     -1.0,   5, { 6, 5,12,12,21}},     //  -1.0 Ap[abcd] p[acef] W[ghe] W[gij] E3[dhibfj] 
    {"abcd,aebf,gfh,gij,deichj",      1.0,   5, { 6, 5,12,12,21}},     //   1.0 Ap[abcd] p[aebf] W[gfh] W[gij] E3[deichj] 
    {"abcd,aebf,ghe,gij,dhicfj",     -1.0,   5, { 6, 5,12,12,21}},     //  -1.0 Ap[abcd] p[aebf] W[ghe] W[gij] E3[dhicfj] 
    {"abcd,aecf,gfh,gij,deibhj",     -2.0,   5, { 6, 5,12,12,21}},     //  -2.0 Ap[abcd] p[aecf] W[gfh] W[gij] E3[deibhj] 
    {"abcd,aecf,ghe,gij,dhibfj",      2.0,   5, { 6, 5,12,12,21}},     //   2.0 Ap[abcd] p[aecf] W[ghe] W[gij] E3[dhibfj] 
    {"abcd,aefg,hbe,hij,dfigcj",     -1.0,   5, { 6, 5,12,12,21}},     //  -1.0 Ap[abcd] p[aefg] W[hbe] W[hij] E3[dfigcj] 
    {"abcd,aefg,hbf,hij,deicgj",     -1.0,   5, { 6, 5,12,12,21}},     //  -1.0 Ap[abcd] p[aefg] W[hbf] W[hij] E3[deicgj] 
    {"abcd,aefg,hbi,hgj,defijc",      1.0,   5, { 6, 5,12,12,21}},     //   1.0 Ap[abcd] p[aefg] W[hbi] W[hgj] E3[defijc] 
    {"abcd,aefg,hbi,hje,dfjicg",     -1.0,   5, { 6, 5,12,12,21}},     //  -1.0 Ap[abcd] p[aefg] W[hbi] W[hje] E3[dfjicg] 
    {"abcd,aefg,hbi,hjf,dejigc",     -1.0,   5, { 6, 5,12,12,21}},     //  -1.0 Ap[abcd] p[aefg] W[hbi] W[hjf] E3[dejigc] 
    {"abcd,aefg,hce,hij,dfibgj",     -1.0,   5, { 6, 5,12,12,21}},     //  -1.0 Ap[abcd] p[aefg] W[hce] W[hij] E3[dfibgj] 
    {"abcd,aefg,hcf,hij,deibgj",      2.0,   5, { 6, 5,12,12,21}},     //   2.0 Ap[abcd] p[aefg] W[hcf] W[hij] E3[deibgj] 
    {"abcd,aefg,hci,hgj,defbji",      1.0,   5, { 6, 5,12,12,21}},     //   1.0 Ap[abcd] p[aefg] W[hci] W[hgj] E3[defbji] 
    {"abcd,aefg,hci,hje,dfjbig",     -1.0,   5, { 6, 5,12,12,21}},     //  -1.0 Ap[abcd] p[aefg] W[hci] W[hje] E3[dfjbig] 
    {"abcd,aefg,hci,hjf,dejbgi",     -1.0,   5, { 6, 5,12,12,21}},     //  -1.0 Ap[abcd] p[aefg] W[hci] W[hjf] E3[dejbgi] 
    {"abcd,aefg,hie,hjf,dijbgc",     -1.0,   5, { 6, 5,12,12,21}},     //  -1.0 Ap[abcd] p[aefg] W[hie] W[hjf] E3[dijbgc] 
    {"abcd,efgh,iea,ijk,dfgbhc,kj",   2.0,   6, { 6, 5,15,15,21,17}},  //   2.0 Ap[abcd] p[efgh] W[iea] W[ijk] E3[dfgbhc] delta[kj] 
    {"abcd,efgh,ija,iej,dfgbhc",     -1.0,   5, { 6, 5,15,15,21}},     //  -1.0 Ap[abcd] p[efgh] W[ija] W[iej] E3[dfgbhc] 
    {"abde,fgh,fia,ijkc,egjkbhcd",    1.0,   5, { 6,12,15, 5,22}},     //   1.0 Ap[abde] W[fgh] W[fia] p[ijkc] E4[egjkbhcd] 
    {"abde,fga,fhi,hjkc,egjkbdci",    1.0,   5, { 6,13,14, 5,22}},     //   1.0 Ap[abde] W[fga] W[fhi] p[hjkc] E4[egjkbdci] 
    {"abde,afgh,ihj,ikc,efgkbjdc",    1.0,   5, { 6, 5,12,12,22}},     //   1.0 Ap[abde] p[afgh] W[ihj] W[ikc] E4[efgkbjdc] 
    {"abde,afgh,ijf,ikc,egjkbdhc",   -1.0,   5, { 6, 5,12,12,22}},     //  -1.0 Ap[abde] p[afgh] W[ijf] W[ikc] E4[egjkbdhc] 
    {"abde,afgh,ijg,ikc,efjkbhdc",   -1.0,   5, { 6, 5,12,12,22}},     //  -1.0 Ap[abde] p[afgh] W[ijg] W[ikc] E4[efjkbhdc] 
  };

  FEqInfo bVec[7] = {
    {"ABCE,lAC,lBD,ED"    ,   2.0,   4, { 3,14,12,18}}, //  2.0 b[abce] W[abcd] E1[ed]
    {"ACBE,lAC,lBD,ED"    ,  -1.0,   4, { 3,14,12,18}}, // -1.0 b[acbe] W[abcd] E1[ed]
    {"ABEF,lAC,lBD,CFED"  ,  -1.0,   4, { 3,14,12,19}}, // -1.0 b[abef] W[abcd] E2[cfed]
    {"ACEF,lAC,lBD,BFDE"  ,  -1.0,   4, { 3,14,12,19}}, // -1.0 b[acef] W[abcd] E2[bfde]
    {"AEBF,lAC,lBD,CFDE"  ,  -1.0,   4, { 3,14,12,19}}, // -1.0 b[aebf] W[abcd] E2[cfde]
    {"AECF,lAC,lBD,BFDE"  ,   2.0,   4, { 3,14,12,19}}, //  2.0 b[aecf] W[abcd] E2[bfde]
    {"AEFG,lAC,lBD,BCGDFE",  -1.0,   4, { 3,14,12,21}}, // -1.0 b[aefg] W[abcd] E3[bcgdfe]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC_AAAC";
    Out.perturberClass = "AAAC";
    Out.Whandcoded_if_zero = 2;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 23;
    Out.EqsRes = FEqSet(&EqsRes[0], 184, "MRLCC_AAAC/Res");
    Out.bVec = FEqSet(&bVec[0], 7, "MRLCC_AAAC/bVec");
  };
};

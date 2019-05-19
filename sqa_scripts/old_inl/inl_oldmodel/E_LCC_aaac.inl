namespace MRLCC_AAAC {

  FTensorDecl TensorDecls[24] = {
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
    /* 10*/{"W"      , "caaa"     , "", USAGE_Hamiltonian },
    /* 11*/{"k"      , "aa"       , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "aaaa"     , "", USAGE_Hamiltonian },
    /* 13*/{"W"      , "caac"     , "", USAGE_Hamiltonian },
    /* 14*/{"W"      , "caca"     , "", USAGE_Hamiltonian },
    /* 15*/{"k"      , "cc"       , "", USAGE_Hamiltonian },
    /* 16*/{"W"      , "cccc"     , "", USAGE_Hamiltonian },
    /* 17*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 18*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 19*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 20*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 21*/{"S1"     , "aaaaaa"   , "", USAGE_Density     },
    /* 22*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 23*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

  FEqInfo EqsRes[184] = {
    {"abcd,be,acef,df",           -1.0,   4, { 6,11, 5,19}},     //  -1.0 Ap[abcd] k[be] p[acef] E1[df] 
    {"abcd,be,aecf,df",            2.0,   4, { 6,11, 5,19}},     //   2.0 Ap[abcd] k[be] p[aecf] E1[df] 
    {"abcd,ce,abef,df",            2.0,   4, { 6,11, 5,19}},     //   2.0 Ap[abcd] k[ce] p[abef] E1[df] 
    {"abcd,ce,aebf,df",           -1.0,   4, { 6,11, 5,19}},     //  -1.0 Ap[abcd] k[ce] p[aebf] E1[df] 
    {"abcd,ef,abce,df",           -2.0,   4, { 6,11, 5,19}},     //  -2.0 Ap[abcd] k[ef] p[abce] E1[df] 
    {"abcd,ef,acbe,df",            1.0,   4, { 6,11, 5,19}},     //   1.0 Ap[abcd] k[ef] p[acbe] E1[df] 
    {"abcd,bcef,aefg,dg",          2.0,   4, { 6,12, 5,19}},     //   2.0 Ap[abcd] W[bcef] p[aefg] E1[dg] 
    {"abcd,bcef,afeg,dg",         -1.0,   4, { 6,12, 5,19}},     //  -1.0 Ap[abcd] W[bcef] p[afeg] E1[dg] 
    {"abcd,ebfa,ecfg,dg",         -2.0,   4, { 6,13, 5,19}},     //  -2.0 Ap[abcd] W[ebfa] p[ecfg] E1[dg] 
    {"abcd,ebfa,efcg,dg",          1.0,   4, { 6,13, 5,19}},     //   1.0 Ap[abcd] W[ebfa] p[efcg] E1[dg] 
    {"abcd,ebfh,acfg,dg,he",       1.0,   5, { 6,13, 5,19,18}},  //   1.0 Ap[abcd] W[ebfh] p[acfg] E1[dg] delta[he] 
    {"abcd,ebfh,afcg,dg,he",      -2.0,   5, { 6,13, 5,19,18}},  //  -2.0 Ap[abcd] W[ebfh] p[afcg] E1[dg] delta[he] 
    {"abcd,ecfa,ebfg,dg",          4.0,   4, { 6,13, 5,19}},     //   4.0 Ap[abcd] W[ecfa] p[ebfg] E1[dg] 
    {"abcd,ecfa,efbg,dg",         -2.0,   4, { 6,13, 5,19}},     //  -2.0 Ap[abcd] W[ecfa] p[efbg] E1[dg] 
    {"abcd,ecfh,abfg,dg,he",      -2.0,   5, { 6,13, 5,19,18}},  //  -2.0 Ap[abcd] W[ecfh] p[abfg] E1[dg] delta[he] 
    {"abcd,ecfh,afbg,dg,he",       1.0,   5, { 6,13, 5,19,18}},  //   1.0 Ap[abcd] W[ecfh] p[afbg] E1[dg] delta[he] 
    {"abcd,efgh,abcf,dg,he",       2.0,   5, { 6,13, 5,19,18}},  //   2.0 Ap[abcd] W[efgh] p[abcf] E1[dg] delta[he] 
    {"abcd,efgh,acbf,dg,he",      -1.0,   5, { 6,13, 5,19,18}},  //  -1.0 Ap[abcd] W[efgh] p[acbf] E1[dg] delta[he] 
    {"abcd,abef,ecfg,dg",          1.0,   4, { 6,14, 5,19}},     //   1.0 Ap[abcd] W[abef] p[ecfg] E1[dg] 
    {"abcd,abef,efcg,dg",         -2.0,   4, { 6,14, 5,19}},     //  -2.0 Ap[abcd] W[abef] p[efcg] E1[dg] 
    {"abcd,acef,ebfg,dg",         -2.0,   4, { 6,14, 5,19}},     //  -2.0 Ap[abcd] W[acef] p[ebfg] E1[dg] 
    {"abcd,acef,efbg,dg",          1.0,   4, { 6,14, 5,19}},     //   1.0 Ap[abcd] W[acef] p[efbg] E1[dg] 
    {"abcd,ebhf,acfg,dg,he",      -2.0,   5, { 6,14, 5,19,18}},  //  -2.0 Ap[abcd] W[ebhf] p[acfg] E1[dg] delta[he] 
    {"abcd,ebhf,afcg,dg,he",       4.0,   5, { 6,14, 5,19,18}},  //   4.0 Ap[abcd] W[ebhf] p[afcg] E1[dg] delta[he] 
    {"abcd,echf,abfg,dg,he",       4.0,   5, { 6,14, 5,19,18}},  //   4.0 Ap[abcd] W[echf] p[abfg] E1[dg] delta[he] 
    {"abcd,echf,afbg,dg,he",      -2.0,   5, { 6,14, 5,19,18}},  //  -2.0 Ap[abcd] W[echf] p[afbg] E1[dg] delta[he] 
    {"abcd,efhg,abcf,dg,he",      -4.0,   5, { 6,14, 5,19,18}},  //  -4.0 Ap[abcd] W[efhg] p[abcf] E1[dg] delta[he] 
    {"abcd,efhg,acbf,dg,he",       2.0,   5, { 6,14, 5,19,18}},  //   2.0 Ap[abcd] W[efhg] p[acbf] E1[dg] delta[he] 
    {"abcd,ae,ebcf,df",           -2.0,   4, { 6,15, 5,19}},     //  -2.0 Ap[abcd] k[ae] p[ebcf] E1[df] 
    {"abcd,ae,ecbf,df",            1.0,   4, { 6,15, 5,19}},     //   1.0 Ap[abcd] k[ae] p[ecbf] E1[df] 
    {"abcd,aehf,fbcg,dg,he",       2.0,   5, { 6,16, 5,19,18}},  //   2.0 Ap[abcd] W[aehf] p[fbcg] E1[dg] delta[he] 
    {"abcd,aehf,fcbg,dg,he",      -1.0,   5, { 6,16, 5,19,18}},  //  -1.0 Ap[abcd] W[aehf] p[fcbg] E1[dg] delta[he] 
    {"abcd,aefh,fbcg,dg,he",      -4.0,   5, { 6,16, 5,19,18}},  //  -4.0 Ap[abcd] W[aefh] p[fbcg] E1[dg] delta[he] 
    {"abcd,aefh,fcbg,dg,he",       2.0,   5, { 6,16, 5,19,18}},  //   2.0 Ap[abcd] W[aefh] p[fcbg] E1[dg] delta[he] 
    {"abcd,be,aefg,dfgc",         -1.0,   4, { 6,11, 5,20}},     //  -1.0 Ap[abcd] k[be] p[aefg] E2[dfgc] 
    {"abcd,be,afeg,dfcg",         -1.0,   4, { 6,11, 5,20}},     //  -1.0 Ap[abcd] k[be] p[afeg] E2[dfcg] 
    {"abcd,ce,aefg,dfbg",         -1.0,   4, { 6,11, 5,20}},     //  -1.0 Ap[abcd] k[ce] p[aefg] E2[dfbg] 
    {"abcd,ce,afeg,dfbg",          2.0,   4, { 6,11, 5,20}},     //   2.0 Ap[abcd] k[ce] p[afeg] E2[dfbg] 
    {"abcd,ef,abeg,dfgc",         -1.0,   4, { 6,11, 5,20}},     //  -1.0 Ap[abcd] k[ef] p[abeg] E2[dfgc] 
    {"abcd,ef,abge,dgfc",          1.0,   4, { 6,11, 5,20}},     //   1.0 Ap[abcd] k[ef] p[abge] E2[dgfc] 
    {"abcd,ef,aceg,dfbg",         -1.0,   4, { 6,11, 5,20}},     //  -1.0 Ap[abcd] k[ef] p[aceg] E2[dfbg] 
    {"abcd,ef,acge,dgbf",          1.0,   4, { 6,11, 5,20}},     //   1.0 Ap[abcd] k[ef] p[acge] E2[dgbf] 
    {"abcd,ef,aebg,dfcg",         -1.0,   4, { 6,11, 5,20}},     //  -1.0 Ap[abcd] k[ef] p[aebg] E2[dfcg] 
    {"abcd,ef,aecg,dfbg",          2.0,   4, { 6,11, 5,20}},     //   2.0 Ap[abcd] k[ef] p[aecg] E2[dfbg] 
    {"abcd,ef,agbe,dgcf",          1.0,   4, { 6,11, 5,20}},     //   1.0 Ap[abcd] k[ef] p[agbe] E2[dgcf] 
    {"abcd,ef,agce,dgbf",         -2.0,   4, { 6,11, 5,20}},     //  -2.0 Ap[abcd] k[ef] p[agce] E2[dgbf] 
    {"abcd,bcef,aegh,dghf",       -1.0,   4, { 6,12, 5,20}},     //  -1.0 Ap[abcd] W[bcef] p[aegh] E2[dghf] 
    {"abcd,bcef,afgh,dgeh",       -1.0,   4, { 6,12, 5,20}},     //  -1.0 Ap[abcd] W[bcef] p[afgh] E2[dgeh] 
    {"abcd,bcef,ageh,dgfh",       -1.0,   4, { 6,12, 5,20}},     //  -1.0 Ap[abcd] W[bcef] p[ageh] E2[dgfh] 
    {"abcd,bcef,agfh,dgeh",        2.0,   4, { 6,12, 5,20}},     //   2.0 Ap[abcd] W[bcef] p[agfh] E2[dgeh] 
    {"abcd,befg,aceh,dgfh",       -1.0,   4, { 6,12, 5,20}},     //  -1.0 Ap[abcd] W[befg] p[aceh] E2[dgfh] 
    {"abcd,befg,acfh,dehg",       -1.0,   4, { 6,12, 5,20}},     //  -1.0 Ap[abcd] W[befg] p[acfh] E2[dehg] 
    {"abcd,befg,ache,dhfg",        1.0,   4, { 6,12, 5,20}},     //   1.0 Ap[abcd] W[befg] p[ache] E2[dhfg] 
    {"abcd,befg,aech,dgfh",        2.0,   4, { 6,12, 5,20}},     //   2.0 Ap[abcd] W[befg] p[aech] E2[dgfh] 
    {"abcd,befg,aefh,dgch",       -1.0,   4, { 6,12, 5,20}},     //  -1.0 Ap[abcd] W[befg] p[aefh] E2[dgch] 
    {"abcd,befg,afch,dehg",        2.0,   4, { 6,12, 5,20}},     //   2.0 Ap[abcd] W[befg] p[afch] E2[dehg] 
    {"abcd,befg,afeh,dghc",       -1.0,   4, { 6,12, 5,20}},     //  -1.0 Ap[abcd] W[befg] p[afeh] E2[dghc] 
    {"abcd,befg,ahce,dhfg",       -2.0,   4, { 6,12, 5,20}},     //  -2.0 Ap[abcd] W[befg] p[ahce] E2[dhfg] 
    {"abcd,cefg,abeh,dghf",       -1.0,   4, { 6,12, 5,20}},     //  -1.0 Ap[abcd] W[cefg] p[abeh] E2[dghf] 
    {"abcd,cefg,abfh,dehg",        2.0,   4, { 6,12, 5,20}},     //   2.0 Ap[abcd] W[cefg] p[abfh] E2[dehg] 
    {"abcd,cefg,abhe,dhgf",        1.0,   4, { 6,12, 5,20}},     //   1.0 Ap[abcd] W[cefg] p[abhe] E2[dhgf] 
    {"abcd,cefg,aebh,dgfh",       -1.0,   4, { 6,12, 5,20}},     //  -1.0 Ap[abcd] W[cefg] p[aebh] E2[dgfh] 
    {"abcd,cefg,aefh,dgbh",        2.0,   4, { 6,12, 5,20}},     //   2.0 Ap[abcd] W[cefg] p[aefh] E2[dgbh] 
    {"abcd,cefg,afbh,dehg",       -1.0,   4, { 6,12, 5,20}},     //  -1.0 Ap[abcd] W[cefg] p[afbh] E2[dehg] 
    {"abcd,cefg,afeh,dgbh",       -1.0,   4, { 6,12, 5,20}},     //  -1.0 Ap[abcd] W[cefg] p[afeh] E2[dgbh] 
    {"abcd,cefg,ahbe,dhfg",        1.0,   4, { 6,12, 5,20}},     //   1.0 Ap[abcd] W[cefg] p[ahbe] E2[dhfg] 
    {"abcd,efgh,abce,dfgh",       -2.0,   4, { 6,12, 5,20}},     //  -2.0 Ap[abcd] W[efgh] p[abce] E2[dfgh] 
    {"abcd,efgh,acbe,dfgh",        1.0,   4, { 6,12, 5,20}},     //   1.0 Ap[abcd] W[efgh] p[acbe] E2[dfgh] 
    {"abcd,ebfa,ecgh,dghf",        1.0,   4, { 6,13, 5,20}},     //   1.0 Ap[abcd] W[ebfa] p[ecgh] E2[dghf] 
    {"abcd,ebfa,efgh,dgch",        1.0,   4, { 6,13, 5,20}},     //   1.0 Ap[abcd] W[ebfa] p[efgh] E2[dgch] 
    {"abcd,ebfa,egch,dgfh",        1.0,   4, { 6,13, 5,20}},     //   1.0 Ap[abcd] W[ebfa] p[egch] E2[dgfh] 
    {"abcd,ebfa,egfh,dgch",       -2.0,   4, { 6,13, 5,20}},     //  -2.0 Ap[abcd] W[ebfa] p[egfh] E2[dgch] 
    {"abcd,ebfi,afgh,dghc,ie",     1.0,   5, { 6,13, 5,20,18}},  //   1.0 Ap[abcd] W[ebfi] p[afgh] E2[dghc] delta[ie] 
    {"abcd,ebfi,agfh,dgch,ie",     1.0,   5, { 6,13, 5,20,18}},  //   1.0 Ap[abcd] W[ebfi] p[agfh] E2[dgch] delta[ie] 
    {"abcd,ecfa,ebgh,dghf",       -2.0,   4, { 6,13, 5,20}},     //  -2.0 Ap[abcd] W[ecfa] p[ebgh] E2[dghf] 
    {"abcd,ecfa,efgh,dgbh",       -2.0,   4, { 6,13, 5,20}},     //  -2.0 Ap[abcd] W[ecfa] p[efgh] E2[dgbh] 
    {"abcd,ecfa,egbh,dgfh",       -2.0,   4, { 6,13, 5,20}},     //  -2.0 Ap[abcd] W[ecfa] p[egbh] E2[dgfh] 
    {"abcd,ecfa,egfh,dgbh",        4.0,   4, { 6,13, 5,20}},     //   4.0 Ap[abcd] W[ecfa] p[egfh] E2[dgbh] 
    {"abcd,ecfi,afgh,dgbh,ie",     1.0,   5, { 6,13, 5,20,18}},  //   1.0 Ap[abcd] W[ecfi] p[afgh] E2[dgbh] delta[ie] 
    {"abcd,ecfi,agfh,dgbh,ie",    -2.0,   5, { 6,13, 5,20,18}},  //  -2.0 Ap[abcd] W[ecfi] p[agfh] E2[dgbh] delta[ie] 
    {"abcd,efga,ebch,dfhg",        1.0,   4, { 6,13, 5,20}},     //   1.0 Ap[abcd] W[efga] p[ebch] E2[dfhg] 
    {"abcd,efga,ebgh,dfhc",       -2.0,   4, { 6,13, 5,20}},     //  -2.0 Ap[abcd] W[efga] p[ebgh] E2[dfhc] 
    {"abcd,efga,ecbh,dfgh",        1.0,   4, { 6,13, 5,20}},     //   1.0 Ap[abcd] W[efga] p[ecbh] E2[dfgh] 
    {"abcd,efga,ecgh,dfbh",       -2.0,   4, { 6,13, 5,20}},     //  -2.0 Ap[abcd] W[efga] p[ecgh] E2[dfbh] 
    {"abcd,efga,egbh,dfhc",        1.0,   4, { 6,13, 5,20}},     //   1.0 Ap[abcd] W[efga] p[egbh] E2[dfhc] 
    {"abcd,efga,egch,dfbh",        1.0,   4, { 6,13, 5,20}},     //   1.0 Ap[abcd] W[efga] p[egch] E2[dfbh] 
    {"abcd,efgi,abgh,dfhc,ie",     1.0,   5, { 6,13, 5,20,18}},  //   1.0 Ap[abcd] W[efgi] p[abgh] E2[dfhc] delta[ie] 
    {"abcd,efgi,abhf,dhgc,ie",    -1.0,   5, { 6,13, 5,20,18}},  //  -1.0 Ap[abcd] W[efgi] p[abhf] E2[dhgc] delta[ie] 
    {"abcd,efgi,acgh,dfbh,ie",     1.0,   5, { 6,13, 5,20,18}},  //   1.0 Ap[abcd] W[efgi] p[acgh] E2[dfbh] delta[ie] 
    {"abcd,efgi,achf,dhbg,ie",    -1.0,   5, { 6,13, 5,20,18}},  //  -1.0 Ap[abcd] W[efgi] p[achf] E2[dhbg] delta[ie] 
    {"abcd,efgi,agbh,dfch,ie",     1.0,   5, { 6,13, 5,20,18}},  //   1.0 Ap[abcd] W[efgi] p[agbh] E2[dfch] delta[ie] 
    {"abcd,efgi,agch,dfbh,ie",    -2.0,   5, { 6,13, 5,20,18}},  //  -2.0 Ap[abcd] W[efgi] p[agch] E2[dfbh] delta[ie] 
    {"abcd,efgi,ahbf,dhcg,ie",    -1.0,   5, { 6,13, 5,20,18}},  //  -1.0 Ap[abcd] W[efgi] p[ahbf] E2[dhcg] delta[ie] 
    {"abcd,efgi,ahcf,dhbg,ie",     2.0,   5, { 6,13, 5,20,18}},  //   2.0 Ap[abcd] W[efgi] p[ahcf] E2[dhbg] delta[ie] 
    {"abcd,abef,ecgh,dgfh",        1.0,   4, { 6,14, 5,20}},     //   1.0 Ap[abcd] W[abef] p[ecgh] E2[dgfh] 
    {"abcd,abef,efgh,dghc",        1.0,   4, { 6,14, 5,20}},     //   1.0 Ap[abcd] W[abef] p[efgh] E2[dghc] 
    {"abcd,abef,egch,dgfh",       -2.0,   4, { 6,14, 5,20}},     //  -2.0 Ap[abcd] W[abef] p[egch] E2[dgfh] 
    {"abcd,abef,egfh,dgch",        1.0,   4, { 6,14, 5,20}},     //   1.0 Ap[abcd] W[abef] p[egfh] E2[dgch] 
    {"abcd,acef,ebgh,dghf",        1.0,   4, { 6,14, 5,20}},     //   1.0 Ap[abcd] W[acef] p[ebgh] E2[dghf] 
    {"abcd,acef,efgh,dgbh",        1.0,   4, { 6,14, 5,20}},     //   1.0 Ap[abcd] W[acef] p[efgh] E2[dgbh] 
    {"abcd,acef,egbh,dgfh",        1.0,   4, { 6,14, 5,20}},     //   1.0 Ap[abcd] W[acef] p[egbh] E2[dgfh] 
    {"abcd,acef,egfh,dgbh",       -2.0,   4, { 6,14, 5,20}},     //  -2.0 Ap[abcd] W[acef] p[egfh] E2[dgbh] 
    {"abcd,aefg,fbch,dehg",       -2.0,   4, { 6,14, 5,20}},     //  -2.0 Ap[abcd] W[aefg] p[fbch] E2[dehg] 
    {"abcd,aefg,fbeh,dghc",        1.0,   4, { 6,14, 5,20}},     //   1.0 Ap[abcd] W[aefg] p[fbeh] E2[dghc] 
    {"abcd,aefg,fcbh,dehg",        1.0,   4, { 6,14, 5,20}},     //   1.0 Ap[abcd] W[aefg] p[fcbh] E2[dehg] 
    {"abcd,aefg,fceh,dgbh",        1.0,   4, { 6,14, 5,20}},     //   1.0 Ap[abcd] W[aefg] p[fceh] E2[dgbh] 
    {"abcd,aefg,febh,dgch",        1.0,   4, { 6,14, 5,20}},     //   1.0 Ap[abcd] W[aefg] p[febh] E2[dgch] 
    {"abcd,aefg,fech,dgbh",       -2.0,   4, { 6,14, 5,20}},     //  -2.0 Ap[abcd] W[aefg] p[fech] E2[dgbh] 
    {"abcd,ebif,afgh,dghc,ie",    -2.0,   5, { 6,14, 5,20,18}},  //  -2.0 Ap[abcd] W[ebif] p[afgh] E2[dghc] delta[ie] 
    {"abcd,ebif,agfh,dgch,ie",    -2.0,   5, { 6,14, 5,20,18}},  //  -2.0 Ap[abcd] W[ebif] p[agfh] E2[dgch] delta[ie] 
    {"abcd,ecif,afgh,dgbh,ie",    -2.0,   5, { 6,14, 5,20,18}},  //  -2.0 Ap[abcd] W[ecif] p[afgh] E2[dgbh] delta[ie] 
    {"abcd,ecif,agfh,dgbh,ie",     4.0,   5, { 6,14, 5,20,18}},  //   4.0 Ap[abcd] W[ecif] p[agfh] E2[dgbh] delta[ie] 
    {"abcd,efig,abfh,dghc,ie",    -2.0,   5, { 6,14, 5,20,18}},  //  -2.0 Ap[abcd] W[efig] p[abfh] E2[dghc] delta[ie] 
    {"abcd,efig,abhf,dhgc,ie",     2.0,   5, { 6,14, 5,20,18}},  //   2.0 Ap[abcd] W[efig] p[abhf] E2[dhgc] delta[ie] 
    {"abcd,efig,acfh,dgbh,ie",    -2.0,   5, { 6,14, 5,20,18}},  //  -2.0 Ap[abcd] W[efig] p[acfh] E2[dgbh] delta[ie] 
    {"abcd,efig,achf,dhbg,ie",     2.0,   5, { 6,14, 5,20,18}},  //   2.0 Ap[abcd] W[efig] p[achf] E2[dhbg] delta[ie] 
    {"abcd,efig,afbh,dgch,ie",    -2.0,   5, { 6,14, 5,20,18}},  //  -2.0 Ap[abcd] W[efig] p[afbh] E2[dgch] delta[ie] 
    {"abcd,efig,afch,dgbh,ie",     4.0,   5, { 6,14, 5,20,18}},  //   4.0 Ap[abcd] W[efig] p[afch] E2[dgbh] delta[ie] 
    {"abcd,efig,ahbf,dhcg,ie",     2.0,   5, { 6,14, 5,20,18}},  //   2.0 Ap[abcd] W[efig] p[ahbf] E2[dhcg] delta[ie] 
    {"abcd,efig,ahcf,dhbg,ie",    -4.0,   5, { 6,14, 5,20,18}},  //  -4.0 Ap[abcd] W[efig] p[ahcf] E2[dhbg] delta[ie] 
    {"abcd,ae,ebfg,dfgc",          1.0,   4, { 6,15, 5,20}},     //   1.0 Ap[abcd] k[ae] p[ebfg] E2[dfgc] 
    {"abcd,ae,ecfg,dfbg",          1.0,   4, { 6,15, 5,20}},     //   1.0 Ap[abcd] k[ae] p[ecfg] E2[dfbg] 
    {"abcd,ae,efbg,dfcg",          1.0,   4, { 6,15, 5,20}},     //   1.0 Ap[abcd] k[ae] p[efbg] E2[dfcg] 
    {"abcd,ae,efcg,dfbg",         -2.0,   4, { 6,15, 5,20}},     //  -2.0 Ap[abcd] k[ae] p[efcg] E2[dfbg] 
    {"abcd,aeif,fbgh,dghc,ie",    -1.0,   5, { 6,16, 5,20,18}},  //  -1.0 Ap[abcd] W[aeif] p[fbgh] E2[dghc] delta[ie] 
    {"abcd,aeif,fcgh,dgbh,ie",    -1.0,   5, { 6,16, 5,20,18}},  //  -1.0 Ap[abcd] W[aeif] p[fcgh] E2[dgbh] delta[ie] 
    {"abcd,aeif,fgbh,dgch,ie",    -1.0,   5, { 6,16, 5,20,18}},  //  -1.0 Ap[abcd] W[aeif] p[fgbh] E2[dgch] delta[ie] 
    {"abcd,aeif,fgch,dgbh,ie",     2.0,   5, { 6,16, 5,20,18}},  //   2.0 Ap[abcd] W[aeif] p[fgch] E2[dgbh] delta[ie] 
    {"abcd,aefi,fbgh,dghc,ie",     2.0,   5, { 6,16, 5,20,18}},  //   2.0 Ap[abcd] W[aefi] p[fbgh] E2[dghc] delta[ie] 
    {"abcd,aefi,fcgh,dgbh,ie",     2.0,   5, { 6,16, 5,20,18}},  //   2.0 Ap[abcd] W[aefi] p[fcgh] E2[dgbh] delta[ie] 
    {"abcd,aefi,fgbh,dgch,ie",     2.0,   5, { 6,16, 5,20,18}},  //   2.0 Ap[abcd] W[aefi] p[fgbh] E2[dgch] delta[ie] 
    {"abcd,aefi,fgch,dgbh,ie",    -4.0,   5, { 6,16, 5,20,18}},  //  -4.0 Ap[abcd] W[aefi] p[fgch] E2[dgbh] delta[ie] 
    {"abcd,ef,aegh,dfgbhc",       -1.0,   4, { 6,11, 5,22}},     //  -1.0 Ap[abcd] k[ef] p[aegh] E3[dfgbhc] 
    {"abcd,ef,ageh,dfgbch",       -1.0,   4, { 6,11, 5,22}},     //  -1.0 Ap[abcd] k[ef] p[ageh] E3[dfgbch] 
    {"abcd,ef,aghe,dghbfc",        1.0,   4, { 6,11, 5,22}},     //   1.0 Ap[abcd] k[ef] p[aghe] E3[dghbfc] 
    {"abcd,befg,aehi,dghfic",     -1.0,   4, { 6,12, 5,22}},     //  -1.0 Ap[abcd] W[befg] p[aehi] E3[dghfic] 
    {"abcd,befg,afhi,dehigc",     -1.0,   4, { 6,12, 5,22}},     //  -1.0 Ap[abcd] W[befg] p[afhi] E3[dehigc] 
    {"abcd,befg,ahei,dghfci",     -1.0,   4, { 6,12, 5,22}},     //  -1.0 Ap[abcd] W[befg] p[ahei] E3[dghfci] 
    {"abcd,befg,ahfi,dehcgi",     -1.0,   4, { 6,12, 5,22}},     //  -1.0 Ap[abcd] W[befg] p[ahfi] E3[dehcgi] 
    {"abcd,befg,ahie,dhifgc",      1.0,   4, { 6,12, 5,22}},     //   1.0 Ap[abcd] W[befg] p[ahie] E3[dhifgc] 
    {"abcd,cefg,aehi,dghbif",     -1.0,   4, { 6,12, 5,22}},     //  -1.0 Ap[abcd] W[cefg] p[aehi] E3[dghbif] 
    {"abcd,cefg,afhi,dehbgi",     -1.0,   4, { 6,12, 5,22}},     //  -1.0 Ap[abcd] W[cefg] p[afhi] E3[dehbgi] 
    {"abcd,cefg,ahei,dghbfi",     -1.0,   4, { 6,12, 5,22}},     //  -1.0 Ap[abcd] W[cefg] p[ahei] E3[dghbfi] 
    {"abcd,cefg,ahfi,dehbgi",      2.0,   4, { 6,12, 5,22}},     //   2.0 Ap[abcd] W[cefg] p[ahfi] E3[dehbgi] 
    {"abcd,cefg,ahie,dhibgf",      1.0,   4, { 6,12, 5,22}},     //   1.0 Ap[abcd] W[cefg] p[ahie] E3[dhibgf] 
    {"abcd,efgh,abei,dfgihc",     -1.0,   4, { 6,12, 5,22}},     //  -1.0 Ap[abcd] W[efgh] p[abei] E3[dfgihc] 
    {"abcd,efgh,abie,dfighc",      1.0,   4, { 6,12, 5,22}},     //   1.0 Ap[abcd] W[efgh] p[abie] E3[dfighc] 
    {"abcd,efgh,acei,dfgbhi",     -1.0,   4, { 6,12, 5,22}},     //  -1.0 Ap[abcd] W[efgh] p[acei] E3[dfgbhi] 
    {"abcd,efgh,acie,dfibhg",      1.0,   4, { 6,12, 5,22}},     //   1.0 Ap[abcd] W[efgh] p[acie] E3[dfibhg] 
    {"abcd,efgh,aebi,dfgchi",     -1.0,   4, { 6,12, 5,22}},     //  -1.0 Ap[abcd] W[efgh] p[aebi] E3[dfgchi] 
    {"abcd,efgh,aeci,dfgbhi",      2.0,   4, { 6,12, 5,22}},     //   2.0 Ap[abcd] W[efgh] p[aeci] E3[dfgbhi] 
    {"abcd,efgh,aefi,dghbic",     -1.0,   4, { 6,12, 5,22}},     //  -1.0 Ap[abcd] W[efgh] p[aefi] E3[dghbic] 
    {"abcd,efgh,aibe,dfichg",      1.0,   4, { 6,12, 5,22}},     //   1.0 Ap[abcd] W[efgh] p[aibe] E3[dfichg] 
    {"abcd,efgh,aice,dfibhg",     -2.0,   4, { 6,12, 5,22}},     //  -2.0 Ap[abcd] W[efgh] p[aice] E3[dfibhg] 
    {"abcd,ebfa,eghi,dghcif",      1.0,   4, { 6,13, 5,22}},     //   1.0 Ap[abcd] W[ebfa] p[eghi] E3[dghcif] 
    {"abcd,ecfa,eghi,dghbif",     -2.0,   4, { 6,13, 5,22}},     //  -2.0 Ap[abcd] W[ecfa] p[eghi] E3[dghbif] 
    {"abcd,efga,ebhi,dfhicg",      1.0,   4, { 6,13, 5,22}},     //   1.0 Ap[abcd] W[efga] p[ebhi] E3[dfhicg] 
    {"abcd,efga,echi,dfhbig",      1.0,   4, { 6,13, 5,22}},     //   1.0 Ap[abcd] W[efga] p[echi] E3[dfhbig] 
    {"abcd,efga,eghi,dfhbci",      1.0,   4, { 6,13, 5,22}},     //   1.0 Ap[abcd] W[efga] p[eghi] E3[dfhbci] 
    {"abcd,efga,ehbi,dfhgci",      1.0,   4, { 6,13, 5,22}},     //   1.0 Ap[abcd] W[efga] p[ehbi] E3[dfhgci] 
    {"abcd,efga,ehci,dfhbgi",      1.0,   4, { 6,13, 5,22}},     //   1.0 Ap[abcd] W[efga] p[ehci] E3[dfhbgi] 
    {"abcd,efga,ehgi,dfhbci",     -2.0,   4, { 6,13, 5,22}},     //  -2.0 Ap[abcd] W[efga] p[ehgi] E3[dfhbci] 
    {"abcd,efgj,aghi,dfhbic,je",   1.0,   5, { 6,13, 5,22,18}},  //   1.0 Ap[abcd] W[efgj] p[aghi] E3[dfhbic] delta[je] 
    {"abcd,efgj,ahgi,dfhbci,je",   1.0,   5, { 6,13, 5,22,18}},  //   1.0 Ap[abcd] W[efgj] p[ahgi] E3[dfhbci] delta[je] 
    {"abcd,efgj,ahif,dhibgc,je",  -1.0,   5, { 6,13, 5,22,18}},  //  -1.0 Ap[abcd] W[efgj] p[ahif] E3[dhibgc] delta[je] 
    {"abcd,abef,eghi,dghfic",      1.0,   4, { 6,14, 5,22}},     //   1.0 Ap[abcd] W[abef] p[eghi] E3[dghfic] 
    {"abcd,acef,eghi,dghbif",      1.0,   4, { 6,14, 5,22}},     //   1.0 Ap[abcd] W[acef] p[eghi] E3[dghbif] 
    {"abcd,aefg,fbhi,dehigc",      1.0,   4, { 6,14, 5,22}},     //   1.0 Ap[abcd] W[aefg] p[fbhi] E3[dehigc] 
    {"abcd,aefg,fchi,dehbgi",      1.0,   4, { 6,14, 5,22}},     //   1.0 Ap[abcd] W[aefg] p[fchi] E3[dehbgi] 
    {"abcd,aefg,fehi,dghbic",      1.0,   4, { 6,14, 5,22}},     //   1.0 Ap[abcd] W[aefg] p[fehi] E3[dghbic] 
    {"abcd,aefg,fhbi,dehcgi",      1.0,   4, { 6,14, 5,22}},     //   1.0 Ap[abcd] W[aefg] p[fhbi] E3[dehcgi] 
    {"abcd,aefg,fhci,dehbgi",     -2.0,   4, { 6,14, 5,22}},     //  -2.0 Ap[abcd] W[aefg] p[fhci] E3[dehbgi] 
    {"abcd,aefg,fhei,dghbci",      1.0,   4, { 6,14, 5,22}},     //   1.0 Ap[abcd] W[aefg] p[fhei] E3[dghbci] 
    {"abcd,efjg,afhi,dghbic,je",  -2.0,   5, { 6,14, 5,22,18}},  //  -2.0 Ap[abcd] W[efjg] p[afhi] E3[dghbic] delta[je] 
    {"abcd,efjg,ahfi,dghbci,je",  -2.0,   5, { 6,14, 5,22,18}},  //  -2.0 Ap[abcd] W[efjg] p[ahfi] E3[dghbci] delta[je] 
    {"abcd,efjg,ahif,dhibgc,je",   2.0,   5, { 6,14, 5,22,18}},  //   2.0 Ap[abcd] W[efjg] p[ahif] E3[dhibgc] delta[je] 
    {"abcd,ae,efgh,dfgbhc",        1.0,   4, { 6,15, 5,22}},     //   1.0 Ap[abcd] k[ae] p[efgh] E3[dfgbhc] 
    {"abcd,aejf,fghi,dghbic,je",  -1.0,   5, { 6,16, 5,22,18}},  //  -1.0 Ap[abcd] W[aejf] p[fghi] E3[dghbic] delta[je] 
    {"abcd,aefj,fghi,dghbic,je",   2.0,   5, { 6,16, 5,22,18}},  //   2.0 Ap[abcd] W[aefj] p[fghi] E3[dghbic] delta[je] 
    {"abcd,efgh,aeij,dfgibhjc",   -1.0,   4, { 6,12, 5,23}},     //  -1.0 Ap[abcd] W[efgh] p[aeij] E4[dfgibhjc] 
    {"abcd,efgh,aiej,dfgibhcj",   -1.0,   4, { 6,12, 5,23}},     //  -1.0 Ap[abcd] W[efgh] p[aiej] E4[dfgibhcj] 
    {"abcd,efgh,aije,dfijbhgc",    1.0,   4, { 6,12, 5,23}},     //   1.0 Ap[abcd] W[efgh] p[aije] E4[dfijbhgc] 
    {"abcd,efga,ehij,dfhibcjg",    1.0,   4, { 6,13, 5,23}},     //   1.0 Ap[abcd] W[efga] p[ehij] E4[dfhibcjg] 
    {"abcd,aefg,fhij,dehibgjc",    1.0,   4, { 6,14, 5,23}},     //   1.0 Ap[abcd] W[aefg] p[fhij] E4[dehibgjc] 
  };

  FEqInfo bVec[7] = {
    {"ABCE,ABCD,ED"    ,   2.0,   3, { 3,10,19}}, //  2.0 b[abce] W[abcd] E1[ed]
    {"ACBE,ABCD,ED"    ,  -1.0,   3, { 3,10,19}}, // -1.0 b[acbe] W[abcd] E1[ed]
    {"ABEF,ABCD,CFED"  ,  -1.0,   3, { 3,10,20}}, // -1.0 b[abef] W[abcd] E2[cfed]
    {"ACEF,ABCD,BFDE"  ,  -1.0,   3, { 3,10,20}}, // -1.0 b[acef] W[abcd] E2[bfde]
    {"AEBF,ABCD,CFDE"  ,  -1.0,   3, { 3,10,20}}, // -1.0 b[aebf] W[abcd] E2[cfde]
    {"AECF,ABCD,BFDE"  ,   2.0,   3, { 3,10,20}}, //  2.0 b[aecf] W[abcd] E2[bfde]
    {"AEFG,ABCD,BCGDFE",  -1.0,   3, { 3,10,22}}, // -1.0 b[aefg] W[abcd] E3[bcgdfe]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC_AAAC";
    Out.perturberClass = "AAAC";
    Out.Whandcoded_if_zero = 2;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 24;
    Out.EqsRes = FEqSet(&EqsRes[0], 184, "MRLCC_AAAC/Res");
    Out.bVec = FEqSet(&bVec[0], 7, "MRLCC_AAAC/bVec");
  };
};

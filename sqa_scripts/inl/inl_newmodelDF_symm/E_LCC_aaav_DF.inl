namespace MRLCC_AAAV_DF {

  FTensorDecl TensorDecls[28] = {
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
    /* 10*/{"k"      , "aa"       , "", USAGE_Hamiltonian },
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
    /* 21*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 22*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 23*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 24*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 25*/{"S1"     , "aaaaaa"   , "", USAGE_Density     },
    /* 26*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
    /* 27*/{"E4"     , "aaaaaaaa" , "", USAGE_Density     },
  };

  FEqInfo EqsRes[86] = {
    {"abgc,de,afhd,ce,gb,hf",          -1.0,   6, { 6,10, 5,23,21,21}},        //  -1.0 Ap[abgc] k[de] p[afhd] E1[ce] delta[gb] delta[hf] 
    {"abgc,ad,dehf,cf,gb,he",           1.0,   6, { 6,20, 5,23,21,21}},        //   1.0 Ap[abgc] k[ad] p[dehf] E1[cf] delta[gb] delta[he] 
    {"abic,def,dgj,ahke,cf,ib,jg,kh",  -2.0,   8, { 6,11,15, 5,23,21,22,21}},  //  -2.0 Ap[abic] W[def] W[dgj] p[ahke] E1[cf] delta[ib] delta[jg] delta[kh] 
    {"abic,def,dfg,ahje,cg,ib,jh",      1.0,   7, { 6,12,14, 5,23,21,21}},     //   1.0 Ap[abic] W[def] W[dfg] p[ahje] E1[cg] delta[ib] delta[jh] 
    {"abic,dej,daf,fgkh,ch,ib,je,kg",   2.0,   8, { 6,15,19, 5,23,21,22,21}},  //   2.0 Ap[abic] W[dej] W[daf] p[fgkh] E1[ch] delta[ib] delta[je] delta[kg] 
    {"abic,def,dae,fgjh,ch,ib,jg",     -1.0,   7, { 6,16,18, 5,23,21,21}},     //  -1.0 Ap[abic] W[def] W[dae] p[fgjh] E1[ch] delta[ib] delta[jg] 
    {"abhc,de,adfg,cefg,hb",            1.0,   5, { 6,10, 5,24,21}},           //   1.0 Ap[abhc] k[de] p[adfg] E2[cefg] delta[hb] 
    {"abhc,de,afdg,cfeg,hb",           -1.0,   5, { 6,10, 5,24,21}},           //  -1.0 Ap[abhc] k[de] p[afdg] E2[cfeg] delta[hb] 
    {"abhc,de,afgd,cfge,hb",           -1.0,   5, { 6,10, 5,24,21}},           //  -1.0 Ap[abhc] k[de] p[afgd] E2[cfge] delta[hb] 
    {"abcd,be,aefg,cdfg",               1.0,   4, { 6,10, 5,24}},              //   1.0 Ap[abcd] k[be] p[aefg] E2[cdfg] 
    {"abcd,ef,abeg,cdfg",              -1.0,   4, { 6,10, 5,24}},              //  -1.0 Ap[abcd] k[ef] p[abeg] E2[cdfg] 
    {"abcd,ef,abge,cdgf",              -1.0,   4, { 6,10, 5,24}},              //  -1.0 Ap[abcd] k[ef] p[abge] E2[cdgf] 
    {"abcd,ef,aghe,cdfb,hg",           -1.0,   5, { 6,10, 5,24,21}},           //  -1.0 Ap[abcd] k[ef] p[aghe] E2[cdfb] delta[hg] 
    {"abhc,ad,defg,cefg,hb",            1.0,   5, { 6,20, 5,24,21}},           //   1.0 Ap[abhc] k[ad] p[defg] E2[cefg] delta[hb] 
    {"abcd,ae,ebfg,cdfg",               1.0,   4, { 6,20, 5,24}},              //   1.0 Ap[abcd] k[ae] p[ebfg] E2[cdfg] 
    {"abcd,ae,efhg,cdgb,hf",            1.0,   5, { 6,20, 5,24,21}},           //   1.0 Ap[abcd] k[ae] p[efhg] E2[cdgb] delta[hf] 
    {"abjc,def,dgk,aehi,cfhi,jb,kg",    2.0,   7, { 6,11,15, 5,24,21,22}},     //   2.0 Ap[abjc] W[def] W[dgk] p[aehi] E2[cfhi] delta[jb] delta[kg] 
    {"abjc,def,dgk,ahei,chfi,jb,kg",   -2.0,   7, { 6,11,15, 5,24,21,22}},     //  -2.0 Ap[abjc] W[def] W[dgk] p[ahei] E2[chfi] delta[jb] delta[kg] 
    {"abjc,def,dgk,ahie,chif,jb,kg",   -2.0,   7, { 6,11,15, 5,24,21,22}},     //  -2.0 Ap[abjc] W[def] W[dgk] p[ahie] E2[chif] delta[jb] delta[kg] 
    {"abcd,ebf,egj,afhi,cdhi,jg",       2.0,   6, { 6,11,15, 5,24,22}},        //   2.0 Ap[abcd] W[ebf] W[egj] p[afhi] E2[cdhi] delta[jg] 
    {"abcd,efg,ehj,abfi,cdgi,jh",      -2.0,   6, { 6,11,15, 5,24,22}},        //  -2.0 Ap[abcd] W[efg] W[ehj] p[abfi] E2[cdgi] delta[jh] 
    {"abcd,efg,ehj,abif,cdig,jh",      -2.0,   6, { 6,11,15, 5,24,22}},        //  -2.0 Ap[abcd] W[efg] W[ehj] p[abif] E2[cdig] delta[jh] 
    {"abcd,efg,ehj,aikf,cdgb,jh,ki",   -2.0,   7, { 6,11,15, 5,24,22,21}},     //  -2.0 Ap[abcd] W[efg] W[ehj] p[aikf] E2[cdgb] delta[jh] delta[ki] 
    {"abjc,def,dag,gehi,cfhi,jb",       1.0,   6, { 6,11,19, 5,24,21}},        //   1.0 Ap[abjc] W[def] W[dag] p[gehi] E2[cfhi] delta[jb] 
    {"abjc,def,dag,ghki,ceif,jb,kh",    1.0,   7, { 6,11,19, 5,24,21,21}},     //   1.0 Ap[abjc] W[def] W[dag] p[ghki] E2[ceif] delta[jb] delta[kh] 
    {"abcd,ebf,eag,gfhi,cdhi",          1.0,   5, { 6,11,19, 5,24}},           //   1.0 Ap[abcd] W[ebf] W[eag] p[gfhi] E2[cdhi] 
    {"abcd,ebf,eag,ghji,cdif,jh",       1.0,   6, { 6,11,19, 5,24,21}},        //   1.0 Ap[abcd] W[ebf] W[eag] p[ghji] E2[cdif] delta[jh] 
    {"abjc,def,dfg,aghi,cehi,jb",      -1.0,   6, { 6,12,14, 5,24,21}},        //  -1.0 Ap[abjc] W[def] W[dfg] p[aghi] E2[cehi] delta[jb] 
    {"abjc,def,dfg,ahei,chgi,jb",       1.0,   6, { 6,12,14, 5,24,21}},        //   1.0 Ap[abjc] W[def] W[dfg] p[ahei] E2[chgi] delta[jb] 
    {"abjc,def,dfg,ahie,chig,jb",       1.0,   6, { 6,12,14, 5,24,21}},        //   1.0 Ap[abjc] W[def] W[dfg] p[ahie] E2[chig] delta[jb] 
    {"abcd,ebf,efg,aghi,cdhi",         -1.0,   5, { 6,12,14, 5,24}},           //  -1.0 Ap[abcd] W[ebf] W[efg] p[aghi] E2[cdhi] 
    {"abcd,efg,egh,abfi,cdhi",          1.0,   5, { 6,12,14, 5,24}},           //   1.0 Ap[abcd] W[efg] W[egh] p[abfi] E2[cdhi] 
    {"abcd,efg,egh,abif,cdih",          1.0,   5, { 6,12,14, 5,24}},           //   1.0 Ap[abcd] W[efg] W[egh] p[abif] E2[cdih] 
    {"abcd,efg,egh,aijf,cdhb,ji",       1.0,   6, { 6,12,14, 5,24,21}},        //   1.0 Ap[abcd] W[efg] W[egh] p[aijf] E2[cdhb] delta[ji] 
    {"abjc,def,dag,fghi,ceih,jb",       1.0,   6, { 6,13,17, 5,24,21}},        //   1.0 Ap[abjc] W[def] W[dag] p[fghi] E2[ceih] delta[jb] 
    {"abjc,def,dag,fhki,cegi,jb,kh",    1.0,   7, { 6,13,17, 5,24,21,21}},     //   1.0 Ap[abjc] W[def] W[dag] p[fhki] E2[cegi] delta[jb] delta[kh] 
    {"abcd,ebf,eag,fghi,cdih",          1.0,   5, { 6,13,17, 5,24}},           //   1.0 Ap[abcd] W[ebf] W[eag] p[fghi] E2[cdih] 
    {"abcd,ebf,eag,fhji,cdgi,jh",       1.0,   6, { 6,13,17, 5,24,21}},        //   1.0 Ap[abcd] W[ebf] W[eag] p[fhji] E2[cdgi] delta[jh] 
    {"abjc,dek,daf,fghi,cghi,jb,ke",    2.0,   7, { 6,15,19, 5,24,21,22}},     //   2.0 Ap[abjc] W[dek] W[daf] p[fghi] E2[cghi] delta[jb] delta[ke] 
    {"abcd,efj,eag,gbhi,cdhi,jf",       2.0,   6, { 6,15,19, 5,24,22}},        //   2.0 Ap[abcd] W[efj] W[eag] p[gbhi] E2[cdhi] delta[jf] 
    {"abcd,efj,eag,ghki,cdib,jf,kh",    2.0,   7, { 6,15,19, 5,24,22,21}},     //   2.0 Ap[abcd] W[efj] W[eag] p[ghki] E2[cdib] delta[jf] delta[kh] 
    {"abjc,def,dae,fghi,cghi,jb",      -1.0,   6, { 6,16,18, 5,24,21}},        //  -1.0 Ap[abjc] W[def] W[dae] p[fghi] E2[cghi] delta[jb] 
    {"abcd,efg,eaf,gbhi,cdhi",         -1.0,   5, { 6,16,18, 5,24}},           //  -1.0 Ap[abcd] W[efg] W[eaf] p[gbhi] E2[cdhi] 
    {"abcd,efg,eaf,ghji,cdib,jh",      -1.0,   6, { 6,16,18, 5,24,21}},        //  -1.0 Ap[abcd] W[efg] W[eaf] p[ghji] E2[cdib] delta[jh] 
    {"abjc,adke,feg,fhi,chgi,jb,kd",   -1.0,   7, { 6, 5,11,11,24,21,21}},     //  -1.0 Ap[abjc] p[adke] W[feg] W[fhi] E2[chgi] delta[jb] delta[kd] 
    {"abjc,adef,geh,gfi,cdhi,jb",      -1.0,   6, { 6, 5,11,11,24,21}},        //  -1.0 Ap[abjc] p[adef] W[geh] W[gfi] E2[cdhi] delta[jb] 
    {"abcd,abef,geh,gfi,cdhi",         -1.0,   5, { 6, 5,11,11,24}},           //  -1.0 Ap[abcd] p[abef] W[geh] W[gfi] E2[cdhi] 
    {"abcd,aejf,gbh,gfi,cdih,je",      -1.0,   6, { 6, 5,11,11,24,21}},        //  -1.0 Ap[abcd] p[aejf] W[gbh] W[gfi] E2[cdih] delta[je] 
    {"abcd,ef,aegh,cdfgbh",             1.0,   4, { 6,10, 5,26}},              //   1.0 Ap[abcd] k[ef] p[aegh] E3[cdfgbh] 
    {"abcd,ef,ageh,cdgfbh",            -1.0,   4, { 6,10, 5,26}},              //  -1.0 Ap[abcd] k[ef] p[ageh] E3[cdgfbh] 
    {"abcd,ef,aghe,cdghbf",            -1.0,   4, { 6,10, 5,26}},              //  -1.0 Ap[abcd] k[ef] p[aghe] E3[cdghbf] 
    {"abcd,ae,efgh,cdfgbh",             1.0,   4, { 6,20, 5,26}},              //   1.0 Ap[abcd] k[ae] p[efgh] E3[cdfgbh] 
    {"abcd,efg,ehk,afij,cdgibj,kh",     2.0,   6, { 6,11,15, 5,26,22}},        //   2.0 Ap[abcd] W[efg] W[ehk] p[afij] E3[cdgibj] delta[kh] 
    {"abcd,efg,ehk,aifj,cdigbj,kh",    -2.0,   6, { 6,11,15, 5,26,22}},        //  -2.0 Ap[abcd] W[efg] W[ehk] p[aifj] E3[cdigbj] delta[kh] 
    {"abcd,efg,ehk,aijf,cdijbg,kh",    -2.0,   6, { 6,11,15, 5,26,22}},        //  -2.0 Ap[abcd] W[efg] W[ehk] p[aijf] E3[cdijbg] delta[kh] 
    {"abkc,def,dag,ghij,cehifj,kb",     1.0,   6, { 6,11,19, 5,26,21}},        //   1.0 Ap[abkc] W[def] W[dag] p[ghij] E3[cehifj] delta[kb] 
    {"abcd,ebf,eag,ghij,cdhifj",        1.0,   5, { 6,11,19, 5,26}},           //   1.0 Ap[abcd] W[ebf] W[eag] p[ghij] E3[cdhifj] 
    {"abcd,efg,eah,hbij,cdfijg",        1.0,   5, { 6,11,19, 5,26}},           //   1.0 Ap[abcd] W[efg] W[eah] p[hbij] E3[cdfijg] 
    {"abcd,efg,eah,hfij,cdgibj",        1.0,   5, { 6,11,19, 5,26}},           //   1.0 Ap[abcd] W[efg] W[eah] p[hfij] E3[cdgibj] 
    {"abcd,efg,eah,hikj,cdfjbg,ki",     1.0,   6, { 6,11,19, 5,26,21}},        //   1.0 Ap[abcd] W[efg] W[eah] p[hikj] E3[cdfjbg] delta[ki] 
    {"abcd,efg,egh,ahij,cdfibj",       -1.0,   5, { 6,12,14, 5,26}},           //  -1.0 Ap[abcd] W[efg] W[egh] p[ahij] E3[cdfibj] 
    {"abcd,efg,egh,aifj,cdihbj",        1.0,   5, { 6,12,14, 5,26}},           //   1.0 Ap[abcd] W[efg] W[egh] p[aifj] E3[cdihbj] 
    {"abcd,efg,egh,aijf,cdijbh",        1.0,   5, { 6,12,14, 5,26}},           //   1.0 Ap[abcd] W[efg] W[egh] p[aijf] E3[cdijbh] 
    {"abkc,def,dag,fhij,cehgij,kb",     1.0,   6, { 6,13,17, 5,26,21}},        //   1.0 Ap[abkc] W[def] W[dag] p[fhij] E3[cehgij] delta[kb] 
    {"abcd,ebf,eag,fhij,cdhgij",        1.0,   5, { 6,13,17, 5,26}},           //   1.0 Ap[abcd] W[ebf] W[eag] p[fhij] E3[cdhgij] 
    {"abcd,efg,eah,gbij,cdfhji",        1.0,   5, { 6,13,17, 5,26}},           //   1.0 Ap[abcd] W[efg] W[eah] p[gbij] E3[cdfhji] 
    {"abcd,efg,eah,ghij,cdfjbi",        1.0,   5, { 6,13,17, 5,26}},           //   1.0 Ap[abcd] W[efg] W[eah] p[ghij] E3[cdfjbi] 
    {"abcd,efg,eah,gikj,cdfhbj,ki",     1.0,   6, { 6,13,17, 5,26,21}},        //   1.0 Ap[abcd] W[efg] W[eah] p[gikj] E3[cdfhbj] delta[ki] 
    {"abcd,efk,eag,ghij,cdhibj,kf",     2.0,   6, { 6,15,19, 5,26,22}},        //   2.0 Ap[abcd] W[efk] W[eag] p[ghij] E3[cdhibj] delta[kf] 
    {"abcd,efg,eaf,ghij,cdhibj",       -1.0,   5, { 6,16,18, 5,26}},           //  -1.0 Ap[abcd] W[efg] W[eaf] p[ghij] E3[cdhibj] 
    {"abkc,adef,gdh,gij,chiefj,kb",     1.0,   6, { 6, 5,11,11,26,21}},        //   1.0 Ap[abkc] p[adef] W[gdh] W[gij] E3[chiefj] delta[kb] 
    {"abkc,adef,geh,gij,cdihfj,kb",    -1.0,   6, { 6, 5,11,11,26,21}},        //  -1.0 Ap[abkc] p[adef] W[geh] W[gij] E3[cdihfj] delta[kb] 
    {"abkc,adef,gfh,gij,cdiehj,kb",    -1.0,   6, { 6, 5,11,11,26,21}},        //  -1.0 Ap[abkc] p[adef] W[gfh] W[gij] E3[cdiehj] delta[kb] 
    {"abcd,abef,geh,gij,cdihfj",       -1.0,   5, { 6, 5,11,11,26}},           //  -1.0 Ap[abcd] p[abef] W[geh] W[gij] E3[cdihfj] 
    {"abcd,abef,gfh,gij,cdiehj",       -1.0,   5, { 6, 5,11,11,26}},           //  -1.0 Ap[abcd] p[abef] W[gfh] W[gij] E3[cdiehj] 
    {"abcd,aekf,gfh,gij,cdihbj,ke",    -1.0,   6, { 6, 5,11,11,26,21}},        //  -1.0 Ap[abcd] p[aekf] W[gfh] W[gij] E3[cdihbj] delta[ke] 
    {"abcd,aefg,hbe,hij,cdifgj",        1.0,   5, { 6, 5,11,11,26}},           //   1.0 Ap[abcd] p[aefg] W[hbe] W[hij] E3[cdifgj] 
    {"abcd,aefg,hbi,hej,cdjfig",        1.0,   5, { 6, 5,11,11,26}},           //   1.0 Ap[abcd] p[aefg] W[hbi] W[hej] E3[cdjfig] 
    {"abcd,aefg,hbi,hfj,cdejig",       -1.0,   5, { 6, 5,11,11,26}},           //  -1.0 Ap[abcd] p[aefg] W[hbi] W[hfj] E3[cdejig] 
    {"abcd,aefg,hbi,hgj,cdefij",       -1.0,   5, { 6, 5,11,11,26}},           //  -1.0 Ap[abcd] p[aefg] W[hbi] W[hgj] E3[cdefij] 
    {"abcd,aefg,hfi,hgj,cdeibj",       -1.0,   5, { 6, 5,11,11,26}},           //  -1.0 Ap[abcd] p[aefg] W[hfi] W[hgj] E3[cdeibj] 
    {"abde,fgh,fai,ijkc,degjkbhc",      1.0,   5, { 6,11,19, 5,27}},           //   1.0 Ap[abde] W[fgh] W[fai] p[ijkc] E4[degjkbhc] 
    {"abde,fgh,fai,hjkc,degjibkc",      1.0,   5, { 6,13,17, 5,27}},           //   1.0 Ap[abde] W[fgh] W[fai] p[hjkc] E4[degjibkc] 
    {"abde,afgh,ifj,ick,cdejkgbh",      1.0,   5, { 6, 5,11,11,27}},           //   1.0 Ap[abde] p[afgh] W[ifj] W[ick] E4[cdejkgbh] 
    {"abde,afgh,igj,ick,cdefkjbh",     -1.0,   5, { 6, 5,11,11,27}},           //  -1.0 Ap[abde] p[afgh] W[igj] W[ick] E4[cdefkjbh] 
    {"abde,afgh,ihj,ick,cdefkgbj",     -1.0,   5, { 6, 5,11,11,27}},           //  -1.0 Ap[abde] p[afgh] W[ihj] W[ick] E4[cdefkgbj] 
  };

  FEqInfo bVec[5] = {
    {"AUVW,lAQ,lPR,WR,QP,VU",   1.0,   6, { 3,17,11,23,21,21}}, // 1.0 b[auvw] W[apqr] E1[wr] delta[qp] delta[vu]
    {"AUVW,lAQ,lPR,VWRU,QP" ,   1.0,   5, { 3,17,11,24,21}   }, // 1.0 b[auvw] W[apqr] E2[vwru] delta[qp]
    {"AUVW,lAQ,lPR,VWQR,PU" ,   1.0,   5, { 3,17,11,24,21}   }, // 1.0 b[auvw] W[apqr] E2[vwqr] delta[pu]
    {"AUVW,lAQ,lPR,PWRQ,VU" ,   1.0,   5, { 3,17,11,24,21}   }, // 1.0 b[auvw] W[apqr] E2[pwrq] delta[vu]
    {"AUVW,lAQ,lPR,PVWRQU"  ,   1.0,   4, { 3,17,11,26}      }, // 1.0 b[auvw] W[apqr] E3[pvwrqu]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC_AAAV";
    Out.perturberClass = "AAAV";
    Out.Whandcoded_if_zero = 2;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 28;
    Out.EqsRes = FEqSet(&EqsRes[0], 86, "MRLCC_AAAV/Res");
    Out.bVec = FEqSet(&bVec[0], 5, "MRLCC_AAAV/bVec");
  };
};

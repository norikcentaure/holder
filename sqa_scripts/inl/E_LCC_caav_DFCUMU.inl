namespace MRLCC_CAAV_DFCUMU {

  FTensorDecl TensorDecls[36] = {
    /*  0*/{"R"      , "cAae"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "cAae"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "cAae"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "cAae"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "cAae"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "cAae"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "cAae"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "cAae"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "cAae"     , "", USAGE_Amplitude   },
    /*  9*/{"p1"     , "caae"     , "", USAGE_Amplitude   },
    /* 10*/{"p2"     , "caae"     , "", USAGE_Amplitude   },
    /* 11*/{"Ap1"    , "caae"     , "", USAGE_Amplitude   },
    /* 12*/{"Ap2"    , "caae"     , "", USAGE_Amplitude   },
    /* 13*/{"b1"     , "caae"     , "", USAGE_Amplitude   },
    /* 14*/{"b2"     , "caae"     , "", USAGE_Amplitude   },
    /* 15*/{"B1"     , "caae"     , "", USAGE_Amplitude   },
    /* 16*/{"B2"     , "caae"     , "", USAGE_Amplitude   },
    /* 17*/{"f"      , "ec"       , "", USAGE_Hamiltonian },
    /* 18*/{"k"      , "aa"       , "", USAGE_Hamiltonian },
    /* 19*/{"k"      , "cc"       , "", USAGE_Hamiltonian },
    /* 20*/{"W"      , "Laa"      , "", USAGE_Hamiltonian },
    /* 21*/{"W"      , "Lac"      , "", USAGE_Hamiltonian },
    /* 22*/{"W"      , "Lae"      , "", USAGE_Hamiltonian },
    /* 23*/{"W"      , "Lca"      , "", USAGE_Hamiltonian },
    /* 24*/{"W"      , "Lcc"      , "", USAGE_Hamiltonian },
    /* 25*/{"W"      , "Lce"      , "", USAGE_Hamiltonian },
    /* 26*/{"W"      , "Lea"      , "", USAGE_Hamiltonian },
    /* 27*/{"W"      , "Lec"      , "", USAGE_Hamiltonian },
    /* 28*/{"W"      , "Lee"      , "", USAGE_Hamiltonian },
    /* 29*/{"k"      , "ee"       , "", USAGE_Hamiltonian },
    /* 30*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 31*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 32*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 33*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 34*/{"S1"     , "AaAa"     , "", USAGE_Density     },
    /* 35*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

  FEqInfo EqsRes[216] = {
    {"abcd,be,aefd,cf",             2.0,   4, {11,18, 9,32}},        //   2.0 Ap1[abcd] k[be] p1[aefd] E1[cf] 
    {"abcd,ef,abed,cf",            -2.0,   4, {11,18, 9,32}},        //  -2.0 Ap1[abcd] k[ef] p1[abed] E1[cf] 
    {"abcd,be,aefd,cf",            -1.0,   4, {11,18,10,32}},        //  -1.0 Ap1[abcd] k[be] p2[aefd] E1[cf] 
    {"abcd,ef,abed,cf",             1.0,   4, {11,18,10,32}},        //   1.0 Ap1[abcd] k[ef] p2[abed] E1[cf] 
    {"abcd,ae,ebfd,cf",            -2.0,   4, {11,19, 9,32}},        //  -2.0 Ap1[abcd] k[ae] p1[ebfd] E1[cf] 
    {"abcd,ae,ebfd,cf",             1.0,   4, {11,19,10,32}},        //   1.0 Ap1[abcd] k[ae] p2[ebfd] E1[cf] 
    {"abcd,de,abfe,cf",             2.0,   4, {11,29, 9,32}},        //   2.0 Ap1[abcd] k[de] p1[abfe] E1[cf] 
    {"abcd,de,abfe,cf",            -1.0,   4, {11,29,10,32}},        //  -1.0 Ap1[abcd] k[de] p2[abfe] E1[cf] 
    {"abcd,be,aefd,cf",            -1.0,   4, {12,18, 9,32}},        //  -1.0 Ap2[abcd] k[be] p1[aefd] E1[cf] 
    {"abcd,ef,abed,cf",             1.0,   4, {12,18, 9,32}},        //   1.0 Ap2[abcd] k[ef] p1[abed] E1[cf] 
    {"abcd,be,aefd,cf",             2.0,   4, {12,18,10,32}},        //   2.0 Ap2[abcd] k[be] p2[aefd] E1[cf] 
    {"abcd,ef,abed,cf",            -2.0,   4, {12,18,10,32}},        //  -2.0 Ap2[abcd] k[ef] p2[abed] E1[cf] 
    {"abcd,ae,ebfd,cf",             1.0,   4, {12,19, 9,32}},        //   1.0 Ap2[abcd] k[ae] p1[ebfd] E1[cf] 
    {"abcd,ae,ebfd,cf",            -2.0,   4, {12,19,10,32}},        //  -2.0 Ap2[abcd] k[ae] p2[ebfd] E1[cf] 
    {"abcd,de,abfe,cf",            -1.0,   4, {12,29, 9,32}},        //  -1.0 Ap2[abcd] k[de] p1[abfe] E1[cf] 
    {"abcd,de,abfe,cf",             2.0,   4, {12,29,10,32}},        //   2.0 Ap2[abcd] k[de] p2[abfe] E1[cf] 
    {"abcd,ebf,eag,gfhd,ch",       -2.0,   5, {11,20,24, 9,32}},     //  -2.0 Ap1[abcd] W[ebf] W[eag] p1[gfhd] E1[ch] 
    {"abcd,ebf,egi,afhd,ch,ig",     4.0,   6, {11,20,24, 9,32,31}},  //   4.0 Ap1[abcd] W[ebf] W[egi] p1[afhd] E1[ch] delta[ig] 
    {"abcd,efg,ehi,abfd,cg,ih",    -4.0,   6, {11,20,24, 9,32,31}},  //  -4.0 Ap1[abcd] W[efg] W[ehi] p1[abfd] E1[cg] delta[ih] 
    {"abcd,ebf,eag,gfhd,ch",        1.0,   5, {11,20,24,10,32}},     //   1.0 Ap1[abcd] W[ebf] W[eag] p2[gfhd] E1[ch] 
    {"abcd,ebf,egi,afhd,ch,ig",    -2.0,   6, {11,20,24,10,32,31}},  //  -2.0 Ap1[abcd] W[ebf] W[egi] p2[afhd] E1[ch] delta[ig] 
    {"abcd,efg,ehi,abfd,cg,ih",     2.0,   6, {11,20,24,10,32,31}},  //   2.0 Ap1[abcd] W[efg] W[ehi] p2[abfd] E1[cg] delta[ih] 
    {"abcd,ebf,edg,afhg,ch",        2.0,   5, {11,20,28, 9,32}},     //   2.0 Ap1[abcd] W[ebf] W[edg] p1[afhg] E1[ch] 
    {"abcd,ebf,edg,afhg,ch",       -1.0,   5, {11,20,28,10,32}},     //  -1.0 Ap1[abcd] W[ebf] W[edg] p2[afhg] E1[ch] 
    {"abcd,eba,efg,fghd,ch",        1.0,   5, {11,21,23, 9,32}},     //   1.0 Ap1[abcd] W[eba] W[efg] p1[fghd] E1[ch] 
    {"abcd,ebf,efg,aghd,ch",       -2.0,   5, {11,21,23, 9,32}},     //  -2.0 Ap1[abcd] W[ebf] W[efg] p1[aghd] E1[ch] 
    {"abcd,efg,egh,abfd,ch",        2.0,   5, {11,21,23, 9,32}},     //   2.0 Ap1[abcd] W[efg] W[egh] p1[abfd] E1[ch] 
    {"abcd,eba,efg,fghd,ch",       -2.0,   5, {11,21,23,10,32}},     //  -2.0 Ap1[abcd] W[eba] W[efg] p2[fghd] E1[ch] 
    {"abcd,ebf,efg,aghd,ch",        1.0,   5, {11,21,23,10,32}},     //   1.0 Ap1[abcd] W[ebf] W[efg] p2[aghd] E1[ch] 
    {"abcd,efg,egh,abfd,ch",       -1.0,   5, {11,21,23,10,32}},     //  -1.0 Ap1[abcd] W[efg] W[egh] p2[abfd] E1[ch] 
    {"abcd,ebf,edg,aghf,ch",       -1.0,   5, {11,22,26, 9,32}},     //  -1.0 Ap1[abcd] W[ebf] W[edg] p1[aghf] E1[ch] 
    {"abcd,ebf,edg,aghf,ch",        2.0,   5, {11,22,26,10,32}},     //   2.0 Ap1[abcd] W[ebf] W[edg] p2[aghf] E1[ch] 
    {"abcd,eaf,edg,fbhg,ch",       -2.0,   5, {11,24,28, 9,32}},     //  -2.0 Ap1[abcd] W[eaf] W[edg] p1[fbhg] E1[ch] 
    {"abcd,efi,edg,abhg,ch,if",     4.0,   6, {11,24,28, 9,32,31}},  //   4.0 Ap1[abcd] W[efi] W[edg] p1[abhg] E1[ch] delta[if] 
    {"abcd,eaf,edg,fbhg,ch",        1.0,   5, {11,24,28,10,32}},     //   1.0 Ap1[abcd] W[eaf] W[edg] p2[fbhg] E1[ch] 
    {"abcd,efi,edg,abhg,ch,if",    -2.0,   6, {11,24,28,10,32,31}},  //  -2.0 Ap1[abcd] W[efi] W[edg] p2[abhg] E1[ch] delta[if] 
    {"abcd,efg,eda,fbhg,ch",        4.0,   5, {11,25,27, 9,32}},     //   4.0 Ap1[abcd] W[efg] W[eda] p1[fbhg] E1[ch] 
    {"abcd,efg,edf,abhg,ch",       -2.0,   5, {11,25,27, 9,32}},     //  -2.0 Ap1[abcd] W[efg] W[edf] p1[abhg] E1[ch] 
    {"abcd,efg,eda,fbhg,ch",       -2.0,   5, {11,25,27,10,32}},     //  -2.0 Ap1[abcd] W[efg] W[eda] p2[fbhg] E1[ch] 
    {"abcd,efg,edf,abhg,ch",        1.0,   5, {11,25,27,10,32}},     //   1.0 Ap1[abcd] W[efg] W[edf] p2[abhg] E1[ch] 
    {"abcd,ebfd,gae,ghi,cf,ih",    -4.0,   6, {11, 9,24,24,32,31}},  //  -4.0 Ap1[abcd] p1[ebfd] W[gae] W[ghi] E1[cf] delta[ih] 
    {"abcd,ebfd,gah,geh,cf",        2.0,   5, {11, 9,24,24,32}},     //   2.0 Ap1[abcd] p1[ebfd] W[gah] W[geh] E1[cf] 
    {"abcd,ebfd,gae,ghi,cf,ih",     2.0,   6, {11,10,24,24,32,31}},  //   2.0 Ap1[abcd] p2[ebfd] W[gae] W[ghi] E1[cf] delta[ih] 
    {"abcd,ebfd,gah,geh,cf",       -1.0,   5, {11,10,24,24,32}},     //  -1.0 Ap1[abcd] p2[ebfd] W[gah] W[geh] E1[cf] 
    {"abcd,ebf,eag,gfhd,ch",        1.0,   5, {12,20,24, 9,32}},     //   1.0 Ap2[abcd] W[ebf] W[eag] p1[gfhd] E1[ch] 
    {"abcd,ebf,egi,afhd,ch,ig",    -2.0,   6, {12,20,24, 9,32,31}},  //  -2.0 Ap2[abcd] W[ebf] W[egi] p1[afhd] E1[ch] delta[ig] 
    {"abcd,efg,ehi,abfd,cg,ih",     2.0,   6, {12,20,24, 9,32,31}},  //   2.0 Ap2[abcd] W[efg] W[ehi] p1[abfd] E1[cg] delta[ih] 
    {"abcd,ebf,eag,gfhd,ch",       -2.0,   5, {12,20,24,10,32}},     //  -2.0 Ap2[abcd] W[ebf] W[eag] p2[gfhd] E1[ch] 
    {"abcd,ebf,egi,afhd,ch,ig",     4.0,   6, {12,20,24,10,32,31}},  //   4.0 Ap2[abcd] W[ebf] W[egi] p2[afhd] E1[ch] delta[ig] 
    {"abcd,efg,ehi,abfd,cg,ih",    -4.0,   6, {12,20,24,10,32,31}},  //  -4.0 Ap2[abcd] W[efg] W[ehi] p2[abfd] E1[cg] delta[ih] 
    {"abcd,ebf,edg,afhg,ch",       -1.0,   5, {12,20,28, 9,32}},     //  -1.0 Ap2[abcd] W[ebf] W[edg] p1[afhg] E1[ch] 
    {"abcd,ebf,edg,afhg,ch",        2.0,   5, {12,20,28,10,32}},     //   2.0 Ap2[abcd] W[ebf] W[edg] p2[afhg] E1[ch] 
    {"abcd,eba,efg,fghd,ch",       -2.0,   5, {12,21,23, 9,32}},     //  -2.0 Ap2[abcd] W[eba] W[efg] p1[fghd] E1[ch] 
    {"abcd,ebf,efg,aghd,ch",        1.0,   5, {12,21,23, 9,32}},     //   1.0 Ap2[abcd] W[ebf] W[efg] p1[aghd] E1[ch] 
    {"abcd,efg,egh,abfd,ch",       -1.0,   5, {12,21,23, 9,32}},     //  -1.0 Ap2[abcd] W[efg] W[egh] p1[abfd] E1[ch] 
    {"abcd,eba,efg,fghd,ch",        4.0,   5, {12,21,23,10,32}},     //   4.0 Ap2[abcd] W[eba] W[efg] p2[fghd] E1[ch] 
    {"abcd,ebf,efg,aghd,ch",       -2.0,   5, {12,21,23,10,32}},     //  -2.0 Ap2[abcd] W[ebf] W[efg] p2[aghd] E1[ch] 
    {"abcd,efg,egh,abfd,ch",        2.0,   5, {12,21,23,10,32}},     //   2.0 Ap2[abcd] W[efg] W[egh] p2[abfd] E1[ch] 
    {"abcd,ebf,edg,aghf,ch",        2.0,   5, {12,22,26, 9,32}},     //   2.0 Ap2[abcd] W[ebf] W[edg] p1[aghf] E1[ch] 
    {"abcd,ebf,edg,aghf,ch",       -1.0,   5, {12,22,26,10,32}},     //  -1.0 Ap2[abcd] W[ebf] W[edg] p2[aghf] E1[ch] 
    {"abcd,eaf,edg,fbhg,ch",        1.0,   5, {12,24,28, 9,32}},     //   1.0 Ap2[abcd] W[eaf] W[edg] p1[fbhg] E1[ch] 
    {"abcd,efi,edg,abhg,ch,if",    -2.0,   6, {12,24,28, 9,32,31}},  //  -2.0 Ap2[abcd] W[efi] W[edg] p1[abhg] E1[ch] delta[if] 
    {"abcd,eaf,edg,fbhg,ch",       -2.0,   5, {12,24,28,10,32}},     //  -2.0 Ap2[abcd] W[eaf] W[edg] p2[fbhg] E1[ch] 
    {"abcd,efi,edg,abhg,ch,if",     4.0,   6, {12,24,28,10,32,31}},  //   4.0 Ap2[abcd] W[efi] W[edg] p2[abhg] E1[ch] delta[if] 
    {"abcd,efg,eda,fbhg,ch",       -2.0,   5, {12,25,27, 9,32}},     //  -2.0 Ap2[abcd] W[efg] W[eda] p1[fbhg] E1[ch] 
    {"abcd,efg,edf,abhg,ch",        1.0,   5, {12,25,27, 9,32}},     //   1.0 Ap2[abcd] W[efg] W[edf] p1[abhg] E1[ch] 
    {"abcd,efg,eda,fbhg,ch",        1.0,   5, {12,25,27,10,32}},     //   1.0 Ap2[abcd] W[efg] W[eda] p2[fbhg] E1[ch] 
    {"abcd,efg,edf,abhg,ch",       -2.0,   5, {12,25,27,10,32}},     //  -2.0 Ap2[abcd] W[efg] W[edf] p2[abhg] E1[ch] 
    {"abcd,ebfd,gae,ghi,cf,ih",     2.0,   6, {12, 9,24,24,32,31}},  //   2.0 Ap2[abcd] p1[ebfd] W[gae] W[ghi] E1[cf] delta[ih] 
    {"abcd,ebfd,gah,geh,cf",       -1.0,   5, {12, 9,24,24,32}},     //  -1.0 Ap2[abcd] p1[ebfd] W[gah] W[geh] E1[cf] 
    {"abcd,ebfd,gae,ghi,cf,ih",    -4.0,   6, {12,10,24,24,32,31}},  //  -4.0 Ap2[abcd] p2[ebfd] W[gae] W[ghi] E1[cf] delta[ih] 
    {"abcd,ebfd,gah,geh,cf",        2.0,   5, {12,10,24,24,32}},     //   2.0 Ap2[abcd] p2[ebfd] W[gah] W[geh] E1[cf] 
    {"abcd,ef,aegd,cfbg",           2.0,   4, {11,18, 9,33}},        //   2.0 Ap1[abcd] k[ef] p1[aegd] E2[cfbg] 
    {"abcd,ef,aged,cgbf",          -2.0,   4, {11,18, 9,33}},        //  -2.0 Ap1[abcd] k[ef] p1[aged] E2[cgbf] 
    {"abcd,ef,aegd,cfbg",          -1.0,   4, {11,18,10,33}},        //  -1.0 Ap1[abcd] k[ef] p2[aegd] E2[cfbg] 
    {"abcd,ef,aged,cgbf",           1.0,   4, {11,18,10,33}},        //   1.0 Ap1[abcd] k[ef] p2[aged] E2[cgbf] 
    {"abcd,ae,efgd,cfbg",          -2.0,   4, {11,19, 9,33}},        //  -2.0 Ap1[abcd] k[ae] p1[efgd] E2[cfbg] 
    {"abcd,ae,efgd,cfbg",           1.0,   4, {11,19,10,33}},        //   1.0 Ap1[abcd] k[ae] p2[efgd] E2[cfbg] 
    {"abcd,de,afge,cfbg",           2.0,   4, {11,29, 9,33}},        //   2.0 Ap1[abcd] k[de] p1[afge] E2[cfbg] 
    {"abcd,de,afge,cfbg",          -1.0,   4, {11,29,10,33}},        //  -1.0 Ap1[abcd] k[de] p2[afge] E2[cfbg] 
    {"abcd,ef,aegd,cfbg",          -1.0,   4, {12,18, 9,33}},        //  -1.0 Ap2[abcd] k[ef] p1[aegd] E2[cfbg] 
    {"abcd,ef,aged,cgbf",           1.0,   4, {12,18, 9,33}},        //   1.0 Ap2[abcd] k[ef] p1[aged] E2[cgbf] 
    {"abcd,ef,aegd,cfgb",          -1.0,   4, {12,18,10,33}},        //  -1.0 Ap2[abcd] k[ef] p2[aegd] E2[cfgb] 
    {"abcd,ef,aged,cgfb",           1.0,   4, {12,18,10,33}},        //   1.0 Ap2[abcd] k[ef] p2[aged] E2[cgfb] 
    {"abcd,ae,efgd,cfbg",           1.0,   4, {12,19, 9,33}},        //   1.0 Ap2[abcd] k[ae] p1[efgd] E2[cfbg] 
    {"abcd,ae,efgd,cfgb",           1.0,   4, {12,19,10,33}},        //   1.0 Ap2[abcd] k[ae] p2[efgd] E2[cfgb] 
    {"abcd,de,afge,cfbg",          -1.0,   4, {12,29, 9,33}},        //  -1.0 Ap2[abcd] k[de] p1[afge] E2[cfbg] 
    {"abcd,de,afge,cfgb",          -1.0,   4, {12,29,10,33}},        //  -1.0 Ap2[abcd] k[de] p2[afge] E2[cfgb] 
    {"abcd,ebf,eag,ghid,chfi",     -2.0,   5, {11,20,24, 9,33}},     //  -2.0 Ap1[abcd] W[ebf] W[eag] p1[ghid] E2[chfi] 
    {"abcd,efg,eah,hbid,cfig",     -2.0,   5, {11,20,24, 9,33}},     //  -2.0 Ap1[abcd] W[efg] W[eah] p1[hbid] E2[cfig] 
    {"abcd,efg,eah,hfid,cgbi",     -2.0,   5, {11,20,24, 9,33}},     //  -2.0 Ap1[abcd] W[efg] W[eah] p1[hfid] E2[cgbi] 
    {"abcd,efg,ehj,afid,cgbi,jh",   4.0,   6, {11,20,24, 9,33,31}},  //   4.0 Ap1[abcd] W[efg] W[ehj] p1[afid] E2[cgbi] delta[jh] 
    {"abcd,efg,ehj,aifd,cibg,jh",  -4.0,   6, {11,20,24, 9,33,31}},  //  -4.0 Ap1[abcd] W[efg] W[ehj] p1[aifd] E2[cibg] delta[jh] 
    {"abcd,ebf,eag,ghid,chfi",      1.0,   5, {11,20,24,10,33}},     //   1.0 Ap1[abcd] W[ebf] W[eag] p2[ghid] E2[chfi] 
    {"abcd,efg,eah,hbid,cfig",      1.0,   5, {11,20,24,10,33}},     //   1.0 Ap1[abcd] W[efg] W[eah] p2[hbid] E2[cfig] 
    {"abcd,efg,eah,hfid,cgbi",      1.0,   5, {11,20,24,10,33}},     //   1.0 Ap1[abcd] W[efg] W[eah] p2[hfid] E2[cgbi] 
    {"abcd,efg,ehj,afid,cgbi,jh",  -2.0,   6, {11,20,24,10,33,31}},  //  -2.0 Ap1[abcd] W[efg] W[ehj] p2[afid] E2[cgbi] delta[jh] 
    {"abcd,efg,ehj,aifd,cibg,jh",   2.0,   6, {11,20,24,10,33,31}},  //   2.0 Ap1[abcd] W[efg] W[ehj] p2[aifd] E2[cibg] delta[jh] 
    {"abcd,ebf,edg,ahig,chfi",      2.0,   5, {11,20,28, 9,33}},     //   2.0 Ap1[abcd] W[ebf] W[edg] p1[ahig] E2[chfi] 
    {"abcd,efg,edh,abih,cfig",      2.0,   5, {11,20,28, 9,33}},     //   2.0 Ap1[abcd] W[efg] W[edh] p1[abih] E2[cfig] 
    {"abcd,efg,edh,afih,cgbi",      2.0,   5, {11,20,28, 9,33}},     //   2.0 Ap1[abcd] W[efg] W[edh] p1[afih] E2[cgbi] 
    {"abcd,ebf,edg,ahig,chfi",     -1.0,   5, {11,20,28,10,33}},     //  -1.0 Ap1[abcd] W[ebf] W[edg] p2[ahig] E2[chfi] 
    {"abcd,efg,edh,abih,cfig",     -1.0,   5, {11,20,28,10,33}},     //  -1.0 Ap1[abcd] W[efg] W[edh] p2[abih] E2[cfig] 
    {"abcd,efg,edh,afih,cgbi",     -1.0,   5, {11,20,28,10,33}},     //  -1.0 Ap1[abcd] W[efg] W[edh] p2[afih] E2[cgbi] 
    {"abcd,eba,efg,fhid,chgi",      1.0,   5, {11,21,23, 9,33}},     //   1.0 Ap1[abcd] W[eba] W[efg] p1[fhid] E2[chgi] 
    {"abcd,efa,egh,gbid,cfih",      1.0,   5, {11,21,23, 9,33}},     //   1.0 Ap1[abcd] W[efa] W[egh] p1[gbid] E2[cfih] 
    {"abcd,efa,egh,ghid,cfbi",      1.0,   5, {11,21,23, 9,33}},     //   1.0 Ap1[abcd] W[efa] W[egh] p1[ghid] E2[cfbi] 
    {"abcd,efg,egh,ahid,cfbi",     -2.0,   5, {11,21,23, 9,33}},     //  -2.0 Ap1[abcd] W[efg] W[egh] p1[ahid] E2[cfbi] 
    {"abcd,efg,egh,aifd,cibh",      2.0,   5, {11,21,23, 9,33}},     //   2.0 Ap1[abcd] W[efg] W[egh] p1[aifd] E2[cibh] 
    {"abcd,eba,efg,fhid,chig",      1.0,   5, {11,21,23,10,33}},     //   1.0 Ap1[abcd] W[eba] W[efg] p2[fhid] E2[chig] 
    {"abcd,efa,egh,gbid,cfhi",      1.0,   5, {11,21,23,10,33}},     //   1.0 Ap1[abcd] W[efa] W[egh] p2[gbid] E2[cfhi] 
    {"abcd,efa,egh,ghid,cfbi",     -2.0,   5, {11,21,23,10,33}},     //  -2.0 Ap1[abcd] W[efa] W[egh] p2[ghid] E2[cfbi] 
    {"abcd,efg,egh,ahid,cfbi",      1.0,   5, {11,21,23,10,33}},     //   1.0 Ap1[abcd] W[efg] W[egh] p2[ahid] E2[cfbi] 
    {"abcd,efg,egh,aifd,cibh",     -1.0,   5, {11,21,23,10,33}},     //  -1.0 Ap1[abcd] W[efg] W[egh] p2[aifd] E2[cibh] 
    {"abcd,ebf,edg,ahif,chgi",     -1.0,   5, {11,22,26, 9,33}},     //  -1.0 Ap1[abcd] W[ebf] W[edg] p1[ahif] E2[chgi] 
    {"abcd,efg,edh,abig,cfih",     -1.0,   5, {11,22,26, 9,33}},     //  -1.0 Ap1[abcd] W[efg] W[edh] p1[abig] E2[cfih] 
    {"abcd,efg,edh,ahig,cfbi",     -1.0,   5, {11,22,26, 9,33}},     //  -1.0 Ap1[abcd] W[efg] W[edh] p1[ahig] E2[cfbi] 
    {"abcd,ebf,edg,ahif,chig",     -1.0,   5, {11,22,26,10,33}},     //  -1.0 Ap1[abcd] W[ebf] W[edg] p2[ahif] E2[chig] 
    {"abcd,efg,edh,abig,cfhi",     -1.0,   5, {11,22,26,10,33}},     //  -1.0 Ap1[abcd] W[efg] W[edh] p2[abig] E2[cfhi] 
    {"abcd,efg,edh,ahig,cfbi",      2.0,   5, {11,22,26,10,33}},     //   2.0 Ap1[abcd] W[efg] W[edh] p2[ahig] E2[cfbi] 
    {"abcd,eaf,edg,fhig,chbi",     -2.0,   5, {11,24,28, 9,33}},     //  -2.0 Ap1[abcd] W[eaf] W[edg] p1[fhig] E2[chbi] 
    {"abcd,efj,edg,ahig,chbi,jf",   4.0,   6, {11,24,28, 9,33,31}},  //   4.0 Ap1[abcd] W[efj] W[edg] p1[ahig] E2[chbi] delta[jf] 
    {"abcd,eaf,edg,fhig,chbi",      1.0,   5, {11,24,28,10,33}},     //   1.0 Ap1[abcd] W[eaf] W[edg] p2[fhig] E2[chbi] 
    {"abcd,efj,edg,ahig,chbi,jf",  -2.0,   6, {11,24,28,10,33,31}},  //  -2.0 Ap1[abcd] W[efj] W[edg] p2[ahig] E2[chbi] delta[jf] 
    {"abcd,efg,eda,fhig,chbi",      4.0,   5, {11,25,27, 9,33}},     //   4.0 Ap1[abcd] W[efg] W[eda] p1[fhig] E2[chbi] 
    {"abcd,efg,edf,ahig,chbi",     -2.0,   5, {11,25,27, 9,33}},     //  -2.0 Ap1[abcd] W[efg] W[edf] p1[ahig] E2[chbi] 
    {"abcd,efg,eda,fhig,chbi",     -2.0,   5, {11,25,27,10,33}},     //  -2.0 Ap1[abcd] W[efg] W[eda] p2[fhig] E2[chbi] 
    {"abcd,efg,edf,ahig,chbi",      1.0,   5, {11,25,27,10,33}},     //   1.0 Ap1[abcd] W[efg] W[edf] p2[ahig] E2[chbi] 
    {"abcd,abed,feg,fhi,chgi",     -2.0,   5, {11, 9,20,20,33}},     //  -2.0 Ap1[abcd] p1[abed] W[feg] W[fhi] E2[chgi] 
    {"abcd,aefd,gbe,ghi,chfi",      2.0,   5, {11, 9,20,20,33}},     //   2.0 Ap1[abcd] p1[aefd] W[gbe] W[ghi] E2[chfi] 
    {"abcd,aefd,gbh,gei,cihf",      2.0,   5, {11, 9,20,20,33}},     //   2.0 Ap1[abcd] p1[aefd] W[gbh] W[gei] E2[cihf] 
    {"abcd,aefd,gbh,gfi,cehi",     -2.0,   5, {11, 9,20,20,33}},     //  -2.0 Ap1[abcd] p1[aefd] W[gbh] W[gfi] E2[cehi] 
    {"abcd,efgd,hae,hij,cfbg,ji",  -4.0,   6, {11, 9,24,24,33,31}},  //  -4.0 Ap1[abcd] p1[efgd] W[hae] W[hij] E2[cfbg] delta[ji] 
    {"abcd,efgd,hai,hei,cfbg",      2.0,   5, {11, 9,24,24,33}},     //   2.0 Ap1[abcd] p1[efgd] W[hai] W[hei] E2[cfbg] 
    {"abcd,abed,feg,fhi,chgi",      1.0,   5, {11,10,20,20,33}},     //   1.0 Ap1[abcd] p2[abed] W[feg] W[fhi] E2[chgi] 
    {"abcd,aefd,gbe,ghi,chfi",     -1.0,   5, {11,10,20,20,33}},     //  -1.0 Ap1[abcd] p2[aefd] W[gbe] W[ghi] E2[chfi] 
    {"abcd,aefd,gbh,gei,cihf",     -1.0,   5, {11,10,20,20,33}},     //  -1.0 Ap1[abcd] p2[aefd] W[gbh] W[gei] E2[cihf] 
    {"abcd,aefd,gbh,gfi,cehi",      1.0,   5, {11,10,20,20,33}},     //   1.0 Ap1[abcd] p2[aefd] W[gbh] W[gfi] E2[cehi] 
    {"abcd,efgd,hae,hij,cfbg,ji",   2.0,   6, {11,10,24,24,33,31}},  //   2.0 Ap1[abcd] p2[efgd] W[hae] W[hij] E2[cfbg] delta[ji] 
    {"abcd,efgd,hai,hei,cfbg",     -1.0,   5, {11,10,24,24,33}},     //  -1.0 Ap1[abcd] p2[efgd] W[hai] W[hei] E2[cfbg] 
    {"abcd,ebf,eag,ghid,chfi",      1.0,   5, {12,20,24, 9,33}},     //   1.0 Ap2[abcd] W[ebf] W[eag] p1[ghid] E2[chfi] 
    {"abcd,efg,eah,hbid,cfig",      1.0,   5, {12,20,24, 9,33}},     //   1.0 Ap2[abcd] W[efg] W[eah] p1[hbid] E2[cfig] 
    {"abcd,efg,eah,hfid,cgbi",      1.0,   5, {12,20,24, 9,33}},     //   1.0 Ap2[abcd] W[efg] W[eah] p1[hfid] E2[cgbi] 
    {"abcd,efg,ehj,afid,cgbi,jh",  -2.0,   6, {12,20,24, 9,33,31}},  //  -2.0 Ap2[abcd] W[efg] W[ehj] p1[afid] E2[cgbi] delta[jh] 
    {"abcd,efg,ehj,aifd,cibg,jh",   2.0,   6, {12,20,24, 9,33,31}},  //   2.0 Ap2[abcd] W[efg] W[ehj] p1[aifd] E2[cibg] delta[jh] 
    {"abcd,ebf,eag,ghid,chif",      1.0,   5, {12,20,24,10,33}},     //   1.0 Ap2[abcd] W[ebf] W[eag] p2[ghid] E2[chif] 
    {"abcd,efg,eah,hbid,cfig",     -2.0,   5, {12,20,24,10,33}},     //  -2.0 Ap2[abcd] W[efg] W[eah] p2[hbid] E2[cfig] 
    {"abcd,efg,eah,hfid,cgib",      1.0,   5, {12,20,24,10,33}},     //   1.0 Ap2[abcd] W[efg] W[eah] p2[hfid] E2[cgib] 
    {"abcd,efg,ehj,afid,cgib,jh",  -2.0,   6, {12,20,24,10,33,31}},  //  -2.0 Ap2[abcd] W[efg] W[ehj] p2[afid] E2[cgib] delta[jh] 
    {"abcd,efg,ehj,aifd,cigb,jh",   2.0,   6, {12,20,24,10,33,31}},  //   2.0 Ap2[abcd] W[efg] W[ehj] p2[aifd] E2[cigb] delta[jh] 
    {"abcd,ebf,edg,ahig,chfi",     -1.0,   5, {12,20,28, 9,33}},     //  -1.0 Ap2[abcd] W[ebf] W[edg] p1[ahig] E2[chfi] 
    {"abcd,efg,edh,abih,cfig",     -1.0,   5, {12,20,28, 9,33}},     //  -1.0 Ap2[abcd] W[efg] W[edh] p1[abih] E2[cfig] 
    {"abcd,efg,edh,afih,cgbi",     -1.0,   5, {12,20,28, 9,33}},     //  -1.0 Ap2[abcd] W[efg] W[edh] p1[afih] E2[cgbi] 
    {"abcd,ebf,edg,ahig,chif",     -1.0,   5, {12,20,28,10,33}},     //  -1.0 Ap2[abcd] W[ebf] W[edg] p2[ahig] E2[chif] 
    {"abcd,efg,edh,abih,cfig",      2.0,   5, {12,20,28,10,33}},     //   2.0 Ap2[abcd] W[efg] W[edh] p2[abih] E2[cfig] 
    {"abcd,efg,edh,afih,cgib",     -1.0,   5, {12,20,28,10,33}},     //  -1.0 Ap2[abcd] W[efg] W[edh] p2[afih] E2[cgib] 
    {"abcd,eba,efg,fhid,chgi",     -2.0,   5, {12,21,23, 9,33}},     //  -2.0 Ap2[abcd] W[eba] W[efg] p1[fhid] E2[chgi] 
    {"abcd,efa,egh,gbid,cfhi",      1.0,   5, {12,21,23, 9,33}},     //   1.0 Ap2[abcd] W[efa] W[egh] p1[gbid] E2[cfhi] 
    {"abcd,efa,egh,ghid,cfib",      1.0,   5, {12,21,23, 9,33}},     //   1.0 Ap2[abcd] W[efa] W[egh] p1[ghid] E2[cfib] 
    {"abcd,efg,egh,ahid,cfbi",      1.0,   5, {12,21,23, 9,33}},     //   1.0 Ap2[abcd] W[efg] W[egh] p1[ahid] E2[cfbi] 
    {"abcd,efg,egh,aifd,cibh",     -1.0,   5, {12,21,23, 9,33}},     //  -1.0 Ap2[abcd] W[efg] W[egh] p1[aifd] E2[cibh] 
    {"abcd,eba,efg,fhid,chig",     -2.0,   5, {12,21,23,10,33}},     //  -2.0 Ap2[abcd] W[eba] W[efg] p2[fhid] E2[chig] 
    {"abcd,efa,egh,gbid,cfih",      1.0,   5, {12,21,23,10,33}},     //   1.0 Ap2[abcd] W[efa] W[egh] p2[gbid] E2[cfih] 
    {"abcd,efa,egh,ghid,cfib",     -2.0,   5, {12,21,23,10,33}},     //  -2.0 Ap2[abcd] W[efa] W[egh] p2[ghid] E2[cfib] 
    {"abcd,efg,egh,ahid,cfib",      1.0,   5, {12,21,23,10,33}},     //   1.0 Ap2[abcd] W[efg] W[egh] p2[ahid] E2[cfib] 
    {"abcd,efg,egh,aifd,cihb",     -1.0,   5, {12,21,23,10,33}},     //  -1.0 Ap2[abcd] W[efg] W[egh] p2[aifd] E2[cihb] 
    {"abcd,ebf,edg,ahif,chgi",      2.0,   5, {12,22,26, 9,33}},     //   2.0 Ap2[abcd] W[ebf] W[edg] p1[ahif] E2[chgi] 
    {"abcd,efg,edh,abig,cfhi",     -1.0,   5, {12,22,26, 9,33}},     //  -1.0 Ap2[abcd] W[efg] W[edh] p1[abig] E2[cfhi] 
    {"abcd,efg,edh,ahig,cfib",     -1.0,   5, {12,22,26, 9,33}},     //  -1.0 Ap2[abcd] W[efg] W[edh] p1[ahig] E2[cfib] 
    {"abcd,ebf,edg,ahif,chgi",     -1.0,   5, {12,22,26,10,33}},     //  -1.0 Ap2[abcd] W[ebf] W[edg] p2[ahif] E2[chgi] 
    {"abcd,efg,edh,abig,cfhi",      2.0,   5, {12,22,26,10,33}},     //   2.0 Ap2[abcd] W[efg] W[edh] p2[abig] E2[cfhi] 
    {"abcd,efg,edh,ahig,cfbi",     -1.0,   5, {12,22,26,10,33}},     //  -1.0 Ap2[abcd] W[efg] W[edh] p2[ahig] E2[cfbi] 
    {"abcd,eaf,edg,fhig,chbi",      1.0,   5, {12,24,28, 9,33}},     //   1.0 Ap2[abcd] W[eaf] W[edg] p1[fhig] E2[chbi] 
    {"abcd,efj,edg,ahig,chbi,jf",  -2.0,   6, {12,24,28, 9,33,31}},  //  -2.0 Ap2[abcd] W[efj] W[edg] p1[ahig] E2[chbi] delta[jf] 
    {"abcd,eaf,edg,fhig,chib",      1.0,   5, {12,24,28,10,33}},     //   1.0 Ap2[abcd] W[eaf] W[edg] p2[fhig] E2[chib] 
    {"abcd,efj,edg,ahig,chib,jf",  -2.0,   6, {12,24,28,10,33,31}},  //  -2.0 Ap2[abcd] W[efj] W[edg] p2[ahig] E2[chib] delta[jf] 
    {"abcd,efg,eda,fhig,chbi",     -2.0,   5, {12,25,27, 9,33}},     //  -2.0 Ap2[abcd] W[efg] W[eda] p1[fhig] E2[chbi] 
    {"abcd,efg,edf,ahig,chbi",      1.0,   5, {12,25,27, 9,33}},     //   1.0 Ap2[abcd] W[efg] W[edf] p1[ahig] E2[chbi] 
    {"abcd,efg,eda,fhig,chbi",      1.0,   5, {12,25,27,10,33}},     //   1.0 Ap2[abcd] W[efg] W[eda] p2[fhig] E2[chbi] 
    {"abcd,efg,edf,ahig,chib",      1.0,   5, {12,25,27,10,33}},     //   1.0 Ap2[abcd] W[efg] W[edf] p2[ahig] E2[chib] 
    {"abcd,abed,feg,fhi,chgi",      1.0,   5, {12, 9,20,20,33}},     //   1.0 Ap2[abcd] p1[abed] W[feg] W[fhi] E2[chgi] 
    {"abcd,aefd,gbe,ghi,chfi",     -1.0,   5, {12, 9,20,20,33}},     //  -1.0 Ap2[abcd] p1[aefd] W[gbe] W[ghi] E2[chfi] 
    {"abcd,aefd,gbh,gei,cihf",     -1.0,   5, {12, 9,20,20,33}},     //  -1.0 Ap2[abcd] p1[aefd] W[gbh] W[gei] E2[cihf] 
    {"abcd,aefd,gbh,gfi,cehi",      1.0,   5, {12, 9,20,20,33}},     //   1.0 Ap2[abcd] p1[aefd] W[gbh] W[gfi] E2[cehi] 
    {"abcd,efgd,hae,hij,cfbg,ji",   2.0,   6, {12, 9,24,24,33,31}},  //   2.0 Ap2[abcd] p1[efgd] W[hae] W[hij] E2[cfbg] delta[ji] 
    {"abcd,efgd,hai,hei,cfbg",     -1.0,   5, {12, 9,24,24,33}},     //  -1.0 Ap2[abcd] p1[efgd] W[hai] W[hei] E2[cfbg] 
    {"abcd,abed,feg,fhi,chgi",     -2.0,   5, {12,10,20,20,33}},     //  -2.0 Ap2[abcd] p2[abed] W[feg] W[fhi] E2[chgi] 
    {"abcd,aefd,gbe,ghi,chfi",      2.0,   5, {12,10,20,20,33}},     //   2.0 Ap2[abcd] p2[aefd] W[gbe] W[ghi] E2[chfi] 
    {"abcd,aefd,gbh,gei,cifh",     -1.0,   5, {12,10,20,20,33}},     //  -1.0 Ap2[abcd] p2[aefd] W[gbh] W[gei] E2[cifh] 
    {"abcd,aefd,gbh,gfi,ceih",      1.0,   5, {12,10,20,20,33}},     //   1.0 Ap2[abcd] p2[aefd] W[gbh] W[gfi] E2[ceih] 
    {"abcd,efgd,hae,hij,cfgb,ji",   2.0,   6, {12,10,24,24,33,31}},  //   2.0 Ap2[abcd] p2[efgd] W[hae] W[hij] E2[cfgb] delta[ji] 
    {"abcd,efgd,hai,hei,cfgb",     -1.0,   5, {12,10,24,24,33}},     //  -1.0 Ap2[abcd] p2[efgd] W[hai] W[hei] E2[cfgb] 
    {"abcd,efg,eah,hijd,cfibgj",   -2.0,   5, {11,20,24, 9,35}},     //  -2.0 Ap1[abcd] W[efg] W[eah] p1[hijd] E3[cfibgj] 
    {"abcd,efg,eah,hijd,cfibgj",    1.0,   5, {11,20,24,10,35}},     //   1.0 Ap1[abcd] W[efg] W[eah] p2[hijd] E3[cfibgj] 
    {"abcd,efg,edh,aijh,cfibgj",    2.0,   5, {11,20,28, 9,35}},     //   2.0 Ap1[abcd] W[efg] W[edh] p1[aijh] E3[cfibgj] 
    {"abcd,efg,edh,aijh,cfibgj",   -1.0,   5, {11,20,28,10,35}},     //  -1.0 Ap1[abcd] W[efg] W[edh] p2[aijh] E3[cfibgj] 
    {"abcd,efa,egh,gijd,cfibhj",    1.0,   5, {11,21,23, 9,35}},     //   1.0 Ap1[abcd] W[efa] W[egh] p1[gijd] E3[cfibhj] 
    {"abcd,efa,egh,gijd,cfibjh",    1.0,   5, {11,21,23,10,35}},     //   1.0 Ap1[abcd] W[efa] W[egh] p2[gijd] E3[cfibjh] 
    {"abcd,efg,edh,aijg,cfibhj",   -1.0,   5, {11,22,26, 9,35}},     //  -1.0 Ap1[abcd] W[efg] W[edh] p1[aijg] E3[cfibhj] 
    {"abcd,efg,edh,aijg,cfibjh",   -1.0,   5, {11,22,26,10,35}},     //  -1.0 Ap1[abcd] W[efg] W[edh] p2[aijg] E3[cfibjh] 
    {"abcd,aefd,geh,gij,chibfj",    2.0,   5, {11, 9,20,20,35}},     //   2.0 Ap1[abcd] p1[aefd] W[geh] W[gij] E3[chibfj] 
    {"abcd,aefd,gfh,gij,ceibhj",   -2.0,   5, {11, 9,20,20,35}},     //  -2.0 Ap1[abcd] p1[aefd] W[gfh] W[gij] E3[ceibhj] 
    {"abcd,aefd,geh,gij,chibfj",   -1.0,   5, {11,10,20,20,35}},     //  -1.0 Ap1[abcd] p2[aefd] W[geh] W[gij] E3[chibfj] 
    {"abcd,aefd,gfh,gij,ceibhj",    1.0,   5, {11,10,20,20,35}},     //   1.0 Ap1[abcd] p2[aefd] W[gfh] W[gij] E3[ceibhj] 
    {"abcd,efg,eah,hijd,cfibgj",    1.0,   5, {12,20,24, 9,35}},     //   1.0 Ap2[abcd] W[efg] W[eah] p1[hijd] E3[cfibgj] 
    {"abcd,efg,eah,hijd,cfijgb",    1.0,   5, {12,20,24,10,35}},     //   1.0 Ap2[abcd] W[efg] W[eah] p2[hijd] E3[cfijgb] 
    {"abcd,efg,edh,aijh,cfibgj",   -1.0,   5, {12,20,28, 9,35}},     //  -1.0 Ap2[abcd] W[efg] W[edh] p1[aijh] E3[cfibgj] 
    {"abcd,efg,edh,aijh,cfijgb",   -1.0,   5, {12,20,28,10,35}},     //  -1.0 Ap2[abcd] W[efg] W[edh] p2[aijh] E3[cfijgb] 
    {"abcd,efa,egh,gijd,cfihbj",    1.0,   5, {12,21,23, 9,35}},     //   1.0 Ap2[abcd] W[efa] W[egh] p1[gijd] E3[cfihbj] 
    {"abcd,efa,egh,gijd,cfijbh",    1.0,   5, {12,21,23,10,35}},     //   1.0 Ap2[abcd] W[efa] W[egh] p2[gijd] E3[cfijbh] 
    {"abcd,efg,edh,aijg,cfihbj",   -1.0,   5, {12,22,26, 9,35}},     //  -1.0 Ap2[abcd] W[efg] W[edh] p1[aijg] E3[cfihbj] 
    {"abcd,efg,edh,aijg,cfihjb",   -1.0,   5, {12,22,26,10,35}},     //  -1.0 Ap2[abcd] W[efg] W[edh] p2[aijg] E3[cfihjb] 
    {"abcd,aefd,geh,gij,chibfj",   -1.0,   5, {12, 9,20,20,35}},     //  -1.0 Ap2[abcd] p1[aefd] W[geh] W[gij] E3[chibfj] 
    {"abcd,aefd,gfh,gij,ceibhj",    1.0,   5, {12, 9,20,20,35}},     //   1.0 Ap2[abcd] p1[aefd] W[gfh] W[gij] E3[ceibhj] 
    {"abcd,aefd,geh,gij,chifbj",   -1.0,   5, {12,10,20,20,35}},     //  -1.0 Ap2[abcd] p2[aefd] W[geh] W[gij] E3[chifbj] 
    {"abcd,aefd,gfh,gij,ceihbj",    1.0,   5, {12,10,20,20,35}},     //   1.0 Ap2[abcd] p2[aefd] W[gfh] W[gij] E3[ceihbj] 
  };

  FEqInfo bVec[8] = {
    {"IPQA,RQSP,lAI,lRS",   2.0,   4, {13,33,27,20}}, //  2.0 b1[IPQA] E2[RQSP]           W1[ARIS]
    {"IPQA,SQ,lAI,lPS"  ,   2.0,   4, {13,32,27,20}}, //  2.0 b1[IPQA] E1[SQ]   delta[PR] W1[ARIS]
    {"IPQA,RQSP,lRI,lAS",  -1.0,   4, {13,33,21,26}}, // -1.0 b1[IPQA] E2[RQSP]           W2[RAIS]
    {"IPQA,SQ,lPI,lAS"  ,  -1.0,   4, {13,32,21,26}}, // -1.0 b1[IPQA] E1[SQ]   delta[PR] W2[RAIS]
    {"IPQA,RQSP,lAI,lRS",  -1.0,   4, {14,33,27,20}}, // -1.0 b2[IPQA] E2[RQSP]           W1[ARIS]
    {"IPQA,SQ,lAI,lPS"  ,  -1.0,   4, {14,32,27,20}}, // -1.0 b2[IPQA] E1[SQ]   delta[PR] W1[ARIS]
    {"IPQA,RQPS,lRI,lAS",  -1.0,   4, {14,33,21,26}}, // -1.0 b2[IPQA] E2[RQPS]           W2[RAIS]
    {"IPQA,SQ,lPI,lAS"  ,   2.0,   4, {14,32,21,26}}, //  2.0 b2[IPQA] E1[SQ]   delta[PR] W2[RAIS]
  };

  int f(int i) {
    return 2*i;
  }
  FDomainDecl DomainDecls[1] = {
    {"A", "a", f}
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC_CAAV";
    Out.perturberClass = "CAAV";
    Out.Whandcoded_if_zero = 2;
    Out.E3handcoded_if_zero = 1;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 36;
    Out.pDomainDecls = &DomainDecls[0];
    Out.nDomainDecls = 1;
    Out.EqsRes = FEqSet(&EqsRes[0], 216, "MRLCC_CAAV/Res");
    Out.bVec = FEqSet(&bVec[0], 8, "MRLCC_CAAV/bVec");
  };
};

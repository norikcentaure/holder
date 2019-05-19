namespace MRLCC_CCAV_DFCUMU {

  FTensorDecl TensorDecls[27] = {
    /*  0*/{"R"      , "ccae"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "ccae"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "ccae"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "ccae"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "ccae"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "ccae"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "ccae"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "ccae"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "ccae"     , "", USAGE_Amplitude   },
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
    /* 21*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 22*/{"delta"  , "cc"       , "", USAGE_Density     },
    /* 23*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 24*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 25*/{"S1"     , "AA"       , "", USAGE_Density     },
    /* 26*/{"S2"     , "aa"       , "", USAGE_Density     },
  };

  FEqInfo EqsRes[134] = {
    {"abcd,ce,abed",              4.0,   3, { 6, 9, 5}},           //   4.0 Ap[abcd] k[ce] p[abed] 
    {"abcd,ce,baed",             -2.0,   3, { 6, 9, 5}},           //  -2.0 Ap[abcd] k[ce] p[baed] 
    {"abcd,ae,becd",              2.0,   3, { 6,10, 5}},           //   2.0 Ap[abcd] k[ae] p[becd] 
    {"abcd,ae,ebcd",             -4.0,   3, { 6,10, 5}},           //  -4.0 Ap[abcd] k[ae] p[ebcd] 
    {"abcd,be,aecd",             -4.0,   3, { 6,10, 5}},           //  -4.0 Ap[abcd] k[be] p[aecd] 
    {"abcd,be,eacd",              2.0,   3, { 6,10, 5}},           //   2.0 Ap[abcd] k[be] p[eacd] 
    {"abcd,de,abce",              4.0,   3, { 6,20, 5}},           //   4.0 Ap[abcd] k[de] p[abce] 
    {"abcd,de,bace",             -2.0,   3, { 6,20, 5}},           //  -2.0 Ap[abcd] k[de] p[bace] 
    {"abcd,ecf,eag,bgfd",         2.0,   4, { 6,11,15, 5}},        //   2.0 Ap[abcd] W[ecf] W[eag] p[bgfd] 
    {"abcd,ecf,eag,gbfd",        -4.0,   4, { 6,11,15, 5}},        //  -4.0 Ap[abcd] W[ecf] W[eag] p[gbfd] 
    {"abcd,ecf,ebg,agfd",        -4.0,   4, { 6,11,15, 5}},        //  -4.0 Ap[abcd] W[ecf] W[ebg] p[agfd] 
    {"abcd,ecf,ebg,gafd",         2.0,   4, { 6,11,15, 5}},        //   2.0 Ap[abcd] W[ecf] W[ebg] p[gafd] 
    {"abcd,ecf,egh,abfd,hg",      8.0,   5, { 6,11,15, 5,22}},     //   8.0 Ap[abcd] W[ecf] W[egh] p[abfd] delta[hg] 
    {"abcd,ecf,egh,bafd,hg",     -4.0,   5, { 6,11,15, 5,22}},     //  -4.0 Ap[abcd] W[ecf] W[egh] p[bafd] delta[hg] 
    {"abcd,ecf,edg,abfg",         4.0,   4, { 6,11,19, 5}},        //   4.0 Ap[abcd] W[ecf] W[edg] p[abfg] 
    {"abcd,ecf,edg,bafg",        -2.0,   4, { 6,11,19, 5}},        //  -2.0 Ap[abcd] W[ecf] W[edg] p[bafg] 
    {"abcd,eca,efg,bfgd",        -4.0,   4, { 6,12,14, 5}},        //  -4.0 Ap[abcd] W[eca] W[efg] p[bfgd] 
    {"abcd,eca,efg,fbgd",         8.0,   4, { 6,12,14, 5}},        //   8.0 Ap[abcd] W[eca] W[efg] p[fbgd] 
    {"abcd,ecb,efg,afgd",         2.0,   4, { 6,12,14, 5}},        //   2.0 Ap[abcd] W[ecb] W[efg] p[afgd] 
    {"abcd,ecb,efg,fagd",        -4.0,   4, { 6,12,14, 5}},        //  -4.0 Ap[abcd] W[ecb] W[efg] p[fagd] 
    {"abcd,ecf,efg,abgd",        -4.0,   4, { 6,12,14, 5}},        //  -4.0 Ap[abcd] W[ecf] W[efg] p[abgd] 
    {"abcd,ecf,efg,bagd",         2.0,   4, { 6,12,14, 5}},        //   2.0 Ap[abcd] W[ecf] W[efg] p[bagd] 
    {"abcd,ecf,edg,abgf",        -2.0,   4, { 6,13,17, 5}},        //  -2.0 Ap[abcd] W[ecf] W[edg] p[abgf] 
    {"abcd,ecf,edg,bagf",         4.0,   4, { 6,13,17, 5}},        //   4.0 Ap[abcd] W[ecf] W[edg] p[bagf] 
    {"abcd,eaf,edg,bfcg",         2.0,   4, { 6,15,19, 5}},        //   2.0 Ap[abcd] W[eaf] W[edg] p[bfcg] 
    {"abcd,eaf,edg,fbcg",        -4.0,   4, { 6,15,19, 5}},        //  -4.0 Ap[abcd] W[eaf] W[edg] p[fbcg] 
    {"abcd,ebf,edg,afcg",        -4.0,   4, { 6,15,19, 5}},        //  -4.0 Ap[abcd] W[ebf] W[edg] p[afcg] 
    {"abcd,ebf,edg,facg",         2.0,   4, { 6,15,19, 5}},        //   2.0 Ap[abcd] W[ebf] W[edg] p[facg] 
    {"abcd,efh,edg,abcg,hf",      8.0,   5, { 6,15,19, 5,22}},     //   8.0 Ap[abcd] W[efh] W[edg] p[abcg] delta[hf] 
    {"abcd,efh,edg,bacg,hf",     -4.0,   5, { 6,15,19, 5,22}},     //  -4.0 Ap[abcd] W[efh] W[edg] p[bacg] delta[hf] 
    {"abcd,efg,eda,bfcg",        -4.0,   4, { 6,16,18, 5}},        //  -4.0 Ap[abcd] W[efg] W[eda] p[bfcg] 
    {"abcd,efg,eda,fbcg",         2.0,   4, { 6,16,18, 5}},        //   2.0 Ap[abcd] W[efg] W[eda] p[fbcg] 
    {"abcd,efg,edb,afcg",         8.0,   4, { 6,16,18, 5}},        //   8.0 Ap[abcd] W[efg] W[edb] p[afcg] 
    {"abcd,efg,edb,facg",        -4.0,   4, { 6,16,18, 5}},        //  -4.0 Ap[abcd] W[efg] W[edb] p[facg] 
    {"abcd,efg,edf,abcg",        -4.0,   4, { 6,16,18, 5}},        //  -4.0 Ap[abcd] W[efg] W[edf] p[abcg] 
    {"abcd,efg,edf,bacg",         2.0,   4, { 6,16,18, 5}},        //   2.0 Ap[abcd] W[efg] W[edf] p[bacg] 
    {"abcd,aecd,fbe,fgh,hg",     -8.0,   5, { 6, 5,15,15,22}},     //  -8.0 Ap[abcd] p[aecd] W[fbe] W[fgh] delta[hg] 
    {"abcd,aecd,fbg,feg",         4.0,   4, { 6, 5,15,15}},        //   4.0 Ap[abcd] p[aecd] W[fbg] W[feg] 
    {"abcd,becd,fae,fgh,hg",      4.0,   5, { 6, 5,15,15,22}},     //   4.0 Ap[abcd] p[becd] W[fae] W[fgh] delta[hg] 
    {"abcd,becd,fag,feg",        -2.0,   4, { 6, 5,15,15}},        //  -2.0 Ap[abcd] p[becd] W[fag] W[feg] 
    {"abcd,eacd,fbe,fgh,hg",      4.0,   5, { 6, 5,15,15,22}},     //   4.0 Ap[abcd] p[eacd] W[fbe] W[fgh] delta[hg] 
    {"abcd,eacd,fbg,feg",        -2.0,   4, { 6, 5,15,15}},        //  -2.0 Ap[abcd] p[eacd] W[fbg] W[feg] 
    {"abcd,ebcd,fae,fgh,hg",     -8.0,   5, { 6, 5,15,15,22}},     //  -8.0 Ap[abcd] p[ebcd] W[fae] W[fgh] delta[hg] 
    {"abcd,ebcd,fag,feg",         4.0,   4, { 6, 5,15,15}},        //   4.0 Ap[abcd] p[ebcd] W[fag] W[feg] 
    {"abcd,efcd,gae,gbf",         4.0,   4, { 6, 5,15,15}},        //   4.0 Ap[abcd] p[efcd] W[gae] W[gbf] 
    {"abcd,efcd,gaf,gbe",        -2.0,   4, { 6, 5,15,15}},        //  -2.0 Ap[abcd] p[efcd] W[gaf] W[gbe] 
    {"abcd,ef,abed,fc",          -2.0,   4, { 6, 9, 5,23}},        //  -2.0 Ap[abcd] k[ef] p[abed] E1[fc] 
    {"abcd,ef,baed,fc",           1.0,   4, { 6, 9, 5,23}},        //   1.0 Ap[abcd] k[ef] p[baed] E1[fc] 
    {"abcd,ae,befd,fc",          -1.0,   4, { 6,10, 5,23}},        //  -1.0 Ap[abcd] k[ae] p[befd] E1[fc] 
    {"abcd,ae,ebfd,fc",           2.0,   4, { 6,10, 5,23}},        //   2.0 Ap[abcd] k[ae] p[ebfd] E1[fc] 
    {"abcd,be,aefd,fc",           2.0,   4, { 6,10, 5,23}},        //   2.0 Ap[abcd] k[be] p[aefd] E1[fc] 
    {"abcd,be,eafd,fc",          -1.0,   4, { 6,10, 5,23}},        //  -1.0 Ap[abcd] k[be] p[eafd] E1[fc] 
    {"abcd,de,abfe,fc",          -2.0,   4, { 6,20, 5,23}},        //  -2.0 Ap[abcd] k[de] p[abfe] E1[fc] 
    {"abcd,de,bafe,fc",           1.0,   4, { 6,20, 5,23}},        //   1.0 Ap[abcd] k[de] p[bafe] E1[fc] 
    {"abcd,ecf,eag,bghd,hf",     -1.0,   5, { 6,11,15, 5,23}},     //  -1.0 Ap[abcd] W[ecf] W[eag] p[bghd] E1[hf] 
    {"abcd,ecf,eag,gbhd,hf",      2.0,   5, { 6,11,15, 5,23}},     //   2.0 Ap[abcd] W[ecf] W[eag] p[gbhd] E1[hf] 
    {"abcd,ecf,ebg,aghd,hf",      2.0,   5, { 6,11,15, 5,23}},     //   2.0 Ap[abcd] W[ecf] W[ebg] p[aghd] E1[hf] 
    {"abcd,ecf,ebg,gahd,hf",     -1.0,   5, { 6,11,15, 5,23}},     //  -1.0 Ap[abcd] W[ecf] W[ebg] p[gahd] E1[hf] 
    {"abcd,efg,eah,bhcd,fg",      2.0,   5, { 6,11,15, 5,23}},     //   2.0 Ap[abcd] W[efg] W[eah] p[bhcd] E1[fg] 
    {"abcd,efg,eah,bhfd,gc",     -1.0,   5, { 6,11,15, 5,23}},     //  -1.0 Ap[abcd] W[efg] W[eah] p[bhfd] E1[gc] 
    {"abcd,efg,eah,hbcd,fg",     -4.0,   5, { 6,11,15, 5,23}},     //  -4.0 Ap[abcd] W[efg] W[eah] p[hbcd] E1[fg] 
    {"abcd,efg,eah,hbfd,gc",      2.0,   5, { 6,11,15, 5,23}},     //   2.0 Ap[abcd] W[efg] W[eah] p[hbfd] E1[gc] 
    {"abcd,efg,ebh,ahcd,fg",     -4.0,   5, { 6,11,15, 5,23}},     //  -4.0 Ap[abcd] W[efg] W[ebh] p[ahcd] E1[fg] 
    {"abcd,efg,ebh,ahfd,gc",      2.0,   5, { 6,11,15, 5,23}},     //   2.0 Ap[abcd] W[efg] W[ebh] p[ahfd] E1[gc] 
    {"abcd,efg,ebh,hacd,fg",      2.0,   5, { 6,11,15, 5,23}},     //   2.0 Ap[abcd] W[efg] W[ebh] p[hacd] E1[fg] 
    {"abcd,efg,ebh,hafd,gc",     -1.0,   5, { 6,11,15, 5,23}},     //  -1.0 Ap[abcd] W[efg] W[ebh] p[hafd] E1[gc] 
    {"abcd,efg,ehi,abfd,gc,ih",  -4.0,   6, { 6,11,15, 5,23,22}},  //  -4.0 Ap[abcd] W[efg] W[ehi] p[abfd] E1[gc] delta[ih] 
    {"abcd,efg,ehi,bafd,gc,ih",   2.0,   6, { 6,11,15, 5,23,22}},  //   2.0 Ap[abcd] W[efg] W[ehi] p[bafd] E1[gc] delta[ih] 
    {"abcd,ecf,edg,abhg,hf",     -2.0,   5, { 6,11,19, 5,23}},     //  -2.0 Ap[abcd] W[ecf] W[edg] p[abhg] E1[hf] 
    {"abcd,ecf,edg,bahg,hf",      1.0,   5, { 6,11,19, 5,23}},     //   1.0 Ap[abcd] W[ecf] W[edg] p[bahg] E1[hf] 
    {"abcd,efg,edh,abch,fg",      4.0,   5, { 6,11,19, 5,23}},     //   4.0 Ap[abcd] W[efg] W[edh] p[abch] E1[fg] 
    {"abcd,efg,edh,abfh,gc",     -2.0,   5, { 6,11,19, 5,23}},     //  -2.0 Ap[abcd] W[efg] W[edh] p[abfh] E1[gc] 
    {"abcd,efg,edh,bach,fg",     -2.0,   5, { 6,11,19, 5,23}},     //  -2.0 Ap[abcd] W[efg] W[edh] p[bach] E1[fg] 
    {"abcd,efg,edh,bafh,gc",      1.0,   5, { 6,11,19, 5,23}},     //   1.0 Ap[abcd] W[efg] W[edh] p[bafh] E1[gc] 
    {"abcd,eca,efg,bfhd,hg",      2.0,   5, { 6,12,14, 5,23}},     //   2.0 Ap[abcd] W[eca] W[efg] p[bfhd] E1[hg] 
    {"abcd,eca,efg,fbhd,hg",     -4.0,   5, { 6,12,14, 5,23}},     //  -4.0 Ap[abcd] W[eca] W[efg] p[fbhd] E1[hg] 
    {"abcd,ecb,efg,afhd,hg",     -1.0,   5, { 6,12,14, 5,23}},     //  -1.0 Ap[abcd] W[ecb] W[efg] p[afhd] E1[hg] 
    {"abcd,ecb,efg,fahd,hg",      2.0,   5, { 6,12,14, 5,23}},     //   2.0 Ap[abcd] W[ecb] W[efg] p[fahd] E1[hg] 
    {"abcd,efa,egh,bgcd,fh",     -1.0,   5, { 6,12,14, 5,23}},     //  -1.0 Ap[abcd] W[efa] W[egh] p[bgcd] E1[fh] 
    {"abcd,efa,egh,bghd,fc",      2.0,   5, { 6,12,14, 5,23}},     //   2.0 Ap[abcd] W[efa] W[egh] p[bghd] E1[fc] 
    {"abcd,efa,egh,gbcd,fh",      2.0,   5, { 6,12,14, 5,23}},     //   2.0 Ap[abcd] W[efa] W[egh] p[gbcd] E1[fh] 
    {"abcd,efa,egh,gbhd,fc",     -4.0,   5, { 6,12,14, 5,23}},     //  -4.0 Ap[abcd] W[efa] W[egh] p[gbhd] E1[fc] 
    {"abcd,efb,egh,agcd,fh",      2.0,   5, { 6,12,14, 5,23}},     //   2.0 Ap[abcd] W[efb] W[egh] p[agcd] E1[fh] 
    {"abcd,efb,egh,aghd,fc",     -1.0,   5, { 6,12,14, 5,23}},     //  -1.0 Ap[abcd] W[efb] W[egh] p[aghd] E1[fc] 
    {"abcd,efb,egh,gacd,fh",     -1.0,   5, { 6,12,14, 5,23}},     //  -1.0 Ap[abcd] W[efb] W[egh] p[gacd] E1[fh] 
    {"abcd,efb,egh,gahd,fc",      2.0,   5, { 6,12,14, 5,23}},     //   2.0 Ap[abcd] W[efb] W[egh] p[gahd] E1[fc] 
    {"abcd,efg,egh,abhd,fc",      2.0,   5, { 6,12,14, 5,23}},     //   2.0 Ap[abcd] W[efg] W[egh] p[abhd] E1[fc] 
    {"abcd,efg,egh,bahd,fc",     -1.0,   5, { 6,12,14, 5,23}},     //  -1.0 Ap[abcd] W[efg] W[egh] p[bahd] E1[fc] 
    {"abcd,ecf,edg,abhf,hg",      1.0,   5, { 6,13,17, 5,23}},     //   1.0 Ap[abcd] W[ecf] W[edg] p[abhf] E1[hg] 
    {"abcd,ecf,edg,bahf,hg",     -2.0,   5, { 6,13,17, 5,23}},     //  -2.0 Ap[abcd] W[ecf] W[edg] p[bahf] E1[hg] 
    {"abcd,efg,edh,abcg,fh",     -2.0,   5, { 6,13,17, 5,23}},     //  -2.0 Ap[abcd] W[efg] W[edh] p[abcg] E1[fh] 
    {"abcd,efg,edh,abhg,fc",      1.0,   5, { 6,13,17, 5,23}},     //   1.0 Ap[abcd] W[efg] W[edh] p[abhg] E1[fc] 
    {"abcd,efg,edh,bacg,fh",      1.0,   5, { 6,13,17, 5,23}},     //   1.0 Ap[abcd] W[efg] W[edh] p[bacg] E1[fh] 
    {"abcd,efg,edh,bahg,fc",     -2.0,   5, { 6,13,17, 5,23}},     //  -2.0 Ap[abcd] W[efg] W[edh] p[bahg] E1[fc] 
    {"abcd,eaf,edg,bfhg,hc",     -1.0,   5, { 6,15,19, 5,23}},     //  -1.0 Ap[abcd] W[eaf] W[edg] p[bfhg] E1[hc] 
    {"abcd,eaf,edg,fbhg,hc",      2.0,   5, { 6,15,19, 5,23}},     //   2.0 Ap[abcd] W[eaf] W[edg] p[fbhg] E1[hc] 
    {"abcd,ebf,edg,afhg,hc",      2.0,   5, { 6,15,19, 5,23}},     //   2.0 Ap[abcd] W[ebf] W[edg] p[afhg] E1[hc] 
    {"abcd,ebf,edg,fahg,hc",     -1.0,   5, { 6,15,19, 5,23}},     //  -1.0 Ap[abcd] W[ebf] W[edg] p[fahg] E1[hc] 
    {"abcd,efi,edg,abhg,hc,if",  -4.0,   6, { 6,15,19, 5,23,22}},  //  -4.0 Ap[abcd] W[efi] W[edg] p[abhg] E1[hc] delta[if] 
    {"abcd,efi,edg,bahg,hc,if",   2.0,   6, { 6,15,19, 5,23,22}},  //   2.0 Ap[abcd] W[efi] W[edg] p[bahg] E1[hc] delta[if] 
    {"abcd,efg,eda,bfhg,hc",      2.0,   5, { 6,16,18, 5,23}},     //   2.0 Ap[abcd] W[efg] W[eda] p[bfhg] E1[hc] 
    {"abcd,efg,eda,fbhg,hc",     -1.0,   5, { 6,16,18, 5,23}},     //  -1.0 Ap[abcd] W[efg] W[eda] p[fbhg] E1[hc] 
    {"abcd,efg,edb,afhg,hc",     -4.0,   5, { 6,16,18, 5,23}},     //  -4.0 Ap[abcd] W[efg] W[edb] p[afhg] E1[hc] 
    {"abcd,efg,edb,fahg,hc",      2.0,   5, { 6,16,18, 5,23}},     //   2.0 Ap[abcd] W[efg] W[edb] p[fahg] E1[hc] 
    {"abcd,efg,edf,abhg,hc",      2.0,   5, { 6,16,18, 5,23}},     //   2.0 Ap[abcd] W[efg] W[edf] p[abhg] E1[hc] 
    {"abcd,efg,edf,bahg,hc",     -1.0,   5, { 6,16,18, 5,23}},     //  -1.0 Ap[abcd] W[efg] W[edf] p[bahg] E1[hc] 
    {"abcd,abed,fce,fgh,gh",      4.0,   5, { 6, 5,11,11,23}},     //   4.0 Ap[abcd] p[abed] W[fce] W[fgh] E1[gh] 
    {"abcd,abed,fcg,feh,hg",     -2.0,   5, { 6, 5,11,11,23}},     //  -2.0 Ap[abcd] p[abed] W[fcg] W[feh] E1[hg] 
    {"abcd,baed,fce,fgh,gh",     -2.0,   5, { 6, 5,11,11,23}},     //  -2.0 Ap[abcd] p[baed] W[fce] W[fgh] E1[gh] 
    {"abcd,baed,fcg,feh,hg",      1.0,   5, { 6, 5,11,11,23}},     //   1.0 Ap[abcd] p[baed] W[fcg] W[feh] E1[hg] 
    {"abcd,aefd,gbe,ghi,fc,ih",   4.0,   6, { 6, 5,15,15,23,22}},  //   4.0 Ap[abcd] p[aefd] W[gbe] W[ghi] E1[fc] delta[ih] 
    {"abcd,aefd,gbh,geh,fc",     -2.0,   5, { 6, 5,15,15,23}},     //  -2.0 Ap[abcd] p[aefd] W[gbh] W[geh] E1[fc] 
    {"abcd,befd,gae,ghi,fc,ih",  -2.0,   6, { 6, 5,15,15,23,22}},  //  -2.0 Ap[abcd] p[befd] W[gae] W[ghi] E1[fc] delta[ih] 
    {"abcd,befd,gah,geh,fc",      1.0,   5, { 6, 5,15,15,23}},     //   1.0 Ap[abcd] p[befd] W[gah] W[geh] E1[fc] 
    {"abcd,eafd,gbe,ghi,fc,ih",  -2.0,   6, { 6, 5,15,15,23,22}},  //  -2.0 Ap[abcd] p[eafd] W[gbe] W[ghi] E1[fc] delta[ih] 
    {"abcd,eafd,gbh,geh,fc",      1.0,   5, { 6, 5,15,15,23}},     //   1.0 Ap[abcd] p[eafd] W[gbh] W[geh] E1[fc] 
    {"abcd,ebfd,gae,ghi,fc,ih",   4.0,   6, { 6, 5,15,15,23,22}},  //   4.0 Ap[abcd] p[ebfd] W[gae] W[ghi] E1[fc] delta[ih] 
    {"abcd,ebfd,gah,geh,fc",     -2.0,   5, { 6, 5,15,15,23}},     //  -2.0 Ap[abcd] p[ebfd] W[gah] W[geh] E1[fc] 
    {"abcd,efgd,hae,hbf,gc",     -2.0,   5, { 6, 5,15,15,23}},     //  -2.0 Ap[abcd] p[efgd] W[hae] W[hbf] E1[gc] 
    {"abcd,efgd,haf,hbe,gc",      1.0,   5, { 6, 5,15,15,23}},     //   1.0 Ap[abcd] p[efgd] W[haf] W[hbe] E1[gc] 
    {"abcd,efg,eah,bhid,figc",   -1.0,   5, { 6,11,15, 5,24}},     //  -1.0 Ap[abcd] W[efg] W[eah] p[bhid] E2[figc] 
    {"abcd,efg,eah,hbid,figc",    2.0,   5, { 6,11,15, 5,24}},     //   2.0 Ap[abcd] W[efg] W[eah] p[hbid] E2[figc] 
    {"abcd,efg,ebh,ahid,figc",    2.0,   5, { 6,11,15, 5,24}},     //   2.0 Ap[abcd] W[efg] W[ebh] p[ahid] E2[figc] 
    {"abcd,efg,ebh,haid,figc",   -1.0,   5, { 6,11,15, 5,24}},     //  -1.0 Ap[abcd] W[efg] W[ebh] p[haid] E2[figc] 
    {"abcd,efg,edh,abih,figc",   -2.0,   5, { 6,11,19, 5,24}},     //  -2.0 Ap[abcd] W[efg] W[edh] p[abih] E2[figc] 
    {"abcd,efg,edh,baih,figc",    1.0,   5, { 6,11,19, 5,24}},     //   1.0 Ap[abcd] W[efg] W[edh] p[baih] E2[figc] 
    {"abcd,efa,egh,bgid,fich",   -1.0,   5, { 6,12,14, 5,24}},     //  -1.0 Ap[abcd] W[efa] W[egh] p[bgid] E2[fich] 
    {"abcd,efa,egh,gbid,fich",    2.0,   5, { 6,12,14, 5,24}},     //   2.0 Ap[abcd] W[efa] W[egh] p[gbid] E2[fich] 
    {"abcd,efb,egh,agid,fihc",   -1.0,   5, { 6,12,14, 5,24}},     //  -1.0 Ap[abcd] W[efb] W[egh] p[agid] E2[fihc] 
    {"abcd,efb,egh,gaid,fich",   -1.0,   5, { 6,12,14, 5,24}},     //  -1.0 Ap[abcd] W[efb] W[egh] p[gaid] E2[fich] 
    {"abcd,efg,edh,abig,fihc",    1.0,   5, { 6,13,17, 5,24}},     //   1.0 Ap[abcd] W[efg] W[edh] p[abig] E2[fihc] 
    {"abcd,efg,edh,baig,fich",    1.0,   5, { 6,13,17, 5,24}},     //   1.0 Ap[abcd] W[efg] W[edh] p[baig] E2[fich] 
    {"abcd,abed,feg,fhi,ghci",   -2.0,   5, { 6, 5,11,11,24}},     //  -2.0 Ap[abcd] p[abed] W[feg] W[fhi] E2[ghci] 
    {"abcd,baed,feg,fhi,ghci",    1.0,   5, { 6, 5,11,11,24}},     //   1.0 Ap[abcd] p[baed] W[feg] W[fhi] E2[ghci] 
  };

  FEqInfo bVec[4] = {
    {"IJPA,RP,lIR,lJA",   4.0,   4, { 3,21,14,16}}, //  4.0 b[IJPA] delta[RP] W[IJRA]
    {"IJPA,RP,lIR,lJA",  -2.0,   4, { 3,23,14,16}}, // -2.0 b[IJPA] E1[RP]    W[IJRA]
    {"IJPA,RP,lJR,lIA",  -2.0,   4, { 3,21,14,16}}, // -2.0 b[IJPA] delta[RP] W[JIRA]
    {"IJPA,RP,lJR,lIA",   1.0,   4, { 3,23,14,16}}, //  1.0 b[IJPA] E1[RP]    W[JIRA]
  };

  int f(int i) {
    return 2*i;
  }
  FDomainDecl DomainDecls[1] = {
    {"A", "a", f}
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "MRLCC_CCAV";
    Out.perturberClass = "CCAV";
    Out.Whandcoded_if_zero = 2;
    Out.E3handcoded_if_zero = 2;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 27;
    Out.pDomainDecls = &DomainDecls[0];
    Out.nDomainDecls = 1;
    Out.EqsRes = FEqSet(&EqsRes[0], 134, "MRLCC_CCAV/Res");
    Out.bVec = FEqSet(&bVec[0], 4, "MRLCC_CCAV/bVec");
  };
};

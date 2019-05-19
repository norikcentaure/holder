namespace NEVPT_CCAA {

  FTensorDecl TensorDecls[19] = {
    /*  0*/{"R"      , "ccaa"     , "", USAGE_Residual    },
    /*  1*/{"t"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  2*/{"T"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  3*/{"b"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  4*/{"B"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  5*/{"p"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  6*/{"Ap"     , "ccaa"     , "", USAGE_Amplitude   },
    /*  7*/{"P"      , "ccaa"     , "", USAGE_Amplitude   },
    /*  8*/{"AP"     , "ccaa"     , "", USAGE_Amplitude   },
    /*  9*/{"f"      , "aa"       , "", USAGE_Hamiltonian },
    /* 10*/{"f"      , "cc"       , "", USAGE_Hamiltonian },
    /* 11*/{"W"      , "Laa"      , "", USAGE_Hamiltonian },
    /* 12*/{"W"      , "Lca"      , "", USAGE_Hamiltonian },
    /* 13*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 14*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 15*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 16*/{"S1"     , "aaaa"     , "", USAGE_Density     },
    /* 17*/{"S2"     , "aaaa"     , "", USAGE_Density     },
    /* 18*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

	FEqInfo EqsRes[122] = {
    {"abcd,ce,abde",              -2.0,   3, { 6, 9, 5}},        //  -2.0 Ap[abcd] f[ce] p[abde] 
    {"abcd,ce,abed",               4.0,   3, { 6, 9, 5}},        //   4.0 Ap[abcd] f[ce] p[abed] 
    {"abcd,ce,bade",               4.0,   3, { 6, 9, 5}},        //   4.0 Ap[abcd] f[ce] p[bade] 
    {"abcd,ce,baed",              -2.0,   3, { 6, 9, 5}},        //  -2.0 Ap[abcd] f[ce] p[baed] 
    {"abcd,de,abce",               4.0,   3, { 6, 9, 5}},        //   4.0 Ap[abcd] f[de] p[abce] 
    {"abcd,de,abec",              -2.0,   3, { 6, 9, 5}},        //  -2.0 Ap[abcd] f[de] p[abec] 
    {"abcd,de,bace",              -2.0,   3, { 6, 9, 5}},        //  -2.0 Ap[abcd] f[de] p[bace] 
    {"abcd,de,baec",               4.0,   3, { 6, 9, 5}},        //   4.0 Ap[abcd] f[de] p[baec] 
    {"abcd,ae,becd",               2.0,   3, { 6,10, 5}},        //   2.0 Ap[abcd] f[ae] p[becd] 
    {"abcd,ae,bedc",              -4.0,   3, { 6,10, 5}},        //  -4.0 Ap[abcd] f[ae] p[bedc] 
    {"abcd,ae,ebcd",              -4.0,   3, { 6,10, 5}},        //  -4.0 Ap[abcd] f[ae] p[ebcd] 
    {"abcd,ae,ebdc",               2.0,   3, { 6,10, 5}},        //   2.0 Ap[abcd] f[ae] p[ebdc] 
    {"abcd,be,aecd",              -4.0,   3, { 6,10, 5}},        //  -4.0 Ap[abcd] f[be] p[aecd] 
    {"abcd,be,aedc",               2.0,   3, { 6,10, 5}},        //   2.0 Ap[abcd] f[be] p[aedc] 
    {"abcd,be,eacd",               2.0,   3, { 6,10, 5}},        //   2.0 Ap[abcd] f[be] p[eacd] 
    {"abcd,be,eadc",              -4.0,   3, { 6,10, 5}},        //  -4.0 Ap[abcd] f[be] p[eadc] 
    {"abcd,abef,gce,gdf",          4.0,   4, { 6, 5,11,11}},     //   4.0 Ap[abcd] p[abef] W[gce] W[gdf] 
    {"abcd,abef,gcf,gde",         -2.0,   4, { 6, 5,11,11}},     //  -2.0 Ap[abcd] p[abef] W[gcf] W[gde] 
    {"abcd,baef,gce,gdf",         -2.0,   4, { 6, 5,11,11}},     //  -2.0 Ap[abcd] p[baef] W[gce] W[gdf] 
    {"abcd,baef,gcf,gde",          4.0,   4, { 6, 5,11,11}},     //   4.0 Ap[abcd] p[baef] W[gcf] W[gde] 
    {"abcd,ce,abef,fd",           -2.0,   4, { 6, 9, 5,14}},     //  -2.0 Ap[abcd] f[ce] p[abef] E1[fd] 
    {"abcd,ce,abfe,fd",            1.0,   4, { 6, 9, 5,14}},     //   1.0 Ap[abcd] f[ce] p[abfe] E1[fd] 
    {"abcd,ce,baef,fd",            1.0,   4, { 6, 9, 5,14}},     //   1.0 Ap[abcd] f[ce] p[baef] E1[fd] 
    {"abcd,ce,bafe,fd",           -2.0,   4, { 6, 9, 5,14}},     //  -2.0 Ap[abcd] f[ce] p[bafe] E1[fd] 
    {"abcd,de,abef,fc",            1.0,   4, { 6, 9, 5,14}},     //   1.0 Ap[abcd] f[de] p[abef] E1[fc] 
    {"abcd,de,abfe,fc",           -2.0,   4, { 6, 9, 5,14}},     //  -2.0 Ap[abcd] f[de] p[abfe] E1[fc] 
    {"abcd,de,baef,fc",           -2.0,   4, { 6, 9, 5,14}},     //  -2.0 Ap[abcd] f[de] p[baef] E1[fc] 
    {"abcd,de,bafe,fc",            1.0,   4, { 6, 9, 5,14}},     //   1.0 Ap[abcd] f[de] p[bafe] E1[fc] 
    {"abcd,ef,abce,fd",           -2.0,   4, { 6, 9, 5,14}},     //  -2.0 Ap[abcd] f[ef] p[abce] E1[fd] 
    {"abcd,ef,abde,fc",            1.0,   4, { 6, 9, 5,14}},     //   1.0 Ap[abcd] f[ef] p[abde] E1[fc] 
    {"abcd,ef,abec,fd",            1.0,   4, { 6, 9, 5,14}},     //   1.0 Ap[abcd] f[ef] p[abec] E1[fd] 
    {"abcd,ef,abed,fc",           -2.0,   4, { 6, 9, 5,14}},     //  -2.0 Ap[abcd] f[ef] p[abed] E1[fc] 
    {"abcd,ef,bace,fd",            1.0,   4, { 6, 9, 5,14}},     //   1.0 Ap[abcd] f[ef] p[bace] E1[fd] 
    {"abcd,ef,bade,fc",           -2.0,   4, { 6, 9, 5,14}},     //  -2.0 Ap[abcd] f[ef] p[bade] E1[fc] 
    {"abcd,ef,baec,fd",           -2.0,   4, { 6, 9, 5,14}},     //  -2.0 Ap[abcd] f[ef] p[baec] E1[fd] 
    {"abcd,ef,baed,fc",            1.0,   4, { 6, 9, 5,14}},     //   1.0 Ap[abcd] f[ef] p[baed] E1[fc] 
    {"abcd,ae,becf,fd",           -1.0,   4, { 6,10, 5,14}},     //  -1.0 Ap[abcd] f[ae] p[becf] E1[fd] 
    {"abcd,ae,bedf,fc",            2.0,   4, { 6,10, 5,14}},     //   2.0 Ap[abcd] f[ae] p[bedf] E1[fc] 
    {"abcd,ae,befc,fd",            2.0,   4, { 6,10, 5,14}},     //   2.0 Ap[abcd] f[ae] p[befc] E1[fd] 
    {"abcd,ae,befd,fc",           -1.0,   4, { 6,10, 5,14}},     //  -1.0 Ap[abcd] f[ae] p[befd] E1[fc] 
    {"abcd,ae,ebcf,fd",            2.0,   4, { 6,10, 5,14}},     //   2.0 Ap[abcd] f[ae] p[ebcf] E1[fd] 
    {"abcd,ae,ebdf,fc",           -1.0,   4, { 6,10, 5,14}},     //  -1.0 Ap[abcd] f[ae] p[ebdf] E1[fc] 
    {"abcd,ae,ebfc,fd",           -1.0,   4, { 6,10, 5,14}},     //  -1.0 Ap[abcd] f[ae] p[ebfc] E1[fd] 
    {"abcd,ae,ebfd,fc",            2.0,   4, { 6,10, 5,14}},     //   2.0 Ap[abcd] f[ae] p[ebfd] E1[fc] 
    {"abcd,be,aecf,fd",            2.0,   4, { 6,10, 5,14}},     //   2.0 Ap[abcd] f[be] p[aecf] E1[fd] 
    {"abcd,be,aedf,fc",           -1.0,   4, { 6,10, 5,14}},     //  -1.0 Ap[abcd] f[be] p[aedf] E1[fc] 
    {"abcd,be,aefc,fd",           -1.0,   4, { 6,10, 5,14}},     //  -1.0 Ap[abcd] f[be] p[aefc] E1[fd] 
    {"abcd,be,aefd,fc",            2.0,   4, { 6,10, 5,14}},     //   2.0 Ap[abcd] f[be] p[aefd] E1[fc] 
    {"abcd,be,eacf,fd",           -1.0,   4, { 6,10, 5,14}},     //  -1.0 Ap[abcd] f[be] p[eacf] E1[fd] 
    {"abcd,be,eadf,fc",            2.0,   4, { 6,10, 5,14}},     //   2.0 Ap[abcd] f[be] p[eadf] E1[fc] 
    {"abcd,be,eafc,fd",            2.0,   4, { 6,10, 5,14}},     //   2.0 Ap[abcd] f[be] p[eafc] E1[fd] 
    {"abcd,be,eafd,fc",           -1.0,   4, { 6,10, 5,14}},     //  -1.0 Ap[abcd] f[be] p[eafd] E1[fc] 
    {"abcd,abce,fde,fgh,gh",       4.0,   5, { 6, 5,11,11,14}},  //   4.0 Ap[abcd] p[abce] W[fde] W[fgh] E1[gh] 
    {"abcd,abce,fdg,fhe,hg",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[abce] W[fdg] W[fhe] E1[hg] 
    {"abcd,abde,fce,fgh,gh",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[abde] W[fce] W[fgh] E1[gh] 
    {"abcd,abde,fcg,fhe,hg",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[abde] W[fcg] W[fhe] E1[hg] 
    {"abcd,abec,fde,fgh,gh",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[abec] W[fde] W[fgh] E1[gh] 
    {"abcd,abec,fdg,fhe,hg",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[abec] W[fdg] W[fhe] E1[hg] 
    {"abcd,abed,fce,fgh,gh",       4.0,   5, { 6, 5,11,11,14}},  //   4.0 Ap[abcd] p[abed] W[fce] W[fgh] E1[gh] 
    {"abcd,abed,fcg,fhe,hg",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[abed] W[fcg] W[fhe] E1[hg] 
    {"abcd,abef,gce,gdh,fh",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[abef] W[gce] W[gdh] E1[fh] 
    {"abcd,abef,gce,ghf,hd",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[abef] W[gce] W[ghf] E1[hd] 
    {"abcd,abef,gcf,gdh,eh",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[abef] W[gcf] W[gdh] E1[eh] 
    {"abcd,abef,gcf,ghe,hd",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[abef] W[gcf] W[ghe] E1[hd] 
    {"abcd,abef,gch,gde,fh",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[abef] W[gch] W[gde] E1[fh] 
    {"abcd,abef,gch,gdf,eh",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[abef] W[gch] W[gdf] E1[eh] 
    {"abcd,abef,gde,ghf,hc",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[abef] W[gde] W[ghf] E1[hc] 
    {"abcd,abef,gdf,ghe,hc",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[abef] W[gdf] W[ghe] E1[hc] 
    {"abcd,bace,fde,fgh,gh",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[bace] W[fde] W[fgh] E1[gh] 
    {"abcd,bace,fdg,fhe,hg",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[bace] W[fdg] W[fhe] E1[hg] 
    {"abcd,bade,fce,fgh,gh",       4.0,   5, { 6, 5,11,11,14}},  //   4.0 Ap[abcd] p[bade] W[fce] W[fgh] E1[gh] 
    {"abcd,bade,fcg,fhe,hg",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[bade] W[fcg] W[fhe] E1[hg] 
    {"abcd,baec,fde,fgh,gh",       4.0,   5, { 6, 5,11,11,14}},  //   4.0 Ap[abcd] p[baec] W[fde] W[fgh] E1[gh] 
    {"abcd,baec,fdg,fhe,hg",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[baec] W[fdg] W[fhe] E1[hg] 
    {"abcd,baed,fce,fgh,gh",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[baed] W[fce] W[fgh] E1[gh] 
    {"abcd,baed,fcg,fhe,hg",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[baed] W[fcg] W[fhe] E1[hg] 
    {"abcd,baef,gce,gdh,fh",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[baef] W[gce] W[gdh] E1[fh] 
    {"abcd,baef,gce,ghf,hd",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[baef] W[gce] W[ghf] E1[hd] 
    {"abcd,baef,gcf,gdh,eh",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[baef] W[gcf] W[gdh] E1[eh] 
    {"abcd,baef,gcf,ghe,hd",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[baef] W[gcf] W[ghe] E1[hd] 
    {"abcd,baef,gch,gde,fh",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[baef] W[gch] W[gde] E1[fh] 
    {"abcd,baef,gch,gdf,eh",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[baef] W[gch] W[gdf] E1[eh] 
    {"abcd,baef,gde,ghf,hc",      -2.0,   5, { 6, 5,11,11,14}},  //  -2.0 Ap[abcd] p[baef] W[gde] W[ghf] E1[hc] 
    {"abcd,baef,gdf,ghe,hc",       1.0,   5, { 6, 5,11,11,14}},  //   1.0 Ap[abcd] p[baef] W[gdf] W[ghe] E1[hc] 
    {"abcd,ef,abeg,fgcd",          1.0,   4, { 6, 9, 5,15}},     //   1.0 Ap[abcd] f[ef] p[abeg] E2[fgcd] 
    {"abcd,ef,abge,fgdc",          1.0,   4, { 6, 9, 5,15}},     //   1.0 Ap[abcd] f[ef] p[abge] E2[fgdc] 
    {"abcd,ef,baeg,fgdc",          1.0,   4, { 6, 9, 5,15}},     //   1.0 Ap[abcd] f[ef] p[baeg] E2[fgdc] 
    {"abcd,ef,bage,fgcd",          1.0,   4, { 6, 9, 5,15}},     //   1.0 Ap[abcd] f[ef] p[bage] E2[fgcd] 
    {"abcd,ae,befg,fgdc",         -1.0,   4, { 6,10, 5,15}},     //  -1.0 Ap[abcd] f[ae] p[befg] E2[fgdc] 
    {"abcd,ae,ebfg,fgcd",         -1.0,   4, { 6,10, 5,15}},     //  -1.0 Ap[abcd] f[ae] p[ebfg] E2[fgcd] 
    {"abcd,be,aefg,fgcd",         -1.0,   4, { 6,10, 5,15}},     //  -1.0 Ap[abcd] f[be] p[aefg] E2[fgcd] 
    {"abcd,be,eafg,fgdc",         -1.0,   4, { 6,10, 5,15}},     //  -1.0 Ap[abcd] f[be] p[eafg] E2[fgdc] 
    {"abcd,abce,fge,fhi,ghdi",    -2.0,   5, { 6, 5,11,11,15}},  //  -2.0 Ap[abcd] p[abce] W[fge] W[fhi] E2[ghdi] 
    {"abcd,abde,fge,fhi,ghci",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[abde] W[fge] W[fhi] E2[ghci] 
    {"abcd,abec,fge,fhi,ghdi",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[abec] W[fge] W[fhi] E2[ghdi] 
    {"abcd,abed,fge,fhi,ghci",    -2.0,   5, { 6, 5,11,11,15}},  //  -2.0 Ap[abcd] p[abed] W[fge] W[fhi] E2[ghci] 
    {"abcd,abef,gce,ghi,fhdi",    -2.0,   5, { 6, 5,11,11,15}},  //  -2.0 Ap[abcd] p[abef] W[gce] W[ghi] E2[fhdi] 
    {"abcd,abef,gcf,ghi,ehdi",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[abef] W[gcf] W[ghi] E2[ehdi] 
    {"abcd,abef,gch,gie,fidh",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[abef] W[gch] W[gie] E2[fidh] 
    {"abcd,abef,gch,gif,eihd",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[abef] W[gch] W[gif] E2[eihd] 
    {"abcd,abef,gde,ghi,fhci",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[abef] W[gde] W[ghi] E2[fhci] 
    {"abcd,abef,gdf,ghi,ehci",    -2.0,   5, { 6, 5,11,11,15}},  //  -2.0 Ap[abcd] p[abef] W[gdf] W[ghi] E2[ehci] 
    {"abcd,abef,gdh,gie,fihc",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[abef] W[gdh] W[gie] E2[fihc] 
    {"abcd,abef,gdh,gif,eich",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[abef] W[gdh] W[gif] E2[eich] 
    {"abcd,abef,ghe,gif,hicd",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[abef] W[ghe] W[gif] E2[hicd] 
    {"abcd,bace,fge,fhi,ghdi",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[bace] W[fge] W[fhi] E2[ghdi] 
    {"abcd,bade,fge,fhi,ghci",    -2.0,   5, { 6, 5,11,11,15}},  //  -2.0 Ap[abcd] p[bade] W[fge] W[fhi] E2[ghci] 
    {"abcd,baec,fge,fhi,ghdi",    -2.0,   5, { 6, 5,11,11,15}},  //  -2.0 Ap[abcd] p[baec] W[fge] W[fhi] E2[ghdi] 
    {"abcd,baed,fge,fhi,ghci",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[baed] W[fge] W[fhi] E2[ghci] 
    {"abcd,baef,gce,ghi,fhdi",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[baef] W[gce] W[ghi] E2[fhdi] 
    {"abcd,baef,gcf,ghi,ehdi",    -2.0,   5, { 6, 5,11,11,15}},  //  -2.0 Ap[abcd] p[baef] W[gcf] W[ghi] E2[ehdi] 
    {"abcd,baef,gch,gie,fihd",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[baef] W[gch] W[gie] E2[fihd] 
    {"abcd,baef,gch,gif,eidh",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[baef] W[gch] W[gif] E2[eidh] 
    {"abcd,baef,gde,ghi,fhci",    -2.0,   5, { 6, 5,11,11,15}},  //  -2.0 Ap[abcd] p[baef] W[gde] W[ghi] E2[fhci] 
    {"abcd,baef,gdf,ghi,ehci",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[baef] W[gdf] W[ghi] E2[ehci] 
    {"abcd,baef,gdh,gie,fich",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[baef] W[gdh] W[gie] E2[fich] 
    {"abcd,baef,gdh,gif,eihc",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[baef] W[gdh] W[gif] E2[eihc] 
    {"abcd,baef,ghe,gif,hidc",     1.0,   5, { 6, 5,11,11,15}},  //   1.0 Ap[abcd] p[baef] W[ghe] W[gif] E2[hidc] 
    {"abcd,abef,ghe,gij,fhidcj",   1.0,   5, { 6, 5,11,11,18}},  //   1.0 Ap[abcd] p[abef] W[ghe] W[gij] E3[fhidcj] 
    {"abcd,abef,ghf,gij,ehicdj",   1.0,   5, { 6, 5,11,11,18}},  //   1.0 Ap[abcd] p[abef] W[ghf] W[gij] E3[ehicdj] 
    {"abcd,baef,ghe,gij,fhicdj",   1.0,   5, { 6, 5,11,11,18}},  //   1.0 Ap[abcd] p[baef] W[ghe] W[gij] E3[fhicdj] 
    {"abcd,baef,ghf,gij,ehidcj",   1.0,   5, { 6, 5,11,11,18}},  //   1.0 Ap[abcd] p[baef] W[ghf] W[gij] E3[ehidcj] 
	};

  FEqInfo bVec[14] = {
    {"KLRS,PR,lKP,lLS"  ,   2.0,   4, { 3,13,12,12}}, //  2.0 b[KLRS] delta[PR] delta[QS] W[KLPQ]
    {"KLRS,PS,lKP,lLR"  ,  -1.0,   4, { 3,13,12,12}}, // -1.0 b[KLRS] delta[PS] delta[QR] W[KLPQ]
    {"KLRS,QS,lKR,lLQ"  ,  -1.0,   4, { 3,14,12,12}}, // -1.0 b[KLRS] E1[QS]    delta[PR] W[KLPQ]
    {"KLRS,QR,lKS,lLQ"  ,   0.5,   4, { 3,14,12,12}}, //  0.5 b[KLRS] E1[QR]    delta[PS] W[KLPQ]
    {"KLRS,PS,lKP,lLR"  ,   0.5,   4, { 3,14,12,12}}, //  0.5 b[KLRS] E1[PS]    delta[QR] W[KLPQ]
    {"KLRS,PR,lKP,lLS"  ,  -1.0,   4, { 3,14,12,12}}, // -1.0 b[KLRS] E1[PR]    delta[QS] W[KLPQ]
    {"KLRS,PQRS,lKP,lLQ",   0.5,   4, { 3,15,12,12}}, //  0.5 b[KLRS] E2[PQRS]            W[KLPQ]
    {"KLRS,PS,lLP,lKR"  ,   2.0,   4, { 3,13,12,12}}, //  2.0 b[KLRS] delta[PS] delta[QR] W[LKPQ]
    {"KLRS,PR,lLP,lKS"  ,  -1.0,   4, { 3,13,12,12}}, // -1.0 b[KLRS] delta[PR] delta[QS] W[LKPQ]
    {"KLRS,QR,lLS,lKQ"  ,  -1.0,   4, { 3,14,12,12}}, // -1.0 b[KLRS] E1[QR]    delta[PS] W[LKPQ]
    {"KLRS,QS,lLR,lKQ"  ,   0.5,   4, { 3,14,12,12}}, //  0.5 b[KLRS] E1[QS]    delta[PR] W[LKPQ]
    {"KLRS,PR,lLP,lKS"  ,   0.5,   4, { 3,14,12,12}}, //  0.5 b[KLRS] E1[PR]    delta[QS] W[LKPQ]
    {"KLRS,PS,lLP,lKR"  ,  -1.0,   4, { 3,14,12,12}}, // -1.0 b[KLRS] E1[PS]    delta[QR] W[LKPQ]
    {"KLRS,PQSR,lLP,lKQ",   0.5,   4, { 3,15,12,12}}, //  0.5 b[KLRS] E2[PQSR]            W[LKPQ]
  };

  static void GetMethodInfo(FMethodInfo &Out) {
    Out = FMethodInfo();
    Out.pName = "NEVPT_CCAA";
    Out.perturberClass = "CCAA";
    Out.Whandcoded_if_zero = 2;
    Out.E3handcoded_if_zero = 1;
    Out.pSpinClass = "restricted";
    Out.pTensorDecls = &TensorDecls[0];
    Out.nTensorDecls = 19;
    Out.EqsRes = FEqSet(&EqsRes[0], 122, "NEVPT_CCAA/Res");
    Out.bVec = FEqSet(&bVec[0], 14, "NEVPT_CCAA/bVec");
  };
};

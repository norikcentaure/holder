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
    /*  9*/{"W"      , "ccaa"     , "", USAGE_Hamiltonian },
    /* 10*/{"f"      , "aa"       , "", USAGE_Hamiltonian },
    /* 11*/{"W"      , "aaaa"     , "", USAGE_Hamiltonian },
    /* 12*/{"f"      , "cc"       , "", USAGE_Hamiltonian },
    /* 13*/{"delta"  , "aa"       , "", USAGE_Density     },
    /* 14*/{"E1"     , "aa"       , "", USAGE_Density     },
    /* 15*/{"E2"     , "aaaa"     , "", USAGE_Density     },
    /* 16*/{"S1"     , "aaaa"     , "", USAGE_Density     },
    /* 17*/{"S2"     , "aaaa"     , "", USAGE_Density     },
    /* 18*/{"E3"     , "aaaaaa"   , "", USAGE_Density     },
  };

  FEqInfo EqsRes[122] = {
    {"abcd,ce,abde",           -2.0,   3, { 6,10, 5}},     //  -2.0 Ap[abcd] f[ce] p[abde] 
    {"abcd,ce,abed",            4.0,   3, { 6,10, 5}},     //   4.0 Ap[abcd] f[ce] p[abed] 
    {"abcd,ce,bade",            4.0,   3, { 6,10, 5}},     //   4.0 Ap[abcd] f[ce] p[bade] 
    {"abcd,ce,baed",           -2.0,   3, { 6,10, 5}},     //  -2.0 Ap[abcd] f[ce] p[baed] 
    {"abcd,de,abce",            4.0,   3, { 6,10, 5}},     //   4.0 Ap[abcd] f[de] p[abce] 
    {"abcd,de,abec",           -2.0,   3, { 6,10, 5}},     //  -2.0 Ap[abcd] f[de] p[abec] 
    {"abcd,de,bace",           -2.0,   3, { 6,10, 5}},     //  -2.0 Ap[abcd] f[de] p[bace] 
    {"abcd,de,baec",            4.0,   3, { 6,10, 5}},     //   4.0 Ap[abcd] f[de] p[baec] 
    {"abcd,cdef,abef",          4.0,   3, { 6,11, 5}},     //   4.0 Ap[abcd] W[cdef] p[abef] 
    {"abcd,cdef,abfe",         -2.0,   3, { 6,11, 5}},     //  -2.0 Ap[abcd] W[cdef] p[abfe] 
    {"abcd,cdef,baef",         -2.0,   3, { 6,11, 5}},     //  -2.0 Ap[abcd] W[cdef] p[baef] 
    {"abcd,cdef,bafe",          4.0,   3, { 6,11, 5}},     //   4.0 Ap[abcd] W[cdef] p[bafe] 
    {"abcd,ae,becd",            2.0,   3, { 6,12, 5}},     //   2.0 Ap[abcd] f[ae] p[becd] 
    {"abcd,ae,bedc",           -4.0,   3, { 6,12, 5}},     //  -4.0 Ap[abcd] f[ae] p[bedc] 
    {"abcd,ae,ebcd",           -4.0,   3, { 6,12, 5}},     //  -4.0 Ap[abcd] f[ae] p[ebcd] 
    {"abcd,ae,ebdc",            2.0,   3, { 6,12, 5}},     //   2.0 Ap[abcd] f[ae] p[ebdc] 
    {"abcd,be,aecd",           -4.0,   3, { 6,12, 5}},     //  -4.0 Ap[abcd] f[be] p[aecd] 
    {"abcd,be,aedc",            2.0,   3, { 6,12, 5}},     //   2.0 Ap[abcd] f[be] p[aedc] 
    {"abcd,be,eacd",            2.0,   3, { 6,12, 5}},     //   2.0 Ap[abcd] f[be] p[eacd] 
    {"abcd,be,eadc",           -4.0,   3, { 6,12, 5}},     //  -4.0 Ap[abcd] f[be] p[eadc] 
    {"abcd,ce,abef,fd",        -2.0,   4, { 6,10, 5,14}},  //  -2.0 Ap[abcd] f[ce] p[abef] E1[fd] 
    {"abcd,ce,abfe,fd",         1.0,   4, { 6,10, 5,14}},  //   1.0 Ap[abcd] f[ce] p[abfe] E1[fd] 
    {"abcd,ce,baef,fd",         1.0,   4, { 6,10, 5,14}},  //   1.0 Ap[abcd] f[ce] p[baef] E1[fd] 
    {"abcd,ce,bafe,fd",        -2.0,   4, { 6,10, 5,14}},  //  -2.0 Ap[abcd] f[ce] p[bafe] E1[fd] 
    {"abcd,de,abef,fc",         1.0,   4, { 6,10, 5,14}},  //   1.0 Ap[abcd] f[de] p[abef] E1[fc] 
    {"abcd,de,abfe,fc",        -2.0,   4, { 6,10, 5,14}},  //  -2.0 Ap[abcd] f[de] p[abfe] E1[fc] 
    {"abcd,de,baef,fc",        -2.0,   4, { 6,10, 5,14}},  //  -2.0 Ap[abcd] f[de] p[baef] E1[fc] 
    {"abcd,de,bafe,fc",         1.0,   4, { 6,10, 5,14}},  //   1.0 Ap[abcd] f[de] p[bafe] E1[fc] 
    {"abcd,ef,abce,fd",        -2.0,   4, { 6,10, 5,14}},  //  -2.0 Ap[abcd] f[ef] p[abce] E1[fd] 
    {"abcd,ef,abde,fc",         1.0,   4, { 6,10, 5,14}},  //   1.0 Ap[abcd] f[ef] p[abde] E1[fc] 
    {"abcd,ef,abec,fd",         1.0,   4, { 6,10, 5,14}},  //   1.0 Ap[abcd] f[ef] p[abec] E1[fd] 
    {"abcd,ef,abed,fc",        -2.0,   4, { 6,10, 5,14}},  //  -2.0 Ap[abcd] f[ef] p[abed] E1[fc] 
    {"abcd,ef,bace,fd",         1.0,   4, { 6,10, 5,14}},  //   1.0 Ap[abcd] f[ef] p[bace] E1[fd] 
    {"abcd,ef,bade,fc",        -2.0,   4, { 6,10, 5,14}},  //  -2.0 Ap[abcd] f[ef] p[bade] E1[fc] 
    {"abcd,ef,baec,fd",        -2.0,   4, { 6,10, 5,14}},  //  -2.0 Ap[abcd] f[ef] p[baec] E1[fd] 
    {"abcd,ef,baed,fc",         1.0,   4, { 6,10, 5,14}},  //   1.0 Ap[abcd] f[ef] p[baed] E1[fc] 
    {"abcd,cdef,abeg,gf",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[cdef] p[abeg] E1[gf] 
    {"abcd,cdef,abfg,ge",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[cdef] p[abfg] E1[ge] 
    {"abcd,cdef,abge,gf",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[cdef] p[abge] E1[gf] 
    {"abcd,cdef,abgf,ge",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[cdef] p[abgf] E1[ge] 
    {"abcd,cdef,baeg,gf",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[cdef] p[baeg] E1[gf] 
    {"abcd,cdef,bafg,ge",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[cdef] p[bafg] E1[ge] 
    {"abcd,cdef,bage,gf",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[cdef] p[bage] E1[gf] 
    {"abcd,cdef,bagf,ge",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[cdef] p[bagf] E1[ge] 
    {"abcd,cefg,abde,gf",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[cefg] p[abde] E1[gf] 
    {"abcd,cefg,abdf,eg",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[cefg] p[abdf] E1[eg] 
    {"abcd,cefg,abed,gf",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[cefg] p[abed] E1[gf] 
    {"abcd,cefg,abef,gd",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[cefg] p[abef] E1[gd] 
    {"abcd,cefg,abfd,eg",       4.0,   4, { 6,11, 5,14}},  //   4.0 Ap[abcd] W[cefg] p[abfd] E1[eg] 
    {"abcd,cefg,abfe,gd",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[cefg] p[abfe] E1[gd] 
    {"abcd,cefg,bade,gf",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[cefg] p[bade] E1[gf] 
    {"abcd,cefg,badf,eg",       4.0,   4, { 6,11, 5,14}},  //   4.0 Ap[abcd] W[cefg] p[badf] E1[eg] 
    {"abcd,cefg,baed,gf",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[cefg] p[baed] E1[gf] 
    {"abcd,cefg,baef,gd",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[cefg] p[baef] E1[gd] 
    {"abcd,cefg,bafd,eg",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[cefg] p[bafd] E1[eg] 
    {"abcd,cefg,bafe,gd",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[cefg] p[bafe] E1[gd] 
    {"abcd,defg,abce,gf",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[defg] p[abce] E1[gf] 
    {"abcd,defg,abcf,eg",       4.0,   4, { 6,11, 5,14}},  //   4.0 Ap[abcd] W[defg] p[abcf] E1[eg] 
    {"abcd,defg,abec,gf",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[defg] p[abec] E1[gf] 
    {"abcd,defg,abef,gc",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[defg] p[abef] E1[gc] 
    {"abcd,defg,abfc,eg",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[defg] p[abfc] E1[eg] 
    {"abcd,defg,abfe,gc",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[defg] p[abfe] E1[gc] 
    {"abcd,defg,bace,gf",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[defg] p[bace] E1[gf] 
    {"abcd,defg,bacf,eg",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[defg] p[bacf] E1[eg] 
    {"abcd,defg,baec,gf",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[defg] p[baec] E1[gf] 
    {"abcd,defg,baef,gc",       1.0,   4, { 6,11, 5,14}},  //   1.0 Ap[abcd] W[defg] p[baef] E1[gc] 
    {"abcd,defg,bafc,eg",       4.0,   4, { 6,11, 5,14}},  //   4.0 Ap[abcd] W[defg] p[bafc] E1[eg] 
    {"abcd,defg,bafe,gc",      -2.0,   4, { 6,11, 5,14}},  //  -2.0 Ap[abcd] W[defg] p[bafe] E1[gc] 
    {"abcd,ae,becf,fd",        -1.0,   4, { 6,12, 5,14}},  //  -1.0 Ap[abcd] f[ae] p[becf] E1[fd] 
    {"abcd,ae,bedf,fc",         2.0,   4, { 6,12, 5,14}},  //   2.0 Ap[abcd] f[ae] p[bedf] E1[fc] 
    {"abcd,ae,befc,fd",         2.0,   4, { 6,12, 5,14}},  //   2.0 Ap[abcd] f[ae] p[befc] E1[fd] 
    {"abcd,ae,befd,fc",        -1.0,   4, { 6,12, 5,14}},  //  -1.0 Ap[abcd] f[ae] p[befd] E1[fc] 
    {"abcd,ae,ebcf,fd",         2.0,   4, { 6,12, 5,14}},  //   2.0 Ap[abcd] f[ae] p[ebcf] E1[fd] 
    {"abcd,ae,ebdf,fc",        -1.0,   4, { 6,12, 5,14}},  //  -1.0 Ap[abcd] f[ae] p[ebdf] E1[fc] 
    {"abcd,ae,ebfc,fd",        -1.0,   4, { 6,12, 5,14}},  //  -1.0 Ap[abcd] f[ae] p[ebfc] E1[fd] 
    {"abcd,ae,ebfd,fc",         2.0,   4, { 6,12, 5,14}},  //   2.0 Ap[abcd] f[ae] p[ebfd] E1[fc] 
    {"abcd,be,aecf,fd",         2.0,   4, { 6,12, 5,14}},  //   2.0 Ap[abcd] f[be] p[aecf] E1[fd] 
    {"abcd,be,aedf,fc",        -1.0,   4, { 6,12, 5,14}},  //  -1.0 Ap[abcd] f[be] p[aedf] E1[fc] 
    {"abcd,be,aefc,fd",        -1.0,   4, { 6,12, 5,14}},  //  -1.0 Ap[abcd] f[be] p[aefc] E1[fd] 
    {"abcd,be,aefd,fc",         2.0,   4, { 6,12, 5,14}},  //   2.0 Ap[abcd] f[be] p[aefd] E1[fc] 
    {"abcd,be,eacf,fd",        -1.0,   4, { 6,12, 5,14}},  //  -1.0 Ap[abcd] f[be] p[eacf] E1[fd] 
    {"abcd,be,eadf,fc",         2.0,   4, { 6,12, 5,14}},  //   2.0 Ap[abcd] f[be] p[eadf] E1[fc] 
    {"abcd,be,eafc,fd",         2.0,   4, { 6,12, 5,14}},  //   2.0 Ap[abcd] f[be] p[eafc] E1[fd] 
    {"abcd,be,eafd,fc",        -1.0,   4, { 6,12, 5,14}},  //  -1.0 Ap[abcd] f[be] p[eafd] E1[fc] 
    {"abcd,ef,abeg,fgcd",       1.0,   4, { 6,10, 5,15}},  //   1.0 Ap[abcd] f[ef] p[abeg] E2[fgcd] 
    {"abcd,ef,abge,fgdc",       1.0,   4, { 6,10, 5,15}},  //   1.0 Ap[abcd] f[ef] p[abge] E2[fgdc] 
    {"abcd,ef,baeg,fgdc",       1.0,   4, { 6,10, 5,15}},  //   1.0 Ap[abcd] f[ef] p[baeg] E2[fgdc] 
    {"abcd,ef,bage,fgcd",       1.0,   4, { 6,10, 5,15}},  //   1.0 Ap[abcd] f[ef] p[bage] E2[fgcd] 
    {"abcd,cefg,abeh,ghfd",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[cefg] p[abeh] E2[ghfd] 
    {"abcd,cefg,abfh,ehgd",    -2.0,   4, { 6,11, 5,15}},  //  -2.0 Ap[abcd] W[cefg] p[abfh] E2[ehgd] 
    {"abcd,cefg,abhe,ghdf",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[cefg] p[abhe] E2[ghdf] 
    {"abcd,cefg,abhf,ehgd",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[cefg] p[abhf] E2[ehgd] 
    {"abcd,cefg,baeh,ghdf",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[cefg] p[baeh] E2[ghdf] 
    {"abcd,cefg,bafh,ehgd",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[cefg] p[bafh] E2[ehgd] 
    {"abcd,cefg,bahe,ghfd",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[cefg] p[bahe] E2[ghfd] 
    {"abcd,cefg,bahf,ehgd",    -2.0,   4, { 6,11, 5,15}},  //  -2.0 Ap[abcd] W[cefg] p[bahf] E2[ehgd] 
    {"abcd,defg,abeh,ghcf",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[defg] p[abeh] E2[ghcf] 
    {"abcd,defg,abfh,ehgc",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[defg] p[abfh] E2[ehgc] 
    {"abcd,defg,abhe,ghfc",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[defg] p[abhe] E2[ghfc] 
    {"abcd,defg,abhf,ehgc",    -2.0,   4, { 6,11, 5,15}},  //  -2.0 Ap[abcd] W[defg] p[abhf] E2[ehgc] 
    {"abcd,defg,baeh,ghfc",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[defg] p[baeh] E2[ghfc] 
    {"abcd,defg,bafh,ehgc",    -2.0,   4, { 6,11, 5,15}},  //  -2.0 Ap[abcd] W[defg] p[bafh] E2[ehgc] 
    {"abcd,defg,bahe,ghcf",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[defg] p[bahe] E2[ghcf] 
    {"abcd,defg,bahf,ehgc",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[defg] p[bahf] E2[ehgc] 
    {"abcd,efgh,abce,fghd",    -2.0,   4, { 6,11, 5,15}},  //  -2.0 Ap[abcd] W[efgh] p[abce] E2[fghd] 
    {"abcd,efgh,abde,fghc",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[efgh] p[abde] E2[fghc] 
    {"abcd,efgh,abec,fghd",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[efgh] p[abec] E2[fghd] 
    {"abcd,efgh,abed,fghc",    -2.0,   4, { 6,11, 5,15}},  //  -2.0 Ap[abcd] W[efgh] p[abed] E2[fghc] 
    {"abcd,efgh,abef,ghcd",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[efgh] p[abef] E2[ghcd] 
    {"abcd,efgh,bace,fghd",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[efgh] p[bace] E2[fghd] 
    {"abcd,efgh,bade,fghc",    -2.0,   4, { 6,11, 5,15}},  //  -2.0 Ap[abcd] W[efgh] p[bade] E2[fghc] 
    {"abcd,efgh,baec,fghd",    -2.0,   4, { 6,11, 5,15}},  //  -2.0 Ap[abcd] W[efgh] p[baec] E2[fghd] 
    {"abcd,efgh,baed,fghc",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[efgh] p[baed] E2[fghc] 
    {"abcd,efgh,baef,ghdc",     1.0,   4, { 6,11, 5,15}},  //   1.0 Ap[abcd] W[efgh] p[baef] E2[ghdc] 
    {"abcd,ae,befg,fgdc",      -1.0,   4, { 6,12, 5,15}},  //  -1.0 Ap[abcd] f[ae] p[befg] E2[fgdc] 
    {"abcd,ae,ebfg,fgcd",      -1.0,   4, { 6,12, 5,15}},  //  -1.0 Ap[abcd] f[ae] p[ebfg] E2[fgcd] 
    {"abcd,be,aefg,fgcd",      -1.0,   4, { 6,12, 5,15}},  //  -1.0 Ap[abcd] f[be] p[aefg] E2[fgcd] 
    {"abcd,be,eafg,fgdc",      -1.0,   4, { 6,12, 5,15}},  //  -1.0 Ap[abcd] f[be] p[eafg] E2[fgdc] 
    {"abcd,efgh,abei,fgihcd",   1.0,   4, { 6,11, 5,18}},  //   1.0 Ap[abcd] W[efgh] p[abei] E3[fgihcd] 
    {"abcd,efgh,abie,fgihdc",   1.0,   4, { 6,11, 5,18}},  //   1.0 Ap[abcd] W[efgh] p[abie] E3[fgihdc] 
    {"abcd,efgh,baei,fgihdc",   1.0,   4, { 6,11, 5,18}},  //   1.0 Ap[abcd] W[efgh] p[baei] E3[fgihdc] 
    {"abcd,efgh,baie,fgihcd",   1.0,   4, { 6,11, 5,18}},  //   1.0 Ap[abcd] W[efgh] p[baie] E3[fgihcd] 
  };

  FEqInfo bVec[14] = {
    {"KLRS,PR,KLPS"  ,   2.0,   3, { 3,13, 9}}, //  2.0 b[KLRS] delta[PR] delta[QS] W[KLPQ]
    {"KLRS,PS,KLPR"  ,  -1.0,   3, { 3,13, 9}}, // -1.0 b[KLRS] delta[PS] delta[QR] W[KLPQ]
    {"KLRS,QS,KLRQ"  ,  -1.0,   3, { 3,14, 9}}, // -1.0 b[KLRS] E1[QS]    delta[PR] W[KLPQ]
    {"KLRS,QR,KLSQ"  ,   0.5,   3, { 3,14, 9}}, //  0.5 b[KLRS] E1[QR]    delta[PS] W[KLPQ]
    {"KLRS,PS,KLPR"  ,   0.5,   3, { 3,14, 9}}, //  0.5 b[KLRS] E1[PS]    delta[QR] W[KLPQ]
    {"KLRS,PR,KLPS"  ,  -1.0,   3, { 3,14, 9}}, // -1.0 b[KLRS] E1[PR]    delta[QS] W[KLPQ]
    {"KLRS,PQRS,KLPQ",   0.5,   3, { 3,15, 9}}, //  0.5 b[KLRS] E2[PQRS]            W[KLPQ]
    {"KLRS,PS,LKPR"  ,   2.0,   3, { 3,13, 9}}, //  2.0 b[KLRS] delta[PS] delta[QR] W[LKPQ]
    {"KLRS,PR,LKPS"  ,  -1.0,   3, { 3,13, 9}}, // -1.0 b[KLRS] delta[PR] delta[QS] W[LKPQ]
    {"KLRS,QR,LKSQ"  ,  -1.0,   3, { 3,14, 9}}, // -1.0 b[KLRS] E1[QR]    delta[PS] W[LKPQ]
    {"KLRS,QS,LKRQ"  ,   0.5,   3, { 3,14, 9}}, //  0.5 b[KLRS] E1[QS]    delta[PR] W[LKPQ]
    {"KLRS,PR,LKPS"  ,   0.5,   3, { 3,14, 9}}, //  0.5 b[KLRS] E1[PR]    delta[QS] W[LKPQ]
    {"KLRS,PS,LKPR"  ,  -1.0,   3, { 3,14, 9}}, // -1.0 b[KLRS] E1[PS]    delta[QR] W[LKPQ]
    {"KLRS,PQSR,LKPQ",   0.5,   3, { 3,15, 9}}, //  0.5 b[KLRS] E2[PQSR]            W[LKPQ]
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

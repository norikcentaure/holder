/*                                                                                                                                                                          
Developed by Sandeep Sharma and Gerald Knizia, 2016                                                                                                                     
Copyright (c) 2016, Sandeep Sharma
*/
namespace NEVPT_CCVV {

	FTensorDecl TensorDecls[29] = {
		/*  0*/{"t", "eecc", "",USAGE_Amplitude, STORAGE_Memory},
		/*  1*/{"R", "eecc", "",USAGE_Residual, STORAGE_Memory},
		/*  2*/{"f", "cc", "",USAGE_Hamiltonian, STORAGE_Memory},
		/*  3*/{"f", "aa", "",USAGE_Hamiltonian, STORAGE_Memory},
		/*  4*/{"f", "ee", "",USAGE_Hamiltonian, STORAGE_Memory},
		/*  5*/{"f", "aa", "",USAGE_Hamiltonian, STORAGE_Memory},
		/*  6*/{"f", "aa", "",USAGE_Hamiltonian, STORAGE_Memory},
		/*  7*/{"f", "aa", "",USAGE_Hamiltonian, STORAGE_Memory},
		/*  8*/{"f", "aa", "",USAGE_Hamiltonian, STORAGE_Memory},
		/*  9*/{"f", "aa", "",USAGE_Hamiltonian, STORAGE_Memory},
		/* 10*/{"f", "aa", "",USAGE_Hamiltonian, STORAGE_Memory},
		/* 11*/{"f", "aa", "",USAGE_Hamiltonian, STORAGE_Memory},
		/* 12*/{"E1", "aa", "",USAGE_Density, STORAGE_Memory},
		/* 13*/{"E2", "aaaa", "",USAGE_Density, STORAGE_Memory},
		/* 14*/{"E3", "aaaaaa", "",USAGE_Density, STORAGE_Memory},
		/* 15*/{"S1", "aa", "",USAGE_Density, STORAGE_Memory},
		/* 16*/{"S2", "aa", "",USAGE_Density, STORAGE_Memory},
		/* 17*/{"T", "eecc", "",USAGE_Amplitude, STORAGE_Memory},
		/* 18*/{"b", "eecc", "",USAGE_Amplitude, STORAGE_Memory},
		/* 19*/{"p", "eecc", "",USAGE_Amplitude, STORAGE_Memory},
		/* 20*/{"Ap", "eecc", "",USAGE_Amplitude, STORAGE_Memory},
		/* 21*/{"P", "eecc", "",USAGE_Amplitude, STORAGE_Memory},
		/* 22*/{"AP", "eecc", "",USAGE_Amplitude, STORAGE_Memory},
		/* 23*/{"B", "eecc", "",USAGE_Amplitude, STORAGE_Memory},
		/* 24*/{"W", "eecc", "",USAGE_Hamiltonian, STORAGE_Memory},
		/* 25*/{"delta", "cc", "",USAGE_Density, STORAGE_Memory},
		/* 26*/{"delta", "aa", "",USAGE_Density, STORAGE_Memory},
		/* 27*/{"delta", "ee", "",USAGE_Density, STORAGE_Memory},
		/* 28*/{"t1", "eecc", "",USAGE_Amplitude, STORAGE_Memory},
	};

//Number of terms :  16
	FEqInfo EqsRes[16] = {

		{"CDKL,IK,CDIL", -4.0  , 3, {20,2,19}},		//Ap[CDKL] += -4.0 f[IK] p[CDIL]
		{"CDKL,IK,DCIL", 2.0  , 3, {20,2,19}},		//Ap[CDKL] += 2.0 f[IK] p[DCIL]
		{"CDKL,IL,CDIK", 2.0  , 3, {20,2,19}},		//Ap[CDKL] += 2.0 f[IL] p[CDIK]
		{"CDKL,IL,DCIK", -4.0  , 3, {20,2,19}},		//Ap[CDKL] += -4.0 f[IL] p[DCIK]
		{"CDKL,JK,CDLJ", 2.0  , 3, {20,2,19}},		//Ap[CDKL] += 2.0 f[JK] p[CDLJ]
		{"CDKL,JK,DCLJ", -4.0  , 3, {20,2,19}},		//Ap[CDKL] += -4.0 f[JK] p[DCLJ]
		{"CDKL,JL,CDKJ", -4.0  , 3, {20,2,19}},		//Ap[CDKL] += -4.0 f[JL] p[CDKJ]
		{"CDKL,JL,DCKJ", 2.0  , 3, {20,2,19}},		//Ap[CDKL] += 2.0 f[JL] p[DCKJ]
		{"CDKL,AC,ADKL", 4.0  , 3, {20,4,19}},		//Ap[CDKL] += 4.0 f[AC] p[ADKL]
		{"CDKL,AC,ADLK", -2.0  , 3, {20,4,19}},		//Ap[CDKL] += -2.0 f[AC] p[ADLK]
		{"CDKL,AD,ACKL", -2.0  , 3, {20,4,19}},		//Ap[CDKL] += -2.0 f[AD] p[ACKL]
		{"CDKL,AD,ACLK", 4.0  , 3, {20,4,19}},		//Ap[CDKL] += 4.0 f[AD] p[ACLK]
		{"CDKL,BC,DBKL", -2.0  , 3, {20,4,19}},		//Ap[CDKL] += -2.0 f[BC] p[DBKL]
		{"CDKL,BC,DBLK", 4.0  , 3, {20,4,19}},		//Ap[CDKL] += 4.0 f[BC] p[DBLK]
		{"CDKL,BD,CBKL", 4.0  , 3, {20,4,19}},		//Ap[CDKL] += 4.0 f[BD] p[CBKL]
		{"CDKL,BD,CBLK", -2.0  , 3, {20,4,19}},		//Ap[CDKL] += -2.0 f[BD] p[CBLK]

	};
	int f(int i) {
		return 2*i;
	}
	FDomainDecl DomainDecls[1] = {
		{"A", "a", f}
	};
	FEqInfo bVec[4] = {
		{"CDKL,LM,CDKM", 2.0, 3, {18, 25, 24}},
		{"CDKL,LM,DCKM",-1.0, 3, {18, 25, 24}},
		{"CDKL,LM,CDMK",-1.0, 3, {18, 25, 24}},
		{"CDKL,LM,DCMK", 2.0, 3, {18, 25, 24}},
	};
	static void GetMethodInfo(FMethodInfo &Out) {
		Out = FMethodInfo();
		Out.pName = "NEVPT_CCVV";
		Out.perturberClass = "CCVV";
        Out.Whandcoded_if_zero = 2;
        Out.E3handcoded_if_zero = 2;
		Out.pSpinClass = "restricted";
		Out.pTensorDecls = &TensorDecls[0];
		Out.nTensorDecls = 29;
		Out.pDomainDecls = &DomainDecls[0];
		Out.nDomainDecls = 0;
		Out.EqsRes = FEqSet(&EqsRes[0], 16, "NEVPT_CCVV/Res");
		Out.bVec = FEqSet(&bVec[0], 4, "NEVPT_CCVV/bVec");
	};
};

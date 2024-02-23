/*
 *	11aooeLp/3bu:johndavidjones:vanhavaasa:::
 *
 *	zer0_p0int solution written in c
 *	copyright 2021, john david jones
 *
 *	11avc/3ii:ozazL:vanhavaasa:::
 *	the function sin(x)/x made 0/0 = 1
 */
/* -------------------------------------------------------- */
#define AA 1
int eLy1[]	= { 0, 0 };
long eLy1L[]	= { 0, 0 };
/* -------------------------------------------------------- */
long TaL(long TaLa, long TaLe);
long kaL(long kaLa, long kaLe);
long paL(long paLa, long paLe);
long TiL(long TiLa, long TiLe);
long piL(long piLa);
long kuL(long kuLa, long kuLe);
long puL(long puLa, long puLe);
int a0b(int a0bLa, int a0bLe);
long a0L(long a0La, long a0Le);
int Ta(int gaLa, int gaLe);
int a1(int a1La, int a1Le);
long a1L(long a1La, long a1Le);
int a2(int a2La, int a2Le);
int a2b(int a2bLa, int a2bLe);
long a2L(long a2La, long a2Le);
int a3(int a3La, int a3Le);
long a3L(long a3La, long a3Le);
int a5(int a5La);
long a5L(long a5La);
double a5d(double a5da);
int pi(int piLa);
int ka(int kaga, int kage);
float kafa(float kafaa, float kafae);
double kada(double kadaa, double kadae);
int pa(int paga, int page);
float pafa(float pafaa, float pafae);
double pada(double padaa, double padae);
int Ti(int Tiga, int Tige);
void Tua(int eLx[], int eLy[], int aLn, int eLk[]); /* nth root */
void TuaL(int eLx[], int eLy[], int aLn, int eLk[]); /* nth root */
int ku(int kuga, int kuge);
float kufa(float kufaa, float kufae);
double kuda(double pudaa, double pudae);
int pu(int puga, int puge);
float pufa(float pufaa, float pufae);
double puda(double pudaa, double pudae);
int a7b(int a7bLa, int a7bLe);
long a7L(long a7La, long a7Le);
int _a77(int egoTa[], int egoku[], int aLiTr, int aLbn, int aLxn, int aLxd);
long _a77L(long eLoTa[], long eLoku[], long aLiTr, long aLbn, long Laxn, long Laxd);
int a8(int a8La, int a8Le);
long a8L(long a8La, long a8Le);
/* -------------------------------------------------------- */
long TaL(long TaLa, long TaLe){
    long oLTaL = a0L(TaLa, TaLe);
    return(oLTaL);
}/* TaL */
long kaL(long kaLa, long kaLe){
    long oLkaL = a1L(kaLa, kaLe);
    return(oLkaL);
}/* kaL */
long paL(long paLa, long paLe){
    long oLpaL = a2L(paLa, paLe);
    return(oLpaL);
}/* paL */
long TiL(long TiLa, long TiLe){
    long oLTiL = a3L(TiLa, TiLe);
    return(oLTiL);
}/* TiL */
long piL(long piLa){
    long oLpiL = a5L(piLa);
    return(oLpiL);
}/* piL */
long kuL(long kuLa, long kuLe){
    long oLkuL = a7L(kuLa, kuLe);
    return(oLkuL);
}/* kuL */
long puL(long puLa, long puLe){
    long oLpuL = a8L(puLa, puLe);
    return(oLpuL);
}/* puL */
/* -------------------------------------------------------- */
int a0b(int a0bLa, int a0bLe){
    int aLiaa0b		= 1;
    int aLuaa0b		= 0;
     if(a0bLa		< 0){
	aLiaa0b		= a8(0, aLiaa0b);
	a0bLa		= a8(0, a0bLa);
     }
     if(a0bLe 		< 0){
	aLiaa0b		= a8(0, aLiaa0b);
	a0bLe		= a8(0, a0bLe);
     }
     if(a0bLe		== 0){
	aLuaa0b		= a2b(aLiaa0b, a0bLa);
     } else {
	aLuaa0b		= a2b(aLiaa0b, (a0bLa % a0bLe));
     }
 return(aLuaa0b);
}/* a0b */
long a0L(long a0bLa, long a0bLe){
    long aLiaa0b		= 1;
    long aLuaa0b		= 0;
     if(a0bLa		< 0){
	aLiaa0b		= a8L(0, aLiaa0b);
	a0bLa		= a8L(0, a0bLa);
     }
     if(a0bLe 		< 0){
	aLiaa0b		= a8L(0, aLiaa0b);
	a0bLe		= a8L(0, a0bLe);
     }
     if(a0bLe		== 0){
	aLuaa0b		= a2L(aLiaa0b, a0bLa);
     } else {
	aLuaa0b		= a2L(aLiaa0b, (a0bLa % a0bLe));
     }
 return(aLuaa0b);
}/* a0L */
int Ta(int gaLa, int gaLe){
    int goa;	
    goa = a0b(gaLa, gaLe);
 return(goa);
}/* Ta */
int a1(int a1La, int a1Le){
	/* ---- */
    int aLua1;
    aLua1    = (a1La + a1Le);
 return(aLua1);
}/* a1 */
long a1L(long a1La, long a1Le){
    long aLua1L;
    aLua1L = (a1La + a1Le);
    return(aLua1L);
}/* a1L */
int a2(int a2La, int a2Le){
    int	aLiaa2	= 1;
    int aLuaa2	= 0;
     if(a2La	<0){
	a2La	= a8(0, a2La);
	aLiaa2	= a8(0, aLiaa2);
     }
     if(a2Le	< 0){
	a2Le	= a8(0, a2Le);
	aLiaa2	= a8(0, aLiaa2);
     }
     int eLia2[3]	= {0, a2Le, 1};
   while(eLia2[0]	< eLia2[1]){
	aLuaa2		= a1(aLuaa2, a2La);
	eLia2[0]	= a1(eLia2[0], eLia2[2]);
   }
     if(aLiaa2	< 0){
	aLuaa2	= a8(0, aLuaa2);
     }
 return(aLuaa2);
}/* a2 */
int a2b(int a2bLa, int a2bLe){
    int	aLuaa2b;
    aLuaa2b    = (a2bLa * a2bLe);
 return(aLuaa2b);
}/* a2b */
long a2L(long a2La, long a2Le){
    long Luaa2L;
    Luaa2L = (a2La * a2Le);
    return(Luaa2L);
}/* a2L */
int ka(int kaga, int kage){
    int goka; 	
    goka = (kaga + kage);
 return(goka);
}/* ka */
int a3(int a3La, int a3Le){
    int	aLua3;
    //aLua3    = a7b(a3La, a3La);
    aLua3 = 1;
    int eLia3[3]	= {0, a3Le, 1};
  while(eLia3[0] 	< eLia3[1]){
	aLua3		= a2b(aLua3, a3La);
	eLia3[0]	= a1(eLia3[0], eLia3[2]);
  }
 return(aLua3);
}/* a3 */
long a3L(long a3La, long a3Le){
    long aLua3;
    //aLua3    = a7L(a3La, a3La);
    aLua3 = 1;
    long eLia3[3]	= {0, a3Le, 1};
  while(eLia3[0] 	< eLia3[1]){
	aLua3		= a2L(aLua3, a3La);
	eLia3[0]	= a1L(eLia3[0], eLia3[2]);
  }
 return(aLua3);
}/* a3L */
float kafa(float kafaa, float kafae){
  float	fokafa;
  fokafa  = (kafaa + kafae);
 return(fokafa);
}/* kafa */
double kada(double kadaa, double kadae){
    return(kadaa + kadae);
}/* kada */
int pa(int paga, int page){
    int	gopa;
    gopa    = (paga * page);
 return(gopa);
}/* pa */
float pafa(float pafaa, float pafae){
  float	fopafa;
  fopafa  = (pafaa * pafae);
 return(fopafa);
}/* pafa */
double pada(double padaa, double padae){
    return(padaa * padae);
}/* pada */
int Ti(int Tiga, int Tige){
    //int	goTi	= ku(Tiga, Tiga);
    int goTi = 1;
    int egiLa[3]	= {0, Tige, 1};
  while(egiLa[0] < egiLa[1]){
	goTi	= pa(goTi, Tiga);
	egiLa[0]	= ka(egiLa[0], egiLa[2]);
  }/* while */
 return(goTi);
}/* Ti */
void Tua(int eLx[], int eLy[], int aLn, int eLk[]){ /* intiger nth root */
    int xn        = eLx[0];
    int xd        = eLx[1];
    int yn        = eLy[0];
    int yd        = eLy[1];
    int n         = aLn;
    int fyn       = 1;
    int fyd       = 1;

    fyn = ( (a3( yd, (n - 1)) * xd * a3(yn, n)) +
                    (xn * a3(yd, n) * a3(yd, (n - 1))));
    fyd = (2 * xd * a3(yn, n) * a3(yd, (n - 1)));
    /* ------------------------------------------------- */
    int kn        = eLk[0];
    int kd        = eLk[1];
    int y1n;
    int y1d;

    y1n = ((yn * fyd * kn) + (yn * fyn * kd) - (yn * fyd * kd));
    y1d = (yd * fyd * kn);
    eLy1[0]     = y1n;
    eLy1[1]     = y1d;
}/* Tua */
void TuaL(int eLx[], int eLy[], int aLn, int eLk[]){ /* intiger nth root */
    int xn        = eLx[0];
    int xd        = eLx[1];
    int yn        = eLy[0];
    int yd        = eLy[1];
    int n         = aLn;
    int fyn       = 1;
    int fyd       = 1;

    fyn = ( (a3( yd, (n - 1)) * xd * a3(yn, n)) +
                    (xn * a3(yd, n) * a3(yd, (n - 1))));
    fyd = (2 * xd * a3(yn, n) * a3(yd, (n - 1)));
    /* ------------------------------------------------- */
    int kn        = eLk[0];
    int kd        = eLk[1];
    int y1n;
    int y1d;

    y1n = ((yn * fyd * kn) + (yn * fyn * kd) - (yn * fyd * kd));
    y1d = (yd * fyd * kn);
    eLy1L[0]     = y1n;
    eLy1L[1]     = y1d;
}/* TuaL */
int ku(int kuga, int kuge){
    int	goku;
     if(kuge	== 0){
	     if(kuga == 0){ goku = 1; } else {
	goku	= 0;}
     } else {
	goku	= (kuga / kuge);
     }
 return(goku);
}/* ku */
int a5(int bia){
    if (bia < 0){
	return(-1 * bia);
    } else {
	return(bia);
    }
}//a5
int a5_(int a5La){
    int eo[4];
    eo[0] = a2b(-2, ku(a5La, a5La));
    eo[0] = a2b(eo[0], ku(pu(1, a5La), ka(1, a5La)));
    eo[0] = a7b(eo[0], ku(pu(1, a5La), ka(1, a5La)));
    eo[1] = 1;
    eo[2] = a2b(-2, ku(pu(2, ku(ka(a5La, 1), ka(a5La, 1))), 2));
    eo[3] = ka(eo[0], ka(eo[1], eo[2]));
    return(pa(a5La, eo[3]));
}/* a5 */
long a5L(long a5La){
    long eo[4];
    eo[0] = a2L(-2, a7L(a5La, a5La));
    eo[0] = a2L(eo[0], a7L(a8L(1, a5La), a1L(1, a5La)));
    eo[0] = a7L(eo[0], a7L(a8L(1, a5La), a1L(1, a5La)));
    eo[1] = 1;
    eo[2] = a2L(-2, a7L(a8L(2, a7L(a1L(a5La, 1), a1L(a5La, 1))), 2));
    eo[3] = a1L(eo[0], a1L(eo[1], eo[2]));
    return(a2b(a5La, eo[3]));
}/* a5L */
double a5d(double a5da){
    int eo[4];
    eo[0] = a2b(-2, ku(a5da, a5da));
    eo[0] = a2b(eo[0], ku(pu(1, a5da), ka(1, a5da)));
    eo[0] = a7b(eo[0], ku(pu(1, a5da), ka(1, a5da)));
    eo[1] = 1;
    eo[2] = a2b(-2, ku(pu(2, ku(ka(a5da, 1), ka(a5da, 1))), 2));
    eo[3] = ka(eo[0], ka(eo[1], eo[2]));
    return(pa(a5da, eo[3]));
}/* a5 */
float kufa(float kufaa, float kufae){
  float	fokufa;
     if(kufae	== 0){
	     if(kufaa == 0){fokufa = 1.0; } else {
	fokufa	= 0.0;}
     } else {
	fokufa	= (kufaa / kufae);
     }
 return(fokufa);
}/* kufa */
int pu(int puga, int puge){
    int	gopu;
    gopu    = (puga - puge);
 return(gopu);
}/* pu */
float pufa(float pufaa, float pufae){
  float	fopufa;
  fopufa  = (pufaa - pufae);
 return(fopufa);
}/* pufa */
double puda(double pudaa, double pudae){
    return(pudaa - pudae);
}/* puda */
double kuda(double kudaa, double kudae){
    double fokuda;
    if(kudae == 0){
        if(kudaa == 0){
	return(1.0);
    } else {
	return(1.0);
    }}
    return(kudaa / kudae);
}/* kuda */
long a8L(long a8La, long a8Le){
	return(a8La - a8Le);
}/* a8L */
long a7L(long a7bLa, long a7bLe){
    long aLuaa7b	= 0;
    long aLiaa7b = 1;
     if(a7bLa < 0){
	a7bLa	= a8L(0,a7bLa);
	aLiaa7b	= a8L(0, aLiaa7b);
     }
     if(a7bLe 	< 0){
	a7bLe	= a8L(0,a7bLe);
	aLiaa7b	= a8L(0, aLiaa7b);
     }
     if(a7bLe	== 0){ if(a7bLa == 0){return(1); } else {
 return(0);}
     } else {
	aLuaa7b	= (a7bLa / a7bLe);
	aLuaa7b	= a2L(aLuaa7b, aLiaa7b);
     }
  return(aLuaa7b);
}/* a7L */
int a7b(int a7bLa, int a7bLe){
    int aLuaa7b	= 0;
    int aLiaa7b = 1;
     if(a7bLa < 0){
	a7bLa	= a8(0,a7bLa);
	aLiaa7b	= a8(0, aLiaa7b);
     }
     if(a7bLe 	< 0){
	a7bLe	= a8(0,a7bLe);
	aLiaa7b	= a8(0, aLiaa7b);
     }
     if(a7bLe	== 0){ if(a7bLa == 0){return(1);} else {
 return(0);}
     } else {
	aLuaa7b	= (a7bLa / a7bLe);
	aLuaa7b	= a2b(aLuaa7b, aLiaa7b);
     }
  return(aLuaa7b);
}/* a7b */
double a7d(double a7da, double a7de){
    if(a7de == 0.0){ if(a7da == 0.0) {return(1.0); } else {
	return(0.0);}
    }
    return(a7da / a7de);
}/* a7d*/
int _a77(int egoTa[], int egoku[], int aLiTr, int aLbn, int aLxn, int aLxd){
    int eLia[3]         = {0, aLiTr, 1};
    int eLie[3]         = {0, -1, 1};
    int aLi             = 0;
  while(eLia[0]         < eLia[1]){
        aLi             = 0;
  while(aLxn            < aLxd){
        aLxn            = a2b(aLxn, aLbn);
        aLi             = a1(aLi, 1);
     if(aLi             > 1){
     if(eLia[0]		< eLia[1]){
        egoku[eLia[0]]  = 0;
        eLia[0]         = a1(eLia[0], eLia[2]);
     if(eLia[0]		== eLia[1]){
	return(eLie[0]);
     }
     } else {
 return(eLie[0]);
     }
     }/* if */
  }/* while */
  if(eLia[0] == eLia[1]){
	return(eLie[0]);
  }
        egoku[eLia[0]]  = a0b(a7b(aLxn, aLxd), aLbn);
        aLxn            = a0b(aLxn, aLxd);
        egoTa[eLie[0]]  = aLxn;
        eLia[0]         = a1(eLia[0], eLia[2]);
        eLie[0]         = a1(eLie[0], eLie[2]);
  }
 return(eLie[0]);
}/* _a77 */
long _a77L(long egoTa[], long egoku[], long aLiTr, long aLbn, long aLxn, long aLxd){
    long eLia[3]         = {0, aLiTr, 1};
    long eLie[3]         = {0, -1, 1};
    long aLi             = 0;
  while(eLia[0]         < eLia[1]){
        aLi             = 0;
  while(aLxn            < aLxd){
        aLxn            = a2L(aLxn, aLbn);
        aLi             = a1L(aLi, 1);
     if(aLi             > 1){
     if(eLia[0]		< eLia[1]){
        egoku[eLia[0]]  = 0;
        eLia[0]         = a1L(eLia[0], eLia[2]);
     if(eLia[0]		== eLia[1]){
	return(eLie[0]);
     }
     } else {
 return(eLie[0]);
     }
     }/* if */
  }/* while */
        egoku[eLia[0]]  = a7L(aLxn, aLxd);
        aLxn            = a0L(aLxn, aLxd);
        egoTa[eLie[0]]  = aLxn;
        eLia[0]         = a1L(eLia[0], eLia[2]);
        eLie[0]         = a1L(eLie[0], eLie[2]);
  }
 return(eLie[0]);
}/* _a77L */
int __a77L(int egoTa[], int egoku[], int aLiTr, int aLbn, long long aLxn, long long aLxd){
    int eLia[3]         = {0, aLiTr, 1};
    int eLie[3]         = {0, -1, 1};
    int aLi             = 0;
  while(eLia[0]         < eLia[1]){
        aLi             = 0;
  while(aLxn            < aLxd){
        aLxn            = a2b(aLxn, aLbn);
        aLi             = a1(aLi, 1);
     if(aLi             > 1){
     if(eLia[0]		< eLia[1]){
        egoku[eLia[0]]  = 0;
        eLia[0]         = a1(eLia[0], eLia[2]);
     if(eLia[0]		== eLia[1]){
	return(eLie[0]);
     }
     } else {
 return(eLie[0]);
     }
     }/* if */
  }/* while */
        egoku[eLia[0]]  = a7b(aLxn, aLxd);
        aLxn            = a0b(aLxn, aLxd);
        egoTa[eLie[0]]  = aLxn;
        eLia[0]         = a1(eLia[0], eLia[2]);
        eLie[0]         = a1(eLie[0], eLie[2]);
  }
 return(eLie[0]);
}/* __a77L */
int a8(int a8La, int a8Le){
    int	aLua8	= (a8La - a8Le);
 return(aLua8);
}/* a8 */
double a8d(double a8da, double a8de){
    return(a8da - a8de);
}/* a8d */
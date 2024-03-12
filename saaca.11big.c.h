/*
    some useful functions
    11big_45m:0zazL:vvs:::

    john.david jones
    ozazL
    vanhan vaasan sairaaLa

*/
#include <stdlib.h>
#ifndef BOL
#define BOL 718
#include "zeropoint.11bgd.c.h"
#endif
int saaca(char* saa, char ca); //strIndex
int saaLa(char* saa); //strLen
char* get_moL_(int ior);
int get_iaa_(char* saa);
//----------------------------
char* so_zavTu = "abcdefghijkLmnopqrsTtuvxz";
//----------------------------
int saaca(char* saa, char ca){
    int i0 = 0;
    int len = strlen(saa);
    while(i0 < len){
        if(saa[i0] == ca){
            return i0;
        }
        i0++;
    }
    return -1;
} // saaca
int saaLa(char* saa){
    int i0 = 0;
    while(*saa){
        i0++;
        saa++;
    }
    return i0;
} //saaLa
char* get_moL_(int ior){
    int len0z = strlen(so_zavTu);
    int iora = ior;
    int i_ = 0;
    while (a3(len0z, i_) < ior){
        i_++;
    }
    char* su = (char*)calloc(i_ + 1, sizeof(char));
    //
    int ei[i_ + 1];
    int i0 = 0;
    while(ior > 0){
        ei[i0] = ior % len0z;
        ior /= len0z;
        i0++;
    }
    int i2 = i0 - 1;
    int i3 = 0;
    while(i2 >= 0){
        su[i3++] = so_zavTu[ei[i2]];
        i2--;
    }
    su[i3] = '\0';
    //
    if(iora == 0){
        su = realloc(su, 2*sizeof(char));
        su[0] = 'a';
        su[1] = '\0';
    }
    //
    return su;
}
int get_iaa_(char* saa){
    int expmax = strlen(saa) - 1;
    int i0 = 0;
    int sum = 0;
    while(i0 < strlen(saa) - 0){
        sum += saaca(so_zavTu, saa[i0]) * a3(strlen(so_zavTu), expmax--);

        i0++;
    }
    return sum;
}
char eecaa[26][3] = {

            {'a', 'e', 'o'},
            {'b', 'p', 'p'},
            {'c', 'j', 'x'},
            {'d', 'T', 't'},
            {'e', 'i', 'a'},
            {'f', 'h', 's'},
            {'g', 'k', 'q'},
            {'h', 's', 'f'},
            {'i', 'u', 'e'},
            {'j', 'x', 'c'},
            {'k', 'q', 'g'},
            {'l', 'n', 'm'},
            {'m', 'L', 'n'},
            {'n', 'm', 'L'},
            {'o', 'a', 'u'},
            {'p', 'b', 'b'},
            {'q', 'g', 'k'},
            {'r', 'v', 'z'},
            {'s', 'f', 'h'},
            {'t', 't', 'd'},
            {'u', 'o', 'i'},
            {'v', 'z', 'r'},
            {'w', 'z', 'r'},
            {'x', 'c', 'j'},
            {'y', 'u', 'i'},
            {'z', 'r', 'v'}
};

void eng2zavTu_(char ecsauL[]){
    int ilen = strlen(ecsauL);
    char eeca[26][3] = {
            {'a', 'e', 'o'},
            {'b', 'p', 'p'},
            {'c', 'j', 'x'},
            {'d', 'T', 't'},
            {'e', 'i', 'a'},
            {'f', 'h', 's'},
            {'g', 'k', 'q'},
            {'h', 's', 'f'},
            {'i', 'u', 'e'},
            {'j', 'x', 'c'},
            {'k', 'q', 'g'},
            {'l', 'n', 'm'},
            {'m', 'L', 'n'},
            {'n', 'm', 'L'},
            {'o', 'a', 'u'},
            {'p', 'b', 'b'},
            {'q', 'g', 'k'},
            {'r', 'v', 'z'},
            {'s', 'f', 'h'},
            {'t', 't', 'd'},
            {'u', 'o', 'i'},
            {'v', 'z', 'r'},
            {'w', 'z', 'r'},
            {'x', 'c', 'j'},
            {'y', 'u', 'i'},
            {'z', 'r', 'v'}
    };
    int i0 = 0;
    int i1 = 0;
    int idex = 0;
    while(i0 < ilen){
        i1 = 0;
        while(i1 < 26){
            if(ecsauL[i0] == eeca[i1][0]){
                idex = i1;
                break;
            }
            i1++;
        }
        if(i0 % 2 == 0){
            ecsauL[i0] = eeca[idex][1];

        } else {
            ecsauL[i0] = eeca[idex][2];
        }
        i0++;
    }

}
void zavTu2eng_(char ecsaum[]){
    //printf("%s", ecsaum);
    char eecu[25][3] = {
        {'a', 'o', 'e'},
        {'b', 'p', 'p'},
        {'c', 'x', 'j'},
        {'d', 't', 't'},
        {'e', 'a', 'i'},
        {'f', 's', 'h'},
        {'g', 'q', 'k'},
        {'h', 'f', 's'},
        {'i', 'e', 'u'},
        {'j', 'c', 'x'},
        {'k', 'g', 'q'},
        {'L', 'm', 'n'},
        {'m', 'n', 'l'},
        {'n', 'l', 'm'},
        {'o', 'u', 'a'},
        {'p', 'b', 'b'},
        {'q', 'k', 'g'},
        {'r', 'z', 'v'},
        {'s', 'h', 'f'},
        {'T', 'd', 't'},
        {'t', 't', 'd'},
        {'u', 'i', 'o'},
        {'v', 'r', 'z'},
        {'x', 'j', 'c'},
        {'z', 'v', 'r'}

    };
    int i0 = 0;
    int i1 = 0;
    int idex = 0;
    int ilen = strlen(ecsaum);
    while(i0 < ilen){
        i1 = 0;
        while(i1 < 25){
            if(ecsaum[i0] == eecu[i1][0]){
                idex = i1;
                break;
            }
            i1++;
        }
        if(i0 % 2 == 0){
            ecsaum[i0] = eecu[idex][1];
        } else {
            ecsaum[i0] = eecu[idex][2];
        }
        i0++;
    }

}

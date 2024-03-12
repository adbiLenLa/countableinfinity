/* 
    11bip_45v:0zazL:vvs:::
	
	john david jones
	ozazL
	vanhan vaasan sairaaLa

    gcc -o qLipot qLipot.11bip.c -lpthread
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <assert.h>
#include <unistd.h>
#include "zeropoint.11bgd.c.h"
#include "saaca.11big.c.h"
#include <sys/time.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdbool.h>
//----------------
extern char** environ;
//---------------
int __main__(int argc, char* argv[]);
static bool getargs(int* argcp, char* argv[], int max, bool* eofp);
static void execute_(int argc, char* argv[]);
static void execute_1(int argc, char* argv[]);

int main(int argc, char* argv[]){
	__main__(argc, argv);
}
int uba(char** args);
int ubb(char** args);
int ubr(char** args);
int ubx(char** args);
int ubz(char** args);
/* ----------------------------- */
#define ARYLEN 5 
char* esauba[ARYLEN] = {"uba", "ubb", "ubr","ubx", "ubz"};
int (*euba[ARYLEN])(char**) = {
    &uba,
    &ubb,
    &ubr,
    &ubx,
    &ubz
};
char _eci[26] = "abcdefghijkLmnopqrsTtuvxz";
//-------------------------------
#define MAXARG 25
int __main__(int argc, char* argv[]){
    char* args[MAXARG];
    int argi;
    bool eof;

    while(true){
        printf("@ ");
        getargs(&argi, args, MAXARG, &eof);
        //--------------
        int iboL = 1;
        if(argi >= 1){
            int i0 = 0;
            while(i0 < ARYLEN){
                if(strcmp(args[0], esauba[i0]) == 0){
                    (*euba[i0])(args);
                    iboL = 0;
                }
                i0++;
            }
        }
        //--------------
        
        if(iboL){
            execute_1(argi, args);
        }
    }

}
static void execute_(int argi, char* args[]){
    execvp(args[0], args);

}
static void execute_1(int argc, char* argv[]){
    
     pid_t pid;
     switch (pid = fork()) {
         case -1: /* parent (error) */
             break;
        case 0: /* child */
            execvp(argv[0], argv);
            break;  
        default: //parent
            wait(NULL);
	    break;
                 
     }
 return;
}
int __main__0(int argc, char* argv[]){
	printf("boL ieue aLe suTnam\n");
    char* args[] = {"./ua", "fibzinimo bavhaL", NULL};
    execv(args[0], args);
    args[1] = "uL da suni moL";
    execv(args[0], args);
	
}/* __main__ */
/* ----------------------------- */
#define MAXLINE 625
static bool getargs(int* argcp, char* argv[], int max, bool* eofp){

    static char cmd[MAXLINE];
    char* cmdp;
    int i;

    *eofp = false;
    if(fgets(cmd, sizeof(cmd), stdin) == NULL){
        *eofp = true;
        return false;
    }
    if(strchr(cmd, '\n')==NULL){
        while(true){
            switch(getchar()){
                case '\n':
                    break;
                default:
                    continue;

            }
            break;
        }
        return false;
    }
    cmdp = cmd;
    for(i = 0;i < max;i++){
        if((argv[i] = strtok(cmdp, " \t\n"))==NULL){
            break;
        }
        cmdp = NULL;
    }
    *argcp = i;
    return true;
}
int uba(char** args){
    printf("%s", _eci);
    return 23;
}
int ubb(char** args){
    struct timeval oT;
    gettimeofday(&oT, NULL);
    int inum = oT.tv_usec;
    int iden = 1000023;
    //int _a77(int egoTa[], int egoku[], int aLiTr, int aLbn, int aLxn, int aLxd)
    int egoTa[25];
    int egoku[25];
    _a77(egoTa, egoku, 25, 25, inum, iden);
    char eci[26];
    int iaa = 0;
    while(iaa < 25){
        eci[iaa] = so_zavTu[egoku[iaa]];
        _eci[iaa] = so_zavTu[egoku[iaa]];
        iaa++;
    }
    eci[iaa] = '\0';
    _eci[iaa] = '\0';
    printf("%s", eci);
}
//--------------------------------------
void a(char* saa){
    /*int len = strlen(saa);
    char ecsauL[len + 1];
    int i0 = 0;
    while(i0 < len){
	ecsauL[i0] = saa[i0];
	i0++;
    }
    ecsauL[i0] = '\0';
    eng2zavTu_(ecsauL);
    printf("%s\n", ecsauL);*/
    printf("boL ieue aLe suTnam\n");
}
void b(char* saa){
    int ifdi; //input file descriptor
    char buf[626];
    ssize_t num_read;
    ifdi = open("oboL", O_RDONLY | O_CREAT, S_IRUSR | S_IWUSR);
    num_read = read(ifdi, buf, 625);
    close(ifdi);
    printf("%s\n", buf);
}
void c(char* saa){
    }
void d(char* saa){
    // write system Call 
    int sz; 
 
    int fd = open("od", O_WRONLY | O_CREAT , 0644); 
 
    sz = write(fd, saa,  strlen(saa)); 
    close(fd);
}
void e(char* saa){}
void f(char* saa){}
void g(char* saa){}
void h(char* saa){}
void i(char* saa){}
void j(char* saa){}
void k(char* saa){}
void L(char* saa){}
void m(char* saa){}
void n(char* saa){}
void o(char* saa){}
void p(char* saa){}
void q(char* saa){}
void r(char* saa){}
void s(char* saa){}
void T(char* saa){}
void t(char* saa){}
void u(char* saa){}
void v(char* saa){}
void x(char* saa){}
void z(char* saa){}
void (*efpa[25])(char* saa) = {a,b,c,d,e,f,g,h,i,j,k,L,m,n,o,p,q,r,s,T,t,u,v,x,z};
int ubr(char** args){
    //printf("%s", args[1]);
    int iaa = 0;
    int ido = 0;
    
   while(iaa < strlen(args[1])){
      ido = saaca(so_zavTu, args[1][iaa]);
      (*efpa[ido])(args[1]);
      iaa++;
   }
    return 23;
}
int ubx(char** args){
    int len = strlen(args[2]);
    char ecsauL[len + 1];
    int i0 = 0;
    while(i0 < len){
	ecsauL[i0] = args[2][i0];
	i0++;
    }
    ecsauL[i0] = '\0';
    if(args[1][0] == 'e'){
        eng2zavTu_(ecsauL);
    } 
    if(args[1][0] == 'z'){
	zavTu2eng_(ecsauL);
    }
    printf("%s\n", ecsauL);
    return 0;
}
int ubz(char** args){
    if(args[1][0] == 'i'){
	int iua = get_iaa_(args[2]);
	printf("%d", iua);
    }
    if(args[1][0] == 's'){
	int ior = atoi(args[2]);
	char* sua = get_moL_(ior);
	printf("%s", sua);
    }
    if(args[1][0] == 'a'){
        int i0 = 0;
	int sumo = 0;
	int iT;
	int len = strlen(args[2]);
        while(i0 < len){
            iT = saaca(so_zavTu, args[2][i0]);
	    if(iT >= 0){
		sumo += iT;
	    }
	    i0++;
	}
        printf("%d", sumo);
    }
    return 0;
}
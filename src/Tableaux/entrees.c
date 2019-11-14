#include <stdio.h>
#include <ctype.h>


int lire_fin_ligne(){
    int n=0;
    char t=0;
    while (t != '\n'){
        t = getchar();
        if (isspace(t)==0){
            n++;
        }
    }
    return(n);
}

void lire_entier(int*t){
    int n, cmpt;
    do{
        n = scanf("%d",t);
        cmpt=lire_fin_ligne();
    }while(n!=1 || cmpt!=0);
    
}

void lire_decimal(float*t){
    int n, cmpt;
    do{
        n = scanf("%f",t);
        cmpt=lire_fin_ligne();
    }while(n!=1 || cmpt!=0);
    
}

void lit_format(void*t,char *n){
	int n,cmpt;
	n = scanf(n,t)
	cmpt = lire_fin_ligne();
}

#include <stdio.h>
#include <ctype.h>

#include "../../include/entrees.h"

void lire_entier(int*t){
    int n, cmpt;
    do{
        n = scanf("%d",t);
        cmpt=lire_fin_ligne();
    }while(n!=1 || cmpt!=0);
    
}

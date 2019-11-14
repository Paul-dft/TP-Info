#include <stdio.h>
#include <ctype.h>
#include "../../include/entrees.h"



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

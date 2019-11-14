
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define TAILLE 10


int main ( int argc , char * argv[] ){
    int n,i,j,c1,c2,maj,cour,cand,n2;
    int t[TAILLE];
    scanf("%d",&n);
    srand ( time ( NULL ) );
    for (i=0; i<TAILLE; i++){
        t[i] = rand() % n;
    } 

    maj=1;
    for (i=0; i<TAILLE; i++){
        c2=0;
        for(j=i; j<TAILLE; j++){
            if (i==j){
                c1++;
            } 
        }
        if (c1>c2){
            c1=c2;
            cour=i;
        c1=0;
        }
    if (maj=0){
        cand=cour;
        maj=1;
    }

    if (maj>0){
        if (cand=cour){
            maj++;
        }

        else{
            maj--;
        }
        
    }
    }
    for (i=0; i<TAILLE; i++){
        if (i==cand){
            n2++;
        }
    }
    if (n2>TAILLE / 2){
        printf("L'element majoritaire est %d \n",maj);
        
    }
    else{
        printf("Aucune valeur n'est majoritaire");
    }
            
    return 0;       
}



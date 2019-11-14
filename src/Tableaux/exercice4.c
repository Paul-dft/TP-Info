
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int affiche_tab(unsigned char *t,int n){
    int i;
    for (i=0; i<n; i++){
        printf("%d ;",t[i]);
        printf("\n");
        
    
    
    }
    printf("\n");
    return 0;
}

int additionneur(unsigned char *resultat,unsigned char *retenue,unsigned char n1, unsigned char n2){
    int n=0;
    int somme = n1+ n2+*retenue;
    if ((somme) > 255){
        while ((somme) > 255){
            n++;
            somme = somme - 255;
        }
    
    }
    *resultat = somme;
    *retenue = n;
    return 0;
}

int addition_tableau(unsigned char *t1,unsigned char *t2, unsigned char *t3,int n1,int n2,int n3){
    int i;
    unsigned char ret=0;
    for (i=0; i<n1; i++){
        additionneur(t1+i,&ret,t2[i],t3[i]);
    }
    for (i=0; i<n1; i++){
        printf("%d ;",t1[i]);
        printf("\n");
    }
    return 0;
}

int main ( int argc , char * argv[] ){
    unsigned char t1[10] = {56, 125 ,234, 12, 124, 0};
    unsigned char t2[10] = {34, 131 ,20, 244, 200, 0}; 
    unsigned char t3[10];
    affiche_tab(t1,10);
    affiche_tab(t2,10);
    addition_tableau(t3,t2,t3,10,10,10);
    return 0;
}
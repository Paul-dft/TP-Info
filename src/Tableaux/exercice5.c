#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int affiche_tab(int *t,int n){
    int i;
    for (i=0; i<n; i++){
        printf("%d ;",t[i]);
        printf("\n");
        
    
    
    }
    printf("\n");
    return 0;
}

void echange(int *n1,int*n2){
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

int calcul(int*t,int n){
    int i,min;
    int compteur=0;
    min=t[0];
    for (i=1; i<n; i++){
        if (min > t[i]){
            min=t[i];
            compteur=i;
        }
    }
    return compteur;
}

int tri(int *t,int n){
    int i,n1;
    for (i=0; i<n; i++){
        n1=calcul(t+i,(n-i));
        echange(t+i,t+i+n1);
    }
    return 0;
}


int main ( int argc , char * argv[] ){
    int t[7] = {1,2,7,4,9,24,7};
    int N;
    affiche_tab(t,7);
    tri(t,7);
    affiche_tab(t,7);
    return 0;

}
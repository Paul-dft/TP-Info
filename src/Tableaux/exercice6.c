#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void echange(int *n1,int*n2){
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

void drapeau_hollandais(int *t,int n,int p){
    int i,n1=0,n2=0,j;
    
    for (i=0; i < n-2; i++){
        if (t[p+1]<t[p]){
            echange (p+1,p);
            p++;
            
        }

        if (t[p+1]>t[p]){
            echange (p+,n);
            n2++;
            
        }
    }
}

int main ( int argc , char * argv[] ){
   return 0;

}


#include <stdio.h>
#include <math.h>
#define TAILLE 10000


int crible (int *x )
{
    x[0]=0;
    x[1]=0;
    int i,j;
    for (i=2; i< TAILLE; i++){
        x[i] = 1;
    }

    for (i=0; (i*i)< TAILLE; i++){
        if (x[i]==1){
            for (j=2; i*j<TAILLE; j++){
                x[i*j]=0;
            }
        }
    }
    return (0);
}
int main ( int arge , char * argv[] )
{
    int t[TAILLE];
    int n;
    crible(t);
    while (1){

        scanf("%d", &n);

        if (n<0){
            break;
        }
 
        if (n>= TAILLE){
            continue;
        }
        if (t[n] == 1){
            printf("le nombre est premier");
        }
       
        else{
            printf("le nombre n'est pas premier");
        }
        
    }
    
return 0 ;    
}



#include <stdio.h>
#include <math.h>
#define TAILLE 10000


int crible (int * x )
{
    x[0]=0;
    x[1]=1;
    int i,j;
    for (i=2; i< TAILLE; i++){
        x[i] = 1;
    }

    for (i=2; (i*i)< TAILLE; i++){
        if (x[i]==1){
            for (j=2; i*j<TAILLE; j++){
                x[i*j]=0;
            }
        }
    }

    for (i=2; i<TAILLE; i++){
            if (x[i]==1){
                x[i]=i;
                for (j=(i+i); j<TAILLE; j=j+i){
                    x[j]=i;
                    
                }
            }
        }
    
    return (0);
}
int decompose (int * tab, int a){
    int n1,n2;
    n2=a;
    while (n2!=1){
        n1=tab[n2];
        n2=n2/n1;
        printf("%d ",n1);
        
    }
    return (0);

}
int main ( int arge , char * argv[] )
{
    int t[TAILLE];
    int n, n4, n3;
    crible(t);
    scanf("%d",&n);
    //printf("%d",  t[2]);
    n4=decompose(t,n);
return 0 ;    
}

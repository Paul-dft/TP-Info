#include <stdio.h>

int main ( int argc, char * argv[])
{
    int x[3];
    
    printf("%p\n%p\n%p\n",&x[0],&x[1],&x[2]);
    printf("%ld\n",&x[1] - &x[0]);
    printf("%ld\n",&x[2] - &x[0]);
    printf("%ld\n",&x[2] - &x[1]);
    *(&x[0]+1)=17;
    *(&x[0]+2)=12;
    printf("%d\n%d\n",x[1],x[2]);
    printf("%p\n%p\n%p\n",&x,x,&(x[0]));
    printf("%ld\n%ld\n%ld\n",sizeof(&x),sizeof(x),sizeof(x[0]));

}

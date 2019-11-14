#include <stdio.h>

int main ( int argc, char * argv[])
{
    char x0=0;
    char x1=0;
    char x2=0;
    printf("%p\n%p\n%p\n",&x0,&x1,&x2);
    printf("%ld\n",&x1 - &x0);
    printf("%ld\n",&x2 - &x0);
    printf("%ld\n",&x2 - &x1);
    *(&x0+1)=17;
    *(&x0+2)=12;
    printf("%d\n%d\n",x1,x2);
    *(&x0-4)=17;
    printf("argc=%d\n",argc);
    printf(sizeof(int));
}
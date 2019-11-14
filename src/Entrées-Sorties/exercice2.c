#include <stdio.h>

int main ( int arge , char * argv[] )
{
    int n = '0';
    while (n <= '9')
    {
        printf("%d  %c\n",n,n);
        n++;
    }
}

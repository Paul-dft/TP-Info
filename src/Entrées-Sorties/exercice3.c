#include <stdio.h>

int main ( int arge , char * argv[] )
{
    char n = 'a';
    while (n <= 'z')
    {
        printf("%d\n",n);
        printf("%d\n",'z' - n);
        n++;
    }
}

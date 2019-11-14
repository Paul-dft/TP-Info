#include <stdio.h>

int main ( int arge , char * argv[] )
{
    char c;
    c=getchar();
    
    if ((c>='0')&&(c<='9'))
    {
        printf("c est un chiffre\n");
    }
    if ((c>='a')&&(c<='z'))
    {
        printf("c est une lettre minuscule\n");
    }
    if ((c>='A')&&(c<='Z'))
    {
        printf("c est une lettre majuscule\n");
    }
}

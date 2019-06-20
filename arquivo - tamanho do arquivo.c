#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
    FILE *p;
    int cont = 0;

    if ((p= fopen("dados.txt","r"))==NULL)
        exit(1);
    else
    {
        while(getc(p)!=EOF)
            ;
    }
    printf("%ld",ftell(p));
    return 0;
}

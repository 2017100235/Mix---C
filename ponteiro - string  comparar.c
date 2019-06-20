#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int comparar (char *, char *);

int main ()
{
    char *vet1,*vet2;
    int resp;

    vet1 = calloc(100,sizeof vet1);
    vet2 = calloc(100,sizeof vet2);

    puts("string 1: ");
    gets(vet1); setbuf(stdin,NULL);
    puts("\nstring 2: ");
    gets(vet2); setbuf(stdin,NULL);

    resp = comparar (vet1,vet2);

    if (resp == 0)
        puts("\nStrings iguais\n\n");
    else
        puts("\nstrings diferentes\n\n");

    system("pause");

    return 0;
}

int comparar (char *string_1, char *string_2)
{
    int i=0;
    while(string_1[i] != '\0')
        {
            if (string_1[i] != string_2[i])
             return 1;
            i++;
        }
    return 0;
}

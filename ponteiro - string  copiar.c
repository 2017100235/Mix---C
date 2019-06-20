#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void copiar (char *, char *);

int main()
{
int i;
char *vet1, *vet2;

vet1 = calloc(100,sizeof(vet1));

puts("digite: ");
gets(vet1);

vet2 =calloc(strlen(vet1),sizeof(vet1));

copiar(vet1,vet2);
printf("\n\n%s, %s\n",vet1,vet2);

system("pause");
return 0;
}

void copiar (char *s1, char *s2)
{
    while(*s1 != '\0')
        *s2++ = *s1++;

    *s2++ = '\0';
}

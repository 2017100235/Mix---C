#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int tamanho(char *);

int main ()
{
char string[100];
int resp;

puts("digite: ");
gets(string); setbuf(stdin,NULL);
resp = tamanho(string);

printf("o tamanho e string e %d\n",resp);

system("pause");
return 0;
}

int tamanho(char *p)
{
    int i=0;
    while(*(p+i) != '\0')
        i++;
    return i;
}



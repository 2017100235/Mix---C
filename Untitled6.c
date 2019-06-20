#include<stdio.h>
#include<string.h>
# include <stdlib.h>
int main ()
{
char vet[40];
int i;
puts("digite: ");
gets(vet);
i=memchr(vet,'a',strlen(vet));
printf("%d",i);

return 0;
}

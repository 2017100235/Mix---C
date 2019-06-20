#include<stdio.h>
#include<string.h>
int main ()
{
char s[100];
char *pont;

puts("digite: ");
gets(s);
pont = strlen(s);
while (pont =<s)
{
    printf("%c",*pont--);
}
return 0;
}

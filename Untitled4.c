#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main ()
{
char string_1[40], string_2[40];
int a,b,c,d,e,f,g;
    puts("string 1: ");
    gets (string_1);
    puts("string 2: ");
    gets(string_2);

    a=strlen(string_1);
    b=strlen(string_2);

    c=isalpha(string_1);
    d=isalpha(string_2);

    e=isdigit(string_1);
    f=isdigit(string_2);

    printf("a string 1 : %s \n", string_1);
    printf("a string 1 tem %d caracter \n",a);
    printf("a string 1 em minuscula ' %s ' \n",strlwr(string_1));
    printf("a string 1 em maiucula ' %s ' \n",strupr(string_1));
    if(c == 0)
        printf("a string 1 e alphabetica\n");
        else
        printf("a string 1 nao e alphabetica\n");
     if(e == 0)
        puts("a string 1 e digito");
        else
        puts("a string 1 nao e digito");

    puts("\n\n");
    printf("a string 2 : %s \n", string_2);
    printf("a string 2 tem %d caracter \n",b);
    printf("a string 2 em minuscula ' %s ' \n",strlwr(string_2));
    printf("a string 2 em maiucula ' %s ' \n",strupr(string_2));
        if(d == 0)
        puts("a string 2 e alphabetica");
        else
        puts("a string 2 nao e alphabetica");

     if(f == 0)
        puts("a string 2 e digito");
        else
        puts("a string 2 nao e digito");


    strcat(string_1,string_2);
    printf("\n\na string 1 com a 2 : %s",string_1);

    if ( strcmp(string_1,string_2)==0)
        printf("\nas strings sao iguais\n");
        else
        printf("\nas strings sao diferentes\n");

system("pause");
return 0;
}

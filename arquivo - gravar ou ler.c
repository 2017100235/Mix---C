#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void gravar();
void exibir();
FILE *p;

int main ()
{
int resp;

printf("Gravar - 1\n Exibir - 2 :");
scanf("%d",&resp);

switch (resp)
    case 1:
        gravar();
    break;

    case 2:
        exibir();
    break;

    default
        puts("valor errado");

return 0;
}

void gravar()
{
    char string[50];
    int i;

    p = fopen("lets_go.txt","a+");

    if (p == NULL)
    {
        puts("erro 404");
        exit(1);
        system("pause");
    }
    else
    {
        puts("digite: ")
        gets(string);setbuf(stdin,NULL);

        for(i=0;i<strlen(string);i++)
            putc(string[i],p);
    }
    fclose(p);

}

void exibir()
{
    char c;
     p = fopen("lets_go.txt","a+");

    if (p == NULL)
    {
        puts("erro 404");
        exit(1);
        system("pause");
    }
    else
    {
        while((c=getc(p))!=EOF)
            printf("%c",c);
        fclose(p);
    }

}

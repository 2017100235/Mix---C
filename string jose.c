 #include<stdio.h>
#include<string.h>
int main ()
{
char vet[80];
int a=0,b=0,c=0;

    puts("digite: ");
    gets(vet);
    a=strlen(vet);
    for(b=0;b<a;b++)
    {
        if (vet[b]== 'a'|| vet[b]=='A')
        {
            c++;
            vet[b] = 'b';
        }
    }
    printf(" tem %d  elementos 'a' ou 'A'\n",c);
    printf("nova string : ' %s '\n\n\n",vet);
return 0;
}

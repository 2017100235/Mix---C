#include<stdio.h>
#include<string.h>

typedef struct
{
char nome;
int qnt;
float custo,preco,lucro;
}cad;

int lucros (float ,float , int );

int main()
{
cad vet[5];
int i;
for(i=0;i<5;i++)
{
    puts("nome: "); gets(&vet[i].nome);
    puts("preco: "); scanf("%f",&vet[i].preco);
    puts("quantidade: "); scanf("%d",&vet[i].qnt);
    puts("custo: "); scanf("%f",&vet[i].custo); setbuf(stdin,NULL);
    vet[i].lucro = lucros(vet[i].custo,vet[i].preco,vet[i].qnt);
}
return 0;
}
int lucros (float c,float p, int q)
{
    return ((p+c)*q);
}

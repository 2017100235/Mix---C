#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct registro{
char nome[40];
float nota;
};
int main ()
{
struct registro aluno[5];
float media = 7;
int cont,i;

for (i=0;i<5;i++)
{
  printf("nome: ");
  gets(aluno[i].nome);setbuf(stdin,NULL);
  printf("\nnota: ");
  scanf("%f",&aluno[i].nota);setbuf(stdin,NULL);
}
system("cls");
puts("alunos com media igual/superior a 7: \n");
for (i=0;i<5;i++)
{
    if (aluno[i].nota>= media)
        printf("%s nota %.2f\n",aluno[i].nome,aluno[i].nota);
}
system("pause");
return 0;
}

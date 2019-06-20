#include<stdio.h>

 typedef struct reg
{
    char nome[40];
    int nota[3];
    float m;
};
void media(int *);
int main ()
{
struct reg vet[3];
    int *p;
    int i,j;

    for (i=0;i<3;i++)
    {
        printf("nome: ");
        gets(vet[i].nome);
        for (j=0;j<3;j++)
            {
                printf("nota %d: ",j+1);
                scanf("%d",&vet[i].nota[j]);
            }
    }
    p=&vet[0];
    media(p);

return 0;
}
void media(int *p)
{
    int a;
    for(a=0;a<3;a++)
    {
            (*p).m += (*p).nota[a];
    }
    for(a=0;a<3;a++)
    {
        printf("%p \n",(*p).m/3);
    }
}

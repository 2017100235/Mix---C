#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

typedef struct
{
    char nome[30];
    char sexo;
    int id;
}cad;

void sexo(cad *v);
void idade(cad *v);

int main ()
{
    cad vet[3];
    int i,resp;
    bool achou;

    for(i=0;i<3;i++)
    {
        printf("\nNome: "); gets(vet[i].nome); setbuf(stdin,NULL);
        printf("\nSexo: [M/F]"); scanf("%c", &vet[i].sexo); setbuf(stdin,NULL);
        printf("\nIdade: "); scanf("%d", &vet[i].id); setbuf(stdin,NULL);
    }

    system("cls");
    achou = true;

    while (achou)
    {
            printf("\n1-Buscar por sexo\n2-Buscar por idade\n3-Sair\n ");
            scanf("%d",&resp);
                switch (resp)
                {
                    case 1:
                        sexo(vet);
                        break;

                    case 2:
                        idade(vet);
                        break;

                    case 3:
                        achou = false;
                        puts("Saindo\n");
                        break;

                    default:
                        puts("Numero invalido!!!");
                }
    }

    system("pause");
    return 0;
}

void sexo(cad *v)
{
    int i;
    char sex;

    setbuf(stdin,NULL);
    printf("Qual sexo? [M/F]:");scanf("%c",&sex);
        for(i=0;i<3;i++)
        {
            if (tolower(v[i].sexo) == tolower(sex))
                printf("%s , %d anos\n", v[i].nome, v[i].id);
        }
    system("pause");
}

void idade(cad *v)
{
    int idade, i;

    printf("Qual idade?"); scanf("%d",&idade);
        for(i=0;i<3;i++)
        {
            if (v[i].id == idade)
                printf("%s ,%d anos, sexo %c\n", v[i].nome, v[i].id,v[i].sexo);
        }
    system("pause");
}

/*Desenvolva um programa que receba o nome, sexo e idade de dez pessoas. O programa deve exibir um menu para busca por sexo ou por idade.
1 - Sexo
2 - Idade
3 - Sair*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
struct cadastro{
    char nome [20],sexo,resultado;
    int idade;
};
int main()
{
    char resultado;
    int idadebusca,i;
    char sexobusca;
    bool achei;
    struct cadastro pessoa[10];

    for (i=0;i<10;i++)
    {
        printf("Digite o nome:");gets(pessoa[i].nome); setbuf(stdin,NULL);
        printf("Digite o sexo (1)Masculino ou (2)Feminino:"); scanf("%c",&pessoa[i].sexo);
        printf("Digite a idade:"); scanf("%d",&pessoa[i].idade);setbuf(stdin,NULL);
    }
    achei = true;
    while(achei)
        {
            printf("Busca:(1)Idade (2)Sexo (3)Sair\n"); scanf("%c",&resultado);

            if(resultado=='1')
            {
                printf("Digite a idade para buscar: ");
                scanf(" %d",&idadebusca);
                    for (i=0;i<10;i++)
                    {
                        if (pessoa[i].idade==idadebusca)
                            printf("Nome: %s Idade: %d Sexo:%c",pessoa[i].nome,pessoa[i].idade,pessoa[i].sexo);
                    }
            }

             if (resultado=='2')
             {
                printf("Filtrar qual sexo (1)Masculino (2)Feminino");
                scanf(" %c",&sexobusca);
                    for (i=0;i<10;i++)
                    {
                        if(sexobusca == pessoa[i].sexo)
                            printf("Nome:%s idade:%d Sexo:%c\n",pessoa[i].nome,pessoa[i].idade,pessoa[i].sexo);
                    }
             }

            if (resultado == '3')
            {
                printf("\n Saindo do programa");
                achei = false;
            }

            system("pause");
            system("cls");
    }
    return 0;
}

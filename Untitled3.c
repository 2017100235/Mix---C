#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct reg
{
    char nome[40];
    float salario, salario_liquido;
    float desconto[3];
};
struct reg_2
{
    char name[40];
};

int main()
{
  struct reg funcionario[4];
  struct reg_2 funci[2];
  float sal_bruto,ma_sal_liquido,me_sal_liquido;
  int i,j;

  setlocale(LC_ALL,"portuguese");
  for(i=0;i<4;i++)                  // cadastro do funcionario
  {
      setbuf(stdin,NULL);
      printf("Nome: ");
      gets(funcionario[i].nome);setbuf(stdin,NULL);

      printf("\nSalario bruto: ");
      scanf("%f",&funcionario[i].salario);setbuf(stdin,NULL);

      sal_bruto+=funcionario[i].salario;

          for(j=0;j<3;j++)
          {
            setbuf(stdin,NULL);
            printf("\n%dº desconto: ",j+1);
            scanf("%f",&funcionario[i].desconto[j]);
          }
  }
    for(i=0;i<4;i++)                // calculo do salario liquido
    {
        funcionario[i].salario_liquido=funcionario[i].salario;
        for(j=0;j<3;j++)
            {
            funcionario[i].salario_liquido-=funcionario[i].desconto[j];
            }
    }
    ma_sal_liquido=funcionario[0].salario_liquido;
    strcpy(funci[0].name,funcionario[0].nome);

    me_sal_liquido=funcionario[1].salario_liquido;
    strcpy(funci[1].name,funcionario[0].nome);

    for(i=1;i<4;i++)   // Quem possui o maximo é o minimo de salario liquido
    {
        if (funcionario[i].salario_liquido > ma_sal_liquido)
            {
                ma_sal_liquido=funcionario[i].salario_liquido;
                strcpy(funci[0].name,funcionario[i].nome);
            }
        if (funcionario[i].salario_liquido < me_sal_liquido)
            {
                me_sal_liquido=funcionario[i].salario_liquido;
                strcpy(funci[1].name,funcionario[i].nome );
            }
    }
    printf("\nO Sr.(a) %s tem o maior salario liquido, %.2f R$",funci[0].name,ma_sal_liquido);
    printf("\nO Sr.(a) %s tem o menor salario liquido, %.2f R$",funci[1].name,me_sal_liquido);
    printf("\nA media de salario bruto é de %.2f R$\n",sal_bruto/4);
    system("pause");
    return 0;
}

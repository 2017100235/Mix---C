#include<stdio.h>
#include<locale.h>
int main ()
{   
	setlocale(LC_ALL,"portuguese");
    char nome[50],nome_sma[50],nome_sme[50];
    char resp;
    float soma_sb=0,salario_b=0,salario_l=0,maior_sl=0,menor_sl=0,d1=0,d2=0,d3=0;
    int cont=0;
                printf("Nome: "); gets(nome);setbuf(stdin,NULL);
                printf("\nSalario Bruto: "); scanf("%f",&salario_b);setbuf(stdin,NULL);
                printf("\n1º Desconto: "); scanf("%f",&d1);setbuf(stdin,NULL);
				printf("\n2º Desconto: "); scanf("%f",&d2);setbuf(stdin,NULL);
                printf("\n3º Desconto: "); scanf("%f",&d3);setbuf(stdin,NULL);
                salario_l = (salario_b-d1-d2-d3);	  // salario liquido
                maior_sl = salario_l;                // maior salario liquido
                menor_sl = salario_l;               // menor salario liquido
                soma_sb += salario_b;			   // soma de salario bruto
                strcpy(nome_sma,nome);		      // nome_sma = nome da pessoa com o maior salario
                strcpy(nome_sme,nome);		   	 // nome_sme = nome da pessoa com o menor salario
                cont ++;
	while (1)
	{   
        printf("\nQuer continuar [s/n]"); scanf("%c",&resp);   
            if (tolower(resp)=='s')
            {	
            	system("cls");
            	setbuf(stdin,NULL);
		        printf("\nNome: "); gets(nome);setbuf(stdin,NULL);
                printf("\nSalario Bruto: "); scanf("%f",&salario_b);setbuf(stdin,NULL);
                printf("\n1º Desconto: "); scanf("%f",&d1);setbuf(stdin,NULL);
				printf("\n2º Desconto: "); scanf("%f",&d2);setbuf(stdin,NULL);
                printf("\n3º Desconto: "); scanf("%f",&d3);setbuf(stdin,NULL);
                salario_l = (salario_b-d1-d2-d3);
		            if (salario_l > maior_sl)
					{
		                maior_sl = salario_l;
						strcpy(nome_sma,nome);	
					}
		            if (salario_l < menor_sl)
					{
		                menor_sl = salario_l;
		            	strcpy(nome_sme,nome);		   
		            }
		        soma_sb += salario_b; 
		        cont++; 
            }
            else 
                break;
    }
    printf("\nO funcionario(a) %s tem o maior salario liquido R$ %.2f",nome_sma,maior_sl);
    printf("\nO funcionario(a) %s tem o menor salario liquido R$ %.2f",nome_sme,menor_sl);
    printf("\nA media dos salarios brutos é = R$ %.2f",((soma_sb)/cont));
    getch();
    return 0;
}

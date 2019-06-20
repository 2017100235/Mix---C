#include<stdio.h>
#include<locale.h>
main()
{
	char nome,sexo,M,m,F,f;
	float sal,n_sal;
	setlocale(LC_ALL,"portuguese");
	printf("-----------Reajuste Salarial---------- \n");
	printf("Digite o seu nome \n");
	scanf("%c",&nome);
	printf ("escolha o seu sexo \n");
	printf("[M] Masculino / [F] Feminino \n");
	scanf("%c",&sexo);
	printf("digite o seu salario \n");
	scanf("%f",sal);	
		if (sexo = M || m)
		{
		n_sal = sal*1.10;
		printf("Ola %c !, seu novo salario é, %.3f", nome,n_sal);
		}
		else if (sexo = F||f)
		{
		n_sal = sal*1.20;
		printf("Ola %c !, seu novo salario é, %.3f", nome,n_sal);	
		}
		else 
		printf("Desculpe, mais você digitou a opção errada!, tente novamente.");
	system("pause");	
}

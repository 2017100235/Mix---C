#include<stdio.h>
#include<locale.h>
main()
{
float n1,n2;	
setlocale(LC_ALL,"portuguese");
	printf("Digite 1 nùmero inteiro: ");
	scanf("%f",&n1);
	printf("Digite mais 1 nùmero inteiro: ");
	scanf("%f",&n2);
	printf("As operações aritmeticas basicas com os números '%.2f' é '%.2f' são :\n",n1,n2);
	printf("A soma de '%.2f' + '%.2f' = '%.2f'\n", n1,n2,n1+n2);
	printf("A subtração de '%.2f' - '%.2f' = '%.2f'\n",n1,n2,n1-n2);
	printf("A multiplicação de '%.2f' * '%.2f' = '%.2f'\n", n1,n2,n1*n2);
	printf("A divisão de '%.2f' / '%.2f' = '%.2f'\n", n1,n2,n1/n2);
system("pause");
}

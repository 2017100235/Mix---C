#include<stdio.h>
#include<locale.h>
main()
{
float n1,n2;	
setlocale(LC_ALL,"portuguese");
	printf("Digite 1 n�mero inteiro: ");
	scanf("%f",&n1);
	printf("Digite mais 1 n�mero inteiro: ");
	scanf("%f",&n2);
	printf("As opera��es aritmeticas basicas com os n�meros '%.2f' � '%.2f' s�o :\n",n1,n2);
	printf("A soma de '%.2f' + '%.2f' = '%.2f'\n", n1,n2,n1+n2);
	printf("A subtra��o de '%.2f' - '%.2f' = '%.2f'\n",n1,n2,n1-n2);
	printf("A multiplica��o de '%.2f' * '%.2f' = '%.2f'\n", n1,n2,n1*n2);
	printf("A divis�o de '%.2f' / '%.2f' = '%.2f'\n", n1,n2,n1/n2);
system("pause");
}

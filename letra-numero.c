#include<stdio.h>
#include<locale.h>
main()
{int n;
	setlocale(LC_ALL,"portuguese");
		printf("Digite um n�mero: ");
		scanf("%d",&n);
		printf("O n�mero digitado '%d' corresponde � letra '%c' ASCII \n ", n, (char)n);	
	system("pause");
}

#include<stdio.h>
#include<locale.h>
main()
{int n;
	setlocale(LC_ALL,"portuguese");
		printf("Digite um número: ");
		scanf("%d",&n);
		printf("O número digitado '%d' corresponde à letra '%c' ASCII \n ", n, (char)n);	
	system("pause");
}

#include<stdio.h>
#include<locale.h>
main()
{
	int idade;
	setlocale(LC_ALL,"portuguese");
	printf("digite sua idade ");
	scanf("%d",&idade);
		if (idade < 18)
		printf("a pessoa � menor de idade \n" );
			if (idade>=18 && idade <=65)
			printf("A pessoa � adulta ! \n");
				if (idade > 65)
				printf("Pessoa � idosa \n!");
	system("pause");
}

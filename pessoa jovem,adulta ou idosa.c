#include<stdio.h>
#include<locale.h>
main()
{
	int idade;
	setlocale(LC_ALL,"portuguese");
	printf("digite sua idade ");
	scanf("%d",&idade);
		if (idade < 18)
		printf("a pessoa é menor de idade \n" );
			if (idade>=18 && idade <=65)
			printf("A pessoa é adulta ! \n");
				if (idade > 65)
				printf("Pessoa é idosa \n!");
	system("pause");
}

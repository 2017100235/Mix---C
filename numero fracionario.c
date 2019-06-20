#include<stdio.h>
#include<locale.h>
main()
{float nr;long int ni;
	setlocale(LC_ALL,"portuguese");
		printf("Digite um número real qualquer: "); 
		scanf("%f",&nr);
			ni = nr;
		printf(" A parte inteira do número digitado é = %ld \n", ni);
		printf(" A parte fracionaria do número digitado é = %.2f \n",nr - ni);
	system("pause");
}

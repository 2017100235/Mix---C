#include<stdio.h>
#include<locale.h>
main()
{float nr;long int ni;
	setlocale(LC_ALL,"portuguese");
		printf("Digite um n�mero real qualquer: "); 
		scanf("%f",&nr);
			ni = nr;
		printf(" A parte inteira do n�mero digitado � = %ld \n", ni);
		printf(" A parte fracionaria do n�mero digitado � = %.2f \n",nr - ni);
	system("pause");
}

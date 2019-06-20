#include<stdio.h>
#include<locale.h>
main()
{
	float n1,n2,n3,media;
	setlocale(LC_ALL,"portuguese");
		printf("---------media de notas------------ \n");
		printf("Digite sua 1ª nota \n");
		scanf("%f",&n1);
		printf("Digite sua 2ª nota \n");
		scanf("%f",&n2);
		printf("Digite sua 3ª nota \n");
		scanf("%f",&n3);
		media = (n1+n2+n3)/3;
			if (media>=7)
			{
			printf("O aluno esta aprovado \n");
			printf("Sua media é %.2f \n", media);
			}
			else
			{
			printf("O aluno esta reprovado \n");
			printf("Sua media é %.2f \n", media);
			}
		system ("pause"); 
}

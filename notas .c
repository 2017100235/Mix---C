#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main ()
{ 
int m;	
char p; 
	setlocale(LC_ALL,"portuguese");
		printf("=========================\n");
		printf("	 M�DIA DE NOTAS      \n");
		printf("=========================\n");
		printf("Quantas mat�rias voc� cursou ?  \n");
			scanf("%d",&m);		/*n�mero de materias*/
		printf("As mat�rias tinham peso? \n");
		printf("sim [s] ou n�o [n]");
			scanf("%c",&p);		/*peso de mat�ria*/
		printf("ola como vai vc \n");
	system("pause");
}

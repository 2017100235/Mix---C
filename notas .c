#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main ()
{ 
int m;	
char p; 
	setlocale(LC_ALL,"portuguese");
		printf("=========================\n");
		printf("	 MÉDIA DE NOTAS      \n");
		printf("=========================\n");
		printf("Quantas matérias você cursou ?  \n");
			scanf("%d",&m);		/*número de materias*/
		printf("As matérias tinham peso? \n");
		printf("sim [s] ou não [n]");
			scanf("%c",&p);		/*peso de matéria*/
		printf("ola como vai vc \n");
	system("pause");
}

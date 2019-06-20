#include<stdio.h>
#include<locale.h>
main()
{char l;
	setlocale(LC_ALL,"portuguese");
		printf("digite uma letra: ");
		scanf("%c",&l);
		printf("A letra '%c', corrresponde o número '%d' ASCII",l,(int) l);
		system("pause");
}

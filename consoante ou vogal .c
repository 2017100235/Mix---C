#include<stdio.h>
#include<locale.h>
main()
{char letra;
	setlocale(LC_ALL,"portuguese");
		printf("digite uma letra, para saber se é consoante ou vogal: ");
		scanf("%c",&letra);
		switch (letra){
			case 'a': printf("Esta letra '%c', é vogal \n",letra);break;
			case 'e': printf("Esta letra '%c', é vogal \n",letra);break;
			case 'i': printf("Esta letra '%c', é vogal \n",letra);break;
			case 'o': printf("Esta letra '%c', é vogal \n",letra);break;
			case 'u': printf("Esta letra '%c', é vogal \n",letra);break;
			default: printf("Esta letra '%c', é consoante \n", letra);break;
		}
	system("pause");
}

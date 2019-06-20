#include<stdio.h>
#include<locale.h>
main()
{	unsigned long int t,h,m,s,d,mes,a;
setlocale(LC_ALL,"portuguese");
	printf("Digite o tempo em segundos!\n");
	printf("e´saiba quantos anos, mesês, dias, horas, minutos é segundos corresponde: ");	
	scanf("%lu",&t);
	printf("\n\n");
	a= t/31104000;
	mes= (t%3110400)/2592000;
	d= ((t%3110400)%2592000)/86400;
	h= (((t%3110400)%2592000)%86400)/3600; 
	m= ((((t%3110400)%2592000)%86400)%3600)/60;
	s= t% 60;
	printf("O tempo digitado corresponde à \n");
	printf(" Ano* = %lu 		*365 dias\n",a);
	printf(" Mês* = %lu 		*30 dias\n ",mes);
	printf(" Dias = %lu dias.\n",d);
	printf(" Horas = %lu h. \n", h);
	printf(" Minutos = %lu min. \n",m);
	printf(" Segundos = %lu s.\n",s);
system("pause");
}


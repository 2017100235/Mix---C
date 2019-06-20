#include<stdio.h>
#include<locale.h>
float celsius(float);
main()
{
setlocale(LC_ALL,"portuguese");
	float f,c;
	printf("Digite uma temperatura em Fahenheit: ");
	scanf("%f",&f);
	c = celsius(f);
	printf("O valor de %.1f Grausº em Fahenheit corresponde a %.1f Grausº em celsius",f,c);
	return 0;
}
float celsius(float fahen)
{
	float x;
	x= (fahen-32)*(5.0/9.0);
	return x;
}

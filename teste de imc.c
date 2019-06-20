#include<stdio.h>
#include<locale.h>
main()
{float p,h,imc;
	setlocale(LC_ALL,"portuguese");
		printf("----------------------\n");
		printf("   calculo de IMC \n");
		printf("----------------------\n");
		printf("digite o seu peso: ");
		scanf("%f",&p);
		printf("Digite a sua altura: ");
		scanf("%f",&h);
		imc=p/(h*h);
		printf("Seu IMC é %.2f \n", imc);
			if (imc<17)
				printf("Você está muito abaixo do seu peso ideal ! \n");
				else if (imc>=17 && imc<=18.5) 
					printf("Você esta abaixo do seu peso ideal ! \n");
					else if (imc>=18.5 && imc<25)
						printf("Parabens, você está no seu peso ideal ! \n");
						else if (imc>=25 && imc<30)
							printf("Opa, estamos com um caso de sobrepeso ! \n");
							else if (imc>=30 && imc<35)
								printf("Cuidado este é um caso de obsidade grau 1 ! \n");
								else if (imc>=35 && imc<40)
									printf("Atenção, estamos com um quadro de obsidade grau 2 !\n");
									else if (imc>=40)
										printf("ligue para, 'funeraria só falta você', e encomende seu caixão ! \n");
					
	system("pause");
}

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
		printf("Seu IMC � %.2f \n", imc);
			if (imc<17)
				printf("Voc� est� muito abaixo do seu peso ideal ! \n");
				else if (imc>=17 && imc<=18.5) 
					printf("Voc� esta abaixo do seu peso ideal ! \n");
					else if (imc>=18.5 && imc<25)
						printf("Parabens, voc� est� no seu peso ideal ! \n");
						else if (imc>=25 && imc<30)
							printf("Opa, estamos com um caso de sobrepeso ! \n");
							else if (imc>=30 && imc<35)
								printf("Cuidado este � um caso de obsidade grau 1 ! \n");
								else if (imc>=35 && imc<40)
									printf("Aten��o, estamos com um quadro de obsidade grau 2 !\n");
									else if (imc>=40)
										printf("ligue para, 'funeraria s� falta voc�', e encomende seu caix�o ! \n");
					
	system("pause");
}

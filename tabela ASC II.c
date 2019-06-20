#include<stdio.h>
#include<locale.h>
main()
{
int i=1,j=20; char resp;
setlocale(LC_ALL,"portuguese");
			for (i;i<=j;i++)
			{
			printf("%3dº --> %c \n",i,(char)i);
					if(i==j)
					{
					printf("Quer continuar, para ver mais 20 caracter ? \n");
					printf("[S/N] S = sim /  N = não ");
					scanf(" %c", &resp);
							if ((resp=='s')||(resp=='S'))
									j=j+20; 
							else 
								break;			    
					}
			}
return 0;
}

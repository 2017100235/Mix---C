#include<stdio.h>
main()
{
	int n,i,j,letra;
	printf("Digite um numero: ");
	scanf("%d",&n);
		for (i=1;i<=n;i++)
		{
			letra = 64 + i;
			for (j=1;j<=i;j++)
				printf("%c",(char)letra);
		putchar('\n');
		} 
	return 0;
}

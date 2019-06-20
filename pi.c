#include<stdio.h>

int main ()
{   
    float i,n,pi;
	for ( i=1,n=3;i<=1000;i++,n+2)
		pi= 4-((4/n)+(4/(n+2)));
		swith (i)
		{
			case 10;
				printf("%10.f",pi); 
			case 100;
				printf("%10.f",pi);
			case 250;
				printf("%10.f",pi);
			case 500;
				printf("%10.f",pi);
			case 1000;
				printf("%10.f",pi); break;
		}
	return 0;
}


#include<stdio.h>
int main()
{
    int n, f;
    scanf("%d",&n);
   	f= (  (  (((1+(5^(1/2)))/2)^(n)) - (((1-(5^(1/2)))/2)^(n)) )  /((5)^(1/2)));
    printf("%.1d\n",f);
    return 0;
}


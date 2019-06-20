#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
int i;
int *vet ,*p = &i;

vet = calloc(10,sizeof (vet));

    for(i=0;i<10;i++)
        vet[(*p)] = (*p)+1;

    for(i=0;i<10;i++)
        printf("%d\n",vet[(*p)]);

system("pause");
return 0;
}

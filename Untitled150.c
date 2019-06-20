#include<stdio.h>
void exb (int v[])
{
int i;
for (i=0;i<3;i++)
    printf("%d\n",v[i].a);
};

typedef struct
{
    int a;

}cont ;

int main ()
{
cont vet[3];
int i;
for (i=0;i<3;i++)
{
    scanf("%d",&vet[i].a);
}
puts("");
exb (vet);
puts("");
system("pause");
return 0;
}

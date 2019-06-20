#include<stdio.h>
void troca (int *,int *);
int main ()
{
int a[2][2];
int i,j;
for (i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&a[i][j]);
    }
}


return 0;
}
void troca (int *p_a,int *p_b)
{
    int t;
    t = *p_a;
    *p_a = *p_b;
    *p_b = t;
}

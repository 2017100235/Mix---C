#include <stdio.h>
void exibir (int *);
int main(){
   int vet[5];
   int i;
   int *ptr = vet;
   for (i=0;i<5;i++)
   {
           scanf("%p",(ptr+i));}
puts("");
        exibir (ptr);
    return 0;
}
void exibir (int *ponteiro)
{
        int i;
        for(i=0;i<5;i++)
        {
                printf("%d\n",*(ponteiro ++));}
}

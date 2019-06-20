#include<stdio.h>
typedef struct reg_preco
{
    float preco;
    int vendas;
}reg_preco;
int main()
{
 reg_preco a,b;

puts("preco das vendas A ");
scanf("%f",&a.preco);
puts("total de vendas A ");
scanf("%d",&a.vendas);

puts("preco das vendas B");
scanf("%f",&b.preco);
puts("total de vendas B ");
scanf("%d",&b.vendas);

printf("total de vendas: %.2f, total do preco: %.2f",(a.vendas*a.preco + b.vendas*b.preco), (a.preco+b.preco));

return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<locale.h>

void exibir();
void choco();
void linha();
void asteristico();

int main ()
{

char vet[10];
setlocale (LC_ALL,"portuguese");

linha();
puts("              Mensagem                      ");
linha();

printf("Tenho uma mensagem muito especial pra voc�, \nMas antes seu 1� nome por favor :-)    "); gets(vet);


if (strcmp(strlwr(vet),"natasha")==0)
    {
    system("cls");
    linha();
    puts("       De um fofo pra outra fofa  ");
    linha();

    printf("\nOiiiee Natasha tenho algo  pra vc rsrs \n   :-)\n\n\n ");
    system("pause");
    printf("\n\n^.^ "); getch();
    puts("Sabe.........");getch();
    puts("Tenho algo que quero te falar.......... \n\n");getch();
    asteristico();
    puts("*   Desde o dia em que eu te encontrei.                                                   *");getch();
    puts("*   Me lembrei deste lindo lugar .                                                        *");getch();
    puts("*   Que na minha inf�ncia era especial para mim.                                          *");getch();
    puts("*   Quero sabeeeerr , se comigo voce quer vir jogaaarrr.                                  *");getch();
    puts("*   Se me der a m�o eu te levarei, por um caminho cheio de levels  up . rsrs              *"); getch();
    puts("*   Voc� pode at� n�o perceber mais o meu cora��o se AGARROU  POR VOCE.                   *");getch();
    puts("*   Por que ele precisa de algu�m ,pra lhe mostrar o amor que eu posso lhe daaaar .....   *");
    puts("*   rsrsrs                                                                                *");
    asteristico();getch();
    exibir(); getch ();
    choco();
}

else {
linha();
linha();
printf("\n*Querido(a) , %s ",vet);
printf("\n*O caminho da verdadeira vitoria,");
printf("\n*� sempre �rduo e cheio de surpresas desafiadoras,");
printf("\n*Que determinar�o o desenvolvimento de nosso potenciais inatos,");
printf("\n*Garantindo  a evolu��o do nosso esp�rito eterno.");
printf("\n*A cada minuto voce tem a liberdade de escolher o que quiser,");
printf("\n*Lembre - se, tudo na vida tem seu pre�o.\n\n\n");
}
system("pause ");
return 0;
}

void exibir ()
{
    printf("\n \t\t                   Now,"   );
    printf("\n \t\t                  sAbe,"   );
    printf("\n \t\t                   Tenho"  );
    printf("\n \t\t                   Hoje"   );
    printf("\n \t\t                 umA"      );
    printf("\n \t\t                pesSoa"    );
    printf("\n \t\t                   Hiper"  );
    printf("\n \t\t                  bAcana\n");
}

void choco ()
{
    printf("\n \t\t|\\        * *************** *         /|");
    printf("\n \t\t| \\    * �    Vc merece,    �  *     / |");
    printf("\n \t\t|..\\ *   �                  �    *  /..|");
    printf("\n \t\t|   O     �   Chocolate !!!  �     O   |");
    printf("\n \t\t|../  *   �                  �    * \\..|");
    printf("\n \t\t| /     * �   Chocolate !!!  �  *    \\ |");
    printf("\n \t\t|/         * *************** *        \\|");
    puts("");
    printf("       \t\t <3              <3              <3\n\n") ;
}

void linha()
{
  puts("  ==========================================");
}
void asteristico()
{
    puts("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
}

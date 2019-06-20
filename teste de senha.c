#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<locale.h>
#include<conio.h>
void password (char *,char *,char *,char *);
void redefinir_senha(char *,char *);
int main ()
{
    setlocale(LC_ALL,"portuguese");
    char senha[]= "juan10</>";
    char resp[30],novasenha[30],usuario[30];
    char *p_resp=resp,*p_senha=senha;
    char *p_novasenha=novasenha,*p_usuario=usuario;

        printf("Usuario: ");
        gets(usuario);
        printf("Senha: ");
        gets(resp);
        password(p_resp, p_senha,p_novasenha,p_usuario);
    return 0;
}
void password (char *p_resp,char *p_senha,char *p_novasenha,char *p_usuario)
{
    bool positivo = true;
    int i=0;
    while (positivo)
    {
        if (*p_resp != *p_senha)
              {
                  i++;
                  if (i<=2)
                    {
                        system("cls");
                        puts("!!!  Resposta errada  !!!");
                        printf("Você só tem mais %d tentativa\n",3-i);
                        printf("\nDigite novamente:  ");
                        gets(p_resp);
                    }
                  else
                    {
                            system("cls");
                            puts("Conta bloqueada!!!");
                            positivo = false;
                            redefinir_senha(p_novasenha,p_usuario);
                    }
              }
            else
            {
                puts("Resposta certa!!!");
                positivo = false;
                getch();
            }
    }
}
void redefinir_senha(char *p_newsenha, char *p_usuario)
    {
        char resp_2[3];
        printf("Digite a nova senha: ");
        gets(p_newsenha);
        printf ("sua nova senha é : ' %s ' ",p_newsenha);
        puts("Esta correta? [sim/não]");
        gets(resp_2);
            if (strcmp(strlwr(resp_2),"sim")==0)
            {
                printf("Usuario: %s, Senha: %s",p_usuario,p_newsenha);
                printf("\n\ndigite algo para finalizar a execução\n");
                getch();
            }
            else
                redefinir_senha(p_newsenha,p_usuario);
    }

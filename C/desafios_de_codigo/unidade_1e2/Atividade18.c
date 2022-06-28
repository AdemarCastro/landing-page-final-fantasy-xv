/******************************************************************************

Atividade 18: Login e Senha.

*******************************************************************************/

#include <stdio.h>

int main (void)
{
    int valor, i, senha2, senha1 = 1234;
    char login1[]="admin";
    char login2;            
    
    while (valor != 3){
        
    printf ("------------------------------------------------------------\n");
    printf ("Digite um dos números para acessar as opções.\n");
    printf ("Acessar login e senha: 1\n");
    printf ("Trocar senha: 2\n");
    printf ("Sair: 3\n");
    printf ("------------------------------------------------------------\n");
        
        printf ("Digite um número de 1 a 3 para acessar o menu: ");
        scanf ("%d", &valor);
        
        switch (valor){
            
            case 1:
            for (i = 0; i <= 3; i++){
            printf ("Digite seu login: ");
            scanf ("%d", &senha2);
                if (senha1 == senha2){
                    printf ("Acesso concedido.\n");
                    break;
                } if (i >= 3){
                    printf ("Atingiu o limite de tentativas de login.\n");
                } else{
                    printf ("Acesso negado.\n");
                }
            }
            break;
            
            case 2:
            printf ("\nDigite sua nova senha: ");
            scanf ("%d", &senha1);
            break;
            
            case 3:
            printf ("Você saiu.\n");
            break;
            
            default:
            printf ("\nTente de novo.\n");
            break;
        }
    }
    
    return 0;
}       

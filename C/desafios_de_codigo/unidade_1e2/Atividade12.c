/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022/1

3) Imprimir uma matriz diagonal com "1" na diagonal principal e "0" nas outras
posições. Considere uma matriz quadrada 2x2.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int senha = 123;
    int senha_digitada, counter = 0;
    
    printf ("Digite sua senha: ");
    scanf ("%d", &senha_digitada);
    
    while (senha != senha_digitada && counter < 5){
        printf ("Digite sua senha: ");
        scanf ("%d", &senha_digitada);
        counter++;
    }
    if (counter < 5 && senha == senha_digitada){
            printf ("Acesso autorizado!");
        } else{
            printf ("Acesso bloqueado!");
        };
    return 0;
} 
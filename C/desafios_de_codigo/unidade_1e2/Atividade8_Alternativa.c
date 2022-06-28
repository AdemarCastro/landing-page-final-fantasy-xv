/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022/1

2) Imprimir de 1 a 100 na tela sendo que apenas 10 números por linha.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    
    for (i = 1; i < 101; i++){
        
        if (i == 10 || i == 20 || i == 30 || i == 40 || i == 50 || i == 60 || i == 70 || i == 80 || i == 90) {
            printf ("%4d\n", i);
        } else {
            printf ("%4d",i);
        }
    }
    
    return 0;
} 
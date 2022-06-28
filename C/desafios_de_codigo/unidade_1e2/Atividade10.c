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
    int i, j;
    
    for (i = 0; i <= 10; i++){
        for (j = 0; j < 20; j++){
            printf ("\t(%d,%d)", i+1, j+1);
        }
        printf("\n");
    }
    
    
    return 0;
} 
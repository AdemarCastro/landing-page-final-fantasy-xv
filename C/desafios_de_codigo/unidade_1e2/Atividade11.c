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
    
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5){
                printf ("1");
            } else {
                printf ("0");
            }
        }
        printf("\n");
    }
    
    
    return 0;
} 
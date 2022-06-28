/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022/1

2) Imprimir de 1 a 100 na tela sendo que apenas 10 números por linha.
*******************************************************************************/
#include <stdio.h>

int main(){
    int num = 1;

    printf("\n");

    if (num > 0  && num < 100)
        while (num > 0 && num < 101) {
            printf("%4d %4d %4d %4d %4d %4d %4d %4d %4d %4d \n", num, num + 1, num + 2, num + 3, num + 4, num + 5, num + 6, num + 7, num + 8, num + 9);
            num+=10; 
        }
    
    
    return 0;
} 
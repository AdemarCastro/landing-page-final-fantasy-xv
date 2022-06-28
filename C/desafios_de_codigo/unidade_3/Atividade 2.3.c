/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022.01

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int vg = 2; /* Variável Global */

int fun1 (int n1);
int fun2 (int n1);

int fun1 (int n1){

    int vf1; /* Variável Local */
    vg = 3;
    return 1;

}

int fun2 (int n2){

    int vf2; /* Variável Local */
    return 2;

}

int main()
{

    int vm = 1; /* Global do Problema */

    printf ("\n função 1 = %d", fun1 (vm));

    printf ("\n função 2 = %d", fun2 (vm));


    return 0;
}

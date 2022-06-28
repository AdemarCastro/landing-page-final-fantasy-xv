/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022.01

*******************************************************************************/
#include <stdio.h>

float soma (float n1, float n2);
float subtrai (float n1, float n2);
float mult (float n1, float n2);
float divi (float n1, float n2);

float soma (float n1, float n2){
    
    return n1 + n2;
    
}

float subtrai (float n1, float n2){
    
    return n1 - n2;
    
}

float mult (float n1, float n2){
    
    return n1 * n2;
    
}

float divi (float n1, float n2){
    
    return n1 / n2;
    
}


int main()
{
    
    float n1, n2;
    
    /* Coletando dados de n1 e n2 */
    
    printf ("Digite o 1º número: ");
    scanf ("%f", &n1);
    
    printf ("Digite o 2º número: ");
    scanf ("%f", &n2);
    
    /* Resultado das operações */
    
    printf ("\nResultado da soma entre %.2f e %.2f = %.2f", n1, n2, soma (n1, n2));
    
    printf ("\nResultado da subtrai entre %.2f e %.2f = %.2f", n1, n2, subtrai (n1, n2));

    printf ("\nResultado da multiplicação entre %.2f e %.2f = %.2f", n1, n2, mult (n1, n2));

    printf ("\nResultado da divisão entre %.2f e %.2f = %.2f", n1, n2, divi (n1, n2));


    return 0;
}

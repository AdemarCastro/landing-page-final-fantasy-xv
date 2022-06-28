/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022/01

*******************************************************************************/
#include <stdio.h>

#include <locale.h>

#include <math.h>

int main(){
    
    float a, b, c, delta, x1, x2;
    
    printf ("Digite sua A: ");
    scanf ("%f", &a);
    
    printf ("Digite sua B: ");
    scanf ("%f", &b);
    
    printf ("Digite sua C: ");
    scanf ("%f", &c);
    
    delta = (b * b) - ( 4 * a * c );
    x1 = (- b + sqrt(delta)) / 2 * a;
    x2 = (- b - sqrt(delta)) / 2 * a;
    
    if ( delta < 0){
        printf ("Delta menor que zero - raizes complexas\n");
    } else {
        printf ("Delta menor que zero - raizes reais\n");
    }
    
    printf ("Delta = %.2f\n", delta);
    printf ("X1 = %.2f\n", x1);
    printf ("X2 = %.2f\n", x2);
    
    return 0;

}
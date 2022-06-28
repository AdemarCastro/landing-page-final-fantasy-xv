******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022/01

*******************************************************************************/
#include <stdio.h>

#include <locale.h>

#include <math.h>



int main(){
    
    int valor, x, y, z;
    float a, b, c, delta, x1, x2;
    int divLoop(int x, int y) {
        int z;
        if(!y || x < y)return 0;
        (x < 0 && (x= -x) || y < 0 && (y= -y));
        z= 1;
        while((x-= y), y <= x)z++;
        return z;
    }
    
    
    while (valor != 3){
        
    printf ("------------------------------------------------------------\n");
    printf ("Digite um dos números para acessar as opções.\n");
    printf ("1 - Calcule as raizes de uma equação do segundo grau.\n");
    printf ("2 - Calcular a divisão entre dois números reais utilizando subtração sucessiva.\n");
    printf ("3 - Sair.\n");
    printf ("------------------------------------------------------------\n");
        
    printf ("Digite um número de 1 a 3 para acessar o menu: ");
    scanf ("%d", &valor);
        
    switch (valor){
            
    case 1:
    
    
    
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
    
    break;
    
    case 2:
    
    printf ("Digite o primeiro número: ");
    scanf ("%d", &x);
    
    printf ("Digite o primeiro número: ");
    scanf ("%d", &y);
    
    z = divLoop(x, y);
    
    printf ("%d / %d = %d\n", x, y, z);
    return 0;
    
        
    
            
    break;
            
    case 3:
    printf ("Você saiu.\n");
    break;
            
    default:
    printf ("\nTente de novo.\n");
    break;
            
            
    return 0;

}
}
}
/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022/01

*******************************************************************************/
#include <stdio.h>

#include <locale.h>

#include <math.h>



int main(){
    
    /* Declaração do Menu */
    int valor;
    /* Declerações do Algoritmo de Conversor de Temperatura */
    float t1, t2, t3;
    int valor2;
    /* Declerações do Algoritmo de Matriz */
    int i, j, x = 1;
    
    
    
    
    while (valor != 3){
        
        printf ("------------------------------------------------------------\n");
        printf ("Digite um dos números para acessar as opções.\n");
        printf ("1 - Conversor de temperatura.\n");
        printf ("2 - Diagonal da matriz.\n");
        printf ("3 - Sair.\n");
        printf ("------------------------------------------------------------\n");
        
        printf ("Digite um número de 1 a 3 para acessar o menu: ");
        scanf ("%d", &valor);
        
    switch (valor){
            
        case 1: /* Algoritmo conversor de temperatura */
        
            while (valor2 != 2){
        
                printf ("\nDigite o valor da temperatura em Celsius: ");
                scanf ("%f", &t1);
        
                printf ("\n1 - Kelvin.\n2 - Fahrenheit\n3 - Sair\n\nDigite 1 ou 2 para escolher qual escala deseja converter: ");
                scanf ("%d", &valor2);
                
            switch (valor2){
                    
                case 1:
                    
                    t2 = t1 + 273;
                    
                    printf ("\nTemperatura em Celsius: °C %.2f\nTemperatura em Kelvin: °K %.2f\n", t1, t2);
                    
                break;
                    
                case 2:
                    
                    t3 = (t1 * 1.8) + 32;
                    
                    printf ("\nTemperatura em Celsius: °C %.2f\nTemperatura em Fahrenheit: °F %.2f\n", t1, t3);
                    
                break;
                    
                case 3:
                    
                    printf ("Você saiu.\n");
                        
                break;
                    
                default:
                    
                    printf ("\nTente de novo.\n");
                    
                break;
            }
                    
        
        
        break;
        
        case 2: /* Algoritmo de Matriz */
        
            for (i = 1; i < 11; i++){
                for (j = 1; j < 11; j++)
                {
                    if (i == j){
                        printf ("%1d", x);
                    } else {
                        printf ("  ");
                    }
                
                x = x + 1;
                }
            printf("\n");
            }
        
                
        break;
                
        case 3:
            printf ("\nVocê saiu.\n");
        break;
                
        default:
            printf ("\nTente de novo.\n");
        break;
                
                
    return 0;

}
}
}
}
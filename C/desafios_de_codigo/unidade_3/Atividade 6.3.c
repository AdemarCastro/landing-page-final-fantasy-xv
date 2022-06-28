/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS - 2022.01

Exercício 06 - Unidade 3 - Criar uma tabuada utilizando a função void e o ponteiro.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

float valor = 0;

// Declarações

void tabuada_soma (float num1, float num2, float *resultado);
void tabuada_subtracao (float num1, float num2, float *resultado);
void tabuada_multi (float num1, float num2, float *resultado);
void tabuada_divi (float num1, float num2, float *resultado);

// Algoritmo

void tabuada_soma (float num1, float num2, float *resultado){
    
    while (num1 < 10){
        
        num1 = num1 + 1;
        
        printf ("\n");
        printf ("Tabuada de SOMA do %.0f\n\n", num1);
        
        for (num2 = 1; num2 <= 10; num2++){
            
            *resultado = num1 + num2;
            
            valor = *resultado;
            
            printf ("%.0f + %.0f = %.0f\n", num2, num1, valor);
            
        }
        
    }
    
}

void tabuada_subtracao (float num1, float num2, float *resultado){
    
    while (num1 < 10){
        
        num1 = num1 + 1;
        
        printf ("\n");
        printf ("Tabuada de SUBTRAÇÃO do %.0f\n\n", num1);
        
        for (num2 = num1 + 1; num2 <= (num1 + 10); num2++){
            
            *resultado = num2 - num1;
                
                valor = *resultado;
                
                printf ("%.0f - %.0f = %.0f\n", num2, num1, valor);
            
        }
        
    }
    
}

void tabuada_multi (float num1, float num2, float *resultado){
    
    while (num1 < 10){
        
        num1 = num1 + 1;
        
        printf ("\n");
        printf ("Tabuada de MULTIPLICAÇÃO do %.0f\n\n", num1);
        
        for (num2 = 1; num2 <= 10; num2++){
            
            *resultado = num1 * num2;
            
            valor = *resultado;
            
            printf ("%.0f X %.0f = %.0f\n", num2, num1, valor);
            
        }
        
    }
    
}

void tabuada_divi (float num1, float num2, float *resultado){
    
    while (num1 < 10){
        
        num1 = num1 + 1;
        
        printf ("\n");
        printf ("Tabuada de DIVISÃO do %.0f\n\n", num1);
        
        for (num2 = num1; num2 <= (num1 * 10); num2 += num1){
            
            *resultado = num2 / num1;
            
            valor = *resultado;
            
            printf ("%.0f / %.0f = %.0f\n", num2, num1, valor);
            
        }
        
    }

}
    
int main(){
    
    // Variáveis do Menu
    
    int menu = 0;
    
    
    // Menu
    
    while (menu != 5){
        
        printf ("\n-------------------------------------------------------------\n");
        printf ("Selecione uma das opções abaixo:\n");
        printf ("1 - Tabuada da Soma.\n");
        printf ("2 - Tabuada da Subtração.\n");
        printf ("3 - Tabuada da Multiplicação.\n");
        printf ("4 - Tabuada da Divisão.\n");
        printf ("5 - Sair.\n");
        printf ("---------------------------------------------------------------\n");
        
        printf ("\nDigite um número de 1 a 5 para acessar o sistema: ");
        scanf ("%d", &menu);
        
        switch (menu){ 
            
            case 1: // Tabuada da Soma
                
                tabuada_soma (0, 0, &valor);
                
            break;
            
            case 2: // Tabuada da Subtração
                
                tabuada_subtracao (0, 0, &valor);
                
            break;
            
            case 3: // Tabuada da Multiplicação
                
                tabuada_multi (0, 0, &valor);
                
            break;
            
            case 4: // Tabuada da Divisão
                
                tabuada_divi (0, 0, &valor);
                
            break;
            
            case 5: // Comando para Sair
                
                printf ("\nVocê saiu.");
                
            break;
            
            default: // Comando para caso alguém digite um número diferente de 1 a 5
                
                printf ("\nERRO! Tente novamente.");
                
            break;
        }
        
    }
    
    return 0;
}
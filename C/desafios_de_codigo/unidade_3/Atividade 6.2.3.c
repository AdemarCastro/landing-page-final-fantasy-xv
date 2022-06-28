/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS - 2022.01

Exercício 06 - Unidade 3 - Criar uma tabuada utilizando a função void e o ponteiro.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Declarações

void tabuada (int valor, char operador);

// Algoritmo

void tabuada (int valor, char operador){
    
    int i;
    
    switch (operador){
        
        int resultado, i;
        
        case '+':
            
            printf ("\nOperador de SOMA do valor %d\n\n", valor);
            
            for (i = 1; i <= 10; i++){
                
                resultado = i + valor;
                
                printf ("%d + %d = %d\n", i, valor, resultado);
                
            }    
            
        break;
        
        case '-':
            
            printf ("\nOperador de SUBTRAÇÃO do valor %d\n\n", valor);
            
            for (i = valor; i <= (valor + 10); i++){
                
                resultado = i - valor;
                
                printf ("%d - %d = %d\n", i, valor, resultado);
                
            }
            
        break;
        
        case '*':
            
            printf ("\nOperador de MULTIPLICAÇÃO do valor %d\n\n", valor);
            
            for (i = 1; i <= 10; i++){
                
                resultado = i * valor;
                
                printf ("%d * %d = %d\n", i, valor, resultado);
                
            }
            
        break;
        
        case '/':
            
            printf ("\nOperador de SUBTRAÇÃO do valor %d\n\n", valor);
            
            for (i = valor; i <= (valor * 10) ; i += valor){
                
                resultado = i / valor;
                
                printf ("%d / %d = %d\n", i, valor, resultado);
                
            }
            
        break;
        
    }
    
}
    
int main(){
    
    // Variáveis do Algoritmo
    
    int valor, i;
    char operador;
    
    printf("\nDigite um operador soma, subtração, multiplicação ou divisão: ");
    scanf ("%c", &operador);
    
    printf ("\nDigite um número de 1 a 10: ");
    scanf ("%d", &valor);
    
    if (operador=='+'){
        
        printf("\nSOMANDO\n");
        
        tabuada (valor, operador);
        
    } else if(operador=='-'){
        
        printf("\nSUBTRAINDO\n");
        
        tabuada (valor, operador);
        
    } else if(operador=='*'){
        
        printf("\nMULTIPLICAÇÃO\n");
        
        tabuada (valor, operador);
        
    } else if(operador=='/'){
        
        printf("\nDIVISÃO\n");
        
        tabuada (valor, operador);
        
    }
    
    return 0;
}

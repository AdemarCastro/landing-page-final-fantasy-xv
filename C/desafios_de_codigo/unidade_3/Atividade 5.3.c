/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022.01

Atividade 5 - Unidade 3

Exercício:

1 - Faça um programa com o protótipo e a implementação dos seguintes métodos:

Objetivo: Praticar os dois tipos de passagem de parâmetros.

#include <____>

float valor;

void somar (float num1, float num2, float *total); // Este método terá que somar num1 e num2 e armazenar o resultado em total.

void subtrair ( idem); // Este método terá que subtrair num 1 e num2 e armazenar o resultado em total.

void exibirvalor (float total); // Exibir o conteúdo da variavel total.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float valor = 0;
 
 
 void somar (float num1, float num2, float *total);
 
 void subtrair (float num1, float num2, float *total);
 
 void exibirvalor (float total);
 
 
 void somar (float num1, float num2, float *total){
     
    *total = num1 + num2;
     
 }
 
 void subtrair (float num1, float num2, float *total){
     
    *total = num1 - num2;
     
 }
 
 void exibirvalor (float total){
     
    valor = total;
    
    printf ("%.1f", valor);

     
 }
 
int main()
{
    
    subtrair (5, 7, &valor);
    
    exibirvalor (valor);
    
    return 0;
    
}
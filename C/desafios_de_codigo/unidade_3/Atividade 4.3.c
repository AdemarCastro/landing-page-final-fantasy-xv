/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022.01

Atividade 4 - Unidade 3

Valor do salário pode ser alterado.

Como funciona a Passagem de Parâmetro.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float salario_minimo = 1212;
 
 void aumenta_salario (float premio, float *valor_para_pagamento);
 
 void aumenta_salario (float premio, float *valor_para_pagamento){
        
        float valor_premio = 0, valor_pagamento = 0;
        
        valor_premio = premio;
        
        valor_pagamento = salario_minimo + valor_premio;
        
        *valor_para_pagamento = valor_pagamento;
        
        printf ("\nValor para pagamento = %.2f\n", *valor_para_pagamento);
        
    }
 
int main()
{
    
    setlocale (LC_ALL, "Portuguese");
    
    float premio = 288;
    float total_pagamento_salario = 0; // Valor inicial.
    
    printf ("\nValor do pagamento atual = %.2f\n", total_pagamento_salario);
    
    aumenta_salario (premio, &total_pagamento_salario);
    
    printf ("\nValor do pagamento atual - após aumento = %.2f\n", total_pagamento_salario);
    
    
    
    
    
    return 0;
}
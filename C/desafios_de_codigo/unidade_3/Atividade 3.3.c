/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022.01

Atividade 3 - Unidade 3

Faça um Programa que realize as seguintes operações
a) Somar dois números reais.
*Protótipo -> float somarnumero (float num1, float num2);
b) Multiplicar dois números reais utilizando o Protótipo 1 sucessivamente.
*Protótipo -> float multsomas (float num1, float num2);

*******************************************************************************/
#include <stdio.h>

float somarnumero (float n1, float n2);
float subtrai (float n1, float n2);
float multsomas (float n1, float n2);
float divi (float n1, float n2);

float somarnumero (float n1, float n2){
    
    return n1 + n2;
    
}

float subtrai (float n1, float n2){
    
    return n1 - n2;
    
}

float multsomas (float n1, float n2){
    
    float soma, valor;
    soma = 0;
    
    for (valor = 1; valor != n2; valor ++){
        
        soma = somarnumero (n1, soma);
        
    }
    
     return n1 + soma;
    
}

float divi (float n1, float n2){
    
    return n1 / n2;
    
}


int main()
{
    
    float n1, n2, i;
    
    /* Variáveis do Menu */
    int valor1;
    
    while (valor1 != 5){
        
        printf ("\n---------------------------------------------------------------\n");
        printf ("Selecione uma das opções abaixo.\n");
        printf ("1 - Somar dois números reais.\n");
        printf ("2 - Subtrair dois números reais.\n");
        printf ("3 - Multiplicar dois números reais.\n");
        printf ("4 - Dividir dois números reais.\n");
        printf ("5 - Sair.\n");
        printf ("---------------------------------------------------------------\n");
        
        printf ("\nDigite um número de 1 a 5 para acessar as opções do menu acima: ");
        scanf ("%d", &valor1);

    switch (valor1){
        
        case 1: /* Somar dois números reais */
        
            /* Coletando dados de n1 e n2 */
    
            printf ("\nDigite o 1º número: ");
            scanf ("%f", &n1);
            
            printf ("\nDigite o 2º número: ");
            scanf ("%f", &n2);
            
            printf ("\nResultado da soma entre %.2f e %.2f = %.2f", n1, n2, somarnumero (n1, n2));
        
        break;
        
        case 2: /* Subtrair dois números reais */
        
            /* Coletando dados de n1 e n2 */
    
            printf ("\nDigite o 1º número: ");
            scanf ("%f", &n1);
            
            printf ("\nDigite o 2º número: ");
            scanf ("%f", &n2);
            
            printf ("\nResultado da subtrai entre %.2f e %.2f = %.2f", n1, n2, subtrai (n1, n2));
        
        break;
        
        case 3: /* Soma sucessiva entre dois números reais */
        
            /* Coletando dados de n1 e n2 */
    
            printf ("\nDigite o 1º número: ");
            scanf ("%f", &n1);
            
            printf ("\nDigite o 2º número: ");
            scanf ("%f", &n2);
            
            printf ("\nResultado da soma sucessiva entre %.2f e %.2f é:", n1, n2);
            
            while (i != n2){
                
                printf (" + %.2f", n1);
                
                i = i + 1;
                
            }
            
            printf (" = %.2f", multsomas (n1, n2));
        
        break;
        
        case 4: /* Divisão entre dois números reais */
        
            /* Coletando dados de n1 e n2 */
    
            printf ("\nDigite o 1º número: ");
            scanf ("%f", &n1);
            
            printf ("\nDigite o 2º número: ");
            scanf ("%f", &n2);
            
            printf ("\nResultado da divisão entre %.2f e %.2f = %.2f", n1, n2, divi (n1, n2));
        
        break;
        
        case 5:
        
        printf ("\nVocê saiu.");
        
        break;
        
        default:
        
        printf ("\nTente novamente.");
        
        break;
        
    }

}
    return 0;
}
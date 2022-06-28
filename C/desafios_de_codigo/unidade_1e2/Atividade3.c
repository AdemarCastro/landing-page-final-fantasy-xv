/*  NOME: ADEMAR ALVES CASTRO FILHO
    MATRÍCULA: 2022002444
    TURMA: TADS 2022/1
*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
    int valor, imposto_AM, imposto_PR;
    printf("Qual o valor do produto?: ");
    scanf("%d", &valor);
    
    imposto_AM = valor * 0.18;
    imposto_PR = valor * 0.17;
    
    printf("\nO valor de ICMS a ser pago no Estado do Amazonas e Pará será: %d / %d", imposto_AM, imposto_PR);
    
    
    

return 0;
}
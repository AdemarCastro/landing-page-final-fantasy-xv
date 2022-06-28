/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022/1

1) Ler um número inteiro maior que zero.
Tem que exibir os 10 números anteriores 
e posteriores ao n digitado.
*******************************************************************************/
#include <stdio.h>

int main(){
    int i, a;
    
    for(a=1; a<10; a++){
        printf("\n%d\n", a);
    }
    
    for(i=10; i<21; i++){
        printf("\n%d\n", i);
    }
    return 0;
}

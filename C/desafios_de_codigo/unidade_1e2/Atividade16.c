/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022/1

*******************************************************************************/
#include <stdio.h>

    int main()
{

int num1, num2, n1, n2, soma = 0, i = 0;

printf("Digite o primeiro numero: ");

scanf(" %d", &n1);

printf("Digite o segundo numero: ");

scanf(" %d", &n2);

if(n1 < n2){

num1 = n1;

num2 = n2;

}

else{

num1 = n2;

num2 = n1;

}

printf("Soma: ");

while (i != num1){

soma = soma + num2;

printf("+ %d ",num2);

i = i + 1;

}

printf("= %d", soma);

return 0;

}
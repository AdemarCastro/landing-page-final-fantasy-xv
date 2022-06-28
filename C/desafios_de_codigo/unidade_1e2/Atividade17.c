/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022/1

2) Imprimir de 1 a 100 na tela sendo que apenas 10 números por linha.
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main ()
{
    char login[15] = "MEU_LOGIN"; //Tem que ter mais espaço que a string. Pelo menos 1 a mais que a palavra.
    char login1[15]; //Pode ser do mesmo tamanho que o login
    char senha[15] = "MINHA_SENHA";
    char senha1[15];

    printf("LOGIN: ");
    scanf("%s",login1); //String se lê com %s
    if (strcmp(login, login1) == 0) //strcmp() é uma função da biblioteca string.h que compara 2 strings. Se for igual a 0 é porque as duas são iguais.
    {
    	printf("Logado\n");
    }
    else
    {
    	printf("error\n");
    }
    
    return 0;
}       
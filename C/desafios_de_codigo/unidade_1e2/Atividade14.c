/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022/1

*******************************************************************************/
#include <stdio.h>

int main()
{
    long int fibonacci(int n);
    int n;
    printf ("Escolha a posicao: ");
    scanf("%d", &n);
    printf("Posicao %d da sequencia de fibonnaci: %d", n, fibonacci(n));
}

long fibonacci(int n)
{
    int cont;
    long int x = 0, z = 1;
    
    if(n % 2 == 0)
    {
        for(cont = 2; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
        return z;
    }
    else
    {
        for(cont = 1; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
            return x;
    }
    
    return 0;
} 
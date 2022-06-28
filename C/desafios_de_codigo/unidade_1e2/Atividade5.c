/******************************************************************************

NOME: ADEMAR ALVES CASTRO FILHO
MATRÍCULA: 2022002444
TURMA: TADS 2022/1

*******************************************************************************/
#include <stdio.h>

int main(){
    
    char sexo, m, f;
    int idade;
    
    printf("Digite seu sexo, use 'm' para masculino e 'f' para feminino: ");
    scanf("%s", &sexo);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    if((sexo == 'm') && (idade<15)) {
        printf("Infantil Masculion.");
    } else if((sexo == 'f') && (idade<15)) {
        printf("Infantil Feminino.");
    } else if((sexo == 'm') && (idade >=15 && idade < 18)) {
        printf("Juvenil Masculino.");
    } else if((sexo == 'f') && (idade >=15 && idade < 18)) {
        printf("Juvenil Feminino.");
    } else if((sexo == 'm') && (idade>18)) {
        printf("Adulto Masculino.");
    } else if((sexo == 'f') && (idade>18)) {
        printf("Adulto Feminino.");
    }
    return 0;
}

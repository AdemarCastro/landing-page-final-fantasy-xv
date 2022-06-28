/*  Nome Autor: ADEMAR ALVES CASTRO FILHO
    Data: 22/06/2022
    EXERCÍCIOS DE ATP: 
    
    1. Sobre VETOR

    a) Tamanho do vetor é 200, preencher com números reais maiores que 800.
    b) Tamanho do vetor é 50, preencher automaticamente com números inteiros aleatórios.

 
    2. MATRIZ

    a) Definir duas matrizes 10 x10 de inteiros, preencher  com números aleatórios, realizar a soma entre as duas matrizes e exibir o resultado
    b)Definir uma matriz 5x5 de inteiros, solicitar do usuário que digite a quantidade de elementos, e preencher automaticamente da forma que está no slide. 


*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define maxlinha 10
#define maxcoluna 10
#define maxlinha1 5
#define maxcoluna1 5

int main(){
    setlocale(LC_ALL, "Portuguese");
    // Case 1
    int qtd = 200, valorInicial = 801;
    // Case 2
    int qtd3, valorInicial3, qtd4, valorInicial4;
    // Case 3
    srand(10);
    int matrizA[10][10], matrizB[10][10], somaAB[10][10], linha, coluna;
    // Case 4
    int matriz[5][5], linha1, coluna1, elemento, u;
    char texto[1];
    // Menu e Operações
    int vetor[qtd], i, menu, valor;

    while (menu!=5){
    
    printf ("\n---------------------------------------------------------------------------------------\n");
    printf ("1 - Vetor de tamanho 200, preencher com números reais maiores que 800.\n");
    printf ("2 - Vetor de tamanho 50, preencher automaticamente com números inteiros aleatórios.\n");
    printf ("3 - Definir duas matrizes 10 x10 de inteiros, preencher  com números aleatórios, realizar a soma entre as duas matrizes e exibir o resultado.\n");
    printf ("4 - Definir uma matriz 5x5 de inteiros, solicitar do usuário que digite a quantidade de elementos, e preencher automaticamente da forma que está no slide. \n");
    printf ("5 - Sair do programa.\n");
    printf ("---------------------------------------------------------------------------------------\n");
    
    printf ("\nDigite um número de 1 a 5 para acessar as opções do Menu acima: ");
    scanf ("%d", &menu);
    
        switch (menu){
            
            case 1:
                for(i = 0; i < qtd; i++){
                    vetor[i] = valorInicial + i;
                }
                for(i = 0; i < qtd; i++){
                    printf("%d - O valor do vetor da posição[%d]=%d \n", i+1, i, vetor[i]);
                }
            break;
            
            case 2:
                
                if (menu = 2){
                    
                    qtd4 = 50;
                    qtd3 = qtd4;
        
                
                
                for(i = 0; i < qtd3; i++){
                    valorInicial4 = rand();
                    valorInicial3 = valorInicial4;
                    vetor[i] = valorInicial3;
                }
                for(i = 0; i < qtd3; i++){
                    printf("%d - O valor do vetor da posição[%d]=%d \n", i+1, i, vetor[i]);
                }    
                }
            break;
            
            case 3:
            
                printf("MATRIZ A: \n ");
                for(linha=0; linha<maxlinha; linha++) {
                for (coluna=0; coluna<maxcoluna; coluna++) {
                matrizA[linha][coluna]= rand() %10;
    
                printf("% d, ", matrizA[linha][coluna]);
                }
                printf("\n");
                }
    
                printf("\n \nMATRIZ B: \n ");
                for(linha=0; linha<maxlinha; linha++) {
                for (coluna=0; coluna<maxcoluna; coluna++) {
                matrizB[linha][coluna]= rand() %10;
    
                printf("% d, ", matrizB[linha][coluna]);
                }
                printf("\n");
                }
    
                printf("\n \nSOMA MATRIZ A E MATRIZ B: \n");
                for(linha=0; linha<maxlinha; linha++) {
                    for (coluna=0; coluna<maxcoluna; coluna++) {
                        somaAB[linha][coluna]= matrizA[linha][coluna] + matrizB[linha][coluna];
    
                    printf("% d, ", somaAB[linha][coluna]);
                    }
                printf("\n");
                }    
                
            break;
                
            case 4:
                
                printf ("\nQuantos elementos da matriz deseja que surjam, precisa ser um número entre 1 e 25: ");
                scanf ("%d", &elemento);
                
                printf("MATRIZ 5 x 5: \n");
                for(linha1=0; linha1<maxlinha1; linha1++) {
                for (coluna1=0; coluna1<maxcoluna1; coluna1++) {
                matriz[linha1][coluna1]= 1 + u;
                u = matriz[linha1][coluna1];
                
                    if(u <= elemento){
                        printf("% .02d,", matriz[linha1][coluna1]);
                    } else{
                        printf("   ,");
                    }
                }
                printf("\n");
                }
            
            break;
            
            case 5:
            
                printf ("\nVocê saiu do programa. Até a próxima!");
            
            break;
            
            default:
            
                printf ("\nTente de novo.");
                
            break;
        }        
    }        
  return 0;
}
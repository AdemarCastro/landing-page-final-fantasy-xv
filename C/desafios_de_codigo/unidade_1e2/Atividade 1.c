#include<stdio.h>
#include<conio.h>
int main(void)
{
  char nome[61];
  char cidade[61];
  char sexo[61];
  int dia1, mes1, ano1, idade;
  int ano2 = 2022;
  
  printf("Digite seu nome: ");
  scanf("%s",nome);
  printf("Digite o nome da cidade em que mora: ");
  scanf("%s",cidade);
  printf("Digite o seu sexo: ");
  scanf("%s",sexo);
  printf("Digite o dia em que nasceu: ");
  scanf("%d",&dia1);
  printf("Digite o mês em que nasceu: ");
  scanf("%d",&mes1);
  printf("Digite o ano em que nasceu: ");
  scanf("%d",&ano1);
  
  idade = ano2 - ano1;
  
  printf("O %s mora em %s, é do sexo %s e faz aniversário em %d/%0d. Hoje ele tem %d anos.", nome, cidade, sexo, dia1, mes1, idade);
  
  getch();
  return 0;
}

# Exercício 1: Crie um programa que recebe um número e imprime o seu fatorial.
valor_recebido = int(input('Digite o número: '))
if valor_recebido > 0:
  fatorial = 1
  for item in range(1,valor_recebido + 1):
    fatorial = fatorial * item
    print(fatorial)
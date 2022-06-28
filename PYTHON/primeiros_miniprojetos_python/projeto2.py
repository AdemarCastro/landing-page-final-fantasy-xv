# Exercício 2: Escreva um programa que, ao iniciar gera um valor aleatório de 1 a 10 e permite que o usuário chute um número até que o valor aleatório gerado no início do programa seja chutado corretamente.
# O programa deve informar se o chute foi acima, abaixo ou igual ao valor aleatório gerado no início do programa.
import random
valor_gerado = random.randint(1,10)
acertou = False
while acertou == False:
  valor_recebido = int(input('Chute um número: '))
  if valor_recebido > valor_gerado:
    print('Seu chute foi maior que o valor gerado.')
  elif valor_recebido < valor_gerado:
    print('Seu chute foi menor que o valor gerado.')
  
  elif valor_recebido == valor_gerado:
    acertou = True
    print('Parabéns!Você acertou!')
# Exercício 3: Levando em consideração a velocidade máxima permitida de 80km em uma determinada rua. Crie um programa que recebe do usuário um valor que representa a velocidade e com base nessa velocidade diga se ele tomou uma multa leve, grave ou gravíssima. Levando em consideração que se a pessoa estiver abaixo da velocidade máxima seu programa deve exibir, "Não houve multa.", caso esteja até 10km acima, deve exibir: "levou multa leve", caso esteja entre 11 a 20km acima da velocidade máxima, exibir: "levou multa grave", e caso esteja acima de 20km acima de velocidade máxima, exiba: "levou multa gravíssima.".
velocidade_maxima = 80
multa = True
while multa == True:
  velocidade_do_usuario = int(input('Insira a sua velocidade em quilômetros por hora: '))
  if velocidade_do_usuario > velocidade_maxima and velocidade_do_usuario <= 90:
    print('Multa leve.')
  elif velocidade_do_usuario > velocidade_maxima and velocidade_do_usuario <= 100:
    print('Multa grave.')
  elif velocidade_do_usuario > 100:
    print('Multa gravíssima!')
  elif velocidade_do_usuario <= velocidade_maxima:
    multa = False
    print('Não houve multa.')
    
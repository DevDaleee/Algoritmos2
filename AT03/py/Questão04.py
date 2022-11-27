import random     
  
def jogada():

    dado1 = random.randrange(1, 7)
    dado2 = random.randrange(1, 7)

    return (dado1, dado2) 

def soma_Valores(dados):
    dado1, dado2 = dados
    print("Soma dos dados {} + {} = {}".format(dado1, dado2, sum(dados)))

value = jogada()
soma_Valores(value)

soma_dados = sum(value)

if soma_dados in (7, 11):
    result = " O jogador ganhou :) "
    print("O jogador ganhou :)")
elif soma_dados in (2, 3, 12):
    result = " O jogador perdeu :( "
    print(" O jogador perdeu :( ")
else: 
    result = " O ponto é "
    pontos_atuais = soma_dados
    print("O ponto é ", pontos_atuais)
 

while result == " O ponto é ":
    value = jogada()
    soma_Valores(value)
    soma_dados = sum(value)
     
    if soma_dados == pontos_atuais:
        result = " O jogador ganhou :) "
        print("O jogador ganhou :)")
         
    elif soma_dados == 7:
        result = " O jogador perdeu :( "
        print("O jogador perdeu :( ")

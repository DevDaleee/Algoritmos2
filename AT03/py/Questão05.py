import random

x = random.randrange(1,1000,1)

print("Você pode adivinhar meu numero?")
y = 0
tentativas = 0

while(y != x):
    y = int(input())
    if y < x:
        print("Muito baixo. Tente novamente.")
        tentativas+=1
    elif y > x:
        print("Muito alto. Tente novamente.")
        tentativas+=1
print("Excelente! Você adivinhou o número!")    
print("Tentativas {}".format(tentativas))
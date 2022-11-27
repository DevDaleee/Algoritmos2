import random
ca=0
co=0
for x in range(0,100,1):
    x = random.randint(0, 1)
    if x == 1:
        print("Cara")
        ca+=1
    elif x == 0:
        print("Coroa")
        co+=1
print("Cara apareceu: {} vezes".format(ca))
print("Coroa apareceu: {} vezes".format(co))

import random

def escrever():
    for i in range(0,20):
        a = random.randrange(1,5)
        s = random.randrange(1,5)
        v = random.randrange(1,5)
        p = random.randrange(1,5)
        a2 = random.randrange(1,5)
        s2 = random.randrange(1,5)
        print("{} - {} {} {} {} {} {}".format(i+1,artigo[a],substantivo[s],verbo[v],preposicao[p],artigo[a2],substantivo[s2]))

artigo = ["o", "um", "algum", "todo", "qualquer"]
substantivo = ["menino", "homem", "cachorro", "carro", "gato"]
verbo = ["passou", "pulou", "correu", "saltos", "andou"]
preposicao = ["sobre", "sob", "ante", "ate", "com"]

escrever()

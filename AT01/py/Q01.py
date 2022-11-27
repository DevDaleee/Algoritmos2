x = float(input())

def plucro():
    if x < 20:
        lucro  = x * 0.45
        print("{:.2f}".format(lucro+x))
    else:
        lucro = x * 0.30
        print("{:.2f}".format(x+lucro))

plucro()
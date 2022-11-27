def desenhaQuadrado(altura = int(input()), largura = int(input()), simbolo = '*', preenchimento = ' '):
    print(simbolo * largura)
    for _ in range(altura-2):
        print('{}{}{}'.format(simbolo, preenchimento * (largura - 2), simbolo))
    print(simbolo * largura)

desenhaQuadrado()
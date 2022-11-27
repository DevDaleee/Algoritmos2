
def inverte(n):
    sequência = ''
    while n > 0:
        digito_invertido =  n % 10
        n //= 10
        sequência += str(digito_invertido)
    return sequência

n = int(input())
print(inverte(n))
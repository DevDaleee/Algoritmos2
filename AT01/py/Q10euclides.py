def rmdc(a, b):
    return b and rmdc(b, a%b) or a

def mdc(a, b):
    while a:
        a, b = b%a, a
    return b

if __name__ == '__main__':
    a = int(input())
    b = int(input())
    print ("%s" % rmdc(a, b))
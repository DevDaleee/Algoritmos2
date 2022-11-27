x = float(input())

def pmacas():
    if x < 12:
        prec = 1.3
        res = prec * x
        print("{:.2f}".format(res))
    else:
        prec = 1
        res = prec * x
        print("{:.2f}".format(res))
pmacas()
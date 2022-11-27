idade1 = int(input())
idade2 = int(input())
idade3 = int(input())
idade4 = int(input())

def condicoes():
    if idade1 > idade2 and idade3 > idade4:
        sum = idade1+idade4
        mult = idade2 * idade3
        print(sum, mult)
    elif idade1 > idade2 and idade4 > idade3:
        sum = idade1+idade3
        mult = idade2 * idade4
        print(sum, mult)
    elif idade2 > idade1 and idade3 > idade4:
        sum = idade2+idade4
        mult = idade1 * idade3
        print(sum, mult)
    elif idade2 > idade1 and idade4 > idade3:
        sum = idade2+idade3
        mult = idade1 * idade4
        print(sum, mult)
condicoes()
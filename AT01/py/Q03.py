y = input()
x = int(input())

def passagens():
    if y == "a" and x == 0:
        print("R$ 500.00")
    elif y == "d" and x == 0:
        print("R$ 300.00")
    elif y == "b" and x == 0:
        print("R$ 350.00")
    elif y == "c" and x == 0:
        print("R$ 350.00")
    elif y == "c" and x == 1:
        print("R$ 600.00")
    elif y == "b" and x == 1:
        print("R$ 650.00")
    elif y == "d" and x == 1:
        print("R$ 550.00")
    elif y == "a" and x == 1:
        print("R$ 900.00")
passagens()
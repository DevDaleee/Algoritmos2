y = int(input())

def desconto():
    if y <= 600 :
        des = 0.0
        print(des,"\n",y)

    elif y > 600 and y <= 1200:
        des = y * 0.20
        
        print(des,"\n",y-des)

    elif y > 1200 and y <= 2000:
        des = y * 0.25
       
        print(des,"\n",y-des)

    elif y > 2000:
        des = y * 0.30
        
        print(des,"\n",y-des)
desconto()
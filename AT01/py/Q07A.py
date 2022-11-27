x = int(input())
y = int(input())
i=0

while x <= y:
    if x % 2 == 0:
        i += x
    x+=1
print(i)
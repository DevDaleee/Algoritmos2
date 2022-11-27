x=int(input())
y=int(input())
mdc=1

if x>y:
    maior=x
else:
    maior=y
for i in range(1,maior):
    if x%i==0 and y%i ==0:
        mdc=i
print(mdc)

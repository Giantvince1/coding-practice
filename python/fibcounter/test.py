import math
a=1
b=1
x=a+b
max=1000
print(1)
print(1)
print(x)
while(x < max):
    a=b
    b=x
    x=a+b
    if(x > max):
        print("Done! Last number in sequence:", b, "max number to look up to:", max)
    else:
        print(x)
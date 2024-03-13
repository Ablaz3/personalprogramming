from pylab import *
def f(x):
    return x**2-3
    
a=1
b=2
c=(a+b)/2

while b-a>0.001:
    if f(a)*f(c)<0:
        b=c
        print(c)
    else:
        a=c
        print(c)
    c=(a+b)/2

print(c)

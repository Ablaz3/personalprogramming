from pylab import *

def f(x):
    return (0.5*x**2+1.5*x)

x=1

while f(x)<787:
    print('eifelltarn nummer', x,'har', f(x),'kuler')
    x=x+1
else:
    print('det storste eifelltarnet du kan lage, er nummer', x,'og bruker', f(x),' kuler')


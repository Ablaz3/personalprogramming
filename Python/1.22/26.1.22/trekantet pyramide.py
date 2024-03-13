from pylab import*

def f(x):
    return (3*x**2-6*x+4)
x=1
y=int(input('hvor mange klinkekuler har du'))
while f(x)<y:
    print('i en trekantet pyramide med', x, 'lag, er det', f(x), 'kuler totalt')
    x=x+1
    

x=x-1
print('Da er den storste pyramiden du kan lage', x, 'lag hoy, og har', f(x), 'kuler. Det er derfor', y-f(x), 'kuler igjen.')
nederstelag=f(x)-f(x-1)
print('det nederste laget har', nederstelag, 'kuler')

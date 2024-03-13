from pylab import *
def f(x):
    return (3*x+1)
x=1
while f(x)<=200:
    print('En fyrstikk figur, med', x, 'kvadrater, har', f(x), 'fyrstikker')
    x=x+4
x=x-4
print('Da har den storste figuren du kan lage med 200 fyrstikker', x, 'kvadrater, og har', f(x), 'fyrstikker')
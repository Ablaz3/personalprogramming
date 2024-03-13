from pylab import *

print('skriv inn verdiene for a, b, og c')

a = float(input("a  ="))
b = float(input("b  ="))
c = float(input("c  ="))

d = (b**2-4*a*c)
e = 2*a

if(d>0):
    x1 = ((-b+(sqrt(d)))/e)
    x2 = ((-b-(sqrt(d)))/e)

    print('Losningen pa andregradslikningen er enten x =', {x1:.2}, ', eller x =',{x2:.2})
elif(d==0):
    x1 = (-b/e)
    print('Losningen pa andregradslikningen er x = ', {x1:.2})
else:
    print('Likningen har ingen losning')

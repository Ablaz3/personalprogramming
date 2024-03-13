def f(x):
   return 2.5*x**2-3.5*x+2

x=1 

while f(x)<10000:
    print("Figurnummer:", x, "  Klosser:", f(x))
    x=x+1
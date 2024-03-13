def f(x):
    return x**2-2

a = -2
e = 0.01

while a <2:
    if f(a) * f(a+0.01) <= 0:
        print(f"Jeg har funnet et nullpunkt {a:.4f}")
    a=a+e
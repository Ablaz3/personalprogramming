kat1=float(input('Skriv inn den ene kateten: '))
kat2=float(input('Skriv inn den andre kateten: '))
hyp=float(input('Skriv inn hypotenusen: '))

def f(x, y):
    return (x**2+y**2)**0.5

if f(kat1, kat2) != hyp:
    print('Trekanten er ikke rettvinklet.')


if f(kat1, kat2) == hyp:
    print('Trekanten er rettvinklet.')
    
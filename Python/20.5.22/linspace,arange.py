import numpy as np

for i in np.arange(-2.5, -20.5, -2.5): #np.arange(start, end, step)
    print(i, end=', ')
print(
)
for i in range(0, 5, 1):
    print(i, end=", ")
print(
)
x=1
for i in np.arange(3):
    print(x, end=", ")
    x=x+1
print(
)
for i in reversed(np.arange(0, 4.5, 0.5)): #kan bruke reversed(np.arrange()) for å kjøre baklengs
    print(i, end=", ")
print(
)
for i  in np.linspace(0, 100, 21, True): #np.linspace(start, end, num, endpoint?)
    if i>0:
        print(i, end=", ")
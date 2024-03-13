x= -100
y= 100

def f(x):
    return 3*x/4-(8*x+1)/6

for i in range(x*1000, y*1000, 1):
        if f(i)/1000 > 0.999:
                if f(i)/1000 < 1.001:
                    print("x = ", i/1000)
from pylab import *
x=0
y=0
while x<787:
    if x<787:
        y=y+1
        x=x+2
        if x<787:
            y=y+1
            x=x+5
            if x<787:
                y=y+1
                x=x+9
            else:
                x=x-5
                y=y-1
                print('Totalt kan man lage', y,'eifelltarn, og da bruker man', x,'kuler.')
        else:
            x=x-2
            y=y-1
            print('Totalt kan man lage', y,'eifelltarn, og da bruker man', x,'kuler.')
    else:
        x=x-9
        y=y-1
        print('Totalt kan man lage', y,'eifelltarn, og da bruker man', x,'kuler.')

   
    

        


        
            
        

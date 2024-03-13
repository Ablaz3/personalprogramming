import pandas as pd # importerer pandas, for å kunne lese av data fra excel ark.
import matplotlib.pyplot as plt

var = pd.read_excel(r'/Users/lars-m/Documents/Skole/GEO/BefolkningsvekstLorenskog.xlsx') # gjør variabelen "var" til en representasjon for excel arket "/Users/lars-m/Documents/Skole/GEO/BefolkningsvekstLorenskog.xlsx"
print(var) # printet var for å sjekke om importen funket

x = list(var['aar']) #gjør variabelen x om til "aar" kolonnen i var (excel dokumentet)
y = list(var['Personer']) #gjør variabelen y om til "Personer" kolonnen i var (excel dokumentet)

plt.figure(figsize=(10,10)) # skaper en graf, med størrelse 10x10
plt.style.use('seaborn') #gjør stilen grafen bruker om til seaborn, for å teste hvordan man gjorde dette.
plt.scatter(x,y,marker=".", s=100, edgecolors="black",c="yellow") # setter inn verdiene x, og y i grafen, gjør symbolet om til "." (var stjerne før). Gjør sidene til fargene svart, og gul.
plt.title("Excel sheet to Scatter Plot") # gir grafen en tittel
plt.show() #viser grafen 
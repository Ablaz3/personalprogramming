import pandas as pd
import matplotlib.pyplot as plt

var = pd.read_excel(r'pathname')
print(var)

x = list(var['navn på første kolonne'])
y = list(var['navn på andre kolonne'])

plt.figure(figsize=(10,10))
plt.style.use('seaborn')
plt.scatter(x,y,marker="*",s=100,edgecolors="black",c="yellow")
plt.title("Excel sheet to Scatter Plot")
plt.show()
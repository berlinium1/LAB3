
x = float(input("Please input X: "))
eps = 0.00001
k=0
a = s = 1
d = 1
b = 1

while a>=eps:
    k = k+1
    x1 = x**(2*k)
    d = d*k
    b = 2*b
    a = x1/(b*d)
    s = s+a
    #print("%d) A=%-5.10f  S=%-5.10f"%(k, a,s))
    #для зручності перевірки проміжкових даних приберіть коментар на рядку №16
print("Значення суми дорівнює S=%-5.10f\nКількість доданків K=%-4d\n"%(s,k))




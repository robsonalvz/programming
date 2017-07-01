num = int(input())
lista=[]
lista2=[]
cont=1
for i in range(num):
    x = int(input())
    lista.append(x)
    if (lista.count(x)<=1):
        lista2.append(x)
lista2.sort()
for i in range(len(lista2)):
    print(lista2[i],"aparece",lista.count(lista2[i]),"vez(es)")
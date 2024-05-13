def punto_en_poligono(x, y, poligono):
    """Comprueba si un punto se encuentra dentro de un polígono
        
    poligono - Lista de tuplas con los puntos que forman los vértices [(x1, x2), (x2, y2), ..., (xn, yn)]
    """
    i = 0
    j = len(poligono) - 1
    salida = False
    for i in range(len(poligono)):
        if (poligono[i][1] < y and poligono[j][1] >= y) or (poligono[j][1] < y and poligono[i][1] >= y):
            if poligono[i][0] + (y - poligono[i][1]) / (poligono[j][1] - poligono[i][1]) * (poligono[j][0] - poligono[i][0]) < x:
                salida = not salida
        j = i
    aux = (x, y)
    if aux in poligono:
        salida = True
    return salida   

poligono = []

n = int(input())

for t in range(n):
    x, y = input().split(" ")
    poligono.append((float(x), float(y)))

q = int(input())

for queries in range(q):
    a, b = input().split(" ")
    flag = punto_en_poligono(float(a), float(b), poligono)
    if flag == True:
        print("DENTRO")
    else:
        print("FUERA")
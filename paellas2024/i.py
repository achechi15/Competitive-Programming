def punto_en_poligono(x, y, poligono):
    """Comprueba si un punto se encuentra dentro de un polígono
        
    poligono - Lista de tuplas con los puntos que forman los vértices [(x1, x2), (x2, y2), ..., (xn, yn)]
    """
    for i in range(len(poligono)+1):
        print(i)

poligono = []

n = int(input())

for t in range(n):
    x, y = input().split(" ")
    poligono.append((float(x), float(y)))

punto_en_poligono(1, 2, poligono)

# q = int(input())

# for queries in range(q):
#     a, b = input().split(" ")
#     flag = punto_en_poligono(float(a), float(b), poligono)
#     if flag == True:
#         print("DENTRO")
#     else:
#         print("FUERA")
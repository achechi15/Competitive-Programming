t = int(input())

for _ in range(t):
    a,b = map(int, input().split())
    arr = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    cont = 0
    inf = float('inf')

    for j in range(a - 1, -1, -1):
        if j + 1 <= b:
            inf = min(inf, cont + arr[j])
        cont += min(arr[j], arr2[j])
 
    print(int(inf))
t = int(input())

for cases in range(t):
    s = input()
    for i in range(1, len(s)-1):
        a = s[0:i]
        b = s[i:len(s)+1]
        """
        print(a+ " "+b)
        print("El primer elemento de a es: " + a[0])
        print("El primer elemento de b es: " + b[0])
        """
        if b[0] != '0':
            print(a+ " "+b)
            break;
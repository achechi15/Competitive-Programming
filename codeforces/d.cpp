#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n, mayor = 0, menor = 1000000000; cin >> n;
        for (int i = 0; i < n; i++)
        {
            int aux; cin >> aux;
            if (aux < menor) menor = aux; 
            if (aux > mayor) mayor = aux;
        }
        if ((mayor == n / 2) && (menor == 0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
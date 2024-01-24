#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, max = -1000000000, min = 100000000; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    int tam = max-min+1;
    // cout << min << endl;
    int arrAux[tam];
    // Initialize array 
    for (int i = 0; i < tam; i++) {
        arrAux[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int xD = arr[i]-min;
        // cout << "El índice es " << xD << endl; 
        arrAux[xD]++;
    }
    /*
    cout << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << arrAux[i] << " ";
    }
    
    */
    for (int i = 0; i < tam; i++) {
        if (arrAux[i] != 0)
        {
            for (int k = 0; k < arrAux[i]; k++) {
                cout << min+i << " ";
            }
        }
        
    }
    return 0;
}
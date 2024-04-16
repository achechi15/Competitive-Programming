#include <bits/stdc++.h>

using namespace std;
    
int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n, c, d; cin >> n >> c >> d;
        int tam = n*n;
        int arr[tam];
        for (int i = 0; i < (n*n); i++) cin >> arr[i];
        sort(arr, arr+tam);
        for (int i = 0; i < tam; i++) cout << arr[i] << " ";
        cout << endl;
        bool solved = true;
        for (int i = 0; i < tam-2; i++) {
            bool foundC = false, foundD = false;
            for (int j = i; j < tam && (!foundC || !foundD); j++) {
                cout << " -> "<< j << endl;
                if (arr[j] == d+arr[i]) foundD = 1;
                if (arr[j] == c+arr[i]) foundC = 1;
            }
            if (!foundC || !foundD) {
                solved = 0;
                break;
            }
        }
        if (solved) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
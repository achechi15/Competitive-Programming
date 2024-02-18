#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int aux = 2;
        int b[n];
        if (arr[0] == 1) b[0] = 2;
        else b[0] = 1;
        for (int i = 1; i < n; i++) {
            while (aux == arr[i] || aux <= b[i-1]) aux++;
            b[i] = aux;
        }
        // for (int i = 0; i< n; i++) cout << b[i] << " ";
        cout << b[n-1] << endl;
    }
    return 0;
}
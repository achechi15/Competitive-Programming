#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n-1], arrSol[n];
        for (int i = 0; i < n-1; i++) {
            cin >> arr[i];
        }
        arrSol[0] = arr[0]+1;
        for (int i = 0; i < n-1; i++) {
            int j = 0;
            if (i == n-2) {arrSol[n-1] = arr[n-2]; break;}
            while ((arrSol[i]*j+arr[i]) <= arr[i+1]) j++;
            arrSol[i+1] = (arrSol[i]*j+arr[i]);
        }
        for (int i = 0; i < n; i++) cout << arrSol[i] << " ";
    }
    return 0;
}
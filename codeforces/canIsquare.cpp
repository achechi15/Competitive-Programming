#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        double sum = 0.0;
        for (int i = 0; i < n; i++) {
            int aux; cin >> aux;
            sum += aux;
        }
        sum = sqrt(sum);
        int entero = sum;
        // cout << entero << endl;
        // cout << (double) entero << endl;
        sum = sum - (double)entero;
        if (sum != 0.0) {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;
}
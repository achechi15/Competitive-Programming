#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n, mx = INT_MIN, mn = INT_MAX; cin >> n;
        for (int i = 0; i < n; i++) {
            int aux; cin >> aux;
            mx = max(mx, aux);
            mn = min(mn, aux);
        }
        cout << (mx-mn)*2 << endl;
    }
    return 0;
}
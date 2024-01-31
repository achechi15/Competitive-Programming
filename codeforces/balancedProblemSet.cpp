#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int x, n; cin >> x >> n;
        int ans = 1;
        for (int i = 1; i <= sqrt(x); i++) {
            // cout << "ES LA ITERACION " << i << endl << "Y el valor de la multiplicacion es " << i*n << endl;
            if (x % i == 0) {
                if (n <= x/i) {
                    ans = max(ans, i);
                }
                if (n <= i) {
                    ans = max(ans, x/i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
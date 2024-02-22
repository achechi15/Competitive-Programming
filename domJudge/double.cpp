#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i <= n; i++) {
        float aux; cin >> aux;
        if (isnan(aux)) {
            cout << "NaN" << endl;
            continue;
        }
        else if (!isfinite(aux)) {
            cout << "0" << endl;
            continue;
        }
        double ans = 1/aux;  
        cout << ans << endl;
    }
    return 0;
}
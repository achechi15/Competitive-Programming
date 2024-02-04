#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll ans = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                // cout << "HA ENCONTRADO UN DIVISOR DE N " << i << endl;
                int cont = 0;
                ll sum = 0;
                ll mx = LLONG_MIN;
                ll mn = LLONG_MAX;
                for (int j = 0; j < n; j++) {
                    sum += arr[j];
                    cont++;
                    if (cont == i) {
                        mx = max(mx, sum);
                        mn = min(mn, sum);
                        sum = 0;
                        cont = 0;
                    }
                }
                ans = max(ans, mx - mn);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
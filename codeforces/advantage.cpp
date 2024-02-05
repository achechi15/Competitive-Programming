#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    for (int k = 0; k <  t; k++) {
        int n; cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<ll> c(n);
        copy(v.begin(), v.end(), c.begin());
        sort(c.begin(), c.end());
        for (int i = 0; i < n; i++) {
            if (v[i] != c[n-1]) {
                cout << v[i]-c[n-1] << " ";
            }
            else cout << v[i]-c[n-2] << " ";
        }
        cout << endl;
    }
    return 0;
}
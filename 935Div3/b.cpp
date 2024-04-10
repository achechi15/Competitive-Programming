#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        unsigned long long a, b, m; cin >> a >> b >> m;
        long long ans = 2;
        ans += (m / a) + (m / b);
        cout << ans << endl;
    }
    return 0;
}
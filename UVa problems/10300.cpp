#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int ans = 0;
        while(n--) {
            int a, b, c; cin >> a >> b >> c;
            ans += a*c;
        }
        cout << ans << endl;
    }
    return 0;
}
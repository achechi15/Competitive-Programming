#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 1; k <= t; k++) {
        int aux, ans = 0;
        int n; cin >> n;
        while (n--) {
            cin >> aux;
            ans = max(aux, ans);
        }
        cout << "Case " << k << ": " << ans << endl;
    }
    return 0;
}

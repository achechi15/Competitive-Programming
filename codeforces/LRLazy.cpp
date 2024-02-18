#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n, m; cin >> n >> m;
        int arr[n];
        int l = 0, r = n;
        for (int i = 0; i < n; i++) cin >> arr[i];
        string s; cin >> s;
        for (int i = 0; i < n; i++) {
            unsigned long long ans = 1;
            for (int j = l; j < r; j++) {
                ans = ans * arr[j];
            }
            cout << ans % m << " ";
            if (s[i] == 'L') {
                l++;
            }
            else r--;
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int odd = 0;
        int cont[28] {};
        for (int i = 0; i < n; i++) {
            cont[s[i]-'a']++;
        }
        // cout << s << endl;
        // cout  << " -------> " << odd << endl;
        for (int i = 0; i < 27; i++) {
            if (cont[i] % 2 != 0) odd++;
        }
        if (odd <= k+1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
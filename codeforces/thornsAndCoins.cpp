#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int posMax = n;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] == '*' && s[i+1] == '*') {
                posMax = i;
                break;
            }
        }
        int ans = 0;
        for (int i = 0; i < posMax; i++) {
            if (s[i] == '@') ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
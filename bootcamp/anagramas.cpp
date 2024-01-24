#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, m; cin >> s >> m;
    sort(s.begin(), s.end());
    sort(m.begin(), m.end());
    bool flag = true;
    for (int i = 0; i < m.size(); i++) {
        if (s[i] != m[i]) {
            flag = false;
            break;
        } 
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
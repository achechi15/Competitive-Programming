#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t; cin >> s >> t;
    int curr = 0;
    for (int i = 0; i < t.size(); i++) {
        if (s[curr] == t[i]) curr++;
    }
    cout << curr+1 << endl;
    return 0;
}
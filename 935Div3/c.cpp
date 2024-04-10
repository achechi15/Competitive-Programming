#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        string s; cin >> s;
        int l = 0, r = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') l++;
            else r++;
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        string s; cin >> s;
        char vocals[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        int n = s[1] - '0';
        for (int i = 0; i < 8; i++) {
            if (vocals[i] != s[0]) {
                cout << vocals[i] << n << endl;
            }
        }
        for (int i = 1; i <= 8; i++) {
            if (i != n) {
                cout << s[0] << i << endl;
            }
        }
    }
    return 0;
}
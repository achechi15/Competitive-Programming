#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        string s; cin >> s;
        string one = "one", two = "two";
        if (s.length() == 5) cout << 3 << endl;
        else {
            int nErrorOne = 0, nErrorTwo = 0;
            for (int i = 0; i <3; i++) {
                if (s[i] != one[i]) nErrorOne++;
                if (s[i] != two[i]) nErrorTwo++;
            }
            if (nErrorOne > 1) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}
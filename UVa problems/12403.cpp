#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    int n = 0;
    for (int k = 0; k < t; k++) {
        string s; cin >> s;
        if (s == "donate") {
            int aux; cin >> aux;
            n += aux;
        }
        else cout << n << endl;
    }
    return 0;
}
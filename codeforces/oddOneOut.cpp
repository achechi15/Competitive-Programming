#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int a, b, c; cin >> a >> b >> c;
        if (a == b) {
            cout << c << endl;
        }
        else if (a == c) {
            cout << b << endl;
        }
        else if (b == c) {
            cout << a << endl;
        }
    }
    return 0;
}
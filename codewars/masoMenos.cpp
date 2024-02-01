#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int a, b, c; cin >> a >> b >> c;
        if (a + b == c) {
            cout << "+" << endl;
        }
        else cout << "-" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, n; cin >> n >> a >> b;
        if (2*a < b) {
            cout << n * a << endl;
        } else {
            if (n & 1) {
                cout <<  b*(n/2)+a << endl;
            }
            else {
                cout << b*(n/2) << endl;
            }
        }
    }
    return 0;
}
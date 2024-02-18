#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n / 26 == 0) {
            char aux = 96 + (n-2);
            cout << "aa" << aux << endl;
        }
        else {
            if (n == 26 || n == 27) {
                n = n -2;
                char aux = 96+n;
                cout << "aa" << aux << endl;
            }
            else if (n / 26 == 1) {
                n = n-1;
                n = n - 26;
                char aux = 96+n;
                // cout << "HA ENTRADO AQUI" << endl;
                cout << "a" << aux << "z" << endl;
            }
            else if (n == 52 || n == 53) {
                n = n-1;
                n = n - 26;
                char aux = 96 + n;
                cout << "a" << aux << "z" << endl;
            }
            else {
                n = n - 26;
                n -= 26;
                char aux = 96 + n;
                cout << aux << "zz" << endl;
            }
        }
    }
    return 0;
}
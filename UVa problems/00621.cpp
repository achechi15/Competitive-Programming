#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string n; cin >> n;
        if (n.length() <= 2) {
            cout << "+" << endl;
        }
        else {
            if (n[n.length()-1] == '5') cout << "-" << endl;
            else if (n[0] == '9') cout << "*" << endl;
            else cout << "?" << endl;
        }
    }
    return 0;
}
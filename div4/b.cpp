#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool flag = true;
        bool first = true;
        for (int k = 0; k < n; k++) {
            if (first) flag = true;
            else flag = false;
            for (int j = 0; j < 2; j++) {
                bool memo = flag;
                for (int i = 0; i < n; i++) {
                    if (memo) cout << "##";
                    else cout << "..";
                    memo = !memo;
                }
                cout << endl;
            }
            first = !first;
        }
    }
}
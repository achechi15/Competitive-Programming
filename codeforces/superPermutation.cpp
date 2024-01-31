#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        if(n == 1) {
            cout << 1 << endl;
            continue;
        }
        else {
            if (n%2 == 0) {
                for (int i = 0; i < n; i++) {
                    if (i % 2 == 0) {
                        cout << n - i << " ";
                    }
                    else {
                        cout << i << " ";
                    }
                }
                cout << endl;
            }
            else 
            {
                cout << -1 << endl;
            }
        } 
    }
    return 0;
}
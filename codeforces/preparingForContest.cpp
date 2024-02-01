#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int l = 0; l < t; l++) {
        int n, k; cin >> n >> k;
        if (k == 0){
            for (int i = n; i >= 1; i--) {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        for (int i = 0; i < k; i++) {
            cout << i+1 << " ";
        }
        for (int i = n; i > k; i--) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
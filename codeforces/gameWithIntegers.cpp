#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t; 
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        if (n % 3 != 0) {
            cout << "First" << endl;
        }
        else cout << "Second" << endl;
    }
    return 0;
}
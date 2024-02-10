#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[n];
        }
        if (n % 2 == 0) {
            cout << 2 << endl << 1 << " " << n << endl << 1 << " " << n << endl;
        }
        else {
            cout << 4 << endl << 1 << " " << n-1 << endl << 1 << " " << n-1 << endl << n-1 << " " << n << endl << n-1 << " " << n << endl;
        }
    }
    return 0;
}
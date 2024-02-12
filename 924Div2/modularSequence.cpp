#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n, x, y, s; cin >> n >> x >> y >> s;
        int arr[n];
        // bool solved = false;
        arr[0] = x;
        s = s - arr[0];
        if (s % n != 0) {
            cout << "NO" << endl;
            continue;
        }
        else {
            cout << x << " ";
            for (int i = 1; i < n; i++) {
                if (arr[i-1] + y <= s) {
                    arr[i] = arr[i-1] + y;
                }
                else {
                    arr[i] = arr[i-1] % y;
                }
                s = s - arr[i];
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    
    }
    return 0;
}
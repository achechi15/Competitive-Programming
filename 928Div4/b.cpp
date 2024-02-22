#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n);
        bool flag = false;
        bool permit = false;
        for (int i = 0; i < n-1; i++) {
            permit = false;
            for (int j = 0; j < n; j++) if (arr[i][j] == '1') permit = true;
            if (arr[i] == arr[i+1] && permit) {
                flag = true;
            }
        }
        if (flag) cout << "SQUARE" << endl;
        else cout << "TRIANGLE" << endl;
    }
    return 0;
}
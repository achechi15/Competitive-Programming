#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        ll arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++) cin >> arr[i];
        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }
        for (int i = 0; i < n; i++) sum += arr[i];
        ll expected = sum / n;
        bool flag = true;
        for (int i = 0; i  <  n; i++) {
            if (i == n-1) {
                if (arr[i] > expected) flag = false;
            }
            else {
                if (arr[i] > expected) {
                    arr[i+1] += arr[i] - expected;
                }
            }
            
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
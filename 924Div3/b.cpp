#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % 3 == 0) cout << 0 << endl;
        else {
            if (sum % 3 == 2) cout << 1 << endl;
            else {
                bool flag = false;
                for (int i = 0; i < n; i++) {
                    if ((sum - arr[i]) % 3 == 0) flag = true;
                }
                if (flag) cout << 1 << endl;
                else cout << 2 << endl;
            }
        }
        
    }
    return 0;
}
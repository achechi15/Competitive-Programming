#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        ll n; cin >> n;
        set <ll> numsPrefix;
        ll arr[n];
        ll prefixSum[n];
        bool ans = false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i % 2 != 0) {
                arr[i] = -arr[i];
            }
            if(i == 0) {
                prefixSum[i] = arr[i];
            }
            else {
                prefixSum[i] = prefixSum[i-1]+arr[i];
            }
            if (prefixSum[i] == 0) ans = true;

            numsPrefix.insert(prefixSum[i]);
        }
        if (numsPrefix.size() != n || ans) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
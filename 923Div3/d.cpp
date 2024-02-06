#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        ll n; cin >> n;
        ll arr[n];
        ll prefixSum[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i == 0) {
                prefixSum[i] = arr[i];
            }
            else {
                prefixSum[i] = prefixSum[i-1]+arr[i];
            }
        }
        ll q; cin >> q;
        for (int i = 0; i < q; i++) {
            ll l, r; cin >> l; cin >> r;
            ll sum = prefixSum[l]-prefixSum[r];
            if ((arr[i-1]*(l-r)) == sum) {
                cout << -1 -1
            }
        }
    }
    return 0;
}
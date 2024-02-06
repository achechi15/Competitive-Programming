#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    int t; cin >> t;
    for (int l = 0; l < t; l++) {
        ll n, m, k; cin >> n >> m >> k;
        ll arr1[n], arr2[m];
        bool solve = true;
        set<ll> ans1, ans2;
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
            if (arr1[i] <= k && arr1[i] >= 1) {
                ans1.insert(arr1[i]);
            }
        }
        for (int i = 0; i < m; i++) {
            cin  >> arr2[i];
            if (arr2[i] <= k && arr2[i] >= 1) {
                ans2.insert(arr2[i]);
                if (ans1.count(arr2[i])) {
                    if (ans1.size() > k/2) {
                        ans1.erase(arr2[i]);
                    }
                    else {
                        ans2.erase(arr2[i]);
                    }
                }
            }
        }
        if ((ans1.size() == k/2) && (ans2.size() == k/2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
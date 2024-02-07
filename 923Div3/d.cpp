#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define entf cout << endl;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        ll n; cin >> n;
        ll arr[n];
        ll memo[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int aux = -2;
        memo[0] = aux;
        for (int i = 1; i < n; i++) {
            if (arr[i-1] != arr[i]) {
                aux = i;
            }
            memo[i] = aux;
        }

        /*for (int i = 0; i < n; i++) {
            cout << memo[i] << " ";
        }
        entf;
        */
        int q; cin >> q;
        while (q--) {
            int l, r; cin >> l >> r;
            if (memo[l-1]  == memo[r-1]) cout << "-1 -1" << endl;
            else {
                cout << l << ' ' << memo[l+1]+1 << endl;
            }
        }
    }
    return 0;
}
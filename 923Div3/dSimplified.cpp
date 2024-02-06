#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main() {
    int t; cin >>t;
    for (int k = 0; k < t; k++) {
        ll n; cin >> n;
        ll arr[n]; 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll q; cin >> q;
        for (int i = 0; i < q; i++) {
            ll l, r; cin >> l; cin >> r;
            for (int j = l-1; j < r; j++) {
                int num = arr[l-1];
                int pos1 = l;
                if (num != arr[j]) {
                    cout << pos1 << " " << l+1 << endl;
                    break;
                }
            }
            cout << "NO TINENE SOLUCION" << endl;
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}
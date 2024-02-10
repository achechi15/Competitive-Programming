#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define entf cout << endl;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int memo[n];
        int lastI = -1;
        memo[0] = lastI;
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i-1]) {
                lastI = i;
                memo[i] = i;
            }
            else {
                memo[i] = lastI;
            }
        }
        /*for (int i = 0; i < n; i++) cout << memo[i] << " " ;
        cout << endl;
        */
        int q; cin >> q; 
        while (q--) {
            int l, r; cin >> l >> r;
            if (memo[l-1] != memo[r-1] ) {
                cout << l << " " << memo[r-1]+1 << endl;
            }
            else cout << "-1 -1" << endl;
        }
    }
    return 0;
}
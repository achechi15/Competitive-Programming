#include <bits/stdc++.h>

using namespace std;


void solve(int n) {
    int ans = n, mx = 0;
    for (int i = 2; i <= n; i++) {
        int aux = i;
        int k = 2;
        int sum = aux;
        while (aux*k <= n) {
            sum += aux*k;
            // cout << sum << " ";
            k++; 
        }
        if (sum > mx) {
            ans = i;
            mx = sum;
        }
    }
    cout << ans << endl;
}


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        solve(n);
    }
    return 0;
}
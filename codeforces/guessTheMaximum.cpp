#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int arr[n], maxNumOfPar;
    for (int i = 0; i < n; i++) cin >> arr[i];
    maxNumOfPar = max(arr[0], arr[1]);

    for (int i = 1; i < n-1; i++) {
        maxNumOfPar = min(maxNumOfPar, max(arr[i], arr[i+1]));
    }
    int ans = maxNumOfPar - 1;
    cout << ans << endl;

}

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
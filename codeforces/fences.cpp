#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int arr[n];
    int ans = 1;
    int mn;
    int prefix[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    prefix[0] = arr[0];
    // Create the prefix sum
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + arr[i];
    }
    mn = prefix[k-1];
    // Test of the prefix sum
    // for (int i = 0; i < n; i++) cout << prefix[i] << " ";
    for (int i = 1; i < n-(k-1); i++) {
        if (mn > (prefix[i+(k-1)]-prefix[i-1])) {
            mn = (prefix[i+(k-1)]-prefix[i-1]);
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}
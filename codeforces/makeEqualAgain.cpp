#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t; 
    for (int k = 0; k < t; k++) {
        int n, value, ans = INT_MAX; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        value = arr[0];
        int r = 0;
        while (arr[r] == value) r++;
        int l = n-1;
        while (arr[l] == value) l--;
        if (r > l) ans = 0;
        else {
            r++; l++;
            // cout << " --> "<< r << " " << l << endl;
            ans=(l-r)+1;
        }
        value = arr[n-1];
        r = 0;
        while (arr[r] == value) r++;
        l = n-1;
        while (arr[l] == value) l--;
        if (l >= r) {
            r++; l++;
            cout << min(ans, (l-r)+1) << endl; 
        }
        else {
            cout << ans << endl;
        }
        
    }
    return 0;
}
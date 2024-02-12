#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

/*
int search(vector<ll> arr, int l, int r, int n) {
    if (l == r) return 1;
    if (arr[r] - arr[l] < n) {
        return (r-l)+1;
    }
    else {
        int mid = (l+r) / 2;
        return max(search(arr, l, mid, n), search(arr, mid+1, r, n));
    }
}
*/

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        vector<ll> arr(n);
        set<ll> duplicates;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        arr.resize(unique(arr.begin(), arr.end()) - arr.begin());
        if (arr.size() == 1) {
            cout << 1 << endl;
            continue;
        }
        int ans = 0;
        int pnt = 0;
        // int l = 0, r = arr.size()-1;
        for (int i = 0; i < arr.size(); i++) {
            
            while (arr[i]-arr[pnt] >= n) pnt++;
            ans = max(ans, (i-pnt)+1);
        }
        cout << ans << endl; 
    }
    return 0;
}
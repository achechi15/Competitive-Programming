#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n, m; cin >> n >> m;
        deque<ll> arr1(n);
        deque<ll> arr2(m);
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++) { 
            cin >> arr2[i];
        }
        sort( arr1.begin(), arr1.end() );
        sort( arr2.rbegin(), arr2.rend() );
        //reverse(arr2.begin(), arr2.begin()+m);
        ll sum = 0;
        // int j = 0, l = 0;
        for (int i = 0; i < n; i++) cout << arr1[i] << " ";
        cout << endl;
        for (int i = 0; i < m; i++) cout << arr2[i] << " ";
        cout << endl;
        for (int i = 0; i < n; i++) {
            if ( abs(arr1.front()-arr2.front()) >= abs() )
        }
        cout << sum << endl;
    }
    return 0;
}
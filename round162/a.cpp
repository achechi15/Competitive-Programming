#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        int last = 0;
        for (int i = 0; i < n; i++) { 
            cin >> arr[i];
            if (arr[i] == 1) last = i;
        }
        bool xD = false;
        int first = 0;
        int ans = 0;
        int i = 0;
        while (!xD) {
            if (arr[i] == 1) {
                xD = true;
                first = i;
            }
            i++;
        }
        for (int j = first; j < last; j++) {
            if (arr[j] == 0) ans++;
        }
        if (first == last) cout << 0 << endl;
        else cout << ans << endl;
    }
    return 0;
}
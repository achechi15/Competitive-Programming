#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main() {
    int t; cin >> t;
    for(int k = 0; k < t; k++) {
        int n; cin >> n;
        int arr[n];
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                count++;
            }
            else  {
                ans = max (ans, count);
                count = 0;
            }
        }
        ans = max(ans, count);
        cout << ans << endl;
    }
    return 0;
}

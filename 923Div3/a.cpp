#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0;
        bool thereIs = false;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B' && !thereIs) {
                thereIs = true;
                count = 1;
                ans = count;
            }
            else if (s[i] == 'B') {
                ans = count;
            }
            if(thereIs) count ++;
        }
        cout << ans << endl;
        
    }
    return 0;
}
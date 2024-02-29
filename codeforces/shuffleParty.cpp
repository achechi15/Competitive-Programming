#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t; 
    while (t--) {
        long long n; cin >> n;
        long long ans = 1;
        while (ans < n) {
            ans = ans << 1;
        }
        if (ans > n) {
            cout << (ans>>1) << endl;
        }
        else cout << ans << endl;
        
    }
    return 0;
}
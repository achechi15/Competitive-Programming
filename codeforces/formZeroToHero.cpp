#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k, ans = 0; cin >> n >> k;
        
        while (n != 0) {
            if (n % k == 0) {
                n = n / k;
                ans++;
            }
            else {
                ans = ans + (n % k);
                n = n - (n % k);
                // cout << "EL VALOR DEL MODULO ES " << n% k << endl;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
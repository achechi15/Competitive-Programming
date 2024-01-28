#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int x, n; cin >> x >> n;
        int answer = 1;
        for (int i = sqrt(x); i > 0; i--) {
            if (gcd(i, x) > answer) {
                answer = gcd(i, x);
            }
        }
        cout << answer << endl;
        
    }
    return 0;
}
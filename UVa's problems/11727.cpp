#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int a, b, c; cin >> a >> b >> c;
        int mx = max(a, b);
        mx = max(mx, c);
        int mn = min(a, b);
        mn = min(mn, c);
        if ((mx != a) && (mn != a)) cout << "Case " << k+1 << ": "<<a << endl;
        else if ((mx != b) && (mn != b)) cout << "Case " << k+1 << ": " << b << endl;
        else cout << "Case " << k+1 << ": " <<c << endl;
    }
    
    return 0;
}
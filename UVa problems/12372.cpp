#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int l, w, h; cin >> l >> w >> h;
        if ((l <= 20) && (w <= 20) && (h <= 20)) cout << "Case " << k+1 << ": " << "good" << endl;
        else cout << "Case " << k+1 << ": " << "bad" << endl;
    }
    return 0;
}
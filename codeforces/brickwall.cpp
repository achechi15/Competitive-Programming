#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n, m; cin >> n >> m;
        int result;
        bool mIsEven = (m % 2 == 0);
        if (mIsEven) {
            result = (m/ 2) * n;
        }
        else {
            result = ((m-1) / 2) * n;
        }
        cout << result << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int toLastNumber(int x) {
    while (x >= 10) {
        x = x % 10;
    }
    return x;
}

int main() {
    int k, r, ans = 1; cin >> k >> r;
    // cout << k << endl;
    int aux = k;
    int count = 0;
    while (toLastNumber(k) != r && !(k % 10 == 0)) {
        k += aux;
        ans++;
        count++;
    }
    cout << ans << endl;
    return 0;
}
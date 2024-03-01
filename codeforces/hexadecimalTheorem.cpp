#include <bits/stdc++.h>

using namespace std;
int main() {
    int n; cin >> n;
    // long long NMAX = (10e9)+1;
    long long memo[91];
    memo[0] = 0;
    memo[1] = 1;
    // cout << "xD" << endl;
    for (int i = 2; i <= 90; i++) {
        memo[i] = memo[i-1] + memo[i-2];
    }
    // cout << "XDDD" << endl;
    if (n == 1) cout << "1 0 0" << endl;
    else if (n == 2) cout << "2 0 0" << endl;
    else if (n == 3) cout << "1 1 1" << endl;
    else if (n == 0) cout << "0 0 0" << endl;
    else {
        int pos = 0;
        while (memo[pos] != n) pos++;
        cout << memo[pos-1] << " " << memo[pos-3] << " " << memo[pos-4] << endl; 
    }
    return 0;
}
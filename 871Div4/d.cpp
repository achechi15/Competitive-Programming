#include <bits/stdc++.h>

using namespace std;

bool solve(int n, int objective) {
    if (n == objective) return true;
    else if (n % 3 != 0) return false;
    else {
        return solve(n*2/3, objective) || solve(n/3, objective);
    }
}

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m; cin >> n >> m;
        if (!solve(n, m)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
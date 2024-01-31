#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    
    for (int k = 0; k < t; k++) {
        long long n; cin >> n;
        cout << (n*n)+(10+((n-4)*2)) << endl;
    }
    return 0;
}

// 10+(n-4 *2)
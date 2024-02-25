#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t; 
    while (t--) {
        int n; cin >> n;
        // cout << (((((n*576)/9)+7492) * 235) / 47 ) - 498 << endl;
        int ans = ((315*n) + 36962);
        cout << (abs(ans) / 10) % 10 << endl; 
    }
    return 0;
}
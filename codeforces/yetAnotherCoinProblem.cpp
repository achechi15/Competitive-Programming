#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        long long ans = 0;
        ans = ans + (n / 15);
        n = n % 15;
        ans += (n / 10);
        n = n % 10;
        ans += (n / 6);
        n = n % 6;
        ans += (n / 3);
        n = n % 3;
        ans += (n / 1);
        cout <<" -> " <<ans << endl;
    }
    return 0;   
}
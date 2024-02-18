#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t; 
    while (t--) {
        ll n, k; cin >> n >> k;
        if (k == (n*4) - 2) {
            cout << (k/2)+1 << endl;
        }
        else if (k & 1) {
            k++;
            cout << k/2 << endl;
        }
        else {
            cout << k/2 << endl;
        }
    }
}
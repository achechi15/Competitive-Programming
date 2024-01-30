#include <bits/stdc++.h>
// #define ll long long;


using namespace std;

int main() {
    int t; cin >> t;
    
    for (int k = 0; k < t; k++) {
        long long a, b, r; cin >> a >> b >> r;
        long long max = LLONG_MAX;
        for (int i = 0; i <= r; i++) {
            int aux = abs((a^i)-(b^i));
            if (aux < max) max = aux;
        }
        cout << max << endl;
    }
    return 0;
}
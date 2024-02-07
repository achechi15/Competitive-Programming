#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int sumDigits(int x);

int main() {
    int t; cin >> t;
    for (int l = 0; l < t; l++) {
        ll x, k; cin >> x >> k;
        bool found = false;
        int aux = x;
        while (!found) {
            aux = x;
            if ( x >= 10) {
                aux = sumDigits(x);
            }
            if (aux % k == 0) {
                found = true;
            }
            else {
                x++;
            }
        }
        cout << x << endl;
    }
    return 0;
}


int sumDigits(int x) {
    int sum = 0;
    while (x != 0) {
        sum += x%10;
        x /= 10;
    }
    return sum;
}
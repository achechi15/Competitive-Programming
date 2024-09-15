#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, cont = 0; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        if (cont == k) cont = 0;
        cout << (char)('a' + cont);
        cont++;
    }
    return 0;
}
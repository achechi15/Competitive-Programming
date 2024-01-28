#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    bool flag = false;
    int aux = c;
    while (aux <= b) {
        if (aux <= b && aux >= a) {
            flag = true;
            break;
        }
        aux += c;
    }
    if(flag) cout << aux << endl;
    else cout << -1 << endl;
    return 0;
}
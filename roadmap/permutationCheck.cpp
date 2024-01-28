#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    set <int> vals;
    for (int i = 0; i < n; i++) {
        int aux; cin >> aux;
        vals.insert(aux);
    }
    if (vals.size() == n) {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}
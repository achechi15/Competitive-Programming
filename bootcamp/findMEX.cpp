#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    set <int> vals;
    for (int i = 0; i < n; i++) {
        int aux; cin >> aux;
        vals.insert(aux);
    }
    bool flag = false;
    int i = 0;
    while (!flag)
    {
        if (vals.count(i) == 0) {
            cout << i << endl;
            return 0;
        }
        i++;
    }
}
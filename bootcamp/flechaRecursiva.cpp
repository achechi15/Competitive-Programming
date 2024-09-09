#include <bits/stdc++.h>

using namespace std;

void recursive(int n, int aux) {
    if (aux == 0) {
        for(int i = 0; i < n; i++) cout << "#";
        cout << endl;
    } else {
        for (int i = 0; i < n-aux; i++) {
            cout << "#";
        }
        cout << endl;
        recursive(n, aux-1);
        for (int i = 0; i < n-aux; i++) {
            cout << "#";
        }
        cout << endl;
    }
}

int main() {
    int n; cin >> n;
    recursive(n, n-1);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int aux = n;
    for (int i = 0; i < n+(n-1); i++) {
        cout << "#";
    }
    cout << endl;
    for (int l = 0; l < aux+(aux-1); l++) {
        if (l % 2 == 0) {
            cout << "#";
            for (int i = 0; i < n+(n-3); i++) {
                cout << " ";
            }
            cout << "#" << endl;
        }
        else if (l == n-1){
            for (int i = 0; i < n+(n-1); i++) {
                if (i % 2 == 0) {
                    cout << "#";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    for (int i = 0; i < n+(n-1); i++) {
        cout << "#";
    }
    return 0;
}
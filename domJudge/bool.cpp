#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        bool solved = false;
        int i = 0;
        string aux;
        while (!solved) {
            i++;
            cout << "READ " << i << endl;
            cin >> aux;
            if (aux == "false") {
                solved = true;
            }
        }
        cout << "OUTPUT " << i-1 << endl;
    }
    return 0;
}
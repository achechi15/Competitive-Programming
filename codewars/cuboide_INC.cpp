#include <bits/stdc++.h>

using namespace std;

int main() {
    int w, h, d; cin >> w >> h >> d;
    // Cabecera (la anchura del cubo)
    for (int i = 0; i < d; i++) {
        cout << " ";
    }
    for (int i = 0; i < w+1; i++) {
        cout << "_";
    }
    cout << endl;
    // Damos volumen
    for (int i = 0; i < d; i++) {
        int aux = d-1;
        if (aux != 0) {
            for (int j = 0; j < aux; j++) {
                cout << " ";
            }
        }
        if (i == d-1) {
            for (int j = 0; j < w+2; j++) {
                if (j == 0 || j == w+1) {
                    cout << "/";
                }
                else cout << " ";
            }
        }
    }
    return 0;
}
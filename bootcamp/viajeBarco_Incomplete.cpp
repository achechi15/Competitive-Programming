#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int n, m; cin >> n >> m;
    unsigned int barcos[n], personas[m];

    for (int i = 0; i < n; i++) {
        cin >> barcos[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> personas[i];
    }
    sort(barcos, barcos+n);
    sort(personas, personas+m);
    int carriedAscendent = 0;
    int j = n-1;
    for (int i = m-1; i >= 0; i--) {
        while (personas[i] > barcos[j]) {
            j--;
            if (j < 0) break;
        }
        if (j < 0) break;
        carriedAscendent += personas[i];
        
        // continue;
    }

    cout << carriedAscendent << endl;
    return 0;
}
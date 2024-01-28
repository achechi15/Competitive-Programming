#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++){
        int aux; cin >> aux;
        if (aux > 10) {
            count += aux -10;
        }
    }
    cout << count << endl;
    return 0;
}
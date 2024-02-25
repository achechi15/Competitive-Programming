#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int count = 1;
    while (n) {
        int treats = 0, noTreats = 0;

        for (int i = 0; i < n; i++) {
            int aux; cin >> aux;
            if ( aux  != 0) noTreats++;
            else treats++;
        }
        cout << "Case " << count << ": " << noTreats - treats << endl;
        cin >> n;
        count++;
    }
    return 0;
}
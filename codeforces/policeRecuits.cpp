#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, policeOfficers = 0, ans = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        int aux; cin >> aux;
        if (aux == -1 && policeOfficers == 0) ans++;
        else if (aux == -1) policeOfficers--;
        else policeOfficers += aux;
    }
    cout << ans << endl;
    return 0;
}
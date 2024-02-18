#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    for (int r = 0; r < t; r++) {
        int k, x; cin >> k >> x;
        ll a, bet = 1, moneyLost = 0; cin >> a;
        ll aux = a;
        // int loses = 0;
        bool ans = true;
        
        for (int i = 1; i <= x+1; i++) {
            aux = aux - bet;
            // cout << " --> " << bet << endl;
            if (aux < 0) ans = false;
            moneyLost = moneyLost+bet;
            bet = (moneyLost / (k-1))+1;
        }
        // cout << "LAST BET IS --> " << bet << endl;
        aux += (bet*(k-1));
        // cout << aux << endl;
        // if (aux >= a) ans = true;
        if (aux < a) ans = false;
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
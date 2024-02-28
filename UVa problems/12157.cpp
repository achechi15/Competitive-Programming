#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 1; k <= t; k++) {
        int n, mile = 0, juice = 0; cin >> n;
        for (int i = 0; i < n; i++) {
            int min; cin >> min;
            mile += 10 * ((min / 30)+1);
            juice += 15*((min/ 60)+1);
        }
        cout << "Case " << k << ": ";
        if (mile < juice) {
            cout << "Mile " << mile << endl;
        }
        else if (juice < mile) cout << "Juice " << juice << endl;
        else cout << "Mile Juice " << juice << endl;
    }
    return 0;
}
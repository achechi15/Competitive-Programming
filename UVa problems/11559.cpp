#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, budget, hotel, weeks;
    while (cin >> n >> budget >> hotel >> weeks) {
        int ans = budget+1;
        for (int i = 0; i < hotel; i++) {
            int price; cin >> price;
            for (int j = 0; j < weeks; j++) {
                int aux; cin >> aux;
                if (aux >= n && n*price < ans) ans = n*price;
            }
        } 
        if (ans > budget) cout << "stay home" << endl;
        else cout << ans << endl;

    }
    return 0;
}
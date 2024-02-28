#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 1; k <= t; k++) {
        vector<pair<string, int>> websites(10);
        int mx = 0;
        for (int i = 0; i < 10; i++) {
            //pair<string, int> aux;
            cin >> websites[i].first;
            cin >> websites[i].second;
            mx = max(mx, websites[i].second);
        }
        cout << "Case #" << k << ":" << endl;
        for(int i = 0; i < 10; i++) {
            if (websites[i].second == mx) cout << websites[i].first << endl;
        }
    }
    return 0;
}
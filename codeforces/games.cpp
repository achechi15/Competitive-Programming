#include <bits/stdc++.h>

using namespace std;
using vii  = vector<pair<int, int>>;

int main() {
    int n, ans = 0; cin >> n;
    vii teams(n);
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        teams[i] = {a, b};
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (teams[i] != teams[j]) {
                if (teams[i].first == teams[j].second) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
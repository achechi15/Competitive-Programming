#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;

int main() {
    int t; cin >> t;
    for (int q = 0; q < t; q++) {
        int n, k; cin >> n >> k;
        ii quests[n];
        // Initialization of the pair quests
        for (int i = 0; i < n; i++) {
            cin >> quests[i].first;
        }
        for (int i = 0; i < n; i++) {
            cin >> quests[i].second;
        }
        // Go over the array of pair
        int sum = 0;
        int ans = 0;
        int mx = 0;
        for (int i = 0; i < min(n, k); i++) {
            sum += quests[i].first;
            mx = max(mx, quests[i].second);
            ans = max(ans, sum + (mx * (k-(i+1))));
        }
        cout << ans << endl;
    }
    return 0;
}
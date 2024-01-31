#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;
int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        ii permutations[n];
        for (int i = 0; i < n; i++) {
            cin >> permutations[i].first;
        }
        for (int i = 0; i < n; i++) {
            cin >> permutations[i].second;
        }
        sort(permutations, permutations+n);
        for (int i = 0; i < n; i++) {
            cout << permutations[i].first << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++) {
            cout << permutations[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}
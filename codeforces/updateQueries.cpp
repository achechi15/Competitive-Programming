#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        string s; cin >> s;
        pair<int, int> arr[n] = {};
        for (int i = 0; i < m; i++) {
            int aux; cin >> aux;
            aux--;
            arr[aux].second++;
        }

        string c; cin >> c;
        sort(c.begin(), c.end());
        int cont = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i].second != 0) {
                s[i] = c[cont];
                cont++;
            }
        }
        cout << s << endl;
    }

    return 0;
}
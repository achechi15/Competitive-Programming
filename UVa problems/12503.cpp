#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        int ans = 0;
        int arr[n];
        for (int i = 0; i <n; i++) {
            string aux; cin >> aux;
            if (aux == "LEFT") {
                arr[i] = -1;
            }
            else if (aux == "RIGHT") {
                arr[i] = 1;
            }
            else {
                string s; cin >> s;
                int xD; cin >> xD;
                arr[i] = arr[xD-1];
            }
        }
        for (int i = 0; i < n; i++) {
            ans += arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}
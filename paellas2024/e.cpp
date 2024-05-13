#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, a, b, c; cin >> n >> a >> b >> c;
        int arr[n+1] {};
        if (a <= n) arr[a] = 1;
        if (b <= n) arr[b] = 1;
        if (c <= n) arr[c] = 1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                if (i+a <= n) arr[i+a] = 1;
                if (i+b <= n) arr[i+b] = 1;
                if (i+c <= n) arr[i+c] = 1;
            }
        }
        // for (int i = 0; i < n; i++) cout << arr[i] << " ";
        // cout << endl;
        if (arr[n] == 1) cout << "Queda al punto" << endl;
        else cout << "Se pasa el arroz" << endl;
    }
    return 0;   
}
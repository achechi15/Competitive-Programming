#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[n][3];
    int ans = 0;
    for (int i = 0; i < n; i++){
        int aux = 0;
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            aux += arr[i][j];
        }
        if (aux >= 2) ans++;
    }

    cout << ans << endl;
    return 0;
}
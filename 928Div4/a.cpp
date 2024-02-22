#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int ans = n;
        sort(arr, arr+n);
        int cont = 1;
        for (int i = 0 ; i < n-1; i++) {
            for (int j = n-1; j > i; j--) {
                if (arr[i] != -1 && arr[j] != -1){
                    int aux = arr[i] ^ arr[j];
                    if (aux == INT_MAX) {
                        ans -= 2;
                        arr[i] = -1;
                        arr[j] = -1;
                    }
                }
            }
        }
        if (ans == 0) cout << 1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
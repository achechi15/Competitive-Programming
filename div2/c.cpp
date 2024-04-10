#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n]{};
        for (int i = 0; i < n; i++) {
            int aux; cin >> aux;
            arr[aux]++;
        }
        int ans = 1;
        if (arr[0] == 0) cout << 0 << endl;
        else {
            for(int i = 1; i < n; i++) {
                if (arr[i] < i || arr[i] < 2) break;
                ans = i; 
            }
            cout << ans << endl;
        }
        
    }
    return 0;
}
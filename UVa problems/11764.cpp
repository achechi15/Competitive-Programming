#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 1; k <= t; k++) {
        int low = 0, high = 0, n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (n > 1) {
            for (int i = 1; i < n; i++) {
                if (arr[i] - arr[i-1] > 0) high++;
                if (arr[i] - arr[i-1] < 0) low++;
            }
        }
        cout << "Case " << k << ": " << high << " " << low << endl;
    }
    return 0;
}
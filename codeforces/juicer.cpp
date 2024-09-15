#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, d, currWaste = 0, ans = 0; cin >> n >> b >> d;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] <= b) {
            currWaste += arr[i];

            if (currWaste > d) {
                ans++;
                currWaste = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
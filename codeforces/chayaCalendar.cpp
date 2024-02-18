#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        ll current = arr[0];
        for (int i = 1; i < n; i++) {
            current++;
            if (current % arr[i] != 0) {
                current = current + ((arr[i]) - (current % arr[i]));
            }
        }
        cout << current << endl;
    }
    return 0;
}
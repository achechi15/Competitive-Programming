#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
#define entf cout << endl;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        // IMPLEMENTATION WITH DISTANCES
        int arr[n]; 
        int distances[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        distances[n-1] = 0;
        int distance = 1;
        for (int i = n-2; i >= 0; i--) {
            if (arr[i] != arr[i+1]) {
                distance = 1;
                distances[i] = distance;
            }
            else {
                distance++;
                distances[i] = distance;
            }
        }
        /*
        for (int i = 0; i < n; i++) {
            cout << distances[i] << " ";
        }
        cout << endl;
        */
        int q; cin >> q;
        for (int i = 0; i < q; i++) {
            int l, r; cin >> l >> r;
            l--; r--;
            if (distances[l]+l > r) cout << "-1 -1" << endl;
            else {
                cout << l+1 << " " << l+1+distances[l] << endl;
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    int t; cin >> t;
    
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n);
        int div = n / 3, m = n % 3;
        ll sum = 0;
        if (n == 1) {
            cout << arr[0] << endl; 
            continue;
        } 
        else if (n == 2) {
            cout << arr[1] << endl;
            continue;
        }
        else if(arr[0] == arr[n-1]) {
            cout << arr[0] * n << endl;
        }
        else {
            if (m == 0) {
                int mid = div+div;
                // cout << "HA ENTRADO AQUI" << endl;
                for (int i = div; i < mid; i++) sum += arr[i];
                // cout << sum << endl;
                for (int i = mid; i < n; i++) { 
                    // cout << " --> " << arr[i]*2 << endl;
                    sum += (arr[i]*2);
                }
            }
            else if (m == 1) {
                int i2 = div*2;
                div++;
                for (int i = div; i < i2; i++) sum += arr[i];1515
                for (int i = i2; i < n; i++) sum += arr[i]*2;
            }
            else {
                int i2 = div*2; i2++;
                div++;
                for (int i = div; i < i2; i++) sum += arr[i];
                for (int i = i2; i < n; i++) sum += arr[i]*2;
            }
            cout << sum << endl;
        }
        
    }
    return 0;
}
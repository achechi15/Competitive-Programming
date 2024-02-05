#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        int arr[n];
        int maxValue = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll maxSum = arr[0];
        ll currSum = arr[0];
        for (int i = 1; i < n; i++) {
            if ((abs(arr[i-1]) % 2) != (abs(arr[i]) % 2)) {
                currSum = max(currSum+arr[i], (ll)arr[i]);
                maxSum = max(maxSum, currSum);
            }
            else {
                currSum = max(INT_MIN, arr[i]);
                maxSum = max(maxSum, currSum);
            }
        }
        cout << maxSum << endl;
        
    }
    return 0;
}
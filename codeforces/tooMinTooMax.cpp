#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n);
        int min1 = arr[0], min2 = arr[1], max1 = arr[n-1], max2 = arr[n-2];
        cout << abs(max1-min1)+abs(max2-min2)+abs(min1-max2)+abs(min2-min1) << endl;
    }
    return 0;
}
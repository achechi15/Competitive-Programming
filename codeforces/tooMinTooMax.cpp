#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n);
        int a = arr[0], b = arr[1], c = arr[n-1], d = arr[n-2];
        cout << abs(a-b)+abs(b-c)+abs(c-d)+abs(a-d) << endl;
    }
    return 0;
}
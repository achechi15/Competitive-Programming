#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = 0, min = 100000000;
    sort(arr, arr+n);
    cout << arr[k-1] << " " << arr[k] << endl;
}
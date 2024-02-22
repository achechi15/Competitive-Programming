#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int arr[n];
        int multiply = 1;
        for (int i = 0; i < n; i++)  {
            cin >> arr[i];
            multiply *= arr[i];
        }
        if (2023 % multiply != 0) {
            cout  << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            cout << 2023 / multiply << " ";
            for (int i = 0; i < k-1; i++) cout << 1 << " ";
            cout << endl;
        }
    }
}
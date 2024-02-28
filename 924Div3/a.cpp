#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)  {
            cin >> arr[i];
            sum+= abs(arr[i]);
        }
        cout << sum << endl;
    }
    return 0;   
}
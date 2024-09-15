#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    cin >> m;
    for (int i = 0; i < m; i ++) {
        int x, y, leftBirds, rightBirds; cin >> x >> y;
        leftBirds = y-1;
        rightBirds = arr[x-1] - y;
        arr[x-1] = 0;
        if (x-1 > 0) arr[x-2] += leftBirds;
        if (x < n) arr[x] += rightBirds;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
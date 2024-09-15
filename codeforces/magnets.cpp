#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, groups = 1; cin >> n;
    string magnets[n];
    cin >> magnets[0];
    for (int i = 1; i < n; i++) {
        cin >> magnets[i];
        if (magnets[i][0] == magnets[i-1][1]) groups++;
    }
    cout << groups << endl;
    return 0;
}
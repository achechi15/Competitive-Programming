#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sereja = 0, dima = 0; cin >> n;
    int cards[n],l = 0, r = n-1;
    for (int i = 0; i < n; i++) cin >> cards[i];
    for (int i = 0; i < n; i++) {
        int maxN;
        if (cards[l] > cards[r]) {
            maxN = cards[l];
            l++;
        } else {
            maxN = cards[r];
            r--;
        }
        if (i % 2 == 0) sereja += maxN;
        else dima += maxN;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
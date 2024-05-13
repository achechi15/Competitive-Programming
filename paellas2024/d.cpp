#include <bits/stdc++.h>

using namespace std;

int segmentTree[4*10000] {};

void build(int input[], int low, int high, int pos) {
    // Caso base: cuando hemos llegado a una hoja
    if (low == high) {
        segmentTree[pos] = input[low];
    }
    else {
        int mid = (low+high) / 2;
        build(input, low, mid, pos*2);
        build(input, mid+1, high, pos*2+1);
        segmentTree[pos] = min(segmentTree[pos*2], segmentTree[pos*2+1]);
    }
}

int minQuery(int qLow, int qHigh, int low, int high, int pos) {
    if (qLow <= low && qHigh >= high)  { // base case: TOTAL OVERLAP
        return segmentTree[pos];
    }
    if (qLow > high || qHigh < low) { // Base case: NO OVERLAP
        return INT_MAX;
    }
    int mid = (high + low) / 2;
    return min(minQuery(qLow, qHigh, low, mid, pos*2),
                minQuery(qLow, qHigh, mid+1, high, pos*2+1));
}

int main() {
    int t; cin >> t;
    while (t--) {
        // segmentTree;
        int n; cin >> n;
        int arr[n+1];
        for (int i = 1; i <= n; i++) cin >> arr[i];
        build(arr, 1, n, 1);
        int q; cin >> q;
        while (q--) {
            int l, r; cin >> l >> r;
            cout << minQuery(l, r, 1, n, 1) << endl;
        }
    }
    return 0;
}
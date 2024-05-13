#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        string sequenceA, sequenceB; cin >> sequenceA >> sequenceB;
        int ans = 0;
        int Apointer = 0, Bpointer = 0;
        while (Apointer < a && Bpointer < b) {
            if (sequenceA[Apointer] == sequenceB[Bpointer]) {
                ans++;
                Apointer++; Bpointer++;
            }
            else {
                Bpointer++;
            }
        }
        cout <<ans << endl;
    }
    return 0;
}
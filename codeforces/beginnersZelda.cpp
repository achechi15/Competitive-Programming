#include <bits/stdc++.h>

using namespace std;
const int nmax = 1e6 + 5;
int freq[nmax];

int main() {
    int t; cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1, a, b; i < n; i++) {
            cin >> a >> b;
            freq[a]++;
            freq[b]++;
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++)
            cnt += (freq[i] == 1),
            freq[i] = 0;
        cout << (cnt + 1) / 2 << '\n';
    }
}
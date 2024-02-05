#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for(int k = 0; k < t; k++) {
        int n; cin >> n;
        vector<char> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = n-1; i >= 0; i--) {
            if (v[i] == 'b' || v[i] == 'b' || v[i] == 'd') {
                i -= 2;
                n++;
                v.insert(v.begin()+i,'.');
            }
            if (v[i] == 'a' || v[i] == 'e') {
                i -= 1;
                n++;
                v.insert(v.begin()+i, '.');
            }
        }
        for (int i = 0; i < n; i++) {
            if (i != 0) cout << v[i];
        }
        cout << endl;
        
    }
    return 0;
}
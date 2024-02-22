#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int contA = 0, contB = 0;
        string s; cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == 'A') contA++;
            else contB++;
        }
        if (contA > contB) cout << "A" << endl;
        else cout << "B" << endl;
    }
    return 0;
}
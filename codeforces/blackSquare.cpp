#include <bits/stdc++.h>

using namespace std;

int main() {
    // set of the calories each strip
    int calories[4]; 
    for (int i = 0; i < 4; i++) cin >> calories[i];
    // input
    string s; cin >> s;
    long long ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans += calories[(s[i]-'0')-1];
    }
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    set<char> knownChar;
    for (int i = 0; i < s.size(); i++) {
        knownChar.insert(s[i]);
    }
    if (knownChar.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}
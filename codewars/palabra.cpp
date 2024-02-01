#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int countM = 0, countN = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] <= 90) countM++;
        else countN++;
    }
    if (countM > countN) {
        for (int i = 0; i < s.size(); i++) {
            cout << char(toupper(s[i]));
        }
        cout << endl;
    }
    else {
        for (int i = 0; i < s.size(); i++) {
            cout << char(tolower(s[i]));
        }
        cout << endl;
    }
    return 0;
}
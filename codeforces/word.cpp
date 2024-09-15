#include <bits/stdc++.h>

using namespace std;

string toLowerCase(string s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

string toUpperCase(string s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = toupper(s[i]);
    }
    return s;
}

int main() {
    string s; cin >> s;
    int nLowercase = 0, nUppercase = 0, size = s.size();
    for(int i = 0; i < size; i++) {
        if (islower(s[i])) nLowercase++;
        else nUppercase++;
    }
    if (nLowercase >= nUppercase) cout << toLowerCase(s) << endl;
    else cout << toUpperCase(s) << endl;
    return 0;
}
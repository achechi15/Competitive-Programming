#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        string s; cin >> s;
        int a = s[0]-'0', b = s[1]-'0', c = s[2]-'0', d = s[3]-'0';
        if (a == 0) a = 10;
        if (b == 0) b = 10;
        if (c == 0) c = 10;
        if (d == 0) d = 10;
        cout << (abs(a-1)+abs(b-a)+abs(c-b)+abs(d-c))+4 << endl;
    }
}
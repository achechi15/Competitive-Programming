#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    while (s != "0") {
        while (s.size() != 1) {
            int aux = 0;
            for (int i = 0; i < s.size(); i++) {
                aux += s[i] - '0';
            }
            s = to_string(aux);
        }
        cout << s << endl;
        cin >> s;
    }
    return 0;
}
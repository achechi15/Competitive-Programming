#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    bool first = true;
    while(getline(std::cin, s)) {
        for (int i = 0; i <s.length(); i++) {
            if (s[i] == '"' && first) {
                first = false;
                cout << "``";
            }
            else if (s[i] == '"' && !first) {
                first = true;
                cout << "''";
            }
            else cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
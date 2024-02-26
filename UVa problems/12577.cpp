#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int count = 1;
    while (s != "*") {
        if (s == "Hajj") cout << "Case " << count << ": " << "Hajj-e-Akbar" << endl;
        else cout << "Case " << count << ": " << "Hajj-e-Asghar" << endl;
        cin >> s;
        count++;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        map <int, char> oracion;
        string s; cin >> s;
        stack <int> lower, upper;
        for (int i = 0; i < s.length(); i++) {
            if(s[i] == 'b') {
                if (!lower.empty()) {
                    int index = lower.top();
                    oracion[index] = '.';
                    lower.pop();
                }
                continue;
            }
            if (s[i] == 'B') {
                if (!upper.empty()) {
                    int index = upper.top();
                    oracion[index] = '.';
                    upper.pop();
                }
                continue;
            }
            oracion[i] = s[i];
            if(s[i] <= 90 && s[i] >= 65) {
                upper.push(i);
            }
            else if (s[i] <= 122 && s[i] >= 97){
                lower.push(i);
            }
        }
        for (int i = 0; i < oracion.size(); i++) {
            if (oracion[i] != '.' && oracion[i] >= 65 && oracion[i] <= 122) {
                cout << oracion[i];
            }
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int currentPosition = 0, ans = 0;
    // char - 'a' 97
    string s; cin >> s;
    for (auto i = 0; i < s.size(); i++) {
        // cout << s[i] - 'a' << endl;
        //? Simple implementación del complementario, debido a que si tienes el recorrido de x a y, el otro recorrido es 26 (total recorrido) - recorrido x a y
        ans += min( abs((s[i]-'a') - currentPosition), abs(26 - abs(currentPosition - (s[i] - 'a'))) );
        currentPosition = s[i] - 'a';
    }
    cout << ans << endl;
    return 0;
}
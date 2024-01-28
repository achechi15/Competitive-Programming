#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int l = 0; l < t; l++) {
        int n, k, size; cin >> n >> k >> size;
        string s; cin >> s;
        bool hola = false;
        int contador = 0;
        string ans = "";
        set <char> substring;
        for (int i = 0; i < size; i++) {
            substring.insert(s[i]);
            if (substring.size() == k) {
                substring.clear();
                contador++;
                ans += s[i];
            }
            if (contador == n) {
                cout << "YES" << endl;
                hola = true;
                break;
            }
        }
        if (!hola) {
            cout << "NO" << endl;
            bool flag = true;
            char i = 'a';
            char c;
            while(flag) {
                if (substring.count(i) == 0) {
                    c = i;
                    flag = false;
                }
                i++;
            }
            string aux = "";
            if (n-(contador+1) != 0) {
                for (int j = 0; j < n-(contador+1); j++) {
                    aux += 'a';
                }
            }
            cout << ans << c << aux <<endl;
        }
        
    }
    
}
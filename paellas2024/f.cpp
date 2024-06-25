#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


ull wToNumber(string s, ull power[]) {
    ull aux = 0; 
    while (s.size() != 0) {
        cout << " -> " << s[0] << " -> " << s[0]-'a' << " -> " << power[s.size()-1]<< endl;
        aux += (s[0] - 'a') * power[s.size()-1];
        if (s.size() == 1) return aux;
        s = s.substr(1);
    }
    return aux;
}

string nToWord (ull number, int n) {
    string aux = "";
    while (number != 0) {
        aux = ((char)((number % 26) + 'a')) + aux;
        number = number/26;
    }
    if (aux.size() != n) {
        for (int i = aux.size(); i < n; i++) {
            aux='a' + aux;
        }
    }
    return aux;
}

int main() {
    int n; cin >> n;
    ull power[n+1] = {1};
    for (int i = 1; i <= n; i++) {
        power[i] = power[i-1]*26;
    }
    // cout << nToWord(1, n) << endl;
    ull l = 0, r = power[n], mid = (l+r)/2;
    // cout << wToNumber("leandro", power) << endl;
    while(l <= r) {
        mid = (l+r)/2;
        string aux;
        if (l - r == 0) {
            cout << "? " << nToWord(mid, n) << endl;
            cin >> aux;
            if (aux == ">=") cout << "! " << nToWord(l, n)<<endl;
            else cout << "! " << nToWord(l-1, n) << endl;
            break;
        }
        else if (r - l == 1) {
            cout << "? " << nToWord(mid+1, n) << endl;
            cin >> aux;
            if (aux == ">=") cout << "! " << nToWord(r, n) << endl;
            else cout << "! " << nToWord(l, n) << endl;
            break;
        }
        else {
            cout << "? " << nToWord(mid, n) << endl;
            // cout << " -> "<< l << " "<<mid << " "<< r<< endl;
            cin >> aux;
            if (aux == ">=") l = mid;
            else r = mid-1;
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

bool isBinary(int n) {
    while (n != 0) {
        if (n % 10 == 0 || n % 10 == 1) n = n / 10;
        else return false;
    }
    return true;
}

int main() {
    int t; cin >> t;
    set<int> memo11, memo101, memo111;
    unsigned int aux = 11;
    for (int i = 0; i < 5; i++) {
        memo11.insert(aux);
        aux *= aux; 
    }
    aux = 101;
    for (int i = 0; i < 3; i++) {
        memo101.insert(aux);
        aux*= aux;
    }
    aux = 111;
    for (int i = 0; i < 3; i++) {
        memo111.insert(aux);
        aux*= aux;
    }
    while (t--) {
        int n; cin >> n;
        if (isBinary(n)) {
            cout << "YES" << endl;
        }
        else {
            if (memo11.count(n) || memo101.count(n) || memo111.count(n)) cout << "YES" << endl;
            else {
                if (memo101.count(n / 11) || memo111.count(n / 11)) cout << "YES" << endl;
                else if (memo11.count(n / 101) || memo111.count(n / 101)) cout << "YES" << endl;
                else if (memo11.count(n / 111) || memo101.count(n / 111)) cout << "YES" << endl;
                else if (isBinary(n / 11) && n % 11 == 0) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n, p; cin >> n >> p;
        string s; cin >> s;
        int countR = 0, countB = 0;
        for (int i = 0; i < n-1; i++) {
            if(s[i] == 'r') countR++;
            else countB++;
        }
        //cout << "LA CUENTA DE ROJO ES " << countR << endl << "LA CUENTA DE AZUL ES " << countB << endl;
        bool isOdd = false;
        if (p == 0) isOdd = true;
        if (isOdd) {
            if ((countR+1) % 2 == 0){
            cout << "RED" << endl;
            }
            else {
                cout << "BLUE" << endl;
            }
        }
        else {
            if ((countR+1) % 2 != 0) {
                cout << "RED" << endl;
            }
            else {
                cout << "BLUE" << endl;
            }
        }
        
    }
    return 0;
}
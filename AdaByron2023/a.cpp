#include <bits/stdc++.h>

using namespace std;

bool solve(long long n) {
    string s = to_string(n);
    // cout << " ---> "<<s << endl;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] ==  '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '7' ) {
            return false;
        }
    }
    return true;
}

int main() {
    int t; cin >> t; 
    while (t--) {
        // Los numeros que se pueden dar la vuelta son 1, 6, 8, 9;
        // Si al 1 se le da la vuelta sigue teniendo el mismo 
        long long n; cin >> n;
        for (int i = n; i > 0; i--) {
            // cout << "ha entrado aqui" << endl;
            bool solved = solve(i);
            // cout <<" --> " <<  solved << endl;
            if (solved) {
                // cout << "SE HA CUMPLIDO" << endl;
                cout << i << endl;
                break;
            }
        }
        // cout << "ha salido " << endl;
    }
    return 0;
}
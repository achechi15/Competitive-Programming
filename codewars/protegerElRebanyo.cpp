#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    string campo[n];
    for (int i = 0; i < n; i++) {
        cin >> campo[i];
    }
    // cout << "HOLA MUNDO" << endl;
    bool flag = true;
    if (n != 1 && m != 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (campo[i][j] == 'L') {
                    if (j == m-1) {
                        if (i == 0) {
                            if (campo[i][j-1] == 'O' || campo[i+1][j] == 'O') {
                                flag = false;
                            }
                        }
                        else if (i == n-1) {
                            if (campo[i][j-1] == 'O' || campo[i-1][j] == 'O') {
                                flag = false;
                            }
                        }
                        else {
                            if (campo[i-1][j] == 'O' || campo[i+1][j] == 'O' || campo[i][j-1] == 'O') {
                                flag = false;
                            }
                        }
                    }
                    else if (i == n-1) {
                            if (campo[i][abs(j-1)] == 'O' || campo[i][j+1] == 'O' || campo[i-1][j] == 'O') {
                                flag = false;
                            }
                    }
                    
                    else {
                        if (campo[abs(i-1)][j] == 'O' || campo[i+1][j] == 'O' || campo[i][abs(j-1)] == 'O' || campo[i][j+1] == 'O') {
                            flag = false;
                        }
                    }
                }
            }
        }
    }
    
    // cout << "HOLA" << endl;
    if (flag) {
        cout << "Si" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (campo[i][j] == '.') {
                    cout << "P";
                }
                else cout << campo[i][j];
            }
            cout << endl;
        }
    }
    else cout << "No" << endl;
    return 0;
}
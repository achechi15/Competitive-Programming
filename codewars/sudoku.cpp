#include <bits/stdc++.h>

using namespace std;

int main() {
    string s[9];
    set<int> row, column;
    for (int i = 0; i < 9; i++) {
        cin >> s[i];
    }
    bool flag = true;
    for (int i = 0; i < 9; i++) {
        int sumRow = 0, sumCol = 0; 
        for (int j = 0; j < 9; j++) {
            int aux = s[i][j]-'0', aux2 = s[j][i]-'0';
            row.insert(aux);
            column.insert(aux2);
            sumRow += aux;
            sumCol += aux2;
        }
        if (sumRow != 45 || sumCol != 45) flag = false;
        for (int k = 1; k <= 9; k++) {
            if (row.count(k) == 0 || column.count(k) == 0) flag = false;
        }
        row.clear(); column.clear();
    }
    if(flag) cout << "Si" << endl;
    else cout << "No" << endl;
    return 0;
}
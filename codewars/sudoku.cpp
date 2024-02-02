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
            if (row.size() != 9 || column.size() != 9) flag = false;
        }
        row.clear(); column.clear();
    }
    
    for (int i = 0; i < 9; i+=3) {
        set<int> box;
        for (int j = i; j < i+3; j++) {
            for (int k = 0; k < 3; k++) {
                // cout << s[j][k] << " ";
                box.insert(s[j][k]-'0');
            }
            // cout << endl;
        }
        // cout << endl;
        if (box.size() != 9) flag = false;
    }
    for (int i = 0; i < 9; i+=3) {
        set<int> box;
        for (int j = i; j < i+3; j++) {
            for (int k = 3; k < 6; k++) {
                // cout << s[j][k] << " ";
                box.insert(s[j][k]-'0');
            }
            // cout << endl;
        }
        //cout << endl;
        if (box.size() != 9) flag = false;
    }
    for (int i = 0; i < 9; i+=3) {
        set<int> box;
        for (int j = i; j < i+3; j++) {
            for (int k = 6; k < 9; k++) {
                //cout << s[j][k] << " ";
                box.insert(s[j][k]-'0');
            }
            //cout << endl;
        }
        //cout << endl;
        if (box.size() != 9) flag = false;
    } 
    if(flag) cout << "Si" << endl;
    else cout << "No" << endl;
    return 0;
}
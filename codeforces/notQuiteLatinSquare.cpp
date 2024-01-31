#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        char arr[3];
        set <char> xD = {'A', 'B', 'C'};
        for (int i = 0; i < 3; i++) {
            bool flag = false;
            for (int i = 0; i < 3; i++) {
                cin >> arr[i];
                if (arr[i] == '?') {
                    flag = true;
                }
            }
            if (flag) {
                for (int i = 0; i < 3; i++) {
                    if (arr[i] != '?') {
                        xD.erase(arr[i]);
                    }
                }
            }
        }
        for (const auto &caracter : xD) {
            cout << caracter << endl;
        }
    }
    return 0;
}
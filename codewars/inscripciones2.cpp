#include <bits/stdc++.h>

using namespace std;

bool isOk(string dni) {
    if (dni.size() != 9) {
        return false;
    }
    for (int i = 0; i < 9; i++) {
        if (i <= 7 && dni[i] >= 58) {
            return false;
        }
        else if (dni[i] <= 64 && dni[i] >= 91) {
            return false;
        }
    }
    return true;
}

int main() {
    string dni; cin >> dni;
    char arr[] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};
    if (!isOk(dni)) {
        cout << "No" << endl;
        return 0;
    }
    else {
        string aux = dni;
        aux.pop_back();
        int num = stoi(aux);
        if (dni[8] == arr[num % 23]) {
        cout << "Si" << endl;
        }
        else cout << "No" << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    string dni; cin >> dni;
    int num = stoi(dni);
    char arr[] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};
    cout << dni << arr[num % 23] << endl;
    return 0;
}
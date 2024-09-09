#include <bits/stdc++.h>

using namespace std;

int main() {
    int matrix[5][5];
    pair <int, int> pos;


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j]) pos = { i, j };
        }
    }

    cout << abs(pos.first - 2) + abs(pos.second - 2) << endl; 

    return 0;
}
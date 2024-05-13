#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    char tablero [n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tablero[i][j];
        }
    }

    int num[n][m] {};

    /*
    123
    456
    789
    */

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            /* 1 */if (i > 0 && j > 0 && tablero[i-1][j-1] == '*') num[i][j]++;
            /* 2 */if (i > 0 && tablero[i-1][j] == '*') num[i][j]++;
            /* 3 */if (i > 0 && j < m-1 && tablero[i-1][j+1] == '*') num[i][j]++;
            /* 4 */if (j > 0 && tablero[i][j-1] == '*') num[i][j]++;
            
            /* 6 */if (j < m-1 && tablero[i][j+1] == '*') num[i][j]++;
            /* 7 */if (i < n-1 && j > 0 && tablero[i+1][j-1] == '*') num[i][j]++;
            /* 8 */if (i < n-1 && tablero[i+1][j] == '*') num[i][j]++;
            /* 9 */if (i < n-1 && j < m-1 && tablero[i+1][j+1] == '*') num[i][j]++;

            /* 5 */if (tablero[i][j] == '*') num[i][j] = 9;
        }
    }
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            switch (num[i][j])
            {
            case 0:
                cout << " ";
                break;
            case 9:
                cout << "F";
                break;
            default:
                cout << num[i][j];
                break;
            }
        }
        cout << endl;
    }

    return 0;
}
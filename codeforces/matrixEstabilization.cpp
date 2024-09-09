#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int matrix[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int offsetX[] = {-1, 1, 0, 0};
        int offsetY[] = {0, 0, 1, -1};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                bool flag = true;
                int mxN = INT32_MIN;
                for (int k = 0; k < 4; k++) {
                    int x = j+offsetX[k];
                    int y = i+offsetY[k];
                    if (x < 0 || x >= m || y < 0 || y >= n ) continue;
                    // cout << "VALOR " << x <<  y << " " << matrix[y][x] << endl;
                    mxN = max(mxN, matrix[y][x]);
                    if (matrix[y][x] > matrix[i][j]) flag = false;
                }

                if (flag) {
                    matrix[i][j] = mxN;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int ans(int posX, int posY, int cost, string tablero[], int w, int h) {
    // Si esta en la esquina arriba izquierda
    if (posY == 0 && posY == 0) {
        // casos bases:
        if (tablero[posY+1][posX] == 'S') {
            return cost+1;
        }
        else if (tablero[posY][posX+1] == 'S') {
            return cost+1;
        }
        // CASO GENERAL:
        else {
            tablero[posY][posX] = '#';
            if (tablero[posY+1][posX] == '.') {
                ans(posX, posY+1, cost+1, tablero, w, h);
            }
            if (tablero[posY][posX+1] == '.') {
                ans(posX+1, posY, cost+1, tablero, w, h);
            }
        }
    }
    
    // Si esta en la esquina arriba derecha
    if (posX == w && posY == 0) {
        // Casos bases
        if (tablero[posY][posX-1] == 'S') {
            return cost+1;
        }
        else if (tablero[posY+1][posX] == 'S') {
            return cost+1;
        }
        // caso general:
        else {
            tablero[posY][posX] = '#';
            if (tablero[posY][posX-1] == '.') {
                return ans(posX-1, posY, cost+1, tablero, w, h);
            }
            if (tablero[posY+1][posX] == '.') {
                return ans(posX, posY+1, cost+1, tablero, w, h);
            }
        }
    }
    // Si está en la esquina abajo izquierda
    if (posX == 0 && posY == h) {
        // Caso base
        if (tablero[posY][posX+1] == 'S') {
            return cost+1;
        }
        else if (tablero[posY-1][posX] == 'S') {
            return cost+1;
        }
        // caso general
        else {
            if (tablero[posY][posX+1] == '.') {
                return ans(posX+1, posY, cost+1, tablero, w, h);
            }
            if (tablero[posY-1][posX] == '.') {
                return ans(posX, posY-1, cost+1, tablero, w, h);
            }
        }
    }
    // Si está en la esquina abajo derecha
    if (posX == w && posY == h) {
        // Caso base
        if (tablero[posY-1][posX] == 'S') {
            return cost+1;
        }
        else if (tablero)
    }
}

int main() {
    int w, h; cin >> w >> h;
    string tablero[h];
    for (int i = 0; i < h; i++) cin >> tablero[i];

    int posX, posY;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            // cout << tablero[i][j];
            if (tablero[i][j] == 'E') {
                posX = j; 
                posY = i;
            }
        }
    }

    return 0;
}
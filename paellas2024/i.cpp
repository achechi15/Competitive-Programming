#include <bits/stdc++.h>

using namespace std;

bool punto_en_poligono(float px, float py, float x[], float y[], int n) {
    int crossing = 0;
    for (int i = 0; i < n; i++) {
        // The first condition is to check if the point is in the segment
        if ((x[i] <= px  && x[(i+1)%n] > px) || (x[i]>= px && x[(i+1)%n] < px )) {
            // The second condition is to check the values of y
            // There are 3 scenarios:
            // If both of the y points are less than the py
            if (y[i] < py && y[(i+1)%n] < py) continue;
            else if (y[i] >= py && y[(i+1)%n] >= py) crossing++;
            else {
                float dx, dy;
                // The equation of the pendent regular
                if (x[i] < x[(i+1)%n]) {
                    dx = x[(i+1)%n] - x[i];
                    dy = y[(i+1)%n] - y[i];
                }
                // The equation of the pendent if we need to swap the values of x
                else {
                    dx = x[i] - x[(i+1)%n];
                    dy = y[i] - y[(i+1)%n];
                    if (dy == 0) {
                    crossing++;
                    continue;
                    }
                }
                // pendent
                float m = dy/dx;
                
                // cout << " -> " << m << endl;
                float n = y[i] - m*x[i];
                // cout << "n -> " << n << endl;
                float rY = px*m + n;
                // cout << "rY -> " << rY << endl;
                if (rY >= py) {
                    crossing++;
                }
            }
        }
    }
    // cout << crossing << endl;
    if (crossing & 1) return true;
    else return false;
}

int main() {
    int n; cin >> n;
    float x[n], y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    int q; cin >> q;
    while (q--) {
        float px, py; cin >> px >> py;
        bool ans = punto_en_poligono(px, py, x, y, n);
        if (ans) cout << "DENTRO" << endl;
        else cout << "FUERA" << endl;
    }
    return 0;
}
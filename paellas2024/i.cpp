#include <bits/stdc++.h>

using namespace std;

bool punto_en_poligono(double px, double py, double x[], double y[], int n) {
    int crossing = 0;
    for (int i = 0; i < n; i++) {
        // The first condition is to check if the point is in the segment
        if ((x[i] <= px  && x[(i+1)%n] > px) || (x[i]>= px && x[(i+1)%n] < px )) {
            // The second condition is to check the values of y
            // There are 3 scenarios:
            // If both of the y points are less than the py
            if (y[i] < py && y[(i+1)%n] < py) continue;
            else if (y[i] > py && y[(i+1)%n] > py) crossing++;
            else {
                double dx, dy;
                // The equation of the pendent regular
                if (x[i] < x[(i+1)%n]) {
                    dx = x[(i+1)%n] - x[i];
                    dy = y[(i+1)%n] - y[i];
                }
                else if (x[i] == x[(i+1)%n]) {
                    if ((y[i] <= py  && y[(i+1)%n] > py) || (y[i]>= py && x[(i+1)%n] < py )) return true;
                }
                // The equation of the pendent if we need to swap the values of x
                else {
                    dx = x[i] - x[(i+1)%n];
                    dy = y[i] - y[(i+1)%n];
                    if (dy == 0) return true;
                }
                // pendent
                double m = dy/dx;
                
                // cout << " -> " << m << endl;
                double n = y[i] - m*x[i];
                // cout << "n -> " << n << endl;
                double rY = px*m + n;
                // cout << "rY -> " << rY << endl;
                if (rY > py) {
                    crossing++;
                }
                else if (rY == py) return true;
            }
        }
    }
    // cout << crossing << endl;
    if (crossing & 1) return true;
    else return false;
}

int main() {
    int n; cin >> n;
    double x[n], y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    int q; cin >> q;
    while (q--) {
        double px, py; cin >> px >> py;
        bool ans = punto_en_poligono(px, py, x, y, n);
        if (ans) cout << "DENTRO" << endl;
        else cout << "FUERA" << endl;
    }
    return 0;
}
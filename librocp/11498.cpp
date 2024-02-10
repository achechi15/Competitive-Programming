#include <bits/stdc++.h>

using namespace std;

int main() {
    int q; cin >> q;
    while (q) {
        int divisorX, divisorY; cin >> divisorX >> divisorY;
        for (int i = 0; i < q; i++) {
            int x, y; cin >> x >> y;
            if (x == divisorX || y == divisorY) cout << "divisa" << endl;
            else if (x > divisorX && y > divisorY) cout << "NE" << endl;
            else if (x < divisorX && y < divisorY) cout << "SO" << endl;
            else if (x < divisorX && y > divisorY) cout << "NO" << endl;
            else cout << "SE" << endl;
        }
        cin >> q;
    }
    return 0;
}
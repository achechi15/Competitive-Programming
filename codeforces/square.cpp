#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;

int calculateSide(ii a, ii b) {
    int x = abs(a.first - b.first);
    int y = abs(a.second - b.second);

    return sqrt(x*x + y*y);
}

int calculateArea(int side) {
    return side *side;
}

int main() {
    int t; cin >> t;

    for (int k = 0; k < t; k++) {
        vii points;
        for (int i = 0; i < 4; i++) {
            int a, b; cin >> a >> b;
            ii aux(a, b);
            points.push_back(aux);
        }
        
        for (int i = 0; i < 3; i++)
        {
            if (points[i].first == points[i+1].first || points[i].second == points[i+1].second) {
                cout << calculateArea(calculateSide(points[i], points[i+1])) << endl;
                break;
            }
        }
        
        
    }
}
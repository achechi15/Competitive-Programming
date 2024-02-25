#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define MAX 1000000000


float calculateDistance(ii a, ii b) {
    int x = abs(a.first - b.first);
    int y = abs(a.second - b.second);
    return sqrt(x * x + y * y);
}

int main() {
    //int n = 2;
    vii points = {make_pair(1,1), make_pair(8,6), make_pair(6,8), make_pair(1,3) };
    float sum = 0;
    float distance = MAX;
    int position;
    while (!points.empty()) {
        distance = MAX;
        ii toBeCompared = points[0];
        points.erase(points.begin());
        for (int i = 1; i <= points.size(); i++) {
            //cout << "HA ENTRADO EN EL BUCLE" << endl;
            if (calculateDistance(toBeCompared, points[i]) < distance) {
                // cout << "Ha comparado con " << toBeCompared.first << " " << toBeCompared.second << " y " << points[i].first << " " << points[i].second << endl;
                // cout << calculateDistance(toBeCompared, points[i]) << endl;
                distance = calculateDistance(toBeCompared, points[i]);
                position = i;
            }
        }
        points.erase(points.begin()+position);
        sum += distance;
        //cout << "La distancia hasta ahora es de " << sum << endl;
    }
    cout << sum << endl;
    return 0;
}
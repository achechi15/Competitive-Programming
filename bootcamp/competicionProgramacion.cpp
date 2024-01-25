#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> clasificacion;
    for (int i = 0; i < n; i++) {
        int position, penalization; cin >> position >> penalization;
        pair<int, int> aux;
        aux.first = position; aux.second = penalization;
        clasificacion.push_back(aux);
    }
    sort(clasificacion.begin(), clasificacion.end());
    bool flag = false;
    while(!flag)
    flag = true;
    for (int i = 0; i < n-1; i++) {
        if (clasificacion[i].first == clasificacion[i+1].first) {
            if (clasificacion[i].second < clasificacion[i+1].second) {
                flag = false;
                pair <int, int> aux = clasificacion[i];
                clasificacion[i] = clasificacion[i+1];
                clasificacion[i+1] = aux;
            }
        }
    }
    // cout << "xD" << endl;
    for (int i = n-1; i >= 0; i--) {
        cout << clasificacion[i].first << " " << clasificacion[i].second << endl;
    }
    return 0;
}
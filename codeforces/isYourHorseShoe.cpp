#include <bits/stdc++.h>

using namespace std;

int main() {
    int ans = 0;
    set<int> colors;
    for (int i = 0; i < 4; i++) {
        int aux; cin >> aux;
        if (colors.count(aux)) {
            ans++;
        } else {
            colors.insert(aux);
        }
    }
    // otra solución es simplente introducir los 4 elementos dentro, luego simplemente hacer 4 - colors.size();
    cout << ans << endl;
}
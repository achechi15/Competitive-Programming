#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b; cin >> a >> b;
    while (a != -1 && b != -1) {
        cout << min (abs(a-b), abs((min(a,b)+100) - max(a,b))) << endl;
        cin >> a >> b;
    }
    return 0;
}
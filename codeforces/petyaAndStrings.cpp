#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b; cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
    }
    for (int i = 0; i < a.size(); i++) {
        b[i] = tolower(b[i]);
    }

    int ans = a.compare(b);

    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        ll n, f, a, b; cin >> n >> f >> a >> b;
        ll arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool flag = true;
        ll moment = 0;
        for (int i = 0; i < n; i++) {
            if ((arr[i]-moment)*a < b) {
                f = f - ((arr[i]-moment)*a);
                // cout << "VALE LA PENA NO APAGAR --> " << f << endl;
                moment = arr[i];
            }
            else {
                f = f - (b);
                // cout << "VALE LA PENA APAGAR --> " << f << endl;
                moment = arr[i];
            }
            if(f <= 0) {
                flag = false;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    } 
    return 0;
}
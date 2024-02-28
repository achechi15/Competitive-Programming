#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, n; cin >> b >> n;
    while (b || n) {
        bool ans = true;
        int arr[b+1] {};
        for (int i = 1; i <= b; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            int debtor, creditor, money; cin >> debtor >> creditor >> money;
            arr[debtor] -= money;
            // if (arr[debtor] < 0) ans = false;
            arr[creditor] += money;
        }
        for (int i = 1; i <= b; i++) if (arr[i] < 0) ans = false;
        if (ans) cout << "S" << endl;
        else cout << "N" << endl;
        cin >> b >> n; 
    }
    return 0;
}
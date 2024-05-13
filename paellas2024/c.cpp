#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string ans = "", check;
    for (int i = 0; i < n; i++) ans+= 'a';
    bool flag = false;
    while(!flag) {
        cout <<"? "<< ans << endl;
        cin >> check;
        flag = true;
        for (int i = 0; i < n; i++) {
            if (check[i] == 'O' || check[i] == 'I') {
                flag = false;
                ans[i]++;
            }
        }
    }
    cout << "! " << ans << endl;
    return 0;
}
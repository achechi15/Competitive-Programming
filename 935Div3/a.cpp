#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int a, b, c; cin >> a >> b >> c;
        int ansA = a, ansB = 0, ansC = 0;
        if ((b + c) / 3 > 0 || (b == 0)) {
            if (b % 3 == 0) {
                ansB = b / 3;
            }
            else {
                if (3 - (b % 3) <= c) {
                    ansB = (b+(3-(b%3))) / 3;
                    c -= 3-(b%3);
                }
                else {
                    cout << -1 << endl;
                    continue;
                }
            }
        }
        else {
            cout << -1 << endl;
            continue;
        }
        ansC += (c / 3);
        c = c % 3;
        ansC += (c/2);
        c = c % 2;
        ansC += c;
        cout << ansA+ansB+ansC << endl;
    }

    return 0;
}
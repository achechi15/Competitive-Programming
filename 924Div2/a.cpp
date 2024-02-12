#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int a, b; cin >> a >> b;
        if (a % 2 != 0 && b % 2 != 0) {
            cout << "No" << endl;
        }
        else if (a%2 == 0 && b%2 == 0) {
            cout << "Yes" << endl;
        }
        else if (a%2 == 0 && b%2 != 0) {
            int newA = a / 2;
            if (newA == b) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
        else {
            int newB = b / 2;
            if(a == newB) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }
    return 0;
}
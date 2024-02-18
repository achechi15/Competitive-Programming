#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main() {
    int t; cin >> t; 
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        int ans = 0;
        vector<pair<int,string>> books(n);
        for (int i = 0; i < n; i++) {
            cin >> books[i].first;
            cin >> books[i].second;
        }
        bool first = 0, second = 0, solved = 0;
        sort(books.begin(), books.end());
        for (int i = 0; i < n; i++) {
            if (books[i].second == "11") {
                if (first == 0 || second == 0) {
                    ans = books[i].first;
                    first = 1, second = 1;
                    break;
                }
                else {
                ans = min(books[i].first, ans);
                first = 1;
                second = 1;
                break;
                }
            }
            else if (books[i].second == "10" && first == 0 && !solved) {
                first = 1;
                ans += books[i].first;
                if (second == 1) solved = 1;
            }
            else if (books[i].second == "01" && second == 0 && !solved) {
                second = 1;
                ans += books[i].first;
                if (first == 1) solved = 1;
            }
        }
        if (!first || !second) cout << "-1" << endl;
        else cout << ans << endl;
    }
    return 0;
}

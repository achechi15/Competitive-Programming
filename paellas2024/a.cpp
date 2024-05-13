#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    vector<string> ans;
    while(cin >> s) {
        ans.push_back(s);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        if (i != ans.size()-1)
        cout << ans[i] << " ";
        else cout << ans[i];
    }
    cout << endl;
    return 0;
}
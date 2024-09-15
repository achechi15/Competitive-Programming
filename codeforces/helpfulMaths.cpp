#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    vector<int> numbers;
    for (int i = 0; i < s.size(); i+=2) {
        numbers.push_back(s[i]-'0');
    }
    sort(numbers.begin(), numbers.end());
    for(vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++) {
        cout << *i;
        if (i != numbers.end()-1) cout << "+";
    }
    cout << endl;
    return 0;
}
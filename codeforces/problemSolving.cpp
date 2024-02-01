#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int size; cin >> size;
        int count = 0;
        string s; cin >> s;
        set<char> solved;
        int arr[26];
        for (int i = 0; i < 26; i++) {
            arr[i] = i+1;
        }
        for (int i = 0; i < size; i++) {
            arr[s[i]-65]--;
            if (arr[s[i]-65] == 0) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
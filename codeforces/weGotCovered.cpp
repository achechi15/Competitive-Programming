#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p','q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for(int l = 0; l < t; l++) {
        int n, k; cin >> n >> k;
        string result = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                result += arr[j];
            }
        }
        cout << result << endl;
    }
    return 0;
}
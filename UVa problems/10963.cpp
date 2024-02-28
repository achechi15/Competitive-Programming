#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            arr[i] = abs(a-b); 
        }
        bool solved = true;
        for (int i = 0; i < n-1; i++) {
            if (arr[i] != arr[i+1]) solved = false;
        }
        if (t == 0) {
            if (solved) cout << "yes" << endl;
            else cout << "no" << endl;
        }
        else {
            if (solved) cout << "yes" << endl<<endl;
            else cout << "no" << endl << endl;
        }
        
    }
    return 0;
}
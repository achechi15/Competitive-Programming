#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    cout << "Lumberjacks:" << endl;
    for (int k = 0; k < t; k++) {
        bool ascendent = 1, descendent = 1;
        int arr[10];
        for(int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < 9; i++) {
            if (arr[i] > arr[i+1]) ascendent = 0;
            else descendent = 0;
        }   
        if (ascendent || descendent) cout << "Ordered" << endl;
        else cout << "Unordered" << endl;
    }
    return 0;
}
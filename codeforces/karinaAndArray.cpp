#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int size; cin >> size;
        long long array[size];
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }
        sort(array, array + size);
        cout << max(array[0]*array[1], array[size-1]*array[size-2]) << endl;
    }
    return 0;
}
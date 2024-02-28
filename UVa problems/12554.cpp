#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string arr[n], speech[] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    for (int i = 0; i < n; i++) cin >> arr[i];
    if (n < 16) {
        for (int i = 0; i < 16; i++) {
            cout << arr[i%n] << ": " << speech[i] << endl;
        }
    }
    else {
        double aux = (double)n/(double)16;
        // cout << aux << endl << ceil(aux) << endl; 
        int pos = 0;
        for (int i = 0; i < ceil(aux); i++) {
            for (int i = 0; i < 16; i++) {
                cout << arr[pos%n] << ": " << speech[i] << endl;
                pos++;
            }
        }
    }
    
    return 0;
}
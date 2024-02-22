#include <bits/stdc++.h>

using namespace std;

int check(string arr[], int final,int ini, int desiredLength) {
    // int contador = 0;
    if(final >= ini) {
        // contador = arr[pos] > desiredLength;
        return (arr[final].length() == desiredLength) + check(arr, final-1, ini, desiredLength);
    }
    else return arr[final].length() == desiredLength;
}


int main() {
    string arr[] {"barco", "autobus", "moto", "bici"};
    cout << check(arr, 3, 0, 5) << endl;
    return 0;
}
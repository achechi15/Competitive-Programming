#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool isSorted = false;
    while (!isSorted) {
        isSorted = true;
        for (int i = 0; i < n-1; i++) {
            if (arr[i] > arr[i+1]) {
                int aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                isSorted = false;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
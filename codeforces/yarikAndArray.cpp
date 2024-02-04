#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        int arr[n];
        int maxValue = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            maxValue = max(maxValue, arr[i]);
        }
        if (n == 1) {
            cout << arr[0] << endl;
            continue;
        }
        int ans = 0;
        for (int i = 0; i < n-1; i++) {
            int maxSum = 0;
            if ((abs(arr[i] - arr[i+1])) % 2 != 0) {
                int j = i;
                int aux = arr[i]+arr[i+1];
                int sum = arr[i];
                maxSum = max(aux, sum);
                //cout << "EMPIEZA LA SUMA" << endl;
                while((abs(arr[j]-arr[j+1])) % 2 != 0 && j+1 < n) {
                    sum = sum + arr[j+1];
                    //cout << "->" << sum << endl;
                    maxSum = max(maxSum, sum);
                    j++;
                    
                }
                // cout << "ESTE ES EL VALOR DE MAXSUM" << maxSum << endl;
                ans = max(ans, maxSum);
            }
            
        }
        cout << max(ans, maxValue) << endl;
    }
    return 0;
}
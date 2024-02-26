#include <bits/stdc++.h>

using namespace std;

int main() {
    int months, n; double downPayment, loan; cin >> months >> downPayment >> loan >> n;
    while (months >= 0) {
        double arr[101] {};
        for (int i = 0; i < n; i++) {
            double aux; int m; cin >> m >> aux;
            for (int j = m; j < 101; j++) {
                arr[j] = 1 - aux;
            }
        }
        // for (int i = 0; i < 101; i++) cout << arr[i] << " ";
        // cout << endl;
        double payment = loan / (double)months;
        // cout << payment << endl;
        int currMonth = 0; double valueCar = loan+downPayment;
        valueCar = valueCar * arr[currMonth];
        while (valueCar < loan) {
            currMonth++;
            loan = loan - payment;
            valueCar = valueCar * arr[currMonth];
        }
        if (currMonth == 1) cout << currMonth << " month" << endl;
        else cout << currMonth << " months" << endl;
        cin >> months >> downPayment >> loan >> n;
    }
    
}
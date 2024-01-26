#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    for (int k = 0; k < t; k++) {
        int size; cin >> size;
        string actual, expected; cin >> actual >> expected;
        int contador = 0, contador1Actual = 0, contador1Expected = 0;
        for (int i = 0; i <size; i++) {
            if (actual[i] == '1') contador1Actual++;
            if (expected[i] == '1') contador1Expected++;
        }
        if (contador1Actual > contador1Expected) {
            int itinerator = 0;
            while (contador1Actual > contador1Expected) {
                if (actual[itinerator] == '1' && actual[itinerator] != expected[itinerator] ) {
                    actual[itinerator] = '0';
                    contador1Actual--;
                    contador++;
                }
                itinerator++;
            }
            for (int i = 0; i < size; i++) {
                if (expected[i] == '1' && expected[i]-'0'!= actual[i]-'0') {
                contador++;
                }
            }
        }
        else {
            for (int i = 0; i < size; i++) {
                if (expected[i] == '1' && expected[i]-'0'!= actual[i]-'0') {
                contador++;
                }
            }
        }
        
        cout <<contador << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        int unidades = n % 10;
        n = n / 10;
        int decenas = (n % 10);
        n = n / 10;
        int centenas = (n % 10);
        n = n / 10;
        int millas = (n % 10);
        string ans = "";
        switch(millas) {
            case 1: ans += "M"; break;
            case 2: ans += "MM"; break;
            case 3: ans += "MMM"; break;
        }
        switch(centenas) {
            case 1: ans += "C"; break;
            case 2: ans += "CC"; break;
            case 3: ans += "CCC"; break;
            case 4: ans += "CD"; break;
            case 5: ans += "D"; break;
            case 6: ans += "DC"; break;
            case 7: ans += "DCC"; break;
            case 8: ans += "DCCC"; break;
            case 9: ans += "CM"; break;
        }
        switch (decenas ) {
            case 1: ans += "X"; break;
            case 2: ans += "XX"; break;
            case 3: ans += "XXX"; break;
            case 4: ans += "XL"; break;
            case 5: ans += "L"; break;
            case 6: ans += "LX"; break;
            case 7: ans += "LXX"; break;
            case 8: ans += "LXXX"; break;
            case 9: ans += "XC"; break;
        }
        switch (unidades) {
            case 1: ans += "I"; break;
            case 2: ans += "II"; break;
            case 3: ans += "III"; break;
            case 4: ans += "IV"; break;
            case 5: ans += "V"; break;
            case 6: ans += "VI"; break;
            case 7: ans += "VII"; break;
            case 8: ans += "VIII"; break;
            case 9: ans += "IX"; break;
        }
        cout << ans << endl;
    }
    return 0;
}
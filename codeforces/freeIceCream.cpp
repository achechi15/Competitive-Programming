#include <bits/stdc++.h>

using namespace std;

int main() {
    long long iceCreams;
    int n, distress = 0; cin >> n >> iceCreams;
    while (n--) {
        char sign; cin >> sign;
        int number; cin >> number;
        if (sign == '+') {
            iceCreams += number;
        }
        else {
            if (iceCreams < number) distress++;
            else {
                iceCreams -= number;
            }
        }
    }
    cout << iceCreams << " " << distress << endl;
    return 0;
}
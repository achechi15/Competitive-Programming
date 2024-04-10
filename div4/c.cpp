#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int hours, minutes;
        char middle;
        cin >> hours >> middle >> minutes;
        if (hours < 12) {
            if (hours == 0) hours = 12;
            if (hours < 10 && minutes < 10) {
                cout << "0" << hours << ":" << "0" << minutes << " AM" << endl; 
            }
            else if (hours < 10 && minutes > 10) {
                cout << "0" << hours << ":" << minutes << " AM" << endl;
            }
            else if (hours > 10 && minutes < 10) {
                cout << hours << ":" << "0" <<minutes << " AM" << endl;
            }
            else {
                cout << hours << ":" << minutes << " AM" << endl;
            }
        }
        else {
            if (hours != 12) hours = hours - 12;
            if (hours < 10 && minutes < 10) {
                cout << "0" << hours << ":" << "0" << minutes << " PM" << endl; 
            }
            else if (hours < 10 && minutes > 10) {
                cout << "0" << hours << ":" << minutes << " PM" << endl;
            }
            else if (hours > 10 && minutes < 10) {
                cout << hours << ":" << "0" <<minutes << " PM" << endl;
            }
            else {
                cout << hours << ":" << minutes << " PM" << endl;
            }
        }
    }
    return 0;
}
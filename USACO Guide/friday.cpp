/*
    ID: alexism2
    TASK: friday
    LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

bool isLeap(int year) {
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int monthsNoLeap[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int monthsLeap[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int currentDay = 0; 
    int ans[7] = {};
    int n; fin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 12; j++) {
            ans[(currentDay+12) % 7]++;
            if (isLeap(1900+i)) {
                currentDay += monthsLeap[j];
            }
            else {
                currentDay += monthsNoLeap[j];
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        fout << ans[(i+5)%7];
        if (i != 6) fout << " ";
    } 
    fout << endl;

    return 0;
}
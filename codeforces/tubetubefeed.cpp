#include <bits/stdc++.h>

using namespace std;

bool isAllowed(int seconds, int duration){
    if (seconds >= duration) return true;
    return false;
}

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int videos, seconds; cin >> videos >> seconds;
        pair <int, int> p[videos];
        for (int i = 0; i < videos; i++) {
            cin >> p[i].first;
        }
        for (int i = 0; i < videos; i++) {
            cin >> p[i].second;
        }
        int bestChoice = 0, pos = -1;
        for (int i = 0; i < videos; i++) {
            if (isAllowed(seconds, p[i].first) && p[i].second > bestChoice) {
                pos = i+1;
                bestChoice = p[i].second;
            }
            seconds--;
        }
        cout << pos << endl;
    }
    return 0;
}
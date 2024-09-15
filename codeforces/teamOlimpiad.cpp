#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> team1, team2, team3;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int aux; cin >> aux;
        switch (aux) {
            case 1:
                team1.push_back(i);
                break;
            case 2:
                team2.push_back(i);
                break;
            case 3:
                team3.push_back(i);
                break;
            
            default:
                break;
        }
    }
    int mn = min(team1.size(), min(team2.size(), team3.size()));

    cout << mn << endl;
    if (mn == (int)team1.size()) {
        // for (vector<int>::iterator i = team1.begin(); i != team1.end(); i++) {
        //     cout << *i << " " << team2.back() << " " << team3.back() << endl;
        //     team2.pop_back();
        //     team3.pop_back();
        // }
        while (team1.size() != 0) {
            cout << team1.back() << " " << team2.back() << " " << team3.back() << endl;
            team1.pop_back();
            team2.pop_back();
            team3.pop_back();
        }
    }
    else if (mn == (int)team2.size()) {
        // for (vector<int>::iterator i = team2.begin(); i != team2.end(); i++) {
        //     cout << team1.back() << " " << *i << " " << team3.back() << endl;
        //     team1.pop_back();
        //     team3.pop_back();
        // }
        while (team2.size() != 0) {
            cout << team1.back() << " " << team2.back() << " " << team3.back() << endl;
            team1.pop_back();
            team2.pop_back();
            team3.pop_back();
        }
    }
    else if (mn == (int)team3.size()) {
        // for (vector<int>::iterator i = team3.begin(); i != team3.end(); i++) {
        //     cout << team1.back() << " " << team2.back() << " " << *i << endl;
        //     team1.pop_back();
        //     team2.pop_back();
        // }
        while (team3.size() != 0) {
            cout << team1.back() << " " << team2.back() << " " << team3.back() << endl;
            team1.pop_back();
            team2.pop_back();
            team3.pop_back();
        }
    }


    return 0;
}
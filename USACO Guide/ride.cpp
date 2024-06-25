/*
    ID: alexism2
    TASK: ride
    LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string comet, group; fin >> comet >> group;
    int n1 = 1, n2 = 1;
    for (int i = 0; i < comet.length(); i++) {
        n1 *= comet[i] - 64;
    }
    for (int i = 0; i < group.length(); i++) {
        n2 *= group[i] - 64;
    }
    if ((n1 % 47) == (n2 % 47)) {
        fout << "GO" << endl;
    }
    else {
        fout << "STAY" << endl;
    }
    return 0;
}
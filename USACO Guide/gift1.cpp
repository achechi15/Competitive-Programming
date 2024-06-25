/*
    ID: alexism2
    TASK: gift1
    LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int n; fin >> n;
    // fout << n << endl;
    string listaNombres[n];
    map <string, int> names;
    for (int i = 0; i < n; i++) {
        fin >> listaNombres[i];
        names[listaNombres[i]] = 0;
    }
    // for (int i = 0; i < n; i++) {
    //     cout << listaNombres[i] << endl;
    // }
    for (int i = 0; i < n; i++) {
        string emisor; fin >> emisor;
        int totalMoney, numberParticipants; fin >> totalMoney >> numberParticipants;
        if (numberParticipants) {
            names[emisor] -= totalMoney;
            names[emisor] += totalMoney % numberParticipants;
            for (int j = 0; j < numberParticipants; j++) {
                string destinatary; fin >> destinatary;
                names[destinatary] += totalMoney/numberParticipants;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        fout << listaNombres[i] << " " << names[listaNombres[i]] << endl;
    }

}
#include <bits/stdc++.h>

using namespace std;


int main() {
    vector<vector<vector<string>>> mensajes;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        vector<vector<string>> aux;
        vector<string> aux2;
        string aux3;
        int nWords; cin >> nWords;
        for (int j = 0; j < nWords; j++) {
            cin >> aux3;
            aux2.push_back(aux3);
        }
        aux.push_back(aux2);
        mensajes.push_back(aux);
    }
    int mx[n];
    for (int i = 0; i < n; i++) {
        mx[i] = 0;
    }
    for (unsigned long long i = 0; i < mensajes.size(); i++) {
        for (unsigned long long j = 0; j < mensajes[i].size(); j++) {
            for (unsigned long long k = 0; k < mensajes[i][j].size(); k++) {
                int aux = mensajes[i][j][k].length();
                mx[i] = max(mx[i], aux);
                //cout << mensajes[i][j][k] << endl;
            }
        }
    }
    for (int i = 0; i < mx[0]+4; i++) {
        cout << "#";
    }
    cout << endl;
    for (int l = 0; l < n; l++) {
        for (unsigned long long i = 0; i < mensajes[l].size(); i++) {
            cout << "#";
            for (int i = 0; i < mx[l]+2; i++) {
                cout << " ";
            }
            cout << "#" << endl;   
            for (unsigned long long j = 0; j < mensajes[l][i].size(); j++) {
                if (mensajes[l][i][j].size() == mx[l]) {
                    cout << "# " << mensajes[l][i][j] << " #";
                }
                else {
                    cout << "# " << mensajes[l][i][j];
                    for (unsigned long long k = mensajes[l][i][j].size(); k <=mx[l]; k++) { 
                        cout << " ";
                    }
                    cout << "#";
                }
                cout << endl;
                
            }
        }
        cout << "#";
        for (int i = 0; i < mx[l]+2; i++) {
            cout << " ";
        }
        cout << "#" << endl;
        if (mx[l] >= mx[l+1] && l != n-1) {
            for (int i = 0; i < mx[l]+4; i++) {
                cout << "#";
            }
            cout << endl;
        }
        else if (l == n-1) {
            for (int i = 0; i < mx[l]+4; i++) {
                cout << "#";
            }
            cout << endl;
        }
        else {
            for (int i = 0; i < mx[l+1]+4; i++) {
                cout << "#";
            }
            cout << endl;
        }
    }


    return 0;
}
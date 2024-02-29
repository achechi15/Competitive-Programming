        #include <bits/stdc++.h>

        using namespace std;

        int main() {
            int n;
            while (cin >> n) {
                /*
                string names[n];
                int money[n] {};
                for (int i = 0; i < n; i++) cin >> names[i];
                for (int i = 0; i < n; i++) {
                    string name; cin >> name;
                    int cash; cin >> cash;
                    int pos = 0;
                    int person; cin >> person;
                    for (int j = 0; j < person; j++) {
                        string receiver; cin >> receiver;
                        while(receiver != names[])
                    }
                }
                */
                string names[n];
                unordered_map <string, int> mapa;
                for (int i = 0; i < n; i++) {
                    cin >> names[i];
                    mapa.insert(pair<string, int>(names[i], 0));
                }
                for (int i = 0; i < n; i++) {
                    cout << i << " -> " << n << endl;
                    string name; cin >> name;
                    int money, nTimes; cin >> money >> nTimes;
                    // cout << "xD" << endl;
                    if (nTimes != 0) {
                        int eachPart = money / nTimes;
                        int left = eachPart * nTimes;
                        mapa[name] -= left;
                        // cout << nTimes << endl;
                        for (int j = 0; j < nTimes; j++) {
                            string aux; cin >> aux;
                            mapa[aux] += eachPart;
                        }
                    }
                }
                for (int i = 0; i < n; i++) {
                    cout << names[i] << " " << mapa[names[i]] << endl;
                }
            }
            return 0;
        }
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;


int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, l; cin >> a >> b >> l;
        vector<ll> vectorA;
        vector<ll> vectorB;
        vectorA.push_back(1); vectorB.push_back(1);
        int i = 1;
        ll aux = a;
        while (aux <= l) {
            vectorA.push_back(aux);
            i++;
            aux = pow(a, i);
        }
        aux = b;
        while (aux <= l) {
            vectorB.push_back(aux);
            i++; 
            aux = pow(b, i);
        }
        // cout << endl;
        ll ans = 0;
        if (a == b) {
            for (auto i = 0; i < vectorA.size(); i++) {
                if (l % vectorA[i] == 0) ans++;
            }
        }
        else {
            set<int> usedK {};
            for (auto i = 0; i < vectorA.size(); i++) {
                for (auto j = 0; j < vectorB.size(); j++) {
                    if ((l % (vectorA[i]*vectorB[j])) == 0) {
                        if (usedK.count(l / (vectorA[i]*vectorB[j])) == 0) {
                            ans++;
                            usedK.insert(l / (vectorA[i]*vectorB[j]));
                        }
                    }
                }
            }
        }
        
        cout <<" -> " <<ans << endl;
    }
    return 0;
}
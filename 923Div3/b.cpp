#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    int t; cin >> t; 
    for (int k = 0; k < t; k++) {
        int n; cin >> n;
        ll arr[n];
        int j = 0;
        int abecedario[27] {};
        for (int i = 0; i < n; i++) {
            cin >> arr[i];            
        }
        for (int i = 0; i < n; i++) {
            int itinerator = 0;
            while (arr[i]!=abecedario[itinerator]) {
                itinerator++;
            }
            abecedario[itinerator]++;
            char aux = 97+itinerator;
            cout << aux;
        }
        cout << endl;

    }
    return 0;
}
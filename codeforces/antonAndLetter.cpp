#include <bits/stdc++.h>

using namespace std;

int main() {
    set<char> letters;
    char aux;
    while (cin >> aux) {
        if (aux >= 'a' && aux <= 'z') {
            letters.insert(aux);
        }
    }
    cout << letters.size() << endl;

    return 0;
}
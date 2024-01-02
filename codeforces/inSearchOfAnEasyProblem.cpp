#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    bool flag = false;
    for (int i = 0; i < t; i++)
    {
        int aux; cin >> aux;
        if (aux == 1) flag = true;
    }
    if (flag) cout << "HARD" << endl;
    else cout << "EASY" << endl;
    return 0;
}
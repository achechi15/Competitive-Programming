#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for (int k = 0; k < t; k++)
    {
        int uvas, comensales; cin >> uvas >> comensales;
        if (uvas >= comensales * 12) cout << "SI" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for (int k = 0; k < t; k++)
    {
        int a, b; cin >> a >> b;
        if (((a % 2 == 0) && (b % 2 != 0)) || ((a % 2 != 0) && (b % 2 == 0)))
        {
            cout << "Alice" << endl;
        } 
        else cout << "Bob" << endl;
    }
    return 0;
}
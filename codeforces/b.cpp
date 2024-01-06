#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n, count = 0; cin >> n;
        string s; cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+') count++;
            else count--;
        }
        cout << abs(count) << endl;
    }
    return 0;
}  
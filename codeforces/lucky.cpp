#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for (int k = 0; k < t; k++)
    {
        string s; cin >> s;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            
            if (i < (s.length()/2)) sum1 += s[i] - 48; 
            else sum2 += s[i] - 48;
        }
        if (sum1 == sum2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
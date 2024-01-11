#include <bits/stdc++.h>
using namespace std;
// function
int main()
{
    int t; cin >> t;
    for (int k = 0; k < t; k++)
    {
        string s; cin >> s;
        cout << int(s[0]-48)+ int(s[2]-48) << endl; 
    }
    return 0;
}
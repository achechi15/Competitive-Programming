#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string lf = "I love it", h = "I hate that ", hf = "I hate it", l = "I love that ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            if (i == n)
            {
                cout << hf << endl;
            }
            else 
            {
                cout << h;
            }
        }
        else
        {
            if (i == n) cout << lf << endl;
            else cout << l;
        }
    }
    return 0;
}
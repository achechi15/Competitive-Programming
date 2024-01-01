#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    while (n != 0)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int aux; cin >> aux;
            sum += aux;
        }
        if (n == 1) cout << sum << endl;
        else cout << sum-(n-1) << endl;
        cin >> n;
    }
}
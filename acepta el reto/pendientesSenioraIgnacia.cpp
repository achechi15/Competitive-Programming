#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    while (n!=0)
    {
        set <int> s;
        // int t; cin >> t;
        int count = 0;
        for (int i = 0; i < n ; i++)
        {
            int aux; cin >> aux;
            // cout << aux << " ";
            if (s.count(aux) != 0)
            {
                count++;
                s.erase(aux);
                // cout << "Esta en el array" << endl;
            }
            else
            {
                s.insert(aux);
                // cout << "No esta en array" << endl;
            }
        }
        cout << count << endl;
        s.clear();
        cin >> n;
    }
    return 0;
}
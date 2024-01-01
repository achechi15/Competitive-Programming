#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    
    for (int k = 0; k < t; k++)
    {
        string day, month, year; cin >> day >> month >> year;
        string aux = day + month[0], aux2 = month[1] + year;
        // cout << aux << " " << aux2 << endl;
        if (aux == aux2) 
        {
            cout << "DIVERTIDOS" << endl; continue;
        }
        
        aux = month + day[0];
        aux2 = day[1] + year;
        if (aux == aux2) 
        {
            cout << "DIVERTIDOS" << endl; 
            continue;
        }
        aux = year + month[0];
        aux2 = month[1] + day;
        if (aux == aux2)
        {
            cout << "DIVERTIDOS" << endl; 
            continue;
        }
        aux = day + year[0];
        aux2 = year[1] + month;
        if (aux == aux2)
        {
            cout << "DIVERTIDOS" << endl;
            continue;
        }
        else cout << "INSULSOS" << endl;

    }
    
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rooms = 0;
    int t; cin >> t;

    for (int i = 0; i < t; i++)
    {
        int people, capacity; cin >> people >> capacity;
        if ((capacity - people) >= 2)  rooms++;
    }
    cout << rooms << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q; cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    int countV = 1, countP = 1;
    bool flagV = false, flagP = false;
    for (int i = 0; i < q; i++)
    {
        int aux; cin >> aux;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == aux) flagV = true;
            if (arr[n-j-1] == aux) 
            {
                cout << "This is the n" << arr[n-j-1] << endl;
                flagP = true;
            }
            if (!flagV) countV++;
            if (!flagP) countP++;
        }
    }
    cout << countV << " " << countP << endl;
    return 0;
}
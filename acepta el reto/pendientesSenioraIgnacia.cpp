#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    while (n!=0)
    {
        int count = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                count++;
                i = i + 1;
            }
        }
        cout << count << endl;
        cin >> n;
    }
    return 0;
}
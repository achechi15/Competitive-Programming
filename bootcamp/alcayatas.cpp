#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n; cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    long long min;
    for (int i = 0; i < n-1; i++)
    {
        if (i == 0) min = abs(arr[i]-arr[i+1]);
        else {
            if (abs(arr[i] - arr[i+1]) < min) min = abs(arr[i] - arr[i+1]);
        }
    }
    cout << min << endl;
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef vector<int> vi;
typedef vector<std::pair<int, int>> vii;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    if (a.second != b.second) {
        return (a.second < b.second);
    }
    return a.first < b.first;
}



int main() {
    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        vii arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
        }
        for (int i = 0; i < n; i++) {
            cin >> arr[i].second;
            if (arr[i].second < 0) {
                arr[i].second = abs(arr[i].second);
            }
        }
        sort(arr.begin(), arr.end(), sortbysec);
        bool possible = true;
        int aux = 0;
        int last = arr[0].second;
        // for (int i = 0; i < n; i++) cout << arr[i].first << " ";
        // cout << endl;
        for (int i = 0; i < n && possible; i++) {
            if (i == 0) {
                aux = k*arr[i].second;
                if (arr[i].first > k) possible = false;
                else aux = aux-arr[i].first;
            }
            else {
                if (arr[i].second != last) {
                    aux = (k*(arr[i].second-last)) + aux;
                }
                // cout << " --> " << i << " --> " << aux << endl;
                // cout << aux << endl;
                if (arr[i].first > aux) possible = false;
                else {
                    aux = aux-arr[i].first;
                    last = arr[i].second;
                }
            }
        }
        if (possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
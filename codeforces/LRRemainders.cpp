#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
unsigned long long tree[8000001];

void build(unsigned long long tree[],int input[], int low, int high, int pos, int m) {
    if (low == high) {
        tree[pos] = input[low];
    }
    else {
        int mid = (low+ high) / 2;
        build(tree, input, low, mid, pos*2, m);
        build(tree, input, mid+1, high, (pos*2)+1, m);
        tree[pos] = (tree[2*pos] * tree[(2*pos)+1]) % m;
    }
}

void update(int pos, int low, int high, int posWanted, int value, int m) {
    if (high == low)  {
        tree[pos] = value;
    }
    else {
        int mid = (low+high) / 2;
        if (posWanted <= mid) {
            update(pos*2, low, mid, posWanted, value, m);
        }
        else {
            update((pos*2)+1, mid+1, high, posWanted, value, m);
        }
        tree[pos] = (tree[pos*2]*tree[(pos*2)+1]) % m;
    }
}

int main() {
    int t; cin >> t;
    for (int k = 0; k < t; k++) {
        int n, m; cin >> n >> m;
        int arr[n+1]; arr[0] = 0;
        for (int i = 1; i < n+1; i++) cin >> arr[i];
        build(tree, arr, 1, n, 1, m);
        string s; cin >> s;
        int l = 1, r = n;
        // cout << tree[1] % m << " ";
        for (int i = 0; i < n; i++) {
            cout << tree[1] % m << " ";
            if (s[i] == 'L') {
                update(1, 1, n, l, 1, m);
                l++;
                
            }
            else {
                update(1, 1, n, r, 1, m);
                r--;
            }
        }
        cout << endl;
    }
    return 0;
}
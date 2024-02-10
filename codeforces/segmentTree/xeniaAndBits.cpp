#include <bits/stdc++.h>
#define NMAX 1 << 17
using namespace std;
typedef pair<int, int> ii;

ii t[4*NMAX];

void build(int input[], int low, int high, int pos) {
    if (high == low) {
        t[pos].first = input[low];
        t[pos].second = 0;
    }
    else {
        int mid = (high + low) / 2;
        build(input, low, mid, pos*2);
        build(input, mid+1, high, pos*2+1);
        t[pos*2].second++;
        if(t[pos*2].second % 2 != 0) {
            t[pos].first = t[pos*2].first | t[pos*2+1].first;
            t[pos].second = t[pos*2].second;
        }
        else {
            t[pos].first = t[pos*2].first ^ t[pos*2+1].first;
            t[pos].second = t[pos*2].second;
        }
    }
}

void update(int pos, int low, int high, int posWanted, int value) {
    if (low == high) {
        t[pos].first = value;
    }
    else {
        int mid = (low + high) / 2;
        if (posWanted <= mid) {
            update(pos*2, low, mid, posWanted, value);
        }
        else {
            update(pos*2+1, mid+1, high, posWanted, value);
        }
        if(t[pos*2].second % 2 != 0) {
            t[pos].first = t[pos*2].first | t[pos*2+1].first;
            t[pos].second = t[pos*2].second+1;
        }
        else {
            t[pos].first = t[pos*2].first ^ t[pos*2+1].first;
            t[pos].second = t[pos*2].second+1;
        }
    }
}

int main() {
    int n, m; cin >> n >> m;
    int input[(1 << n)+1];
    for (int i = 1; i <= 1 << n; i++) {
        cin >> input[i];
    } 
    build(input, 1, 1<<n, 1);
    // for (int i = 1; i <= 8; i++) cout << t[i].first << " ";
    // cout << endl;
    for (int i = 0; i < m; i++) {
        int p, b; cin >> p >> b;
        update(1, 1, 1<<n, p, b);
        cout << t[1].first << endl;
        /* cout << "SE HA ACTUALIZADO " << endl;
        for (int j = 1; j < 7; j++) {
            cout << t[i].first << " ";
        }
        cout << endl;*/
    }
    
    return 0;
}
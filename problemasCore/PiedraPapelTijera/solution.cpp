#include <bits/stdc++.h>
#define NMAX 1<<17
using namespace std;
typedef pair<string, bool> sb;

// Piedra Papel y tijera


sb t[4*NMAX];

string resultNormal(string a, string b) {
    if (a == "tijera") {
        if (b == "piedra") return b;
        else if (b == "papel") return a;
    }
    else if (a == "piedra") {
        if (b == "papel") return b;
        else if (b == "tijera") return a;
    }
    else {
        if (b == "piedra") return a;
        if (b == "tijera") return b;
    }
    return a;
}
string resultReverse(string a, string b) {
    if (a == "tijera") {
        if (b == "piedra") return a;
        else if (b == "papel") return b;
    }
    else if (a == "piedra") {
        if (b == "papel") return a;
        else if (b == "tijera") return b;
    }
    else {
        if (b == "piedra") return b;
        if (b == "tijera") return a;
    }
    return a;
}

void build(string input[], int low, int high, int pos) {
    if (high == low) {
        t[pos].first = input[low];
        t[pos].second = true;
    }
    else {
        int mid = (low + high) / 2;
        build(input, low, mid, pos*2);
        build(input, mid+1, high, (pos*2)+1);
        t[pos].second = !t[pos*2].second;
        if (t[pos*2].second) {
            t[pos].first = resultNormal(t[pos*2].first, t[pos*2+1].first);
        }
        else {
            t[pos].first = resultReverse(t[pos*2].first, t[pos*2+1].first);
        }
    }
}

void update(int pos, int low, int high, int posWanted, string value) {
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
        // Construyendo el nodo actual
        if (t[pos*2].second) t[pos].first = resultNormal(t[pos*2].first, t[pos*2+1].first);
        else t[pos].first = resultReverse(t[pos*2].first, t[pos*2+1].first);
    }
}

int main() {
    int n, m; cin >> n >> m;
    string input[(1<<n)+1];
    for(int i = 1; i <= 1 << n; i++) cin >> input[i];
    build(input, 1, 1<<n, 1);
    for (int i = 0; i < m; i++) {
        int posChange; cin >> posChange;
        string value; cin >> value;
        update(1, 1, 1<<n, posChange, value);
        cout << t[1].first << endl;
    }
}
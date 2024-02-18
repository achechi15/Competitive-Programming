#include <bits/stdc++.h> 
using namespace std;
#define NMAX 1<<17;


int segmentTree[NMAX];

// !IMPORTANT: This is the function that builds the segment tree
void build(int input[], int low, int high, int pos) {
    if (low == high) {
        segmentTree[pos] = input[low]; // also is valid to put high
    }
    else {
        int mid = (high + low) / 2;
        build(input, low, mid, pos*2);
        build(input, mid+1, high, pos*2+1);
        // Now u put the function of the tree
        // In this case i will build a minimum range query
        segmentTree[pos] = min(segmentTree[pos*2], segmentTree[pos*2+1]);
    }
    
}

// !IMPORTANT: This is the function for the minimum range query

int rangeMinQuery(int qLow, int qHigh, int low, int high, int pos) {
    if (qLow <= low && qHigh >= high)  { // base case: TOTAL OVERLAP
        return segmentTree[pos];
    }
    if (qLow > high || qHigh < low) { // Base case: NO OVERLAP
        return INT_MAX;
    }
    int mid = (high + low) / 2;
    return min(rangeMinQuery(qLow, qHigh, low, mid, pos*2),
                rangeMinQuery(qLow, qHigh, mid+1, high, pos*2+1));
}

void update(int value, int high, int low, int pos, int v) {
    if (v == ) 
}

int main() {
    
    int input[] = {0, -1, 2, 4, 0};
    // for (int i = 0; i < 8; i++) cout << segmentTree[i] << endl;
    build(input, 1, 4, 1); // En vez del 4 es N, si es 
    /*for (int i = 0; i < 16; i++) {
        cout << segmentTree[i] << " ";
    }*/
    cout << rangeMinQuery(2, 3, 1, 4, 1) << endl;
    // cout << endl;
    int a = 1 ^ 6, b = 3 ^ 5;
    cout << a << " " << b << endl;
    return 0;
}
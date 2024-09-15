#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, k, d; cin >> n >> t >> k >> d;
    int normalAns = ceil( static_cast<float> (n) / k) * t;
    
    int otherAns = 0;
    // In this loop u should keep baking in the old oven until the time for the new oven is less than the time it takes to bake another one
    while(d >= t) {
        otherAns += t;
        d -= t;
        n -= k;
    }
    // Once you break out of the loop, it is known that the production of cakes has been duplicated, so calculate the time needed to complete 
    // the remaining n cakes. To this, you should add the time you have been waiting for the new oven. 
    otherAns += (ceil(static_cast<float>(n) / (k*2)) * t) + d;
    cout << normalAns << endl << otherAns << endl;
    if (otherAns < normalAns) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
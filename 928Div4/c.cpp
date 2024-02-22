#include <iostream>

using namespace std;
#define MAX 200001
typedef long long ll;

int main(){
    ll arr[MAX];
    for (int i = 1; i < MAX; i++) {
        int x = i, res = 0;
        while(x) {
            res = res + (x%10);
            x /= 10;
        }
        arr[i] = res;
    }
    ll ans[MAX];
    ans[1] = 1;
    for (int i = 2; i < MAX; i++) {
        ans[i] = ans[i-1] + arr[i];
    }
    int k; cin >> k;
    while (k--) {
        int q; cin >> q;
        cout << ans[q] << endl;
    }
}

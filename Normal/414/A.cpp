#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, k;
map<int, int> used;
int main() {
    IOS
    cin >> n >> k;
    if (k < n>>1) {
        cout << -1 << endl;
        return 0;
    }
    if (n == 1) {
        if (k) {
            cout << -1 << endl;
        } else {
            cout << 1 << endl;
        }
        return 0;
    }
    int ones = (n>>1)-1;
    int fr = k-ones;
    cout << fr << " " << (fr<<1);
    used[fr] = used[fr<<1] = 1;
    int i = 1;
    while (ones-->0) {
        while (used[i] || used[i+1]) {
            i+=2;
        }
        cout << " " << i << " " << i+1;
        i+=2;
    }
    if (n&1) {
        while (used[i]) {
            i++;
        }
        cout << " " << i;
    }
    cout << endl;
    return 0;
}






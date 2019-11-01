#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
ll n, k;
int main() {
    IOS
    cin >> n >> k;
    ll cnt = 0, i = 1, t = 0;
    while (true) {
        cnt += i;
        t++;
        if (cnt-k >= 0 && t + cnt-k == n) {
            cout << cnt-k << endl;
            return 0;
        }
        i++;
    }
    return 0;
}
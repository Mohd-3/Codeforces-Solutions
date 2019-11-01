#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n;
ll arr[400001];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    ll g = arr[0];
    for (int i = 1; i < n; ++i) {
        g = __gcd(g, arr[i]);
    }
    int cnt = 0;
    for (ll i = 1; i*i <= g; ++i) {
        if (g%i==0) {
            cnt++;
            if (g/i != i) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
 
    return 0;
 
 
}
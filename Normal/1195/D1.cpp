#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, k;
ll arr[100001];
ll cnt, M = 998244353;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
 
 
    for (int i = 0; i < n; ++i) {
        ll l = 1;
        while (arr[i]) {
            ll tmp = arr[i]%10;
            cnt = (cnt%M + (tmp%M * l%M *n%M)%M)%M;
            l = (l%M *10)%M;
            cnt = (cnt%M + (tmp%M * l%M *n%M)%M)%M;
            arr[i]/=10;
            l = (l%M *10)%M;
        }
    }
    cout << cnt << endl;
    return 0;
}
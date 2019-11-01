#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n,  M = 998244353;
ll a[200001], b[200001];
ll arr[200001], ans;
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i] = a[i] * (i+1) * (n-i);
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+n, greater<int>());

    for (int i = 0; i < n; ++i) {
        a[i] %= M;
        ans = (ans + a[i] * b[i])%M;

    }
    cout << ans << endl;


    return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;
ll k, arr[200001], tmp, mn=1e9, mx, cnt, fr[200001];
set<ll> se;
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        fr[arr[i]]++;
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    if (mn==mx) {
        cout << 0 << endl;
        return 0;
    }
    while (mx>mn) {
        if (tmp+fr[mx]<=k) {
            tmp += fr[mx];
        } else {

            cnt++;
            tmp = fr[mx];
        }
        fr[mx-1] += fr[mx];
        mx--;
    }
    cout << cnt+1 << endl;


    return 0;
}

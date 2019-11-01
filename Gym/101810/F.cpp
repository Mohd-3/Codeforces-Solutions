#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;
const int N = 1e6+1;
int t, n, arr[N], tmp, fr[N], a[N];
 void sieve() {
    for (int i = 0; i < N; ++i) {
        arr[i] = i;
    }
    for (ll i = 1; i <N; ++i) {
        if (fr[i]) {
            for (ll j = i; j < N; j+=i) {
                if (arr[j]>i)
                    arr[j]=i;
            }
        }
    }
}
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        ll ans = 0;
        memset(arr, 0, sizeof arr);
        memset(fr, 0, sizeof fr);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            fr[a[i]]++;
        }
        sieve();
        for (int i = 0; i < n; ++i) {
            ans += arr[a[i]];
        }
        cout << ans << endl;
    }
        return 0;
}
      
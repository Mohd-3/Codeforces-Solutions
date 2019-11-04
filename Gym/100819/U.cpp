#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = acos(-1);
using ll = long long;
using namespace std;
 ll arr[103][103], arr2[103][103], n, m, b;
map<ll, ll> cnt;
int main() {
    IOS
    cin >> m >> n >> b;
    for (ll i = 1; i <= n; ++i) {
        for (ll j = 1; j <= m; ++j) {
            cin >> arr[i][j];
        }
    }
       for (ll i = 0; i < m; ++i) {
        arr[0][i] = arr[n][i];
        arr[n+1][i] = arr[1][i];
    }
    for (ll i = 0; i < n; ++i) {
        arr[i][0] = arr[i][m];
        arr[i][m+1] = arr[i][1];
    }
    arr[0][0] = arr[n][m];
    arr[n+1][m+1] = arr[1][1];
    arr[0][m+1] = arr[n][1];
    arr[n+1][0] = arr[0][m];
     ll t = 0;
    while (b-->0) {
        if (!t) {
            for (ll i = 1; i <= n; ++i) {
                for (ll j = 1; j <= m; ++j) {
                    arr2[i][j] = arr[i][j] + arr[i-1][j] + arr[i][j-1] + arr[i-1][j-1] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1] + arr[i-1][j+1] + arr[i+1][j-1];
                }
            }
             for (ll i = 0; i <= m; ++i) {
                arr2[0][i] = arr2[n][i];
                arr2[n+1][i] = arr2[1][i];
            }
            for (ll i = 0; i <= n; ++i) {
                arr2[i][0] = arr2[i][m];
                arr2[i][m+1] = arr2[i][1];
            }
            arr2[0][0] = arr2[n][m];
            arr2[n+1][m+1] = arr2[1][1];
            arr2[0][m+1] = arr2[n][1];
            arr2[n+1][0] = arr2[0][m];
         } else {
            for (ll i = 1; i <= n; ++i) {
                for (ll j = 1; j <= m; ++j) {
                    arr[i][j] = arr2[i][j] + arr2[i-1][j] + arr2[i][j-1] + arr2[i-1][j-1] + arr2[i][j+1] + arr2[i+1][j] + arr2[i+1][j+1] + arr2[i-1][j+1] + arr2[i+1][j-1];
                }
            }
             for (ll i = 0; i <= m; ++i) {
                arr[0][i] = arr[n][i];
                arr[n+1][i] = arr[1][i];
            }
            for (ll i = 0; i <= n; ++i) {
                arr[i][0] = arr[i][m];
                arr[i][m+1] = arr[i][1];
            }
            arr[0][0] = arr[n][m];
            arr[n+1][m+1] = arr[1][1];
            arr[0][m+1] = arr[n][1];
            arr[n+1][0] = arr[0][m];
         }
        t ^= 1;
    }
    ll ans = 0;
    if (!t) {
        for (ll i = 1; i <= n; ++i) {
            for (ll j = 1; j <= m; ++j) {
                if (!cnt[arr[i][j]] && arr[i][j] != 1) {
                    ans++;
                }
                cnt[arr[i][j]]++;
            }
         }
    } else {
        for (ll i = 1; i <= n; ++i) {
            for (ll j = 1; j <= m; ++j) {
                if (!cnt[arr2[i][j]] && arr2[i][j] != 1) {
                    ans++;
                }
                cnt[arr2[i][j]]++;
             }
         }
    }
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k, M = 1e9+7;
pair<int, int> arr[101];
ll dp[101][101][3001];

ll solve(int lst, int t, int i) {
    if (i > k) {
        return 0;
    }
    if (i == k) {
        return 1;
    }
    ll& ret = dp[lst][t][i];
    if (~ret) {
        return ret;
    }
    ret = 0;
    for (int j = 0; j < n; ++j) {
        if (j != t) {
            if (arr[j].first == lst) {
                ret += solve(arr[j].second, j, i + arr[j].second);
                if (ret >= M) {
                    ret -= M;
                }
            } else if (arr[j].second == lst) {
                ret += solve(arr[j].first, j, i + arr[j].first);
                if (ret >= M) {
                    ret -= M;
                }
            }
        }
    }
    return ret;
}
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &arr[i].first, &arr[i].second);
    }
    ll ans = 0;
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n; ++i) {
        ans += solve(arr[i].first, i, arr[i].first);
        if (ans >= M) {
            ans -= M;
        }
        if (arr[i].first != arr[i].second) {
            ans += solve(arr[i].second, i, arr[i].second);
        }
        if (ans >= M) {
            ans -= M;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
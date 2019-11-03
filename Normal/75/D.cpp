#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, k, tmp, idx[250001];
vector<int> arr[51];
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &k);
        while (k--) {
            scanf("%d", &tmp);
            arr[i].emplace_back(tmp);
        }
    }
    for (int i = 0; i < m; ++i) {
        scanf("%d", idx+i);
        idx[i]--;
    }
    ll mx = INT_MIN, cur = 0;
    int st = idx[0];
    int stz = 0;
    int j = 0;
    while (true) {

        if (j==arr[st].size()) {
            if (stz==m-1) {
                break;
            }
            j = 0;
            st = idx[++stz];
        }


        cur += arr[st][j++];
        mx = max(mx, cur);
        if (cur < 0) {
            cur = 0;
        }
    }
    printf("%lld\n", mx);
    return 0;
}

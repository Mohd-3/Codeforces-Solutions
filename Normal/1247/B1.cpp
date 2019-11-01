#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int t, n, k, d, arr[101];
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d", &n, &k, &d);
        vector<int> fr(k+1);
        int cnt = 0, mn = 1e9;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < d; ++i) {
            if (!fr[arr[i]]) {
                cnt++;

            }
            fr[arr[i]]++;
        }
        mn = cnt;
        int i = 0;
        int j = d;
        while (j < n) {
            fr[arr[i]]--;
            if (!fr[arr[i++]]) {
                cnt--;
            }
            if (!fr[arr[j]]) {
                cnt++;

            }
            fr[arr[j]]++;
            j++;
            mn = min(mn, cnt);
        }
        printf("%d\n", mn);
    }
    return 0;
}
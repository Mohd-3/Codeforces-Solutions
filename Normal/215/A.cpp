#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

map<int, int, greater<>> cnt;
int n, a[51], d, m;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &d);
        for (int j = 0; j < n; ++j) {
            int tmp = d/a[j];
            if (tmp*a[j] == d) {
                cnt[tmp]++;
            }
        }
    }
    printf("%d\n", cnt.begin()->second);

    return 0;
}
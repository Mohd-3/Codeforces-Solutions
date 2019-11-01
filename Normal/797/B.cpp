#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, sm, od=1e9, tmp, oneg=INT_MIN;
vector<int> v;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &tmp);
        if (tmp<0) {
            v.emplace_back(tmp);
            if (tmp&1) {
                oneg = max(oneg, tmp);
            }
        } else {
            sm += tmp;
            if (tmp&1) {
                od = min(od, tmp);
            }
        }
    }
    if (sm > 0) {
        if (sm&1) {
            printf("%d\n", sm);
            return 0;
        }
        int ans = INT_MIN;
        if (oneg > INT_MIN) {
            ans = max(ans, sm+oneg);
        }
        if (od < 1e9) {
            ans = max(ans, sm-od);
        }
        printf("%d\n", ans);
    } else {
        printf("%d\n", oneg);
    }

    return 0;
}

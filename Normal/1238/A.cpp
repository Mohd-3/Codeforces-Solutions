#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

ll a, b;
int t;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%lld%lld", &a, &b);
        if (a-b==1) {
            puts("NO");
        } else {
            puts("YES");
        }
    }
    return 0;
}
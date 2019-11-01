#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int n, m, ans;
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; ; ++i) {
        if (i > n) {
            i = 1;
        }
        if (ans+i > m) {
            printf("%d\n", m-ans);
            return 0;
        }
        ans += i;
    }
    return 0;
}



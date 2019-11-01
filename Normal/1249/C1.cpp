#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int t, n;

int log3(int x) {
    int cnt = 0;
    while (x>=3) {
        cnt++;
        x/=3;
    }
    return cnt;
}

int p(int a, int b) {
    if (!b) {
        return 1;
    }
    int ret = p(a, b>>1);
    if (b&1) {
        return ret * ret * a;
    }
    return ret * ret;
}
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        n--;
        while (true) {
            n++;
            int n2 = n;
            int lg = log3(n2);
            for (int i = lg; ~i; --i) {
                int cur = p(3, i);
                if (n2 - cur >= 0) {
                    n2 -= cur;
                }
            }
            if (n2 == 0) {
                printf("%d\n", n);
                break;
            }
        }
    }

    return 0;
}
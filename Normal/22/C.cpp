#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, v;
int main() {
    scanf("%d%d%d", &n, &m, &v);
    if (m >= n*(n-1)/2) {
        puts("-1");
        return 0;
    }
    for (int i = 2; i <= n; ++i) {
        if (!m) {
            break;
        }
        printf("%d %d\n", i-1, i);
        m--;
    }
    for (int i = 1; i <= n; ++i) {
        if (!m) {
            break;
        }
        if (i == v-1 || i == v+1 || i == v) {
            continue;
        }
        printf("%d %d\n", i, v);
        m--;
    }
    if (m) {
        int inc, st;
        if (n-v > v) {
            st = n;
            inc = -1;
        } else {
            st = 1;
            inc = 1;
        }
        while (m) {
            for (int i = st; i != v; i += inc) {
                if (i == st || i == st+1 || i == st-1) {
                    continue;
                }
                printf("%d %d\n", i, st);
                m--;
                if (!m) {
                    break;
                }
            }
            st += inc;

        }
    }



    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;


int n, cnt, d;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    ++n;
    for (int i = 1; i < n; ++i) {
        scanf("%d", &d);
        cnt += d;

    }
    cnt %= n;
    cnt--;
    int ans =0;
    for (int i = 1; i <= 5; ++i) {
        if ((cnt+i)%n) {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
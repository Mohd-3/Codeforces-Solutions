#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, a, b;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d%d%d", &n, &a, &b);
    n--;
    int cnt = 0;
    for (int i = 0; i <= b; ++i) {
        cnt += (n-i>=a);
    }
    printf("%d\n", cnt);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define fl(e) for(int i = 0; i < (e); ++i)
#define flc(s, e, inc) for(int i = (s); i < (e); i+=(inc))
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
int max(int a, int b) {
    return a > b ? a : b;
}
int min(int a , int b) {
    return a < b ? a : b;
}
int abs(int a) {
    return a < 0 ? -a : a;
}

int n, m, x, y, a, b;
int main() {
    scanf("%d %d %d %d %d %d", &n, &m, &x, &y, &a, &b);
    int dx[] = {1, 1, n, n};
    int dy[] = {1, m, 1, m};
    int ans = 1e9;
    fl(4) {
        if (abs(dx[i]-x)%a != 0 || abs(dy[i]-y)%b != 0)
            continue;
        int l = abs(dx[i]-x)/a;
        int r = abs(dy[i]-y)/b;
        if ((l-r)%2 != 0) {
            continue;
        }
        ans = min(ans, max(l, r));
    }
    if (ans >= 1000001 || (ans && (n<=a || m <= b))) {
        printf("Poor Inna and pony!\n");
    } else {
        printf("%d\n", ans);
    }

    return 0;
}


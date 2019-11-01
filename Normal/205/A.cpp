#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;


map<int, int> m, idx;
int n, d;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &d);
        m[d]++;
        idx[d] = i+1;
    }
    int cnt = m.begin()->second;

    if (cnt > 1) {
        puts("Still Rozdil");
    } else {
        printf("%d\n", idx[m.begin()->first]);
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
const int INF = 0x3f3f3f3f;
const int N = 2*1e5;

ll lo[N<<1+1], hi[N<<1+1], ans[N<<1+1], delta[N<<1+1], mx;
int n, tmp, q, l, r, v;

void build(int i, int a, int b) {
    lo[i] = a;
    hi[i] = b;
    if (a == b) {
        return;
    }
    int m = (a+b)>>1;
    build(i<<1, a, m);
    build((i<<1)|1, m+1, b);
}

void prop(int i) {
    delta[i<<1] = max(delta[i<<1], delta[i]);
    delta[(i<<1)|1] = max(delta[i<<1|1], delta[i]);
    delta[i] = 0;
}

void update(int i) {
    ans[i] = max(max(ans[i<<1], delta[i<<1]), max(ans[(i<<1)|1], delta[(i<<1)|1]));
}

void inc(int i, int a, int b, ll val) {
    if (b < lo[i] || a > hi[i])
        return;
    if (a <= lo[i] && b >= hi[i]) {
        delta[i] = max(ans[i], val);
        return;
    }
    prop(i);

    inc(i<<1, a, b, val);
    inc((i<<1)|1, a, b, val);

    update(i);
}

ll rmq(int i, int a, int b) {
    if (b < lo[i] || a > hi[i]) {
        return -INF;
    }
    if (a <= lo[i] && b >= hi[i]) {
        return max(ans[i], delta[i]);
    }
    prop(i);

    ll lft = rmq(i<<1, a, b);
    ll rgt = rmq((i<<1)|1, a, b);

    update(i);

    return max(lft, rgt);

}
int main() {
    IOS;
    cin >> n;
    build(1, 0, n-1);
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        inc(1, i, i, tmp);
    }
    cin >> q;
    while (q--) {
        cin >> r >> v;
        mx = rmq(1, 0, r-1);
        cout << mx << endl;
        inc(1, 0, r-1, mx+v);
    }

    return 0;
}



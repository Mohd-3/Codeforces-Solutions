#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
const int N = 400001;
int n, q, c[N], in[N], out[N], a, b, o, pos[N];
ll tree[N<<2], lazy[N<<2];
vector<int> adj[N];
int t;
 
void walk(int src = 0, int p = -1) {
    pos[t] = src;
    in[src] = t++;
    for (int ch : adj[src]) {
        if (ch==p) {
            continue;
        }
        walk(ch, src);
    }
    out[src] = t-1;
}
 
void build(int p, int l, int r) {
    if (l == r) {
        tree[p] = 1LL<<c[pos[l]];
        return;
    }
    build(p<<1, l, (l+r)>>1);
    build((p<<1)|1, ((l+r)>>1)+1, r);
    tree[p] = tree[p<<1] | tree[(p<<1)|1];
}
void update(int p, int l, int r, int s, int e, ll msk) {
    if (lazy[p]) {
        tree[p] = lazy[p];
        if (l != r) {
            lazy[p<<1] = lazy[(p<<1)|1] = lazy[p];
        }
        lazy[p] = 0;
    }
    if (l > e || r < s) {
        return;
    }
    if (l >= s && r <= e) {
        tree[p] = msk;
        if (l != r) {
            lazy[p<<1] = msk;
            lazy[(p<<1)|1] = msk;
        }
        return;
    }
    update(p<<1, l, (l+r)>>1, s, e, msk);
    update((p<<1)|1, ((l+r)>>1)+1, r, s, e, msk);
    tree[p] = tree[p<<1] | tree[(p<<1)|1];
}
 
ll get(int p, int l, int r, int s, int e) {
    if (lazy[p]) {
        tree[p] = lazy[p];
        if (l != r) {
            lazy[p<<1] =  lazy[p];
            lazy[(p<<1)|1] = lazy[p];
        }
        lazy[p] = 0;
    }
    if (l > e || r < s) {
        return 0;
    }
    if (l >= s && r <= e) {
        return tree[p];
    }
    return get(p<<1, l, (l+r)>>1, s, e) | get((p<<1)|1, ((l+r)>>1)+1, r, s, e);
}
 
int main() {
    IOS
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }
    for (int i = 0; i < n-1; ++i) {
        cin >> a >> b;
        a--;
        b--;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }
    walk();
    build(1, 0, n-1);
    while (q--) {
        cin >> o;
 
        if (o == 1) {
            cin >> a >> b;
            a--;
            update(1, 0, n-1, in[a], out[a], 1LL<<b);
        } else {
            cin >> a;
            a--;
            ll tmp = get(1, 0, n-1, in[a], out[a]);
            cout << __builtin_popcountll(tmp) << endl;
        }
    }
 
    return 0;
}
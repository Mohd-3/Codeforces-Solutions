#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
using namespace std;
const int N = 1e5+1;
string s;
int q, a, b, o, n;
char c;
int tree[N<<2];
/*
map<char, int> comb(map<char, int> x, map<char, int> y) {
    if (x.size() < y.size()) {
        swap(x, y);
    }
    for (auto p : y) {
        if (p.second) {
            x[p.first] += p.second;
        }
    }
    return x;
}*/
void update(int p, int l, int r, int i, char old, char nw) {

    if (l == r) {
        if (old != '?') {
            tree[p] &= ~(1<<(old-'a'));
        }
        tree[p] |= (1<<(nw-'a'));
        return;
    }
    int mid = (l+r)>>1;
    if (i <= mid) {
        update(p<<1, l, mid, i, old, nw);
    } else {
        update((p<<1)|1, mid+1, r, i, old, nw);
    }
    tree[p] = tree[p<<1] | tree[(p<<1)|1];
}

int get(int p, int l, int r, int s, int e) {
    if (l > e || r < s) {
        return 0;
    }
    if (l >= s && r <= e) {
        return tree[p];
    }
    int mid = (l+r)>>1;
    return get(p<<1, l, mid, s, e) | get((p<<1)|1, mid+1, r, s, e);
}
int main() {
    IOS
    cin >> s >> q;
    n = s.size();
    for (int i = 0; i < n; ++i) {
        update(1, 0, n-1, i, '?', s[i]);

    }
    while (q--) {
        cin >> o;
        if (o == 1) {
            cin >> a >> c;
            a--;
            update(1, 0, n-1, a, s[a], c);

            s[a] = c;
        } else {
            cin >> a >> b;
            a--;
            b--;
            cout << __builtin_popcount(get(1, 0, n-1, a, b)) << endl;

        }
    }
    return 0;
}
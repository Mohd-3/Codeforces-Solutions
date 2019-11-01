#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
const double PI = acos(-1);
const int N = 2e5+1;
int n, q, arr[N], mn[N<<2], mx[N<<2], a, b, c;
 
void update(int p, int l, int r, int i, int v, int t) {
    if (l==r) {
        if (t) {
            mn[p] = i;
        } else {
            mx[p] = i;
        }
        return;
    }
    if (i <= (l+r)>>1) {
        update(p<<1, l, (l+r)>>1, i, v, t);
    } else {
        update((p<<1)+1, ((l+r)>>1)+1, r, i, v, t);
    }
    if (t) {
        mn[p] = (arr[mn[p<<1]] < arr[mn[(p<<1)+1]] ? mn[p<<1] : mn[(p<<1)+1]);
    } else {
        mx[p] = (arr[mx[p<<1]] > arr[mx[(p<<1)+1]] ? mx[p<<1] : mx[(p<<1)+1]);
    }
}
 
int get(int p, int l, int r, int s, int e, int t) {
    if (l >= s && r <= e) {
        if (t) {
            return mn[p];
        }
        return mx[p];
    }
    if (l > e || r < s) {
        return -1;
    }
    int lft = get(p<<1, l, (l+r)>>1, s, e, t);
    int rgt = get((p<<1)+1, ((l+r)>>1)+1, r, s, e, t);
    if (t) {
        if (~lft && ~rgt) {
            return arr[lft] < arr[rgt] ? lft : rgt;
        }
        if (~lft) {
            return lft;
        }
        return rgt;
    }
    if (~lft && ~rgt) {
        return arr[lft] > arr[rgt] ? lft : rgt;
    }
    if (~lft) {
        return lft;
    }
    return rgt;
 
}
int main() {
    IOS
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        update(1, 0, n-1, i, arr[i], 0);
        update(1, 0, n-1, i, arr[i], 1);
    }
    while (q--) {
        cin >> a >> b >> c;
        a--;
        b--;
        int l = get(1, 0, n-1, a, b, 0);
        int r = get(1, 0, n-1, a, b, 1);
        if (arr[l] != c) {
            cout << l+1 << endl;
        } else if (arr[r] != c) {
            cout << r+1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
 
 
    return 0;
 
 
}
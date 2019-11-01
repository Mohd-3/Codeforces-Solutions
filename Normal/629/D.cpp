#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
const int N = 1e5;
const double PI = acos(-1);
int n;
ll r, h;
double tree[4*(N+1)], mx, area[N+1];
pair<double, ll> arr[N+1];
 
void update(int p, int l, int r, int i, double v) {
    if (l == r) {
        tree[p] = v;
        return;
    }
    if (i<= (l+r)>>1) {
        update(p<<1, l, (l+r)>>1, i, v);
    } else {
        update((p<<1)+1, ((l+r)>>1)+1, r, i, v);
    }
    tree[p] = max(tree[p<<1], tree[(p<<1)+1]);
}
 
double get(int p, int l, int r, int s, int e) {
    if (l >= s && r <= e) {
        return tree[p];
    }
    if (l > e || r < s) {
        return 0;
    }
    return max(get(p<<1, l, (l+r)>>1, s, e), get((p<<1)+1, ((l+r)>>1)+1, r, s, e));
}
 
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> r >> h;
        arr[i].first = r*r*h;
        arr[i].second = -i;
        area[i] = r*r*PI*h;
    }
    sort(arr, arr+n);
 
    for (int i = 0; i < n; ++i) {
        int idx = -arr[i].second;
        double cur = get(1, 0, n-1, 0, idx-1) + area[idx];
        update(1, 0, n-1, idx, cur);
        mx = max(mx, cur);
    }
    cout.precision(9);
    cout << fixed << mx << endl;
 
 
    return 0;
 
 
}
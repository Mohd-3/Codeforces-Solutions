#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int n, a, b, p[100001], k, cnt;
int get(int x) {
    return (p[x] == x ? x : p[x] = get(p[x])); 
}
 
void go(int x, int y) {
    int p1 = p[x], p2 = p[y];
    if (p1 != p2) {
        p[p2] = p1;
    }
}
int main() {
    IOS
    cin >> k >> n;
    iota(p, p+k+1, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (get(a) == get(b)) {
            cnt++;
        }
        go(a, b);
    }
    cout << cnt << endl;
    return 0;
}
 
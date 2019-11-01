#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, m;
int main() {
    //freopen("jumping.in", "r", stdin);
    IOS
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0;i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; ++i) {
        cout << a.rend()-lower_bound(a.rbegin(), a.rend(), b[i], greater<int>()) << " \n"[i==m-1];
    }
    return 0;
 
 
}
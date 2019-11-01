#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m;
ll arr[300001], p[300001], st, lo, cur, g;
int main() {
    IOS
    cin >> n >> m;
    cin >> st;
    for (int i = 1; i < n; ++i) {
        cin >> arr[i];
        arr[i] -= st;
    }
    for (int i = 0; i < m; ++i) {
        cin >> p[i];
    }
    cur = arr[1];
    for (int i = 1; i < n; ++i) {
        g = __gcd(cur, arr[i]-arr[i-1]);
        cur = g;
    }
    for (int i = 0; i < m; ++i) {
      
        if (__gcd(cur, p[i])==p[i]) {
            cout << "YES" << endl;
            cout << st << " " << i+1 << endl;
            return 0;
        }
    }
    cout << "NO" << endl;



    return 0;
}
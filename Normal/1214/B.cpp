#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
const double PI = acos(-1);
const int N = 2e5+1;
 
int b, g, n;
int main() {
    //freopen("lazy.in", "r", stdin);
    IOS
    cin >> b >> g >> n;
    int minB = n -min(g, n), minG = n - min(n, b);
    int maxB = n - minG, maxG = n - minB;
    int cnt = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i >= minB && i <= maxB && j >= minG && j <=maxG && i+j == n) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
 
 
}
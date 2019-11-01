#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, m;
ll arr[1001][1001], ans[1001];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
    ll x = sqrt((arr[1][0] * arr[2][1])/arr[2][0]);
    ans[1] = x;
    for (int i = 0; i < n; ++i) {
        if (i != 1) {
            ans[i] = arr[i][1] / x;
        }
    }
    for (int i= 0; i < n; ++i) {
        cout << ans[i] << " \n"[i==n-1];
    }
    return 0;

}





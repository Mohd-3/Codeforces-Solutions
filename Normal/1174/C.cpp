#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[100001];
int main()
{
    IOS
    //freopen("balalance.in", "r", stdin);
    cin >> n;
    int cur = 1;
    for (int i = 2; i <= n; i++) {
        if (!arr[i]) {
            arr[i] = cur;
            for (ll j = 1LL*i*i; j <= n; j+=i) {
                arr[j] = cur;
            }
            cur++;
        }

    }
    for (int i = 2; i <= n; ++i) {
        cout << arr[i] << " \n"[i==n];
    }
    return 0;
}

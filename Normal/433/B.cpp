#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, op, l, r, q;
ll arr[100001], sorted[100001];
int main()
{
    IOS
    //freopen("planet.in", "r", stdin);


    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    sort(sorted+1, sorted+n+1);
    for (int i = 1; i <= n; ++i) {
        arr[i] += arr[i-1];
        sorted[i] += sorted[i-1];
    }
    cin >> q;
    while (q--) {
        cin >> op >> l >> r;

        if (op==1) {
            cout << arr[r]-arr[l-1];
        } else {
            cout << sorted[r]-sorted[l-1];
        }
        cout << endl;
    }

    return 0;
}

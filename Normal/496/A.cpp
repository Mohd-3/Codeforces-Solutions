#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[101], mn = 1e9, mx ;
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i != 0) {
            mx = max(mx, arr[i]-arr[i-1]);
        }
    }
    for (int i = 1; i < n-1; ++i) {
        mn = min(mn, arr[i+1]-arr[i-1]);
    }
    cout << max(mn, mx) << endl;

    return 0;
}

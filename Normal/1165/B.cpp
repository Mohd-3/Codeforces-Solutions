#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[200002], cnt, d = 1;

int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; ++i) {
        if (arr[i]>=d) {
            cnt++;
            d++;
        }
    }
    cout << cnt << endl;
    return 0;
}

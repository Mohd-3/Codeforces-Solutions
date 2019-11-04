#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 int t, n, cnt;
ll arr[2001];
int main()
{
    IOS
    //freopen("looking.in", "r", stdin);
    cin >> t;
    while (t--) {
        cnt = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; ++i) {
            cnt++;
            ll mul = arr[i];
            ll sm = arr[i];
            for (int j  = i+1; j < n; ++j) {
                sm += arr[j];
                mul = mul * arr[j] / (__gcd(mul, arr[j]));
                if (sm % mul == 0) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
       }
    return 0;
}
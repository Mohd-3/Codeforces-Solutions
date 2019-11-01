    #include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int t, n;
ll arr[301], arr2[301];

bool chk() {
    for (int i = 0; i < 301; ++i) {
        if (arr[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> t;
    while (t--) {
        memset(arr, 0, sizeof arr);
        memset(arr2, 0, sizeof arr2);
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        ll num = arr[0] * arr[n-1];
        int idx = 0;
        for (ll i = 2; i*i <= num; ++i) {
            if (idx > 300) {
                break;
            }
            if (num%i==0) {
                arr2[idx++] = i;
                if (num/i != i) {
                    arr2[idx++] = num/i;
                }
            }
        }
        sort(arr2, arr2+n);
      
        if (chk()) {
            cout << num << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

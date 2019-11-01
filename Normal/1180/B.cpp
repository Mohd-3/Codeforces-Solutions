#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;
ll arr[100001], neg;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (abs(arr[i]) < abs(-arr[i]-1)) {
            arr[i] = -arr[i]-1;
        }
        if (arr[i] < 0) {
            neg++;
        }
    }
    if (n==1) {
        if (arr[0] < 0) {
            arr[0] = -arr[0]-1;
        }
        neg = 0;
    }
    ll mx = -1, idx = -1;
    if (neg&1) {
        for (int i = 0; i < n; ++i) {
            ll tmp = -arr[i]-1;
            if ((tmp > 0 && arr[i] < 0) || (tmp < 0 && arr[i] > 0)) {
                if (tmp > mx) {
                    mx = tmp;
                    idx = i;
                }
            }
        }
        if (idx == -1) {
            idx = 0;
        }
        arr[idx] = -arr[idx] - 1;
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " \n"[i==n-1];
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, arr[15];
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int msk = 0; msk < (1<<n); ++msk) {
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if ((msk&(1<<i))) {
                cnt += arr[i];
                if (cnt>=360) {
                    cnt-=360;
                }
            } else {
                cnt -= arr[i];
                if (cnt <= -360) {
                    cnt += 360;
                }
            }
        }
        if (cnt==0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}


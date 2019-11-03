#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, z;
ll cnt[100001], arr[100001], val[100001];
ll sm;

int main() {
    IOS;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        cnt[arr[i]]++;
        z += arr[i]==0;
    }
    if (n == 1) {
        if (arr[0]) {
            cout << "Impossible\n";
        } else {
            cout << "Possible\n" << 1 << endl;
        }
        return 0;
    }

    if (z && z!=n) {
        cout << "Impossible\n";
        return 0;
    }
    if (z == n) {
        cout << "Possible\n";
        for (int i = 0; i < n; ++i) {
            cout << 1 << " \n"[i==n-1];
        }
        return 0;
    }
    int diff = 0, xx = 0;
    for (int i = 0; i < 100001; ++i) {
        sm += cnt[i];
        if (cnt[i]) {
            diff++;
            xx = i;
        }
    }
    if (diff == 1) {
        if (xx == 1) {
            if (n == 2) {
                cout << "Possible\n";
                for (int i = 1; i <= n; ++i) {
                    cout << i << " \n"[i==n];
                }
            } else {
                cout << "Impossible\n";
            }
            return 0;
        }
        int g = __gcd(n, xx);
        int idx = 0;
        if (n-g != xx) {
            cout << "Impossible\n";
            return 0;
        }
        cout << "Possible\n";
        for (int i = 0; i < n/g; ++i) {
            idx++;
            for (int j = 0; j < g; ++j) {
                cout << idx << " ";
            }
        }
        cout << endl;
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        if (cnt[i] && n-cnt[i] != i) {
            cout << "Impossible\n";
            return 0;
        }
    }

    if (sm < n) {
        cout << "Impossible\n";
        return 0;
    }
    int idx = 0;
    cout << "Possible\n";
    for (int i = 0; i < n; ++i) {
        if (val[arr[i]] == 0) {
            val[arr[i]] = ++idx;
        }
        cout << val[arr[i]] << " \n"[i==n-1];
    }

    return 0;
}


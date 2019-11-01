#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, k, arr[300001];

int main() {
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    if (k == 0 && n == 1) {
        cout << (arr[0] == 1) << endl;
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " \n"[i==n-1];
        }
        return 0;
    }
    int idx1 = -1, idx2 = -1, i = 0, j = 0, mx = 0, cnt = 0;
    for (j = 0; j < n; ++j) {
        cnt += arr[j] == 0;
        while (cnt > k) {
            cnt -= arr[i++] == 0;
        }
        if (j-i+1 > mx) {
            mx = j-i+1;
            idx1 = i;
            idx2 = j;
        }
    }
    cout << (idx1 == -1 ? 0 : idx2-idx1+1) << endl;
    for (int i = 0; i < n; ++i) {
        cout << (i>=idx1 && i <= idx2 ? 1 : arr[i]) << " \n"[i==n-1];
    }

    return 0;
}


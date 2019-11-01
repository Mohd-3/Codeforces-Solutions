#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, ans[100001], tmp, tmp2;
double arr[100001];
ll sm;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        tmp = (int)floor(arr[i]);
        sm += tmp;
        ans[i] = tmp;
    }
    if (sm==0) {
        for (int i = 0; i < n; ++i) {
            cout << ans[i] << endl;
        }
        return 0;
    }
    int need = 0-sm;

    for (int i = 0; i < n; ++i) {
        if (need>0) {
            tmp = (int)ceil(arr[i]);
            if (tmp > ans[i]) {
                ans[i]++;
                need--;
            }
        } else if (need < 0) {
            tmp = (int)ceil(arr[i]);
            if (tmp < ans[i]) {
                ans[i]--;
                need++;
            }
        } else {
            break;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << endl;
    }


    return 0;
}

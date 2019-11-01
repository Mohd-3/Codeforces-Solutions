#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, x, y, arr[100001];
 
 
int main() {
    //freopen("darwin.in", "r", stdin);
    IOS
    cin >> n >> x >> y;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        bool ok = true;
        for (int j = i-1; j >= max(0, i-x); --j) {
            if (arr[i] >= arr[j]) {
                ok = false;
                break;
            }
        }
        for (int j = i+1; j <= min(n-1, i+y); ++j) {
            if (arr[i] >= arr[j]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
 
 
}
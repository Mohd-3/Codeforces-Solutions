#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, d, arr[100001];
ll ans;
int main() {
    IOS
    cin >> n >> d;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int j = n-1, i = n-1;
    for (; ~j; --j) {
        while (arr[j]-arr[i]<=d and i>=0) {
            i--;
        }
        if (j-i>=3) {
            ll dis = j-i-1;
            ans += (dis*(dis-1))>>1;
        }
    }
    cout << ans << endl;

    
    return 0;
}











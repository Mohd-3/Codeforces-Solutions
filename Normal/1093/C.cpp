#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

ll n, arr[100001], ans[200001];
int main() {
    IOS;
    cin >> n;
    for (int i = 0; i < (n>>1); ++i) {
        cin >> arr[i];
    }
    int i = 0, j = n-1;
    ll a = 0, b = arr[0];
    while (i < j) {
        if (a+b == arr[i]) {
            ans[i++] = a;
            ans[j--] = b;
        } else if (a+b > arr[i]) {
            b-= (a+b)-arr[i];
            ans[i++] = a;
            ans[j--] = b;
        } else {
            a += (arr[i]-(a+b));
            ans[i++] = a;
            ans[j--] = b;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " \n"[i==n-1];
    }



    return 0;
}


#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[2001];
ll sum1, sum2;
int main()
{
    IOS
    //freopen("balalance.in", "r", stdin);
    cin >> n;
    n*=2;
    for (int i= 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i = 0; i < n/2; ++i) {
        sum1 += arr[i];
    }
    for (int i = n/2; i < n; ++i) {
        sum2 += arr[i];
    }
    if (sum1==sum2) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " \n"[i==n-1];
        }
    }
    return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[100001], t[2];
int main()
{
    IOS
    //freopen("balalance.in", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        t[arr[i]&1]++;
    }
    if (t[0] && t[1]) {
        sort(arr, arr+n);
    }
    
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " \n"[i==n-1];
    }

    return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;


int n, k, arr[200002];
ll sm, mn = 1e9, idx=1;
int main()
{
    IOS
    //freopen("planet.in", "r", stdin);
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        arr[i] += arr[i-1];

    }
    for (int i = k; i <= n; ++i) {
        if (arr[i]-arr[i-k] < mn) {
            mn = arr[i]-arr[i-k];
            idx = i-k+1;
        }
    }
    cout << idx << endl;




    return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[1001], lft[1001], rgt[1001], mx
, idx;

int main()
{
    IOS
    //freopen("planet.in", "r", stdin);


    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i!=0) {
            if (arr[i] >= arr[i-1]) {
                lft[i] = 1 + lft[i-1];
            } else {
                lft[i] = 1;
            }
        } else {
            lft[i] = 1;
        }
    }
     if (n==1) {
        cout << 1 << endl;
        return 0;
    }
    for (int i = n-1; ~i; --i) {
        if (i==n-1) {
            rgt[i] = 1;
            mx = max(mx, lft[i]);
            continue;
        }
        if (arr[i] >= arr[i+1]) {
            rgt[i] = 1 + rgt[i+1];
            lft[i] += rgt[i]-1;

        } else {
            rgt[i] = 1;
        }

        mx = max(mx, lft[i]);
    }

    cout << mx << endl;


    return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, x, y, arr[100001], cnt;
int main()
{
    IOS
    cin >> n >> x >> y;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i]<=x) {
            cnt++;
        }
    }
    if (x > y) {
        cout << n << endl;
        return 0;
    }
    cout << (cnt+1)/2 << endl;

    return 0;
}

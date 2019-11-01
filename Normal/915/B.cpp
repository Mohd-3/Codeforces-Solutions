#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, pos, l, r, cnt;
int main()
{
    IOS
    cin >> n >> pos >> l >> r;
    if (l==1 && r == n) {
        cout << 0 << endl;
        return 0;
    }
    if (l==1) {
        cout << abs(pos-r)+1;
        return 0;
    }
    if (r == n) {
        cout << abs(pos-l)+1;
        return 0;
    }
    if (abs(pos-r) < abs(pos-l)) {

        cnt += abs(pos-r)+1;
        pos = r;
        cnt += abs(pos-l)+1;
    } else {

        cnt += abs(pos-l)+1;
        pos = l;
        cnt += abs(pos-r)+1;
    }
    cout << cnt << endl;

    return 0;
}

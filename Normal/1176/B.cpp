#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int t, tmp, n;
ll fr[3], cnt;
int main()
{
    IOS
    //bfreopen("balalance.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n;
        cnt = 0;
        memset(fr, 0, sizeof fr);
        for (int i = 0; i < n; ++i) {
            cin >> tmp;
            fr[tmp%3]++;
        }
        int mn = min(fr[1], fr[2]);
        cnt += fr[0] + mn;
        fr[1] -= mn;
        fr[2] -= mn;
        if (fr[1]>0) {
            cnt += fr[1]/3;
        }
        if (fr[2] > 0) {
            cnt += fr[2] / 3;
        }
        cout << cnt << endl;
    }
    return 0;
}

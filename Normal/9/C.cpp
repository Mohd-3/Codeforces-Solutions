#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, cnt;
set<int> se;

void solve(int i = 1) {
    if (i > n) {
        return;
    }
    cnt++;
    solve(i*10);
    solve(i*10+1);
}
int main()
{
    IOS
    //freopen("planet.in", "r", stdin);
    cin >> n;
    solve();
    cout << cnt << endl;


    return 0;
}

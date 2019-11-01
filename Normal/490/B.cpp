#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;


int n, a, b, tmp;
map<int, int> lft, rgt;
int main()
{
    IOS
    //freopen("planet.in", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        lft[b] = a;
        rgt[a] = b;
    }
    int frst = 0;
    for (auto p : rgt) {
        if (!lft.count(p.first)) {
            frst = p.first;
            break;
        }
    }
    int scnd = rgt[0];
    cout << frst << " " << scnd;
    for (int i = 2; i < n; ++i) {
        cout << " " << rgt[frst];
        tmp = scnd;
        scnd = rgt[frst];
        frst = tmp;


    }


    return 0;
}

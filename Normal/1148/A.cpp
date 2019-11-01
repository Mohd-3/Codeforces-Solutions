#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;


ll a, b, ab, mn;
int main()
{
    IOS
    //freopen("planet.in", "r", stdin);
    cin >> a >> b >> ab;
    mn = min(a, b);
    cout << mn*2 + ab*2 + (a>mn || b>mn ? 1 : 0) << endl;


    return 0;
}

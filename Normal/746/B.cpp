#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, i;
string s, ans="";

int main()
{
    IOS
    //freopen("planet.in", "r", stdin);


    cin >> n >> s;
    n--;
    while (n>=0) {

        if (n&1) {
            ans = s[i++] + ans;
        } else {
            ans += s[i++];
        }
        n--;
    }
    cout << ans << endl;


    return 0;
}

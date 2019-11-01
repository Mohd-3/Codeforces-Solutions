#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 int t, c, p, s, m, l, ans, charge;
string name, coffee, sz;
unordered_map<string, vector<int>> price;
unordered_map<string, int> idx;
int main()
{
    IOS
    freopen("coffee.in", "r", stdin);
    cin >> t;
    idx["large"] = 2;
    idx["medium"] = 1;
    idx["small"] = 0;
    while (t--) {
        price.clear();
        cin >> c >> p;
        while (c--) {
            cin >> name >> s >> m >> l;
            price[name] = {s, m, l};
        }
        charge = 100/p;
        while (p--) {
            cin >> name >> sz >> coffee;
            ans = price[coffee][idx[sz]] + charge;
            if (ans%10 == 6 || ans%10 == 1) {
                ans--;
            } else if (ans%10 == 4 || ans%10 == 9) {
                ans++;
            }
            cout << name << " " << ans << endl;
        }
    }
    return 0;
}
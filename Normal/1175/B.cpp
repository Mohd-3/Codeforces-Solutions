#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, tmp, tot;
vector<int> v;
string op;
ll x, mul=1;
  ll tst = (1LL<<32)-1;
int main()
{
    IOS
    //freopen("balalance.in", "r", stdin);
    cin >> n;
    while (n--) {
        cin >> op;
        if (op=="add") {
            mul = 1;
            for (int i = (int) v.size()-1; ~i; --i) {
                mul *= v[i];
                if (mul > tst) {
                    cout << "OVERFLOW!!!" << endl;
                    return 0;
                }
            }

            x += mul;
        } else if (op=="for") {
            cin >> tmp;
            v.emplace_back(tmp);
        } else if (op=="end") {

            v.pop_back();
        }
    }

    if (x <= tst) {
        cout << x << endl;
    } else {
        cout << "OVERFLOW!!!" << endl;
    }
    return 0;
}

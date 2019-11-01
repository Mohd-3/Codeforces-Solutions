#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;


int n, tmp, lst;
ll x, y;
vector<int> a, b;
int main()
{
    IOS
    //freopen("planet.in", "r", stdin);
    cin >> n;
    while (n--) {
        cin >> tmp;
        if (tmp>0) {
            lst = 1;
            x += tmp;
            a.emplace_back(tmp);
        } else {
            tmp *= -1;
            lst = 2;
            y += tmp;
            b.emplace_back(tmp);
        }
    }
    if (x > y) {
        cout << "first" << endl;
    } else if (x < y) {
        cout << "second" << endl;
    } else {
        for (int i = 0; i < (int) min(a.size(), b.size()); ++i) {
            if (a[i] > b[i]) {
                cout << "first" << endl;
                return 0;
            }
            if (b[i] > a[i]) {
                cout << "second" << endl;
                return 0;
            }
        }
        cout << (lst == 1 ? "first" : "second") << endl;
    }


    return 0;
}

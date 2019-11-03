#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, one, two, tmp;
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n;
    while (n--) {
        cin >> tmp;
        if (tmp==1) {
            one++;
        } else {
            two++;
        }
    }
    if (one) {
        if (one < 3) {
            cout << "1 ";
            one--;
        } else {
            cout << "1 1 1 ";
            one-=3;
        }
    }

    while (two-->0) {
        cout << "2 ";
    }
    while (one-->0) {
        cout << "1 ";
    }
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;


int a, b, cnt;

bool fac(int& x) {
    if (x%2==0) {
        x>>=1;
        cnt++;
    } else if (x%3==0) {
        x /= 3;
        cnt++;
    } else if (x%5==0) {
        x/= 5;
        cnt++;
    } else {
        return 0;
    }
    return 1;
}

int main()
{
    IOS
    //freopen("planet.in", "r", stdin);
    cin >> a >> b;

    while (a!=b) {
        if (a > b) {
            swap(a, b);
        }
        if (!fac(b)) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << cnt << endl;


    return 0;
}

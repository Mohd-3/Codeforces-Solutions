#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int x, y;
int main()
{
    IOS
    cin >> x >> y;
    x = 6-(max(x, y)-1);
    y = 6;
    int g = __gcd(x, y);
    x /= g;
    y /= g;
    cout << x << "/" << y << endl;
    return 0;
}

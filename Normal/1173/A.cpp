#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int x, y, z;

int main()
{
    IOS
    //bfreopen("balalance.in", "r", stdin);
    cin >> x >> y >> z;
    if (abs(x-y) > z || !z) {
        cout << (x > y ? "+" : (x < y ? "-" : "0")) << endl;
    } else {
        cout << "?" << endl;
    }
    return 0;
}

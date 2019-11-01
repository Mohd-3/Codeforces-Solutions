#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;
int main()
{
    IOS
    //freopen("in.txt", "r", stdin);
    cin >> n;
    if (n&1) {
        cout << 0 << endl;
        return 0;
    }
    cout << (1<<(n>>1)) << endl;



    return 0;
}

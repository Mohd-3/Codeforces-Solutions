#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, a, x, b, y, arr[101], arr2[101], s, s2;
int main()
{
    IOS
    cin >> n >> a >> x >> b >> y;
    a--;
    x--;
    b--;
    y--;
    for (int i = a; true; ++i) {
        if (i==n) {
            i = 0;
        }
        if (i==x) {
            arr[i] = ++s;
            break;
        }
        arr[i] = ++s;
    }
    for (int i = b; true; --i) {
        if (i<0) {
            i=n-1;
        }
        if (i==y) {
            arr2[i] = ++s2;
            break;
        }
        arr2[i] = ++s2;
    }
   
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0 && arr2[i] != 0 && arr[i] == arr2[i]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}

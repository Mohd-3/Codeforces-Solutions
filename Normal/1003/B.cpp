#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int a, b, x;
int main() {
    IOS
    cin >> a >> b >> x;
    int mx = a>b ? 0 : 1;
    int mn = !mx;
    int aa = mx? b : a;
    int bb = aa==b? a : b;
    for (int i = 0; i < x/2; ++i) {
        cout << mx << mn;
        aa--;
        bb--;
    }
    if (x%2) {
        while (aa-->0) {
            cout << mx;
        }
        while (bb-->0) {
            cout << mn;
        }
    } else {
        while (bb-->0) {
            cout << mn;
        }
        while (aa-->0) {
            cout << mx;
        }

    }
    
    
    return 0;
}




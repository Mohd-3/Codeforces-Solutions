#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int w, h, u1, d1, u2, d2;
int main() {
    IOS
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;
    while (h > 0) {
        w += h;
        if (h==d1) {
            w-= u1;
        } else if (h==d2) {
            w-= u2;
        }
        h--;
        if (w < 0)
            w = 0;
    }
    cout << w << endl;

    
    return 0;
}




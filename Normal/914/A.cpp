#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, tmp, mx=-INF, sq;
int main() {
    IOS
    cin >> n;
    while (n--) {
        cin >> tmp;
        if (tmp < 0) {
            mx = max(mx,tmp);
            continue;
        }
        sq = sqrt(tmp);
        if (sq*sq != tmp) {
            mx = max(mx, tmp);
        }
    }
    cout << mx << endl;
    
    return 0;
}











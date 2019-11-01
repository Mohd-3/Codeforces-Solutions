#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
const int INF = 0x3f3f3f3f;

int n, cnt;
string prv, cur;
int main() {
    IOS;
    cin >> n >> prv;
    cnt++;
    while (n-- > 1) {
        cin >> cur;
        if (prv[1] == cur[0])
            cnt++;
        prv = cur;
    }
    cout << cnt << endl;

    return 0;
}


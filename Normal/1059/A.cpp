#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
const int INF = 0x3f3f3f3f;

int n, l, total, a, x, y, cur;
int main() {
    IOS;
    cin >> n >> l >> a;
    while (n--) {
        cin >> x >> y;
        total += (x-cur)/a;
        cur = x+y;
    }
    total += (l-cur)/a;
    cout << total << endl;

    return 0;
}


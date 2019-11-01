#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n;
ll x, y, a, b;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < (n<<1); ++i) {
        cin >> a >> b;
        x += a;
        y += b;
    }
    cout << x / n << " " << y / n << endl;
    return 0;
}


#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, d, mx;
ll sm;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> d;
        mx = max(mx, d);
        sm += d;
    }
    n--;
    cout << max((sm+(n-1))/n, (ll)mx) << endl;
    return 0;
}






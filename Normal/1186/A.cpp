#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, k;
int main() {
    IOS
    cin >> n >> m >> k;
    cout << (min(m, k) >= n ? "Yes" : "No") << endl;

    return 0;
}

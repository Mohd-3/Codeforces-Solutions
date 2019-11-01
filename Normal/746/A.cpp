#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int a, b, c;
int main() {
    IOS
    cin >> a >> b >> c;
    cout << 7*min(a, min(b/2, c/4)) << endl;

    return 0;
}

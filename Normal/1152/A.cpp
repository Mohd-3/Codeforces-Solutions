#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, e1, e2, o1, o2, m, tmp;
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp&1) {
            o1++;
        } else {
            e1++;
        }
    }
    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        if (tmp&1) {
            o2++;
        } else {
            e2++;
        }
    }
    cout << min(o1, e2) + min(o2, e1) << endl;

    return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, m, a, b;
set<int> cnt[6];
int main() {
    IOS
    cin >> m;
    while (m--) {
        cin >> a >> b;
        cnt[a].insert(b);
        cnt[b].insert(a);
    }
    for (int i = 1; i <= 5; ++i) {
        if (cnt[i].size()>=3) {
            cout << "WIN" << endl;
            return 0;
        }
    }
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            for (int k = 1; k <= 5; ++k) {
                if (i == j || i == k || j == k) {
                    continue;
                }
                if (!cnt[i].count(j) && !cnt[i].count(k) && !cnt[j].count(k)) {
                    cout << "WIN" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "FAIL" << endl;
    return 0;
}





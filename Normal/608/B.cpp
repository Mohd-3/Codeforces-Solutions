#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s1, s2;
int n, m, cnt;
int main() {
    IOS
    cin >> s1 >> s2;
    n = s1.size();
    m = s2.size();
    for (int i = 0; i+n <= m; ++i) {
        for (int j = i; j < i+n; ++j) {
            if (s1[j-i] != s2[j]) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;
 int t, n;
string s1, s2;
int main() {
    IOS
    freopen("hamming.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n >> s1 >> s2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        int i = 0, j = n-1;
        int cnt = 0;
        while (i < n) {
            cnt += s1[i++]!=s2[j--];
        }
        cout << cnt << endl;
    }
     return 0;
}
 
#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, l[500001], r[500001];
string s;
int main() {
    //freopen("darwin.in", "r", stdin);
    IOS
    cin >> n;
    while (n--) {
        cin >> s;
        int mi = 0, cnt = 0, pl = 0;
        for (int i = 0; i < (int) s.size(); ++i) {
            if (s[i] == '(') {
                    cnt++;
            } else {
                if (!cnt) {
                    mi++;

                } else {
                    cnt--;
                }
            }


        }
         if (!mi && cnt) {
                r[cnt]++;
            } else if (mi && !cnt){
                l[mi]++;
            } else if (!mi && !cnt) {
                l[0]++;
            }
    }
    int ans = 0;
    for (int i = 1; i < 500001; ++i) {
        ans += min(l[i], r[i]);
    }
    ans += l[0]>>1;
    cout << ans << endl;

    return 0;


}

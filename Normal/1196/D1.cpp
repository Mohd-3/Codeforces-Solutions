#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int t, n, k;
string s, arr[3], r = "RGB";
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n >> k >> s;
        string tmp1 = "", tmp2 = "", tmp3 = "";
 
        for (int i = 0; i < k; ++i) {
            tmp1 += r[i%3];
            tmp2 += r[(i+1)%3];
            tmp3 += r[(i+2)%3];
        }
        int mn = 1e9;
        for (int i = 0; i+k <= n; ++i) {
            int cur1 = 0, cur2 = 0, cur3 = 0;
            int idx = 0;
            for (int j = i; j < i+k; ++j) {
                if (s[j] != tmp1[idx]) {
                    cur1++;
                }
                if (s[j] != tmp2[idx]) {
                    cur2++;
                }
                if (s[j] != tmp3[idx]) {
                    cur3++;
                }
                idx++;
            }
            mn = min(mn, min(cur1, min(cur2, cur3)));
        }
        cout << mn << endl;
    }
 
 
}
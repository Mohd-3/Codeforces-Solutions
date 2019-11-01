#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using namespace std;
 
string s1 ,s2;
int t, n, m, p1, p2;
int main(){
    IOS
    cin >> t;
    while (t--) {
        cin >> s1 >> s2;
        n = s1.size();
        m = s2.size();
        p1 = p2 = 0;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        for (int i = 0; i<m; ++i) {
            if (s2[i] == '1') {
                p2 = i;
                break;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (s1[i] == '1' && i >= p2) {
                p1 = i;
                break;
            }
        }
        cout << max(p1-p2, 0) << endl;
 
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define range(i, e) for(int (i) = 0; (i) < (e); ++(i))
#define nrange(i, s) for(int (i) = (s); ~i; --(i))
#define crange(i, s, e, inc) for(int (i) = (s); (i) < (e); (i)+=(inc))
#define cnrange(i, s, e, dec) for(int(i) = (s); (i) >= (e); (i)-=(dec))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

int n, cnt, lft[100002], rite[100002];
string s;
int main() {
    IOS;
    cin >> n >> s;
    range(i, n) {
        if (s[i] == 'G') {
            cnt++;
            lft[i] = 1;
            if (i != 0) {
                lft[i] += lft[i-1];
            }
        }
    }
    nrange(i, n-1) {
        if (s[i] == 'G') {
            rite[i] = 1;
            if (i != n-1) {
                rite[i] += rite[i+1];
            }
        }
    }
    int ans = 0;
    range(i, n) {
        if (s[i] == 'S') {
            int tmp = 1;
            if (i > 0) {
                tmp += lft[i-1];
            }
            if (i+1 < n) {
                tmp += rite[i+1];
            }
            ans = max(ans, tmp);
        }
    }
    ans = min(ans, cnt);
    if (cnt == n)
        ans = cnt;
    cout << ans << endl;
    return 0;
}


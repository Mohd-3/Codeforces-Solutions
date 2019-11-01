#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s;
int n, k;
int main()
{
    IOS
    cin >> s >> k;
    n = (int) s.size();
    for (int i = 0; i < n; ++i) {
        if (!k) {
            break;
        }
        int mx = 0, idx = -1;
        for (int j = i+1; j < min(n, i+k+1); ++j) {
            if (s[j] > s[i] && s[j] > mx) {
                idx = j;
                mx = s[j];
            }
        }
        if (~idx) {
            k -= idx-i;
            for (int j = idx; j > i; --j) {
                swap(s[j], s[j-1]);
            }
        }
    }
    cout << s << endl;
    return 0;
}

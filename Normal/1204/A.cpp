#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
string s;
int one, cnt;
int main() {
    IOS
    cin >> s;
    reverse(s.begin(), s.end());
    if (s.size() == 1) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < (int) s.size()-1; ++i) {
        if (s[i] == '1') {
            one=1;
        }
    }
    int n = s.size();
    if (n&1) {
        cout << n/2 + (one ? 1 : 0) << endl;
    } else {
        cout << n/2 << endl;
    }
 
    return 0;
 
 
}
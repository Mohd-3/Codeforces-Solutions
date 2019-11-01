#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, ones, zeros;
string s;
int main() {
    IOS
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i]=='1') {
            ones++;
        } else {
            zeros++;
        }
    }
    if (zeros != ones) {
        cout << 1 << endl;
        cout << s << endl;
    } else {
        cout << 2 << endl;
        cout << s.substr(0, n-1) << " " << s[n-1] << endl;
    }

    return 0;
}

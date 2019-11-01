#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int t, d;
string s;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> s;
        vector<int> a, b;
        for (int i = 0; i < int(s.size()); ++i) {
            d = s[i]-'0';
            if (d&1) {
                a.emplace_back(d);
            } else {
                b.emplace_back(d);
            }
        }
        int i = 0,j = 0;
        while (i < a.size() || j < b.size()) {
            if (i >= a.size()) {
                cout << b[j++];
            } else if (j >= b.size()) {
                cout << a[i++];
            } else {
                if (a[i] < b[j]) {
                    cout << a[i++];
                } else {
                    cout << b[j++];
                }
            }
        }
        cout << endl;
    }
    return 0;
}




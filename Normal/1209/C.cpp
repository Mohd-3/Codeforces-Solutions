#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int n, t, color[200001];
string s, tmp;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n >> s;
        tmp = s;
        sort(tmp.begin(), tmp.end());
        int j = 0;
        vector<char> a;
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (s[i] == tmp[j]) {
                color[i] = 1;
                j++;
            } else {
                if (!a.empty() && s[i] < a.back()) {
                    ok = false;
                    cout << "-" << endl;
                    break;
                } else {
                    a.emplace_back(s[i]);
                    color[i] = 2;
                }
            }
        }
        if (ok) {
            for (int i = 0; i < n; ++i) {
                cout << color[i];
            }
            cout << endl;
        }
    }
    return 0;
}
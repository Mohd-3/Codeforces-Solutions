#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n;
string s, ans;
int main() {
    IOS
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; ++i) {
        if (ans.empty()) {
            ans.push_back(s[i]);
        } else {
            if (ans.back() == s[i]) {
                ans.pop_back();
            } else {
                ans.push_back(s[i]);
            }
        }
    }
    cout << (ans.empty() ? "YES" : "NO") << endl;
    return 0;

}
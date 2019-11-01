#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s, ans;
int main() {
    IOS
    cin >> s;
    int i = 0, idx1 = 0;
    while (s[i]==0&&i<s.size()) {
        i++;
    }
    while (i<s.size()) {
        ans.push_back(s[i++]);
    }
    for (int i = 0; i < ans.size(); ++i) {
        if (ans[i]=='0') {
            idx1 = i;
            break;
        }
    }
    for (int i= 0; i < ans.size(); ++i) {
        if (i==idx1) {
            continue;
        }
        cout << s[i];
    }
    cout << endl;

    return 0;
}

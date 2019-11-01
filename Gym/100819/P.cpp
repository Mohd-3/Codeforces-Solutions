#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = acos(-1);
using ll = long long;
using namespace std;
 string s;
int fr[26], d;
vector<int> v;
int main() {
    IOS
    cin >> s;
    for (int i = 0; i < (int) s.size(); ++i) {
        fr[s[i]-'a']++;
        if (fr[s[i]-'a'] == 1) {
            d++;
        }
    }
    for (int i = 0; i < 26; ++i) {
        if (fr[i]) {
            v.emplace_back(fr[i]);
        }
    }
    sort(v.rbegin(), v.rend());
    int cnt = 0;
    while (v.size() > 2) {
        cnt += v.back();
        v.pop_back();
    }
    cout << cnt << endl;
    return 0;
}
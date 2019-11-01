#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int k, fr[26];
string s;
vector<pair<int, int>> v;
int main() {
    IOS
    cin >> s >> k;
    for (int i = 0; i < (int) s.size(); ++i) {
        fr[s[i]-'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (fr[i]) {
            v.emplace_back(fr[i], i);
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    while (k) {
        if (v.empty()) {
            break;
        }
        int idx = v.back().second;
        if (fr[idx]<= k) {
            k -= fr[idx];
            fr[idx] = 0;
            v.pop_back();
        } else {
            break;
        }

    }
    cout << v.size() << endl;
    for (int i = 0; i < s.size(); ++i) {
        if (fr[s[i]-'a']) {
            cout << s[i];
        }
    }
    cout << endl;


    return 0;
}

#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
using ll = long long;
using namespace std;

int n;
string s1, s2;
vector<int> fr1[26], fr2[26];
vector<pair<int, int>> ans;
vector<int> q1, q2;
int main() {
    IOS
    cin >> n >> s1 >> s2;
    for (int i = 0; i < n; ++i) {
        if (s1[i] == '?') {
            q1.emplace_back(i+1);
        } else {
            fr1[s1[i]-'a'].emplace_back(i+1);
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (s2[i] == '?') {
            q2.emplace_back(i+1);
            continue;
        }
        if (fr1[s2[i]-'a'].empty()) {
            if (!q1.empty()) {
                ans.emplace_back(q1.back(), i+1);
                q1.pop_back();
            }
        } else {
            ans.emplace_back(fr1[s2[i]-'a'].back(), i+1);
            fr1[s2[i]-'a'].pop_back();
        }
    }
    for (int i = 0; i < 26; ++i) {
        while (!q2.empty() && !fr1[i].empty()) {
            ans.emplace_back(fr1[i].back(), q2.back());
            fr1[i].pop_back();
            q2.pop_back();
        }
    }
    while (!q1.empty() && !q2.empty()) {
        ans.emplace_back(q1.back(), q2.back());
        q1.pop_back();
        q2.pop_back();
    }
    cout << ans.size() << endl;
    for (auto x : ans) {
        cout << x.first << " " << x.second << endl;
    }

}

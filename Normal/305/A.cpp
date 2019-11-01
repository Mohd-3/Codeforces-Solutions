#include <bits/stdc++.h>
#define add push_back
using namespace std;
int n, got[3];
string s;
bool added = false;
vector<string> v, ans;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> s;
        v.add(s);
    }
    sort(v.begin(), v.end());
    for (int k = 2; ~k; --k) {
        for (int i = 0; i < v.size(); ++i) {
            if (v[i].length() > k && v[i][k] == '0') {
                ans.add(v[i]);
                string rev = v[i];
                reverse(rev.begin(), rev.end());
                for (int j = 0; j < v[i].length(); ++j) {
                    if (rev[j] == '0') {
                        got[j]++;
                    }
                }
                for (int j = v[i].length(); j < 3; ++j) {
                    got[j]++;
                }
                v[i] = "-1";
                break;
            }
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        if (v[i].find("0") == string::npos && v[i] != "-1") {
            bool good = 1;
            for (int j = 0; j < v[i].length(); ++j) {
                if (got[j] < ans.size()) {
                    good = 0;
                    break;
                }
            }
            if (good) {
                ans.add(v[i]);
                break;
            }
        }
    }
    if (ans.size() == 0) {
        ans.add(v[0]);
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < (int)ans.size(); ++i) {
        cout << ans[i] << " \n"[i==ans.size()-1];
    }
    return 0;
}


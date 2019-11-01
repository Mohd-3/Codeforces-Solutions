#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s;
int n;
map<string, int> m;
int main()
{
    IOS
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; ++i) {
        if (s[i] == '4' || s[i] == '7') {
            m[s.substr(i, 1)]++;
            int j = i+1;
            while (j < n && (s[j] == '4'|| s[j]=='7')) {
                m[s.substr(i, j-i+1)]++;
                j++;
            }
        }
    }
    int mx = 0;
    string ans = "-1";
    for (auto p : m) {
        if (p.second > mx) {
            mx = p.second;
            ans = p.first;
        }
    }
    cout << ans << endl;

    return 0;
}

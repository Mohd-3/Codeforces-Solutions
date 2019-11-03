#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m, s, op;
ll cnt;
string nm;
vector<vector<string>> tot;
vector<string> tmp;
map<string, int> vis, fr;
stack<pair<int, string>> in;

bool srt(const string& a, const string& b) {
    return fr[a] < fr[b];
}
int main() {
    IOS
    cin >> n >> m;
    while (n--) {
        cin >> op;
        if (op==1) {
            if (!tmp.empty()) {
                sort(tmp.begin(), tmp.end(), srt);
                tot.add(tmp);
                tmp.clear();
            }
        } else {
            cin >> nm;
            fr[nm]++;
            tmp.add(nm);
        }
    }
    if (!tmp.empty()) {
        sort(tmp.begin(), tmp.end(), srt);
        tot.add(tmp);
    }
    sort(tot.begin(), tot.end(), [](const vector<string>& a, const vector<string>&b) {
            return (int)a.size() < (int)b.size();
            });
    for (auto v : tot) {
        for (auto x : v) {
            if (!vis[x]) {
                vis[x]=1;
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;

    
    return 0;
}







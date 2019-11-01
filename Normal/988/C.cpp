#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int mm, n, arr[200001];
map<ll, vector<pair<int, int>>> m;
map<ll, int> vis;
int main() {
    IOS
    cin >> mm;
    for (int ps = 1; ps <= mm; ++ps) {
        vis.clear();
        cin >> n;
        ll sm = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sm += arr[i];
        }
        for (int i = 0; i < n; ++i) {
            int cur = sm-arr[i];
            if (!vis.count(cur)) {
                vis[cur] =1;
                m[cur].add({ps, i+1});
            }
        }
    }
    for (auto x : m) {
        if (x.second.size()>1) {
            cout << "YES\n";
            for (int i = 0; i < 2; ++i) {
                cout << x.second[i].first << " " << x.second[i].second << endl;
            }
            return 0;
        }
    }
    cout << "NO\n";

    
    return 0;
}



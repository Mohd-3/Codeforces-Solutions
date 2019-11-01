#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int n, adj[101][101], m, path[1000001], dis[101][101];
string s;
int main() {
    IOS
    cin >> n;
    memset(dis, INF, sizeof dis);
    for (int i = 0; i < n; ++i) {
        cin >> s;
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                dis[i][j] = 0;
            } else if (s[j]=='1') {
                dis[i][j] = 1;
            }
        }
    }
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (dis[i][j] > dis[i][k] + dis[k][j]) {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> path[i];
        path[i]--;
    }
 
    vector<int> ans;
    int lst = 0;
    ans.emplace_back(path[0]);
    for (int i = 1; i < m; ++i) {
        if (dis[ans.back()][path[i]] < i-lst) {
            ans.emplace_back(path[i-1]);
            lst = i-1;
        }
    }
    ans.emplace_back(path[m-1]);
    cout << ans.size() << endl;
    for (int x : ans) {
        cout << x+1 << " ";
    }
    cout << endl;
    
    return 0;
}
 
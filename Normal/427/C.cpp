#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, cost[100001], m, id[100001], low[100001], a, b, d, tmp;
vector<int> adj[100001];
bool in[100001];
vector<int> st;
int cur, M = 1e9+7;
vector<vector<int>> ans(100001);
void dfs(int src) {
    id[src] = low[src] = d++;
    in[src] = true;
    st.emplace_back(src);
    for (int ch : adj[src]) {
        if (id[ch]==-1) {
            dfs(ch);
        }
        if (in[ch]) {
            low[src] = min(low[src], low[ch]);
        }
    }
    if (id[src] == low[src]) {
        tmp = -1;
        while (tmp != src) {
            tmp = st.back();
            in[tmp] = false;
            low[tmp] = id[src];
            st.pop_back();
            ans[cur].emplace_back(cost[tmp]);
        }
        cur++;
    }
}
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> cost[i];
    }
    cin >> m;
    while (m--) {
        cin >> a >> b;
        a--;
        b--;
        adj[a].emplace_back(b);
    }
    memset(id, -1, sizeof id);
    ll cnt = 1;
    for (int i = 0; i < n; ++i) {
        if (id[i]==-1) {
            dfs(i);
        }
    }
    ll cst = 0;
    for (int i =0; i < cur; ++i) {
        if (ans[i].size()) {
            sort(ans[i].begin(), ans[i].end());
            int here = count(ans[i].begin(), ans[i].end(), ans[i][0]);
            cnt = (cnt%M * here%M)%M;
            cst += ans[i][0];
        }
    }
    cout << cst << " " << cnt << endl;
    return 0;

}






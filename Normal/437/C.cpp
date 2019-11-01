#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m, vis[1001], a, b, val[1001];
pair<int, int> arr[1001];
vector<int> adj[1001];
ll ans;
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first;
        val[i] = arr[i].first;
        arr[i].second = i;
    }
    sort(arr, arr+n);
    reverse(arr, arr+n);
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        a--;
        b--;
        adj[a].add(b);
        adj[b].add(a);
    }
    for (int i = 0; i < n; ++i) {
        for (auto ch : adj[arr[i].second]) {
            if (!vis[ch]) {
                ans += val[ch];
            }
        }
        vis[arr[i].second]=1;
    }
    cout << ans << endl;

    
    
    return 0;
}







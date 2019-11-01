#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, a, b, op, vis[101];
vector<pair<int, int>> arr;
void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (int i = 0; i < (int) arr.size(); ++i) {
            if (vis[i] || i == src) {
                continue;
            }
            if ((arr[p].first > arr[i].first && arr[p].first < arr[i].second) || (arr[p].second > arr[i].first && arr[p].second < arr[i].second)) {
                q.push(i);
                vis[i] = 1;
            }
        }
    }
}
int main()
{
    IOS
    cin >> n;
    while (n--) {
        cin >> op >> a >> b;
        if (op == 1) {
            arr.emplace_back(a, b);
        } else {
            a--;
            b--;
            memset(vis, 0, sizeof vis);
            bfs(a);
            if (vis[b]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }



    return 0;
}
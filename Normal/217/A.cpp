#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, x, y, cnt;
int visX[1001], visY[1001], vis[1001];
vector<int> adjX[1001], adjY[1001];
pair<int, int> arr[101];
void dfs(int i) {
    vis[i] = 1;
    for (int ch : adjX[arr[i].first]) {
        if (!vis[ch]) {
            dfs(ch);
        }
    }
    for (int ch : adjY[arr[i].second]) {
        if (!vis[ch]) {
            dfs(ch);
        }
    }
}
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        arr[i].first = x;
        arr[i].second = y;
        adjX[x].emplace_back(i);
        adjY[y].emplace_back(i);
    }
    for (int i = 0; i < n; ++i) {
        if (!vis[i]) {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt-1 << endl;
    return 0;
}





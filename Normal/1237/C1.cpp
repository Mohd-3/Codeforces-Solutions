#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int n;
pair<int, pair<int, int>> arr[2001];
bool used[2001];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d%d", &arr[i].first, &arr[i].second.first, &arr[i].second.second);
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; ++i) {
        if (used[i]) {
            continue;
        }
        int mn = 1e9, idx = -1;
        for (int j = 0; j < n; ++j) {
            if (used[j] || j == i) {
                continue;
            }
            int cur = abs(arr[i].first - arr[j].first) + abs(arr[i].second.first - arr[j].second.first) + abs(arr[i].second.second - arr[j].second.second);
            if (cur < mn) {
                mn = cur;
                idx = j;
            }
        }
        ans.emplace_back(i+1, idx+1);
        used[i] = used[idx] = true;
    }
    for (auto p : ans) {
        printf("%d %d\n", p.first, p.second);
    }
    return 0;
}




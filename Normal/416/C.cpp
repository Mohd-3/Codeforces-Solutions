#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, tot, req;
pair<pair<int, int>, int> arr[1001];
int vis[1001];
pair<int, int> t[1001];
vector<pair<int, int>> ans;
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first.first >> arr[i].first.second;
        arr[i].second = i;
    }
    cin >> k;
    for (int i = 0; i < k; ++i) {
        cin >> t[i].first;
        t[i].second = i;
    }
    sort(t, t+k);
    sort(arr, arr+n, [](pair<pair<int, int>, int>& a, pair<pair<int, int>, int>& b) {
            if (a.first.second == b.first.second) {
            return a.first.first < b.first.first;
        }
        return b.first.second < a.first.second;

        });
    for (int i = 0; i < k; ++i) {
        int best = 0;
        int idx = -1;
        int vv = -1;
        for (int j = 0; j < n; ++j) {
            if (arr[j].first.first <= t[i].first && !vis[j] && arr[j].first.second > best) {
                best = arr[j].first.second;
                idx = arr[j].second;
                vv = j;
            }
        }
        if (idx != -1) {
            ans.push_back(make_pair(idx+1, t[i].second+1));
            vis[vv] = 1;
            tot += best;
            req++;
        }
    }
    cout << req << " " << tot << endl;
    for (int i = 0; i < req; ++i) {
        cout << ans[i].first << " " << ans[i].second;
        if (i != req-1) {
            cout << endl;
        }
    }
    return 0;
}

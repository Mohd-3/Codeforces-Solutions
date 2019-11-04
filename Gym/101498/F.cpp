#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 unordered_map<int, priority_queue<int, vector<int>, greater<int>>> srt;
unordered_map<int, int> got;
int t, n, k, arr[100001], cnt;
int main()
{
    IOS
    //freopen("looking.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cnt = min(n, k);
        srt.clear();
        got.clear();
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (srt[arr[i]].empty()) {
                srt[arr[i]].push(1e9);
            }
            srt[arr[i]].push(i);
        }
        int sofar = 0;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            if (got[arr[i]]) {
                continue;
            }
            if (sofar < k) {
                sofar++;
                got[arr[i]] = 1;
                v.emplace_back(arr[i]);
                srt[arr[i]].pop();
            } else {
                sort(v.begin(), v.end(), [](const int& a, const int& b) {
                     return srt[a].top() < srt[b].top();
                });
                got[v[v.size()-1]] = 0;
                v.pop_back();
                cnt++;
                got[arr[i]] = 1;
                v.emplace_back(arr[i]);
                srt[arr[i]].pop();
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
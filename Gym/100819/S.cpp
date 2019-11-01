#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int n, nxt[300001];
ll dp[300001], val[300001];
vector<pair<pair<int, int>, pair<int, int>>> arr;
vector<pair<pair<int, int>, pair<int, int>>> v;
ll solve(int i = 0) {
    if (i >= n) {
        return 0;
    }
    ll& ret = dp[i];
    if (~ret) {
        return ret;
    }
    return ret = max(solve(i+1), v[i].second.first + solve(nxt[v[i].second.second]));
}
int main() {
    IOS
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first.first >> arr[i].second.first >> arr[i].second.second;
        v.push_back({{arr[i].first.first, arr[i].first.first+arr[i].second.second}, {arr[i].second.first, i}});
    }
    sort(v.begin(), v.end(), [](const pair<pair<int, int>, pair<int, int>>& a, const pair<pair<int, int>, pair<int, int>>& b) {
         if (a.first.first == b.first.first) {
            return a.first.second < b.first.second;
         }
         return a.first.first < b.first.first;
         });
    vector<int> st;
    for (int i = 0; i < n; ++i) {
        st.emplace_back(v[i].first.first);
        v[i].second.second = i;
    }
    for (int i = 0; i < n; ++i) {
        auto it = lower_bound(st.begin(), st.end(), v[i].first.second);
        if (it == st.end()) {
            nxt[v[i].second.second] = n+1;
        } else {
            int idx = it-st.begin();
            nxt[v[i].second.second] = v[idx].second.second;
        }
    }
     /*
    for (int i = n-1; ~i; --i) {
        if (v.empty()) {
            nxt[i] = n+1;
        } else {
            while (!v.empty() && arr[i].first.first+arr[i].second.second > arr[v.back()].first.first) {
                v.pop_back();
            }
            if (v.empty()) {
                nxt[i] = n+1;
            } else {
                nxt[i] = v.back();
            }
        }
        v.emplace_back(i);
    }*/
      memset(dp, -1, sizeof dp);
    cout << solve() << endl;
     return 0;
}
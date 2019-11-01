#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, r, a, b, cnt;
vector<pair<int, int>> arr, arr2;
int dp[101][30001];
 
int solve(int i, int k) {
    if (i == arr2.size()) {
        return 0;
    }
    int& ret = dp[i][k];
    if (~ret) {
        return ret;
    }
    ret = solve(i+1, k);
    if (k+arr2[i].second >= 0 && arr2[i].first <= k) {
        ret = max(ret, 1 + solve(i+1, k+arr2[i].second));
    }
    return ret;
}
int main() {
    IOS
    cin >> n >> r;
    while (n--) {
        cin >> a >> b;
        if (b<0) {
            arr2.emplace_back(a, b);
        } else {
            arr.emplace_back(a, b);
        }
    }
    sort(arr.begin(), arr.end());
    sort(arr2.begin(), arr2.end(), [](const pair<int, int>& f, const pair<int, int>& s) {
 
         return s.first+s.second < f.first +f.second;
         });
 
    for (auto p : arr) {
        if (p.first > r) {
            break;
        }
        r += p.second;
        cnt++;
    }
    memset(dp, -1, sizeof dp);
    cnt += solve(0, r);
    cout << cnt << endl;
 
    return 0;
 
 
}
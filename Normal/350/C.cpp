#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
pair<ll, ll> arr[100001];
vector<pair<int, pair<ll, char>>> ans;
bool srt(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    return abs(a.first)+abs(a.second) < abs(b.first) + abs(b.second);
}
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr+n, srt);
    for (int i = 0; i < n; ++i) {
        int dir = 0, dir2 = 0;
        if (arr[i].first > 0) {
            ans.add({1, {arr[i].first, 'R'}});
            dir = 1;
        } else if (arr[i].first < 0) {
            ans.add({1, {arr[i].first*-1, 'L'}});
            dir = -1;
        }
        if (arr[i].second > 0) {
            ans.add({1, {arr[i].second, 'U'}});
            dir2 = 1;
        } else if (arr[i].second < 0) {
            ans.add({1, {arr[i].second*-1, 'D'}});
            dir2 = -1;
        }
        ans.add({2, {0, 0}});
        if (dir == 1) {
            ans.add({1, {arr[i].first, 'L'}});
        } else if (dir == -1) {
            ans.add({1, {arr[i].first*-1, 'R'}});
        }
        if (dir2 == 1) {
            ans.add({1, {arr[i].second, 'D'}});
        } else if (dir2 == -1) {
            ans.add({1, {arr[i].second*-1, 'U'}});
        }
        ans.add({3, {0, 0}});
    }
    cout << ans.size() << endl;
    for (auto p : ans) {
        if (p.first==1) {
            cout << p.first << " " << p.second.first << " " << p.second.second << endl; 
        } else {
            cout << p.first << endl;
        }
    }
    
    return 0;
}






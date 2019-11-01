#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, qq, mx, idx, tmp, a, b;
ll t;
deque<int> q;
vector<pair<int, int>> ans, ans2;
int main() {
    IOS
    cin >> n >> qq;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp > mx) {
            mx = tmp;
        }
        q.push_back(tmp);
    }
    while (q.front() != mx) {
        a = q.front();
        q.pop_front();
        b = q.front();
        q.pop_front();
        q.push_front(max(a, b));
        q.push_back(min(a, b));
        ans.emplace_back(a, b);
    }
    int pre = ans.size();
    q.pop_front();
    while(!q.empty()) {
        ans2.emplace_back(mx, q.front());
        q.pop_front();
    }

    while (qq--) {
        cin >> t;
        t--;
        if (t < pre) {
            cout << ans[t].first << " " << ans[t].second << endl;
        } else {
            t-=pre;
            t %= n-1;

            cout << ans2[t].first << " " << ans2[t].second << endl;
        }
    }



    return 0;
}

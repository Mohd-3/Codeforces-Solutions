#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, tot, tmp;
priority_queue<int> q;
vector<int> v;
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        tot += tmp;
        if (tot <= m) {
            cout << 0 << " \n"[i==n-1];
        } else {
            int cnt = 0;
            while (tot > m) {
                int x = q.top();
                tot -= x;
                v.emplace_back(x);
                q.pop();
                cnt++;
            }
            cout << cnt << " \n"[i==n-1];
            while (!v.empty()) {
                q.push(v.back());
                tot += v.back();
                v.pop_back();
            }
        }
        q.push(tmp);
    }


    return 0;
}

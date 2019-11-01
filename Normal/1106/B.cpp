#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
using ll = long long;
using namespace std;

int n, m, t, d;
ll a[100001], c[100001];
pair<ll, int> arr[100001];
priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
ll tot, cur;
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
        arr[i].first = c[i];
        arr[i].second = i;
        q.push(arr[i]);
    }
    for (int i = 0; i < m; ++i) {
        cur = 0;
        cin >> t >> d;
        t--;
        if (a[t] >= d) {
            cur+= c[t]*d;
            a[t] -= d;
            d = 0;
        }
        else {
            cur += a[t]*c[t];
            d -= a[t];
            a[t] = 0;
            while (!q.empty() and d) {
                int idx = q.top().second;
                while (!a[idx] and !q.empty()) {
                    q.pop();
                    idx = q.top().second;
                }
                if (a[idx] >= d) {
                    cur += c[idx]*d;
                    a[idx]-= d;
                    d = 0;
                } else {
                    cur += c[idx]*a[idx];
                    d -= a[idx];
                    a[idx] = 0;
                }
            }
            if (d) {
                cur = 0;
            }
        }
        cout << cur << endl;
    }

    return 0;
}



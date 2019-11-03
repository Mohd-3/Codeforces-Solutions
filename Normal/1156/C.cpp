#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

priority_queue<ll, vector<ll>, greater<ll>> q;
int n, cnt;
ll z, arr[200001];
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n >> z;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; ++i) {
        if (q.empty()) {
            q.push(arr[i]);
        } else {
            if (arr[i]-z>=q.top()) {
                q.pop();
                cnt++;
            } else {
                q.push(arr[i]);
            }
        }
    }

    cout << cnt << endl;
    return 0;
}

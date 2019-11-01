#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

deque<int> q;
int n, arr[101];
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n, greater<int>());
    q.push_back(arr[0]);
    int x = 0;
    for (int i = 1; i < n; ++i) {
        if (x) {
            q.push_back(arr[i]);
            x ^= 1;
        } else {
            q.push_front(arr[i]);
            x ^= 1;
        }
    }
    while (!q.empty()) {
        cout << q.front();
        q.pop_front();
        if (!q.empty()) {
            cout << " ";
        } else {
            cout << endl;
        }
    }

    return 0;
}

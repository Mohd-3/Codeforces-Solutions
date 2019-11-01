#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m;
pair<int, int> arr[100001];
ll tot;
bool srt(const pair<int, int>& a, const pair<int, int>& b) {
    return b.first-b.second < a.first-a.second;
}
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
        tot += arr[i].first;
    }
    sort(arr, arr+n, srt);
    int cnt = 0;
    if (tot<=m) {
        cout << "0\n";
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        tot -= arr[i].first;
        tot += arr[i].second;
        cnt++;
        if (tot<=m)
            break;
    }
    if (tot > m) {
        cout << -1 << endl;
    } else {
        cout << cnt << endl;
    }
    return 0;
}


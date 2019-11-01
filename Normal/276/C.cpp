#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int cnt[200002], arr[200001];
int a, b, n, q;
ll sm;
int main() {
    IOS
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    while(q--) {
        cin >> a >> b;
        cnt[a-1]++;
        cnt[b]--;
    }
    for (int i = 0; i < 200002; ++i)
        cnt[i]+=cnt[i-1];
    sort(arr, arr+n, greater<int>());
    sort(cnt,cnt+n, greater<int>());
    for (int i = 0; i < n; ++i) {
        sm += 1LL*arr[i]*cnt[i];
    }
    cout << sm << endl;

    return 0;
}


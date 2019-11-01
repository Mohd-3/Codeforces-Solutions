#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using namespace std;
 
 
int n, m, cnt[200001], a, b, ans[200001];
pair<int, int> arr[200001];
int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i].first);
        arr[i].second = i;
    }
    while (m--) {
        scanf("%d%d", &a, &b);
        a--;
        b--;
        if (arr[a].first < arr[b].first) {
            cnt[b]++;
        } else if (arr[b].first < arr[a].first) {
            cnt[a]++;
        }
 
    }
    sort(arr, arr+n);
    int xx = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i].first==arr[i-1].first) {
            xx++;
        } else {
            xx = 0;
        }
        ans[arr[i].second] = i-xx-cnt[arr[i].second];
    }
    for (int i = 0; i < n; ++i) {
        printf("%d%c", ans[i], " \n"[i==n-1]);
    }
    return 0;
}
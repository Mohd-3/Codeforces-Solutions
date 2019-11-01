#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, ans[300001];
pair<int, int> arr[300001];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i].first);
        arr[i].second = i;
    }
    sort(arr, arr+n);
    ans[arr[0].second] = arr[0].first;
    for (int i = 1; i < n; ++i) {
        arr[i].first = max(arr[i].first, arr[i-1].first+1);
        ans[arr[i].second] = arr[i].first;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d%c", ans[i], " \n"[i==n-1]);
    }
    return 0;
}

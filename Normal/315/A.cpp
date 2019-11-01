#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

pair<int, int> arr[101];
int got[1001], n;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &arr[i].first, &arr[i].second);
        got[arr[i].second]++;
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i].first != arr[i].second && got[arr[i].first]) {
            cnt++;
        } else if (arr[i].first == arr[i].second && got[arr[i].first]>1) {
            cnt++;
        }
    }
    printf("%d\n", n-cnt);
    return 0;
}



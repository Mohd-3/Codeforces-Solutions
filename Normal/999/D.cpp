#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m, arr[200001], cnt, have[200001];
pair<int, int> c[200001];
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        c[i].first = arr[i]%m;
        c[i].second = i;
        have[arr[i]%m]++;
    }
    sort(c, c+n);
    for (int i = 0; i < n; ++i) {
        if (have[c[i].first]>n/m) {
            cnt++;
            have[c[i].first]--;
            c[i].first++;
            c[i].first%=m;
            have[c[i].first]++;
            arr[c[i].second]++;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (have[c[i].first]>n/m) {
            cnt++;
            have[c[i].first]--;
            c[i].first++;
            c[i].first%=m;
            have[c[i].first]++;
            arr[c[i].second]++;
        }
    }
    printf("%d\n", cnt);
    for (int i = 0; i < n; ++i) {
        printf("%d%c", arr[i], " \n"[i==n-1]);
    }


    return 0;
}
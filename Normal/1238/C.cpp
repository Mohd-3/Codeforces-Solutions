#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;


int t, h, n;
int main() {
    scanf("%d", &t);
    while (t--) {
        int cnt = 0;
        scanf("%d%d", &h, &n);
        vector<int> arr(n+1);
        int c = 0;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }

        for (int i = 1; i < n; ++i) {
            if (arr[i]-arr[i+1]==1) {
                i++;
            } else {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int t, n, arr[201], cnt[201];

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i =0; i < n; ++i) {
            scanf("%d", &arr[i]);
            arr[i]--;
        }
        for (int i =0; i < n; ++i) {
            int c =1;
            int pos = arr[i];
            while (pos != i) {
                pos = arr[pos];
                c++;
            }
            cnt[i] = c;
        }
        for (int i = 0; i < n; ++i) {
            printf("%d ", cnt[i]);
        }
        puts("");

    }
    return 0;
}



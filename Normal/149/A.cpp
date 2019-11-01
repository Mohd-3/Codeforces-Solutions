#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int k, arr[12];
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &k);
    for (int i = 0; i < 12; ++i) {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+12, greater<>());
    int cnt = 0;
    for (int i = 0; i < 12; ++i) {
        if (k <= 0) {
            printf("%d\n", cnt);
            return 0;
        }
        ++cnt;
        k -= arr[i];
    }
    if (k <= 0) {
        printf("%d\n", cnt);
        return 0;
    }
    puts("-1");

    return 0;
}
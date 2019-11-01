#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;
ll arr[300001];
ll sm;
int main() {
    scanf("%d", &n);
    for (int i= 1; i <= n; ++i) {
        scanf("%lld", arr+i);
    }
    sort(arr+1, arr+n+1);
    for (int i = 1; i <= n; ++i) {
        if (i==n) {
            sm += arr[i] * i;
        }
        else {
            sm += arr[i] * (i+1);
        }
    }

    printf("%lld\n", sm);
    return 0;
}

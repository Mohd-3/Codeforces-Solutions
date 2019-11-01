#include <bits/stdc++.h>
#define endl "\n"
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, m, arr[5];
ll cnt;
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        arr[i%5]++;
    }
    for (int i = 1; i <= m; ++i) {
        if (i%5) {
            cnt += arr[5-(i%5)];  
        } else {
            cnt += arr[0];
        }
    }
    printf("%lld\n", cnt);
}
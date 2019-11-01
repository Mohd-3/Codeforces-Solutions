#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int k, a, b, cnt;
int main() {
    scanf("%d%d%d", &k, &a, &b);
    if ((a>=k && b>=k) || (a && a%k==0) || (b && b%k==0)) {
        cnt = a/k + b/k;
        printf("%d\n", (cnt ? cnt : -1));    
    } else {
        puts("-1");
    }
    
    return 0;
}

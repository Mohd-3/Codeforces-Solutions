#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

ll n, m, a;
int main() {
    scanf("%lld%lld%lld", &n, &m, &a);
    printf("%lld\n", ((n+a-1)/a) * ((m+a-1)/a));
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll l, r;
int main() {
    scanf("%lld %lld", &l, &r);
    if (l&1)
        l++;
    if (l+2 > r)
        puts("-1");
    else
        printf("%lld %lld %lld\n", l, l+1, l+2);
    return 0;
}


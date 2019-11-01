#include <bits/stdc++.h>
using namespace std;
long long n, k;
int main() {
    scanf("%lld %lld", &n, &k);
    long long ans = (2*n+(k-1))/k + (5*n+(k-1))/k + (8*n+(k-1))/k;
    printf("%lld\n", ans);
    return 0;
}

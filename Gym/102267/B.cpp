#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;
 int n;
int main() {
    scanf("%d", &n);
    if (n <= 3) {
        puts("-1");
        return 0;
    }
    n-=2;
    for (ll i = 3; i*i<= n; i+=2) {
        if (n%i==0) {
            puts("-1");
            return 0;
        }
    }
    printf("2 %d\n", n);
    return 0;
}
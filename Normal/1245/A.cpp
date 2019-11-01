#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int t, a, b;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &a, &b);
        if (__gcd(a, b) == 1) {
            puts("Finite");
        } else {
            puts("Infinite");
        }
    }
    return 0;
}


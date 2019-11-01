#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int n, a, b, d;
int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &d);
        if (d == 100) {
            a++;
        } else {
            b++;
        }
    }
    if ((a&1) && (b&1)) {
        puts("NO");
    } else if (a&1) {
        puts("NO");
    } else if (!a && (b&1)) {
        puts("NO");
    } else if (!b && (a&1)) {
        puts("NO");
    } else {
        puts("YES");
    }
return 0;
}



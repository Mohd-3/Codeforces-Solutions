#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int a, b;
int main() {
    scanf("%d%d", &a, &b);
    int x = abs(a), y = abs(b);
    int d = x+y;
    int x1 = d * (a < 0 ? -1 : 1), y1 = 0, y2 = d * (b < 0 ? -1 : 1), x2 = 0;
    if (x1 > x2) {
        swap(x1, x2);
        swap (y1, y2);
    }
    printf("%d %d %d %d\n", x1, y1, x2, y2);
    return 0;
}



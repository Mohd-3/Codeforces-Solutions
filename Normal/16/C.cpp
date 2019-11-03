#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int a, b, x, y;
int main() {
    scanf("%d%d%d%d", &a, &b, &x, &y);
    double tmp = a / (1.0*x/y);
    int ans = (int)tmp;
    if ((double)(ans)==tmp && ans <= b) {
        printf("%d %d\n", a, ans);
    } else {
        puts("0 0");
    }


    return 0;
}

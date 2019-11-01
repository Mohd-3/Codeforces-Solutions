#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int a, b;
int main() {
    scanf("%d%d", &a, &b);
    if (a == b) {
        printf("%d23 %d24", a, b);
    } else if (a == b-1) {
        printf("%d99 %d00", a, b);
    } else if (a == 9 && b == 1) {
        puts("999 1000");
    } else {
        puts("-1");
    }
    return 0;
}
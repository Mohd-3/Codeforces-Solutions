#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;
 int a, b, cnt;
int main() {
    scanf("%d%d", &a, &b);
    while (a) {
        a/= b;
        cnt++;
    }
    printf("%d\n", cnt);
     return 0;
}
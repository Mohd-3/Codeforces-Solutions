#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int a, b, n;
int main() {
    scanf("%d%d%d", &a, &b, &n);
    a *= 10;
    for (int i = 0; i < 10; ++i) {
        if ((a+i)%b==0) {
            printf("%d", a+i);
            printf("%s\n", string(n-1, '0').c_str());
            return 0;
        }
    }
    puts("-1");
    return 0;
}



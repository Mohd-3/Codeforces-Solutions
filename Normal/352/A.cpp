#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, d, z, f;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &d);
        if (d) {
            f++;
        } else {
            z++;
        }
    }
    if (!z) {
        puts("-1");
        return 0;
    }
    while (f && (f*5)%9) {
        f--;
    }
    if (f) {
        string five = string(f, '5'), zero = string(z, '0');
        printf("%s%s\n", five.c_str(), zero.c_str());
    } else {
        puts("0");
    }
    return 0;
}
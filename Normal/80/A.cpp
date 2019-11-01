#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;


int n, m;

bool isPrime(int x) {
    for (int i = 2; i*i <= x; ++i) {
        if (x%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = n+1; ; ++i) {
        if (isPrime(i)) {
            printf("%s\n", (i == m ? "YES" : "NO"));
            return 0;
        }
    }
    return 0;
}
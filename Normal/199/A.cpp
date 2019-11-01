#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, fib[10001];
vector<int> v;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    fib[0] = 0;
    fib[1] = 1;
    v.emplace_back(0);
    v.emplace_back(1);
    for (int i = 2; ; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
        if (fib[i] >= 1000000000) {
            break;
        }
        v.emplace_back(fib[i]);
    }
    scanf("%d", &n);
    for (int i = 0; i < (int) v.size(); ++i) {
        for (int j = 0; j < (int) v.size(); ++j) {
            for (int k = 0; k < (int) v.size(); ++k) {
                if (v[i] + v[j] + v[k] == n) {
                    printf("%d %d %d\n", v[i], v[j], v[k]);
                    return 0;
                }
            }
        }
    }
    puts("I'm too stupid to solve this problem");
    return 0;
}